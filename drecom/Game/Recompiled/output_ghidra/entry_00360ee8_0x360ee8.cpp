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

// Function: entry_00360ee8
// Address: 0x360ee8 - 0x360ef8
void entry_00360ee8_0x360ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360ee8_0x360ee8");
#endif

    ctx->pc = 0x360ee8u;

    // 0x360ee8: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x360ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x360eec: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x360EECu;
    {
        const bool branch_taken_0x360eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360eec) {
            ctx->pc = 0x360E14u;
            return;
        }
    }
    ctx->pc = 0x360EF4u;
    // 0x360ef4: 0x0  nop
    ctx->pc = 0x360ef4u;
    // NOP
    ctx->pc = 0x360ef8u;
}
