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

// Function: entry_0011a834
// Address: 0x11a834 - 0x11a844
void entry_0011a834_0x11a834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a834_0x11a834");
#endif

    ctx->pc = 0x11a834u;

    // 0x11a834: 0x8e220e20  lw          $v0, 0xE20($s1)
    ctx->pc = 0x11a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3616)));
    // 0x11a838: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A838u;
    {
        const bool branch_taken_0x11a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a838) {
            ctx->pc = 0x11A83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A838u;
            // 0x11a83c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A844u;
            return;
        }
    }
    ctx->pc = 0x11A840u;
    // 0x11a840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11a844u;
}
