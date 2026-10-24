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

// Function: srp_id14_type00
// Address: 0x2c0c50 - 0x2c0d20
void srp_id14_type00_0x2c0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id14_type00_0x2c0c50");
#endif

    switch (ctx->pc) {
        case 0x2c0c94u: goto label_2c0c94;
        default: break;
    }

    ctx->pc = 0x2c0c50u;

    // 0x2c0c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0c54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c0c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c0c58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c0c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c0c5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0c60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0c64: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c0c64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0c68: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c0c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0c6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0c70: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c0c70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0c74: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0c78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0c7c: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c0c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c0c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0c84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0c88: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c0c88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0c8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C0C8Cu;
    SET_GPR_U32(ctx, 31, 0x2C0C94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C0C8Cu, 0x2C0C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C94u;
label_2c0c94:
    // 0x2c0c94: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2c0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2c0c98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c0c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0c9c: 0x0  nop
    ctx->pc = 0x2c0c9cu;
    // NOP
    // 0x2c0ca0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0ca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0ca4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2c0ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2c0ca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0cac: 0x0  nop
    ctx->pc = 0x2c0cacu;
    // NOP
    // 0x2c0cb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0cb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0cb8: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c0cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c0cbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0cc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0cc4: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c0cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0cc8: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x2c0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2c0ccc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0cd0: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2c0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2c0cd4: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2c0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2c0cd8: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2c0cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2c0cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0ce0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0ce4: 0xe46002e0  swc1        $f0, 0x2E0($v1)
    ctx->pc = 0x2c0ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 736), bits); }
    // 0x2c0ce8: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2c0ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2c0cec: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2c0cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2c0cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0cf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0cf8: 0xe46002e4  swc1        $f0, 0x2E4($v1)
    ctx->pc = 0x2c0cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 740), bits); }
    // 0x2c0cfc: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2c0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2c0d00: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2c0d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2c0d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0d08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0d0c: 0xe46002e8  swc1        $f0, 0x2E8($v1)
    ctx->pc = 0x2c0d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 744), bits); }
    // 0x2c0d10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c0d10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0d14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c0d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c0d18: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0D20u;
}
