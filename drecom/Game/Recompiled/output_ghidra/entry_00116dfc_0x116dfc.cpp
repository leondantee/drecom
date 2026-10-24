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

// Function: entry_00116dfc
// Address: 0x116dfc - 0x116e14
void entry_00116dfc_0x116dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116dfc_0x116dfc");
#endif

    ctx->pc = 0x116dfcu;

    // 0x116dfc: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x116dfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x116e00: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116E00u;
    {
        const bool branch_taken_0x116e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x116E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E00u;
        // 0x116e04: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e00) {
            ctx->pc = 0x116DF0u;
            return;
        }
    }
    ctx->pc = 0x116E08u;
    // 0x116e08: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x116e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116e0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116E0Cu;
    {
        const bool branch_taken_0x116e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E0Cu;
        // 0x116e10: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e0c) {
            ctx->pc = 0x116E4Cu;
            return;
        }
    }
    ctx->pc = 0x116E14u;
}
