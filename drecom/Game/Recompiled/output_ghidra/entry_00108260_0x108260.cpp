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

// Function: entry_00108260
// Address: 0x108260 - 0x108274
void entry_00108260_0x108260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108260_0x108260");
#endif

    ctx->pc = 0x108260u;

    // 0x108260: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108264: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108264u;
    {
        const bool branch_taken_0x108264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x108264) {
            ctx->pc = 0x108268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108264u;
            // 0x108268: 0x8e983e44  lw          $t8, 0x3E44($s4) (Delay Slot)
            SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108280u;
            return;
        }
    }
    ctx->pc = 0x10826Cu;
    // 0x10826c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10826Cu;
    {
        const bool branch_taken_0x10826c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10826Cu;
        // 0x108270: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10826c) {
            ctx->pc = 0x108284u;
            return;
        }
    }
    ctx->pc = 0x108274u;
}
