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

// Function: e2d_id58_type06
// Address: 0x2b76a0 - 0x2b7730
void e2d_id58_type06_0x2b76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type06_0x2b76a0");
#endif

    switch (ctx->pc) {
        case 0x2b76b8u: goto label_2b76b8;
        case 0x2b76e0u: goto label_2b76e0;
        case 0x2b7704u: goto label_2b7704;
        default: break;
    }

    ctx->pc = 0x2b76a0u;

    // 0x2b76a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b76a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b76a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b76a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b76a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b76ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b76acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b76b0: 0xc0adc78  jal         func_2B71E0
    ctx->pc = 0x2B76B0u;
    SET_GPR_U32(ctx, 31, 0x2B76B8u);
    ctx->pc = 0x2B71E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B71E0u, 0x2B76B0u, 0x2B76B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B76B8u;
label_2b76b8:
    // 0x2b76b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b76bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b76c0: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b76c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b76c4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2b76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2b76c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b76c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b76cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b76ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b76d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b76d4: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2b76d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2b76d8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B76D8u;
    SET_GPR_U32(ctx, 31, 0x2B76E0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B76D8u, 0x2B76E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B76E0u;
label_2b76e0:
    // 0x2b76e0: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2b76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2b76e4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b76e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b76e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b76e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b76ec: 0x0  nop
    ctx->pc = 0x2b76ecu;
    // NOP
    // 0x2b76f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b76f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b76f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b76f8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b76f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b76fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B76FCu;
    SET_GPR_U32(ctx, 31, 0x2B7704u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B76FCu, 0x2B7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7704u;
label_2b7704:
    // 0x2b7704: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b7704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7708: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b770c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b770cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7710: 0x0  nop
    ctx->pc = 0x2b7710u;
    // NOP
    // 0x2b7714: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7718: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b771c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b771cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b7720: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7720u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7724: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7728: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7730u;
}
