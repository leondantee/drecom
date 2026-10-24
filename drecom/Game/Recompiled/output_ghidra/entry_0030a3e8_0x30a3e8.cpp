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

// Function: entry_0030a3e8
// Address: 0x30a3e8 - 0x30a3f8
void entry_0030a3e8_0x30a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a3e8_0x30a3e8");
#endif

    ctx->pc = 0x30a3e8u;

    // 0x30a3e8: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x30a3e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30a3ec: 0x1460ff2e  bnez        $v1, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x30A3ECu;
    {
        const bool branch_taken_0x30a3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a3ec) {
            ctx->pc = 0x30A0A8u;
            return;
        }
    }
    ctx->pc = 0x30A3F4u;
    // 0x30a3f4: 0x0  nop
    ctx->pc = 0x30a3f4u;
    // NOP
    ctx->pc = 0x30a3f8u;
}
