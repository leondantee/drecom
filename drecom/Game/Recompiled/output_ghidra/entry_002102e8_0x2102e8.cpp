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

// Function: entry_002102e8
// Address: 0x2102e8 - 0x2102f8
void entry_002102e8_0x2102e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002102e8_0x2102e8");
#endif

    ctx->pc = 0x2102e8u;

    // 0x2102e8: 0x2e840005  sltiu       $a0, $s4, 0x5
    ctx->pc = 0x2102e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2102ec: 0x1480ffbd  bnez        $a0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2102ECu;
    {
        const bool branch_taken_0x2102ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2102ec) {
            ctx->pc = 0x2101E4u;
            return;
        }
    }
    ctx->pc = 0x2102F4u;
    // 0x2102f4: 0x0  nop
    ctx->pc = 0x2102f4u;
    // NOP
    ctx->pc = 0x2102f8u;
}
