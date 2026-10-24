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

// Function: e2d_id58_type07
// Address: 0x2b7730 - 0x2b77ac
void e2d_id58_type07_0x2b7730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type07_0x2b7730");
#endif

    switch (ctx->pc) {
        case 0x2b7748u: goto label_2b7748;
        case 0x2b775cu: goto label_2b775c;
        case 0x2b7780u: goto label_2b7780;
        default: break;
    }

    ctx->pc = 0x2b7730u;

    // 0x2b7730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7734: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b7734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b7738: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b7738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b773c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b773cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7740: 0xc0adc78  jal         func_2B71E0
    ctx->pc = 0x2B7740u;
    SET_GPR_U32(ctx, 31, 0x2B7748u);
    ctx->pc = 0x2B71E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B71E0u, 0x2B7740u, 0x2B7748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7748u;
label_2b7748:
    // 0x2b7748: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b774c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7750: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7754: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7754u;
    SET_GPR_U32(ctx, 31, 0x2B775Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7754u, 0x2B775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B775Cu;
label_2b775c:
    // 0x2b775c: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2b775cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7760: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b7760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b7764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7768: 0x0  nop
    ctx->pc = 0x2b7768u;
    // NOP
    // 0x2b776c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b776cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7770: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7774: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b7774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b7778: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7778u;
    SET_GPR_U32(ctx, 31, 0x2B7780u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7778u, 0x2B7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7780u;
label_2b7780:
    // 0x2b7780: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b7780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7784: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b7788: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b778c: 0x0  nop
    ctx->pc = 0x2b778cu;
    // NOP
    // 0x2b7790: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7794: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7798: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b7798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b779c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b779cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b77a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b77a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b77a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B77A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B77A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B77ACu;
}
