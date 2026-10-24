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

// Function: srp_id23_type01
// Address: 0x2c2bb0 - 0x2c2c98
void srp_id23_type01_0x2c2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id23_type01_0x2c2bb0");
#endif

    switch (ctx->pc) {
        case 0x2c2c30u: goto label_2c2c30;
        default: break;
    }

    ctx->pc = 0x2c2bb0u;

    // 0x2c2bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2bb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c2bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c2bb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c2bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c2bbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c2bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2bc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2bc4: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c2bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c2bc8: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2c2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2c2bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2bd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2bd4: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c2bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c2bd8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2c2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2c2bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2be0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2be4: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c2be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c2be8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c2be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c2bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2bf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2bf4: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c2bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c2bf8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c2bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c2bfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c00: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c2c00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2c04: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2c08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c0c: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2c10: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2c14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c18: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c2c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2c1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2c20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c24: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c2c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2c28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C2C28u;
    SET_GPR_U32(ctx, 31, 0x2C2C30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C2C28u, 0x2C2C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C30u;
label_2c2c30:
    // 0x2c2c30: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2c2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2c2c34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c2c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2c38: 0x0  nop
    ctx->pc = 0x2c2c38u;
    // NOP
    // 0x2c2c3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2c40: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c2c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c2c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2c48: 0x0  nop
    ctx->pc = 0x2c2c48u;
    // NOP
    // 0x2c2c4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2c50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c54: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c2c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c2c58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2c5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c60: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c2c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2c64: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2c2c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2c2c68: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2c2c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2c2c6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2c70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c74: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x2c2c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x2c2c78: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c2c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c2c7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2c80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2c84: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x2c2c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x2c2c88: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c2c88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2c8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c2c8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c2c90: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2C98u;
}
