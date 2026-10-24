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

// Function: entry_0010eacc
// Address: 0x10eacc - 0x10ead8
void entry_0010eacc_0x10eacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eacc_0x10eacc");
#endif

    ctx->pc = 0x10eaccu;

    // 0x10eacc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x10EACCu;
    {
        const bool branch_taken_0x10eacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EACCu;
        // 0x10ead0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eacc) {
            ctx->pc = 0x10EA40u;
            return;
        }
    }
    ctx->pc = 0x10EAD4u;
    // 0x10ead4: 0xae4045dc  sw          $zero, 0x45DC($s2)
    ctx->pc = 0x10ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17884), GPR_U32(ctx, 0));
    ctx->pc = 0x10ead8u;
}
