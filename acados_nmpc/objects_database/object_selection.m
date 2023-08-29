function slider = object_selection(obj)
    switch obj
        case 'santal'
            slider.mu_sg = 0.32;                                  % friction coefficient between slider and ground
            slider.mu_sp = 0.19;                                 % friction coefficient between slider and pusher
            slider.xwidth = 0.068;                               % width of the slider along x-direction [m]
            slider.ywidth = 0.082;                                % width of the slider along y-direction [m]
            slider.area = slider.xwidth * slider.ywidth;          % slider area [m^2]
            slider.m = 0.2875;                                    % slider mass [kg]
            slider.cad_model_path = "/home/workstation/pusher_slider_matlab/cad_models/cad_santal_centered_scaled_rotated_reduced.stl";
            slider.pcl_path = '/home/workstation/pusher_slider_matlab/cad_models/planar_surface_santal_36_uniformed.ply';
        case 'balea'
            slider.mu_sg = 0.2;  
            slider.mu_sp = 0.13; 
            slider.xwidth = 0.071;                               % width of the slider along x-direction [m]
            slider.ywidth = 0.071;                                % width of the slider along y-direction [m]
            slider.area = slider.xwidth * slider.ywidth;          % slider area [m^2]
            slider.m = 0.0734;
            slider.cad_model_path = "/home/workstation/pusher_slider_matlab/cad_models/Balea_cad_model v1.stl";
            slider.pcl_path = '/home/workstation/pusher_slider_matlab/cad_models/Balea_cad_model_planar_surface_36.ply';
        otherwise
            disp("Invalid object! Please, chose between: santal, balea, montana")
            return;
    end
end