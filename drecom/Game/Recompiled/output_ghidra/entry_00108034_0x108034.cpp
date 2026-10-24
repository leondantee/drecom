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

// Function: entry_00108034
// Address: 0x108034 - 0x10804c
void entry_00108034_0x108034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108034_0x108034");
#endif

    ctx->pc = 0x108034u;

    // 0x108034: 0x8d2200e8  lw          $v0, 0xE8($t1)
    ctx->pc = 0x108034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 232)));
    // 0x108038: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108038u;
    {
        const bool branch_taken_0x108038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108038u;
        // 0x10803c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108038) {
            ctx->pc = 0x10804Cu;
            return;
        }
    }
    ctx->pc = 0x108040u;
    // 0x108040: 0x8ce23e34  lw          $v0, 0x3E34($a3)
    ctx->pc = 0x108040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 15924)));
    // 0x108044: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x108044u;
    {
        const bool branch_taken_0x108044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108044u;
        // 0x108048: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108044) {
            ctx->pc = 0x10807Cu;
            return;
        }
    }
    ctx->pc = 0x10804Cu;
}
