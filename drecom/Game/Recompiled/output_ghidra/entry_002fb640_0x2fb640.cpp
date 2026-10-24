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

// Function: entry_002fb640
// Address: 0x2fb640 - 0x2fb650
void entry_002fb640_0x2fb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb640_0x2fb640");
#endif

    ctx->pc = 0x2fb640u;

    // 0x2fb640: 0x2e040010  sltiu       $a0, $s0, 0x10
    ctx->pc = 0x2fb640u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fb644: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2FB644u;
    {
        const bool branch_taken_0x2fb644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb644) {
            ctx->pc = 0x2FB5E4u;
            return;
        }
    }
    ctx->pc = 0x2FB64Cu;
    // 0x2fb64c: 0x0  nop
    ctx->pc = 0x2fb64cu;
    // NOP
    ctx->pc = 0x2fb650u;
}
