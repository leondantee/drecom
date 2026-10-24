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

// Function: e2d_id58_type01
// Address: 0x2b73a0 - 0x2b7430
void e2d_id58_type01_0x2b73a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type01_0x2b73a0");
#endif

    switch (ctx->pc) {
        case 0x2b73b8u: goto label_2b73b8;
        case 0x2b73e0u: goto label_2b73e0;
        case 0x2b7404u: goto label_2b7404;
        default: break;
    }

    ctx->pc = 0x2b73a0u;

    // 0x2b73a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b73a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b73a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b73a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b73a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b73a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b73ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b73acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b73b0: 0xc0adc3c  jal         func_2B70F0
    ctx->pc = 0x2B73B0u;
    SET_GPR_U32(ctx, 31, 0x2B73B8u);
    ctx->pc = 0x2B70F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B70F0u, 0x2B73B0u, 0x2B73B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73B8u;
label_2b73b8:
    // 0x2b73b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b73b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b73bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b73c0: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b73c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b73c4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2b73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2b73c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b73c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b73cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b73ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b73d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b73d4: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2b73d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2b73d8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B73D8u;
    SET_GPR_U32(ctx, 31, 0x2B73E0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B73D8u, 0x2B73E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B73E0u;
label_2b73e0:
    // 0x2b73e0: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2b73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2b73e4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b73e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b73e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b73e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b73ec: 0x0  nop
    ctx->pc = 0x2b73ecu;
    // NOP
    // 0x2b73f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b73f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b73f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b73f8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b73f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b73fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B73FCu;
    SET_GPR_U32(ctx, 31, 0x2B7404u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B73FCu, 0x2B7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7404u;
label_2b7404:
    // 0x2b7404: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b7404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7408: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b740c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b740cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7410: 0x0  nop
    ctx->pc = 0x2b7410u;
    // NOP
    // 0x2b7414: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7418: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b741c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b741cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b7420: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7420u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7424: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7428: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7430u;
}
