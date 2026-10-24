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

// Function: entry_00112e48
// Address: 0x112e48 - 0x112e54
void entry_00112e48_0x112e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112e48_0x112e48");
#endif

    ctx->pc = 0x112e48u;

    // 0x112e48: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x112e48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x112e4c: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x112E4Cu;
    {
        const bool branch_taken_0x112e4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x112E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E4Cu;
        // 0x112e50: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e4c) {
            ctx->pc = 0x112E28u;
            return;
        }
    }
    ctx->pc = 0x112E54u;
}
