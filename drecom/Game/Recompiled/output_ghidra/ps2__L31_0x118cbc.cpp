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

// Function: $L31
// Address: 0x118cbc - 0x118cd0
void ps2__L31_0x118cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L31_0x118cbc");
#endif

    ctx->pc = 0x118cbcu;

    // 0x118cbc: 0x0  nop
    ctx->pc = 0x118cbcu;
    // NOP
    // 0x118cc0: 0x0  nop
    ctx->pc = 0x118cc0u;
    // NOP
    // 0x118cc4: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118CC4u;
    {
        const bool branch_taken_0x118cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118cc4) {
            ctx->pc = 0x118CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118CC4u;
            // 0x118cc8: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118CB0u;
            return;
        }
    }
    ctx->pc = 0x118CCCu;
    // 0x118ccc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x118cccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118cd0u;
}
