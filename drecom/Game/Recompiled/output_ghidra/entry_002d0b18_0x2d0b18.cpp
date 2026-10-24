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

// Function: entry_002d0b18
// Address: 0x2d0b18 - 0x2d0b68
void entry_002d0b18_0x2d0b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0b18_0x2d0b18");
#endif

    ctx->pc = 0x2d0b18u;

    // 0x2d0b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0b1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d0b20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0b24: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2d0b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2d0b28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b2c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d0b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d0b30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2d0b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b34: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2d0b34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0b38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b3c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d0b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0b40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d0b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d0b48: 0x3c0344af  lui         $v1, 0x44AF
    ctx->pc = 0x2d0b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17583 << 16));
    // 0x2d0b4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d0b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0b50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b54: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2d0b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2d0b58: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2d0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2d0b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0b60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0b64: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x2d0b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    ctx->pc = 0x2d0b68u;
}
