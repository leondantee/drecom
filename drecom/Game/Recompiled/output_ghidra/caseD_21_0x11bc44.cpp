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

// Function: caseD_21
// Address: 0x11bc44 - 0x11bc54
void caseD_21_0x11bc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_21_0x11bc44");
#endif

    ctx->pc = 0x11bc44u;

    // 0x11bc44: 0x12e002fc  beqz        $s7, . + 4 + (0x2FC << 2)
    ctx->pc = 0x11BC44u;
    {
        const bool branch_taken_0x11bc44 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC44u;
        // 0x11bc48: 0x27b30060  addiu       $s3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc44) {
            ctx->pc = 0x11C838u;
            return;
        }
    }
    ctx->pc = 0x11BC4Cu;
    // 0x11bc4c: 0xa3b70060  sb          $s7, 0x60($sp)
    ctx->pc = 0x11bc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 23));
    // 0x11bc50: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x11bc50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11bc54u;
}
