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

// Function: entry_002fb938
// Address: 0x2fb938 - 0x2fb948
void entry_002fb938_0x2fb938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb938_0x2fb938");
#endif

    ctx->pc = 0x2fb938u;

    // 0x2fb938: 0x2e040010  sltiu       $a0, $s0, 0x10
    ctx->pc = 0x2fb938u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fb93c: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2FB93Cu;
    {
        const bool branch_taken_0x2fb93c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb93c) {
            ctx->pc = 0x2FB8D8u;
            return;
        }
    }
    ctx->pc = 0x2FB944u;
    // 0x2fb944: 0x0  nop
    ctx->pc = 0x2fb944u;
    // NOP
    ctx->pc = 0x2fb948u;
}
