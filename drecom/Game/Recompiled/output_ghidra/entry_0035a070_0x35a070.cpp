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

// Function: entry_0035a070
// Address: 0x35a070 - 0x35a080
void entry_0035a070_0x35a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a070_0x35a070");
#endif

    ctx->pc = 0x35a070u;

    // 0x35a070: 0x2e020017  sltiu       $v0, $s0, 0x17
    ctx->pc = 0x35a070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x35a074: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x35A074u;
    {
        const bool branch_taken_0x35a074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a074) {
            ctx->pc = 0x359FECu;
            return;
        }
    }
    ctx->pc = 0x35A07Cu;
    // 0x35a07c: 0x0  nop
    ctx->pc = 0x35a07cu;
    // NOP
    ctx->pc = 0x35a080u;
}
