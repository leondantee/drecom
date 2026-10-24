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

// Function: caseD_73
// Address: 0x11b9f4 - 0x11ba08
void caseD_73_0x11b9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_73_0x11b9f4");
#endif

    ctx->pc = 0x11b9f4u;

    // 0x11b9f4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b9f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b9f8: 0x8e93fff8  lw          $s3, -0x8($s4)
    ctx->pc = 0x11b9f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b9fc: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B9FCu;
    {
        const bool branch_taken_0x11b9fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9FCu;
        // 0x11ba00: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9fc) {
            ctx->pc = 0x11BA08u;
            return;
        }
    }
    ctx->pc = 0x11BA04u;
    // 0x11ba04: 0x2453db68  addiu       $s3, $v0, -0x2498
    ctx->pc = 0x11ba04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957928));
    ctx->pc = 0x11ba08u;
}
