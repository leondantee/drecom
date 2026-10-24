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

// Function: entry_0010a404
// Address: 0x10a404 - 0x10a410
void entry_0010a404_0x10a404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a404_0x10a404");
#endif

    ctx->pc = 0x10a404u;

    // 0x10a404: 0x8c423c10  lw          $v0, 0x3C10($v0)
    ctx->pc = 0x10a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15376)));
    // 0x10a408: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A408u;
    {
        const bool branch_taken_0x10a408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a408) {
            ctx->pc = 0x10A40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A408u;
            // 0x10a40c: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A410u;
            return;
        }
    }
    ctx->pc = 0x10A410u;
}
