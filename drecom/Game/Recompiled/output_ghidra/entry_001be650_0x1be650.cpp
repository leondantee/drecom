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

// Function: entry_001be650
// Address: 0x1be650 - 0x1be674
void entry_001be650_0x1be650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be650_0x1be650");
#endif

    ctx->pc = 0x1be650u;

    // 0x1be650: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1be650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be654: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be658: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1be658u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1be65c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be660: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1be660u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1be664: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be668: 0xa0a0156c  sb          $zero, 0x156C($a1)
    ctx->pc = 0x1be668u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be66c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BE66Cu;
    {
        const bool branch_taken_0x1be66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be66c) {
            ctx->pc = 0x1BE6A4u;
            return;
        }
    }
    ctx->pc = 0x1BE674u;
}
