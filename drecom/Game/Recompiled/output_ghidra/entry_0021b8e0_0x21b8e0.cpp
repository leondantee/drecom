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

// Function: entry_0021b8e0
// Address: 0x21b8e0 - 0x21b8f4
void entry_0021b8e0_0x21b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b8e0_0x21b8e0");
#endif

    ctx->pc = 0x21b8e0u;

    // 0x21b8e0: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x21b8e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21b8e4: 0x1460ff45  bnez        $v1, . + 4 + (-0xBB << 2)
    ctx->pc = 0x21B8E4u;
    {
        const bool branch_taken_0x21b8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b8e4) {
            ctx->pc = 0x21B5FCu;
            return;
        }
    }
    ctx->pc = 0x21B8ECu;
    // 0x21b8ec: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x21B8ECu;
    {
        const bool branch_taken_0x21b8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b8ec) {
            ctx->pc = 0x21BF28u;
            return;
        }
    }
    ctx->pc = 0x21B8F4u;
}
