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

// Function: entry_00313c58
// Address: 0x313c58 - 0x313c68
void entry_00313c58_0x313c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313c58_0x313c58");
#endif

    ctx->pc = 0x313c58u;

    // 0x313c58: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x313c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x313c5c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x313C5Cu;
    {
        const bool branch_taken_0x313c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313c5c) {
            ctx->pc = 0x313BA0u;
            return;
        }
    }
    ctx->pc = 0x313C64u;
    // 0x313c64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x313c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x313c68u;
}
