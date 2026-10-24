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

// Function: entry_00165358
// Address: 0x165358 - 0x16536c
void entry_00165358_0x165358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165358_0x165358");
#endif

    ctx->pc = 0x165358u;

    // 0x165358: 0x2e8300e0  sltiu       $v1, $s4, 0xE0
    ctx->pc = 0x165358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
    // 0x16535c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x16535Cu;
    {
        const bool branch_taken_0x16535c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16535c) {
            ctx->pc = 0x1652F8u;
            return;
        }
    }
    ctx->pc = 0x165364u;
    // 0x165364: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x165364u;
    {
        const bool branch_taken_0x165364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165364) {
            ctx->pc = 0x16547Cu;
            return;
        }
    }
    ctx->pc = 0x16536Cu;
}
