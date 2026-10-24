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

// Function: entry_0011f9b8
// Address: 0x11f9b8 - 0x11f9c8
void entry_0011f9b8_0x11f9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f9b8_0x11f9b8");
#endif

    ctx->pc = 0x11f9b8u;

    // 0x11f9b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F9B8u;
    {
        const bool branch_taken_0x11f9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9B8u;
        // 0x11f9bc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9b8) {
            ctx->pc = 0x11F9C8u;
            return;
        }
    }
    ctx->pc = 0x11F9C0u;
    // 0x11f9c0: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x11f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x11f9c4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x11f9c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->pc = 0x11f9c8u;
}
