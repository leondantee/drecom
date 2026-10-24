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

// Function: entry_00116d00
// Address: 0x116d00 - 0x116d0c
void entry_00116d00_0x116d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d00_0x116d00");
#endif

    ctx->pc = 0x116d00u;

    // 0x116d00: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x116d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x116d04: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116D04u;
    {
        const bool branch_taken_0x116d04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x116D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D04u;
        // 0x116d08: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d04) {
            ctx->pc = 0x116D28u;
            return;
        }
    }
    ctx->pc = 0x116D0Cu;
}
