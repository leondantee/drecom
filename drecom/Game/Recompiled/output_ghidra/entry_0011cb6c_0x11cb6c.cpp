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

// Function: entry_0011cb6c
// Address: 0x11cb6c - 0x11cb7c
void entry_0011cb6c_0x11cb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cb6c_0x11cb6c");
#endif

    ctx->pc = 0x11cb6cu;

    // 0x11cb6c: 0x8e220e20  lw          $v0, 0xE20($s1)
    ctx->pc = 0x11cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3616)));
    // 0x11cb70: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x11CB70u;
    {
        const bool branch_taken_0x11cb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cb70) {
            ctx->pc = 0x11CB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CB70u;
            // 0x11cb74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CB7Cu;
            return;
        }
    }
    ctx->pc = 0x11CB78u;
    // 0x11cb78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11cb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11cb7cu;
}
