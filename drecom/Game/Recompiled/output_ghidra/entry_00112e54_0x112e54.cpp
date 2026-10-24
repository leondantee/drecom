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

// Function: entry_00112e54
// Address: 0x112e54 - 0x112e78
void entry_00112e54_0x112e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112e54_0x112e54");
#endif

    ctx->pc = 0x112e54u;

    // 0x112e54: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x112e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112e58: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x112E58u;
    {
        const bool branch_taken_0x112e58 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x112E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E58u;
        // 0x112e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e58) {
            ctx->pc = 0x112EA4u;
            return;
        }
    }
    ctx->pc = 0x112E60u;
    // 0x112e60: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112E60u;
    {
        const bool branch_taken_0x112e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x112E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E60u;
        // 0x112e64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e60) {
            ctx->pc = 0x112E78u;
            return;
        }
    }
    ctx->pc = 0x112E68u;
    // 0x112e68: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x112E68u;
    {
        const bool branch_taken_0x112e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x112E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E68u;
        // 0x112e6c: 0x8fa6024c  lw          $a2, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e68) {
            ctx->pc = 0x112E84u;
            return;
        }
    }
    ctx->pc = 0x112E70u;
    // 0x112e70: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x112E70u;
    {
        const bool branch_taken_0x112e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112e70) {
            ctx->pc = 0x112EACu;
            return;
        }
    }
    ctx->pc = 0x112E78u;
}
