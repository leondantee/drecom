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

// Function: entry_0019f760
// Address: 0x19f760 - 0x19f770
void entry_0019f760_0x19f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f760_0x19f760");
#endif

    ctx->pc = 0x19f760u;

    // 0x19f760: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x19f760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x19f764: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19F764u;
    {
        const bool branch_taken_0x19f764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f764) {
            ctx->pc = 0x19F730u;
            return;
        }
    }
    ctx->pc = 0x19F76Cu;
    // 0x19f76c: 0x0  nop
    ctx->pc = 0x19f76cu;
    // NOP
    ctx->pc = 0x19f770u;
}
