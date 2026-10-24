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

// Function: e2d_id58_type03
// Address: 0x2b74c0 - 0x2b753c
void e2d_id58_type03_0x2b74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type03_0x2b74c0");
#endif

    switch (ctx->pc) {
        case 0x2b74d8u: goto label_2b74d8;
        case 0x2b74ecu: goto label_2b74ec;
        case 0x2b7510u: goto label_2b7510;
        default: break;
    }

    ctx->pc = 0x2b74c0u;

    // 0x2b74c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b74c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b74c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b74c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b74c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b74cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b74ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b74d0: 0xc0adc3c  jal         func_2B70F0
    ctx->pc = 0x2B74D0u;
    SET_GPR_U32(ctx, 31, 0x2B74D8u);
    ctx->pc = 0x2B70F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B70F0u, 0x2B74D0u, 0x2B74D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74D8u;
label_2b74d8:
    // 0x2b74d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b74d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b74dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b74e0: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b74e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b74e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B74E4u;
    SET_GPR_U32(ctx, 31, 0x2B74ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B74E4u, 0x2B74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B74ECu;
label_2b74ec:
    // 0x2b74ec: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2b74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2b74f0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b74f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b74f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b74f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b74f8: 0x0  nop
    ctx->pc = 0x2b74f8u;
    // NOP
    // 0x2b74fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b74fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7500: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7504: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b7504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b7508: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7508u;
    SET_GPR_U32(ctx, 31, 0x2B7510u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7508u, 0x2B7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7510u;
label_2b7510:
    // 0x2b7510: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b7510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7514: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b7518: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b751c: 0x0  nop
    ctx->pc = 0x2b751cu;
    // NOP
    // 0x2b7520: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7524: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7528: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b7528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b752c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b752cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7530: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7534: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B753Cu;
}
