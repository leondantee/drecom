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

// Function: entry_0011f704
// Address: 0x11f704 - 0x11f71c
void entry_0011f704_0x11f704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f704_0x11f704");
#endif

    ctx->pc = 0x11f704u;

    // 0x11f704: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F704u;
    {
        const bool branch_taken_0x11f704 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F704u;
        // 0x11f708: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f704) {
            ctx->pc = 0x11F71Cu;
            return;
        }
    }
    ctx->pc = 0x11F70Cu;
    // 0x11f70c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11f710: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x11f710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x11f714: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11F714u;
    {
        const bool branch_taken_0x11f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F714u;
        // 0x11f718: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f714) {
            ctx->pc = 0x11F72Cu;
            return;
        }
    }
    ctx->pc = 0x11F71Cu;
}
