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

// Function: entry_0030a680
// Address: 0x30a680 - 0x30a690
void entry_0030a680_0x30a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a680_0x30a680");
#endif

    ctx->pc = 0x30a680u;

    // 0x30a680: 0x2e240004  sltiu       $a0, $s1, 0x4
    ctx->pc = 0x30a680u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30a684: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x30A684u;
    {
        const bool branch_taken_0x30a684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a684) {
            ctx->pc = 0x30A5FCu;
            return;
        }
    }
    ctx->pc = 0x30A68Cu;
    // 0x30a68c: 0x0  nop
    ctx->pc = 0x30a68cu;
    // NOP
    ctx->pc = 0x30a690u;
}
