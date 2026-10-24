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

// Function: entry_001b6c24
// Address: 0x1b6c24 - 0x1b6c48
void entry_001b6c24_0x1b6c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6c24_0x1b6c24");
#endif

    ctx->pc = 0x1b6c24u;

    // 0x1b6c24: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b6c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b6c28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c2c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1b6c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b6c30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c34: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1b6c34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b6c38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6c3c: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1b6c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6c40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B6C40u;
    {
        const bool branch_taken_0x1b6c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c40) {
            ctx->pc = 0x1B6C78u;
            return;
        }
    }
    ctx->pc = 0x1B6C48u;
}
