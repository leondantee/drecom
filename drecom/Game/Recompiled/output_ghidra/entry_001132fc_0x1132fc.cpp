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

// Function: entry_001132fc
// Address: 0x1132fc - 0x113308
void entry_001132fc_0x1132fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001132fc_0x1132fc");
#endif

    ctx->pc = 0x1132fcu;

    // 0x1132fc: 0x680000a  bltz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x1132FCu;
    {
        const bool branch_taken_0x1132fc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x113300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132FCu;
        // 0x113300: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132fc) {
            ctx->pc = 0x113328u;
            return;
        }
    }
    ctx->pc = 0x113304u;
    // 0x113304: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x113304u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->pc = 0x113308u;
}
