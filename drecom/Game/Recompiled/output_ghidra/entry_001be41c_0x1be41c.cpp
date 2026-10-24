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

// Function: entry_001be41c
// Address: 0x1be41c - 0x1be434
void entry_001be41c_0x1be41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be41c_0x1be41c");
#endif

    ctx->pc = 0x1be41cu;

    // 0x1be41c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be420: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1be420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1be424: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be428: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1be428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1be42c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1be42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be430: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1be430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1be434u;
}
