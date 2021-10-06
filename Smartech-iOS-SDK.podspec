Pod::Spec.new do |s|
  s.name                    = 'Smartech-iOS-SDK'
  s.version                 = '3.1.7'
  s.summary                 = 'The Smartech iOS SDK for App Analytics and User Engagement.'
  s.description             = <<-DESC
                                Smartech is a omni channel platform that delivers everything you need to drive mobile engagement and create valuable consumer relationships on mobile.
                                The Smartech iOS SDK enables your native iOS app to use all of the features.
                              DESC
  s.homepage                = "https://netcoresmartech.com"  
  s.documentation_url       = 'https://docs.netcoresmartech.com/'
  s.license                 = { :type => "Commercial", :file => "LICENSE"}  
  s.author                  = { "Jobin Kurian" => "jobin.kurian@netcore.co.in" } 
  s.source                  = { :git => 'https://github.com/NetcoreSolutions/Smartech-iOS-SDK.git', :tag => "v#{s.version.to_s}" }
  s.ios.deployment_target   = '10.0'
  s.ios.vendored_frameworks = 'Frameworks/Smartech/Smartech.framework'
  s.preserve_paths          = 'Frameworks/Smartech/Smartech.framework'
  s.module_map              = 'Frameworks/Smartech/Smartech.framework/Modules/module.modulemap'
  s.frameworks              = 'Foundation', 'UIKit', 'SystemConfiguration', 'Security', 'CoreData'
  s.weak_framework          = 'UserNotifications'
  s.pod_target_xcconfig     = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig    = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
