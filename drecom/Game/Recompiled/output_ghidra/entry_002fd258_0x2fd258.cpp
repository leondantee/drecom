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

// Function: entry_002fd258
// Address: 0x2fd258 - 0x2fd268
void entry_002fd258_0x2fd258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fd258_0x2fd258");
#endif

    ctx->pc = 0x2fd258u;

    // 0x2fd258: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x2fd258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fd25c: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2FD25Cu;
    {
        const bool branch_taken_0x2fd25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd25c) {
            ctx->pc = 0x2FD1B0u;
            return;
        }
    }
    ctx->pc = 0x2FD264u;
    // 0x2fd264: 0x0  nop
    ctx->pc = 0x2fd264u;
    // NOP
    ctx->pc = 0x2fd268u;
}
