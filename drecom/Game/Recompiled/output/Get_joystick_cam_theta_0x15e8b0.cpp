#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Get_joystick_cam_theta
// Address: 0x15e8b0 - 0x15e928
void Get_joystick_cam_theta_0x15e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_joystick_cam_theta_0x15e8b0");
#endif

    switch (ctx->pc) {
        case 0x15e8f0u: goto label_15e8f0;
        case 0x15e914u: goto label_15e914;
        default: break;
    }

    ctx->pc = 0x15e8b0u;

    // 0x15e8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15e8b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15e8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15e8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e8bc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x15e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x15e8c0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15e8c4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x15e8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15e8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e8cc: 0xc44013e0  lwc1        $f0, 0x13E0($v0)
    ctx->pc = 0x15e8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e8d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e8d4: 0xe44013e4  swc1        $f0, 0x13E4($v0)
    ctx->pc = 0x15e8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5092), bits); }
    // 0x15e8d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e8dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e8e0: 0xc46c13d0  lwc1        $f12, 0x13D0($v1)
    ctx->pc = 0x15e8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e8e4: 0xc44d13d8  lwc1        $f13, 0x13D8($v0)
    ctx->pc = 0x15e8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15e8e8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15E8E8u;
    SET_GPR_U32(ctx, 31, 0x15E8F0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15E8E8u, 0x15E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E8F0u;
label_15e8f0:
    // 0x15e8f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e8f4: 0xe44013e0  swc1        $f0, 0x13E0($v0)
    ctx->pc = 0x15e8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5088), bits); }
    // 0x15e8f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e8fc: 0xc4411384  lwc1        $f1, 0x1384($v0)
    ctx->pc = 0x15e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e900: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15e900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e904: 0xc44013e0  lwc1        $f0, 0x13E0($v0)
    ctx->pc = 0x15e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e908: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x15e908u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15e90c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x15E90Cu;
    SET_GPR_U32(ctx, 31, 0x15E914u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x15E90Cu, 0x15E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E914u;
label_15e914:
    // 0x15e914: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15e914u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e91c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15e91cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e920: 0x3e00008  jr          $ra
    ctx->pc = 0x15E920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E928u;
}
