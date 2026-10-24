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

// Function: entry_00191234
// Address: 0x191234 - 0x191240
void entry_00191234_0x191234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191234_0x191234");
#endif

    ctx->pc = 0x191234u;

    // 0x191234: 0x139a02  srl         $s3, $s3, 8
    ctx->pc = 0x191234u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x191238: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x191238u;
    {
        const bool branch_taken_0x191238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191238) {
            ctx->pc = 0x191268u;
            return;
        }
    }
    ctx->pc = 0x191240u;
}
