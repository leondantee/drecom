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

// Function: entry_00340818
// Address: 0x340818 - 0x34082c
void entry_00340818_0x340818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340818_0x340818");
#endif

    ctx->pc = 0x340818u;

    // 0x340818: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x340818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x34081c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x34081Cu;
    {
        const bool branch_taken_0x34081c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34081c) {
            ctx->pc = 0x3407E0u;
            return;
        }
    }
    ctx->pc = 0x340824u;
    // 0x340824: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x340824u;
    {
        const bool branch_taken_0x340824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340824) {
            ctx->pc = 0x340868u;
            return;
        }
    }
    ctx->pc = 0x34082Cu;
}
