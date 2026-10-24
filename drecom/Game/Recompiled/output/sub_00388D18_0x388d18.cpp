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

// Function: sub_00388D18
// Address: 0x388d18 - 0x388d24
void sub_00388D18_0x388d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388D18_0x388d18");
#endif

    ctx->pc = 0x388d18u;

    // 0x388d18: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388d18u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x388D18 raw=0x43960000");
    // 0x388d1c: 0x1802012c  .word       0x1802012C                   # blez        $zero, . + 4 + (0x12C << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x388D1Cu;
    {
        const bool branch_taken_0x388d1c = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x388D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D1Cu;
        // 0x388d20: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d1c) {
            ctx->pc = 0x3891D0u;
            return;
        }
    }
    ctx->pc = 0x388D24u;
}
