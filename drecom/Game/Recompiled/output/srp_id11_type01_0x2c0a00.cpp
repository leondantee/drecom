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

// Function: srp_id11_type01
// Address: 0x2c0a00 - 0x2c0af0
void srp_id11_type01_0x2c0a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id11_type01_0x2c0a00");
#endif

    ctx->pc = 0x2c0a00u;

    // 0x2c0a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0a04: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c0a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c0a08: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0a10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a14: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c0a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c0a18: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0a20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a24: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c0a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c0a28: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0a2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0a30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a34: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c0a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c0a38: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c0a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c0a3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0a40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a44: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c0a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c0a48: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2c0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2c0a4c: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2c0a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2c0a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0a54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a58: 0xe46002ec  swc1        $f0, 0x2EC($v1)
    ctx->pc = 0x2c0a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 748), bits); }
    // 0x2c0a5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0a60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a64: 0xa064036a  sb          $a0, 0x36A($v1)
    ctx->pc = 0x2c0a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0a68: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a6c: 0xa0600368  sb          $zero, 0x368($v1)
    ctx->pc = 0x2c0a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0a70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a74: 0xa0600342  sb          $zero, 0x342($v1)
    ctx->pc = 0x2c0a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0a78: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c0a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0a7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a80: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c0a80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0a84: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c0a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c0a88: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a8c: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c0a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0a90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0a94: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0a98: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c0a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0a9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0aa0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0aa4: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c0aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0aa8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c0aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0ab0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0ab4: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c0ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c0ab8: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x2c0ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2c0abc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0ac0: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2c0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2c0ac4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c0ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2c0ac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0acc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c0accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0ad0: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x2c0ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x2c0ad4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2c0ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0ad8: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x2c0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2c0adc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c0adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c0ae0: 0xac830270  sw          $v1, 0x270($a0)
    ctx->pc = 0x2c0ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x2c0ae4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c0ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c0ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0AF0u;
}
