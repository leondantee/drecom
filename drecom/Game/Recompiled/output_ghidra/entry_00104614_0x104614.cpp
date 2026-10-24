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

// Function: entry_00104614
// Address: 0x104614 - 0x104630
void entry_00104614_0x104614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104614_0x104614");
#endif

    ctx->pc = 0x104614u;

    // 0x104614: 0x16620029  bne         $s3, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x104614u;
    {
        const bool branch_taken_0x104614 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x104618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104614u;
        // 0x104618: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104614) {
            ctx->pc = 0x1046BCu;
            return;
        }
    }
    ctx->pc = 0x10461Cu;
    // 0x10461c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x10461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x104620: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104620u;
    {
        const bool branch_taken_0x104620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104620u;
        // 0x104624: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104620) {
            ctx->pc = 0x104630u;
            return;
        }
    }
    ctx->pc = 0x104628u;
    // 0x104628: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104628u;
    {
        const bool branch_taken_0x104628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104628u;
        // 0x10462c: 0x8c443c1c  lw          $a0, 0x3C1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104628) {
            ctx->pc = 0x104638u;
            return;
        }
    }
    ctx->pc = 0x104630u;
}
