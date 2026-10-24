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

// Function: Make_default_scene2_info
// Address: 0x1d9c20 - 0x1d9cf4
void Make_default_scene2_info_0x1d9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Make_default_scene2_info_0x1d9c20");
#endif

    ctx->pc = 0x1d9c20u;

    // 0x1d9c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9c28: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1d9c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1d9c2c: 0x2470fce0  addiu       $s0, $v1, -0x320
    ctx->pc = 0x1d9c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966496));
    // 0x1d9c30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9c34: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x1d9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9c38: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x1d9c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x1d9c3c: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x1d9c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x1d9c40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9c44: 0xac23fce0  sw          $v1, -0x320($at)
    ctx->pc = 0x1d9c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CFCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFCE0u, _value); } while (0);
    // 0x1d9c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d9c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9c4c: 0x0  nop
    ctx->pc = 0x1d9c4cu;
    // NOP
    // 0x1d9c50: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d9c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d9c54: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1d9c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d9c58: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x1d9c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d9c5c: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x1d9c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d9c60: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1d9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1d9c64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9c68: 0x0  nop
    ctx->pc = 0x1d9c68u;
    // NOP
    // 0x1d9c6c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1d9c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1d9c70: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x1d9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x1d9c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9c78: 0x0  nop
    ctx->pc = 0x1d9c78u;
    // NOP
    // 0x1d9c7c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1d9c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d9c80: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1d9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1d9c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9c88: 0x0  nop
    ctx->pc = 0x1d9c88u;
    // NOP
    // 0x1d9c8c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d9c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d9c90: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1d9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1d9c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9c98: 0x0  nop
    ctx->pc = 0x1d9c98u;
    // NOP
    // 0x1d9c9c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d9c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d9ca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9ca4: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x1d9ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9ca8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1d9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1d9cac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d9cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d9cb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d9cb4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9cb8: 0xac23fce0  sw          $v1, -0x320($at)
    ctx->pc = 0x1d9cb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CFCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFCE0u, _value); } while (0);
    // 0x1d9cbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9cc0: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x1d9cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9cc4: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1d9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1d9cc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d9cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d9ccc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d9cd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9cd4: 0xac23fce0  sw          $v1, -0x320($at)
    ctx->pc = 0x1d9cd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CFCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFCE0u, _value); } while (0);
    // 0x1d9cd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d9cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9cdc: 0x0  nop
    ctx->pc = 0x1d9cdcu;
    // NOP
    // 0x1d9ce0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1d9ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d9ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ce8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d9ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d9cec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9CF4u;
}
