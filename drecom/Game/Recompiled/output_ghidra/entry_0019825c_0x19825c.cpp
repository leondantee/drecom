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

// Function: entry_0019825c
// Address: 0x19825c - 0x198284
void entry_0019825c_0x19825c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019825c_0x19825c");
#endif

    ctx->pc = 0x19825cu;

    // 0x19825c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19825cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x198260: 0x8c240068  lw          $a0, 0x68($at)
    ctx->pc = 0x198260u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0068u));
    // 0x198264: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198268: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x198268u;
    {
        const bool branch_taken_0x198268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x198268) {
            ctx->pc = 0x198284u;
            return;
        }
    }
    ctx->pc = 0x198270u;
    // 0x198270: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x198270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x198274: 0x8c24006c  lw          $a0, 0x6C($at)
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x198278: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x198278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19827c: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x19827Cu;
    {
        const bool branch_taken_0x19827c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19827c) {
            ctx->pc = 0x198360u;
            return;
        }
    }
    ctx->pc = 0x198284u;
}
