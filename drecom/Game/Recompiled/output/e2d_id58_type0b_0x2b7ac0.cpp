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

// Function: e2d_id58_type0b
// Address: 0x2b7ac0 - 0x2b7b98
void e2d_id58_type0b_0x2b7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type0b_0x2b7ac0");
#endif

    switch (ctx->pc) {
        case 0x2b7ad8u: goto label_2b7ad8;
        case 0x2b7aecu: goto label_2b7aec;
        case 0x2b7b10u: goto label_2b7b10;
        default: break;
    }

    ctx->pc = 0x2b7ac0u;

    // 0x2b7ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7ac4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b7ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b7ac8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b7ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b7acc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b7accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7ad0: 0xc0adc3c  jal         func_2B70F0
    ctx->pc = 0x2B7AD0u;
    SET_GPR_U32(ctx, 31, 0x2B7AD8u);
    ctx->pc = 0x2B70F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B70F0u, 0x2B7AD0u, 0x2B7AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7AD8u;
label_2b7ad8:
    // 0x2b7ad8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7adc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7ae0: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7ae4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7AE4u;
    SET_GPR_U32(ctx, 31, 0x2B7AECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7AE4u, 0x2B7AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7AECu;
label_2b7aec:
    // 0x2b7aec: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2b7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7af0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b7af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b7af4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7af8: 0x0  nop
    ctx->pc = 0x2b7af8u;
    // NOP
    // 0x2b7afc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7afcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7b00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7b04: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b7b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b7b08: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7B08u;
    SET_GPR_U32(ctx, 31, 0x2B7B10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7B08u, 0x2B7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B10u;
label_2b7b10:
    // 0x2b7b10: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7b14: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b7b18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b7b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7b1c: 0x0  nop
    ctx->pc = 0x2b7b1cu;
    // NOP
    // 0x2b7b20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7b24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7b28: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b7b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b7b2c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b7b30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7b34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7b38: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b7b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b7b3c: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2b7b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2b7b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7b44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7b48: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b7b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b7b4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b7b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7b50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7b54: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b7b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b7b58: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2b7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2b7b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7b60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7b64: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b7b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b7b68: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b7b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7b70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7b74: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b7b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b7b78: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2b7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2b7b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b7b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7b80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7b84: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b7b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b7b88: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7b88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7b8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7b90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7B98u;
}
