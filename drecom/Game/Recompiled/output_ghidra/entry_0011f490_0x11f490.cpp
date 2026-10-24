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

// Function: entry_0011f490
// Address: 0x11f490 - 0x11f4a0
void entry_0011f490_0x11f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f490_0x11f490");
#endif

    ctx->pc = 0x11f490u;

    // 0x11f490: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F490u;
    {
        const bool branch_taken_0x11f490 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x11f490) {
            ctx->pc = 0x11F494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F490u;
            // 0x11f494: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F4A4u;
            return;
        }
    }
    ctx->pc = 0x11F498u;
    // 0x11f498: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x11f498u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x11f49c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11f49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x11f4a0u;
}
