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

// Function: entry_0035a168
// Address: 0x35a168 - 0x35a178
void entry_0035a168_0x35a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a168_0x35a168");
#endif

    ctx->pc = 0x35a168u;

    // 0x35a168: 0x2e020017  sltiu       $v0, $s0, 0x17
    ctx->pc = 0x35a168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x35a16c: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x35A16Cu;
    {
        const bool branch_taken_0x35a16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a16c) {
            ctx->pc = 0x35A0A4u;
            return;
        }
    }
    ctx->pc = 0x35A174u;
    // 0x35a174: 0x0  nop
    ctx->pc = 0x35a174u;
    // NOP
    ctx->pc = 0x35a178u;
}
