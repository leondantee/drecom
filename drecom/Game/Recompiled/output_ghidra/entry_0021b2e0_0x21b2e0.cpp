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

// Function: entry_0021b2e0
// Address: 0x21b2e0 - 0x21b2f4
void entry_0021b2e0_0x21b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b2e0_0x21b2e0");
#endif

    ctx->pc = 0x21b2e0u;

    // 0x21b2e0: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x21b2e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x21b2e4: 0x1460ff1d  bnez        $v1, . + 4 + (-0xE3 << 2)
    ctx->pc = 0x21B2E4u;
    {
        const bool branch_taken_0x21b2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b2e4) {
            ctx->pc = 0x21AF5Cu;
            return;
        }
    }
    ctx->pc = 0x21B2ECu;
    // 0x21b2ec: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x21B2ECu;
    {
        const bool branch_taken_0x21b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b2ec) {
            ctx->pc = 0x21BF28u;
            return;
        }
    }
    ctx->pc = 0x21B2F4u;
}
