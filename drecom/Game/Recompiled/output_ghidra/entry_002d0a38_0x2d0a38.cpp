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

// Function: entry_002d0a38
// Address: 0x2d0a38 - 0x2d0aa8
void entry_002d0a38_0x2d0a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0a38_0x2d0a38");
#endif

    ctx->pc = 0x2d0a38u;

    // 0x2d0a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0a3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a40: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d0a40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0a48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a4c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d0a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0a50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d0a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a54: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2d0a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0a58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a5c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d0a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0a60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d0a68: 0x3c0344af  lui         $v1, 0x44AF
    ctx->pc = 0x2d0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17583 << 16));
    // 0x2d0a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0a70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a74: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2d0a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2d0a78: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2d0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2d0a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0a80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0a84: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x2d0a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x2d0a88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0a8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d0a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d0a90: 0xa0224f11  sb          $v0, 0x4F11($at)
    ctx->pc = 0x2d0a90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x2d0a94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0a98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d0a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d0a9c: 0xa0224f12  sb          $v0, 0x4F12($at)
    ctx->pc = 0x2d0a9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F12u, _value); } while (0);
    // 0x2d0aa0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2D0AA0u;
    {
        const bool branch_taken_0x2d0aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0aa0) {
            ctx->pc = 0x2D0B68u;
            return;
        }
    }
    ctx->pc = 0x2D0AA8u;
}
