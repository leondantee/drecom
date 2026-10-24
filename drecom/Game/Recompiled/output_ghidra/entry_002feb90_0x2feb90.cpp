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

// Function: entry_002feb90
// Address: 0x2feb90 - 0x2feba0
void entry_002feb90_0x2feb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002feb90_0x2feb90");
#endif

    ctx->pc = 0x2feb90u;

    // 0x2feb90: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x2feb90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2feb94: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2FEB94u;
    {
        const bool branch_taken_0x2feb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2feb94) {
            ctx->pc = 0x2FEB14u;
            return;
        }
    }
    ctx->pc = 0x2FEB9Cu;
    // 0x2feb9c: 0x0  nop
    ctx->pc = 0x2feb9cu;
    // NOP
    ctx->pc = 0x2feba0u;
}
