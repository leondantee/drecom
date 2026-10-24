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

// Function: entry_001a2818
// Address: 0x1a2818 - 0x1a2834
void entry_001a2818_0x1a2818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2818_0x1a2818");
#endif

    ctx->pc = 0x1a2818u;

    // 0x1a2818: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a281c: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x1a281cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2820: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2824: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x1a2824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2828: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a2828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a282c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2830: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a2830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a2834u;
}
