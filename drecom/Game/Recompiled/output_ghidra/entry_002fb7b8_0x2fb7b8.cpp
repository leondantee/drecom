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

// Function: entry_002fb7b8
// Address: 0x2fb7b8 - 0x2fb7c8
void entry_002fb7b8_0x2fb7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb7b8_0x2fb7b8");
#endif

    ctx->pc = 0x2fb7b8u;

    // 0x2fb7b8: 0x2e070010  sltiu       $a3, $s0, 0x10
    ctx->pc = 0x2fb7b8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fb7bc: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2FB7BCu;
    {
        const bool branch_taken_0x2fb7bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb7bc) {
            ctx->pc = 0x2FB75Cu;
            return;
        }
    }
    ctx->pc = 0x2FB7C4u;
    // 0x2fb7c4: 0x0  nop
    ctx->pc = 0x2fb7c4u;
    // NOP
    ctx->pc = 0x2fb7c8u;
}
