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

// Function: entry_001004b4
// Address: 0x1004b4 - 0x1004cc
void entry_001004b4_0x1004b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001004b4_0x1004b4");
#endif

    ctx->pc = 0x1004b4u;

    // 0x1004b4: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x1004b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x1004b8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1004b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1004bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1004bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1004c0: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x1004c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1004c4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1004C4u;
    {
        const bool branch_taken_0x1004c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1004C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004C4u;
        // 0x1004c8: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004c4) {
            ctx->pc = 0x100530u;
            return;
        }
    }
    ctx->pc = 0x1004CCu;
}
