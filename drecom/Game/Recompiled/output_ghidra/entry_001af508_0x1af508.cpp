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

// Function: entry_001af508
// Address: 0x1af508 - 0x1af518
void entry_001af508_0x1af508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af508_0x1af508");
#endif

    ctx->pc = 0x1af508u;

    // 0x1af508: 0x2e6207d0  sltiu       $v0, $s3, 0x7D0
    ctx->pc = 0x1af508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1af50c: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x1AF50Cu;
    {
        const bool branch_taken_0x1af50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af50c) {
            ctx->pc = 0x1AF20Cu;
            return;
        }
    }
    ctx->pc = 0x1AF514u;
    // 0x1af514: 0x0  nop
    ctx->pc = 0x1af514u;
    // NOP
    ctx->pc = 0x1af518u;
}
