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

// Function: e2d_id58_type0a
// Address: 0x2b79d0 - 0x2b7abc
void e2d_id58_type0a_0x2b79d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type0a_0x2b79d0");
#endif

    switch (ctx->pc) {
        case 0x2b79e8u: goto label_2b79e8;
        case 0x2b7a10u: goto label_2b7a10;
        case 0x2b7a34u: goto label_2b7a34;
        default: break;
    }

    ctx->pc = 0x2b79d0u;

    // 0x2b79d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b79d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b79d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b79d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b79d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b79dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b79e0: 0xc0adc3c  jal         func_2B70F0
    ctx->pc = 0x2B79E0u;
    SET_GPR_U32(ctx, 31, 0x2B79E8u);
    ctx->pc = 0x2B70F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B70F0u, 0x2B79E0u, 0x2B79E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79E8u;
label_2b79e8:
    // 0x2b79e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b79ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b79f0: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b79f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b79f4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2b79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2b79f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b79f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b79fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b79fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7a00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7a04: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2b7a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2b7a08: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7A08u;
    SET_GPR_U32(ctx, 31, 0x2B7A10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7A08u, 0x2B7A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A10u;
label_2b7a10:
    // 0x2b7a10: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2b7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7a14: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b7a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b7a18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7a1c: 0x0  nop
    ctx->pc = 0x2b7a1cu;
    // NOP
    // 0x2b7a20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7a24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7a28: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b7a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b7a2c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7A2Cu;
    SET_GPR_U32(ctx, 31, 0x2B7A34u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7A2Cu, 0x2B7A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A34u;
label_2b7a34:
    // 0x2b7a34: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b7a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7a38: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b7a3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7a40: 0x0  nop
    ctx->pc = 0x2b7a40u;
    // NOP
    // 0x2b7a44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7a48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7a4c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b7a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b7a50: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b7a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7a58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7a5c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b7a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b7a60: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2b7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2b7a64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7a68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7a6c: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b7a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b7a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b7a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7a74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7a78: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b7a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b7a7c: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2b7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2b7a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7a84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7a88: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b7a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b7a8c: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b7a90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7a94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7a98: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b7a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b7a9c: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b7a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b7aa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7aa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7aa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7aa8: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b7aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b7aac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7aacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7ab0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7ABCu;
}
