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

// Function: entry_00116d14
// Address: 0x116d14 - 0x116d24
void entry_00116d14_0x116d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d14_0x116d14");
#endif

    ctx->pc = 0x116d14u;

    // 0x116d14: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x116D14u;
    {
        const bool branch_taken_0x116d14 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x116D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D14u;
        // 0x116d18: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d14) {
            ctx->pc = 0x116D3Cu;
            return;
        }
    }
    ctx->pc = 0x116D1Cu;
    // 0x116d1c: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116D1Cu;
    {
        const bool branch_taken_0x116d1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x116D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D1Cu;
        // 0x116d20: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d1c) {
            ctx->pc = 0x116D34u;
            return;
        }
    }
    ctx->pc = 0x116D24u;
}
