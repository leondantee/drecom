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

// Function: entry_0011ea34
// Address: 0x11ea34 - 0x11ea4c
void entry_0011ea34_0x11ea34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ea34_0x11ea34");
#endif

    ctx->pc = 0x11ea34u;

    // 0x11ea34: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EA34u;
    {
        const bool branch_taken_0x11ea34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA34u;
        // 0x11ea38: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea34) {
            ctx->pc = 0x11EA4Cu;
            return;
        }
    }
    ctx->pc = 0x11EA3Cu;
    // 0x11ea3c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11ea40: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x11ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x11ea44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11EA44u;
    {
        const bool branch_taken_0x11ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA44u;
        // 0x11ea48: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea44) {
            ctx->pc = 0x11EA5Cu;
            return;
        }
    }
    ctx->pc = 0x11EA4Cu;
}
