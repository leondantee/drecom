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

// Function: entry_001b2cc0
// Address: 0x1b2cc0 - 0x1b2ce0
void entry_001b2cc0_0x1b2cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2cc0_0x1b2cc0");
#endif

    ctx->pc = 0x1b2cc0u;

    // 0x1b2cc0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2cc4: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1b2cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b2cc8: 0xa24211ef  sb          $v0, 0x11EF($s2)
    ctx->pc = 0x1b2cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2ccc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2cd0: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x1b2cd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b2cd4: 0xa64211f2  sh          $v0, 0x11F2($s2)
    ctx->pc = 0x1b2cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2cd8: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x1b2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1b2cdc: 0xa64411f6  sh          $a0, 0x11F6($s2)
    ctx->pc = 0x1b2cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4598), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1b2ce0u;
}
