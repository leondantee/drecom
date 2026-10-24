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

// Function: entry_002d0aa8
// Address: 0x2d0aa8 - 0x2d0b18
void entry_002d0aa8_0x2d0aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0aa8_0x2d0aa8");
#endif

    ctx->pc = 0x2d0aa8u;

    // 0x2d0aa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0aac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0ab0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d0ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0ab4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2d0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d0ab8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d0ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0abc: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2d0abcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0ac0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0ac4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d0ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0ac8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0acc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d0accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0ad0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d0ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0ad4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d0ad8: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x2d0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x2d0adc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0ae0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0ae4: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2d0ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2d0ae8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2d0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2d0aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0af0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2d0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0af4: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x2d0af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x2d0af8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0afc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d0afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d0b00: 0xa0224f11  sb          $v0, 0x4F11($at)
    ctx->pc = 0x2d0b00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x2d0b04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0b08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d0b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d0b0c: 0xa0224f12  sb          $v0, 0x4F12($at)
    ctx->pc = 0x2d0b0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F12u, _value); } while (0);
    // 0x2d0b10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D0B10u;
    {
        const bool branch_taken_0x2d0b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0b10) {
            ctx->pc = 0x2D0B68u;
            return;
        }
    }
    ctx->pc = 0x2D0B18u;
}
