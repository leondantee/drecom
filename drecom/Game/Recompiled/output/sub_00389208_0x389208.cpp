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

// Function: sub_00389208
// Address: 0x389208 - 0x389218
void sub_00389208_0x389208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389208_0x389208");
#endif

    ctx->pc = 0x389208u;

    // 0x389208: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x389208u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x389208 raw=0x437A0000");
    // 0x38920c: 0x1c0a0000  .word       0x1C0A0000                   # bgtz        $zero, . + 4 + (0x0 << 2) # 000A0000 <InstrIdType: CPU_NORMAL>
label_389210:
    if (ctx->pc == 0x389210u) {
        ctx->pc = 0x389210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38920Cu;
        // 0x389210: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389214u;
        goto label_fallthrough_0x38920c;
    }
    ctx->pc = 0x38920Cu;
    {
        const bool branch_taken_0x38920c = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x389210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38920Cu;
        // 0x389210: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38920c) {
            ctx->pc = 0x389210u;
            goto label_389210;
        }
    }
label_fallthrough_0x38920c:
    ctx->pc = 0x389214u;
    // 0x389214: 0x0  nop
    ctx->pc = 0x389214u;
    // NOP
    ctx->pc = 0x389218u;
}
