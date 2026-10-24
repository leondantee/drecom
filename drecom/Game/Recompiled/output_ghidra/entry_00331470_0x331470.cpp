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

// Function: entry_00331470
// Address: 0x331470 - 0x331490
void entry_00331470_0x331470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331470_0x331470");
#endif

    ctx->pc = 0x331470u;

    // 0x331470: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x331470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x331474: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x331474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x331478: 0xafa40224  sw          $a0, 0x224($sp)
    ctx->pc = 0x331478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 4));
    // 0x33147c: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x33147cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
    // 0x331480: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x331480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x331484: 0xafa5022c  sw          $a1, 0x22C($sp)
    ctx->pc = 0x331484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 5));
    // 0x331488: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x331488u;
    {
        const bool branch_taken_0x331488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331488) {
            ctx->pc = 0x3314B0u;
            return;
        }
    }
    ctx->pc = 0x331490u;
}
