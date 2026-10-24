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

// Function: entry_00197b54
// Address: 0x197b54 - 0x197b7c
void entry_00197b54_0x197b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b54_0x197b54");
#endif

    ctx->pc = 0x197b54u;

    // 0x197b54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x197b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x197b58: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x197b58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0068u));
    // 0x197b5c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x197b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x197b60: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x197B60u;
    {
        const bool branch_taken_0x197b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x197b60) {
            ctx->pc = 0x197BA8u;
            return;
        }
    }
    ctx->pc = 0x197B68u;
    // 0x197b68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x197b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x197b6c: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x197b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x197b70: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x197b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x197b74: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x197B74u;
    {
        const bool branch_taken_0x197b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x197b74) {
            ctx->pc = 0x197BA8u;
            return;
        }
    }
    ctx->pc = 0x197B7Cu;
}
