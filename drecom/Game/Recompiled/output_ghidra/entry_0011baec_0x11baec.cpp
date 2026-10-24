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

// Function: entry_0011baec
// Address: 0x11baec - 0x11bb00
void entry_0011baec_0x11baec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011baec_0x11baec");
#endif

    ctx->pc = 0x11baecu;

    // 0x11baec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BAECu;
    {
        const bool branch_taken_0x11baec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAECu;
        // 0x11baf0: 0x27b301bc  addiu       $s3, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baec) {
            ctx->pc = 0x11BB00u;
            return;
        }
    }
    ctx->pc = 0x11BAF4u;
    // 0x11baf4: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x11baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x11baf8: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x11BAF8u;
    {
        const bool branch_taken_0x11baf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAF8u;
        // 0x11bafc: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baf8) {
            ctx->pc = 0x11BC30u;
            return;
        }
    }
    ctx->pc = 0x11BB00u;
}
