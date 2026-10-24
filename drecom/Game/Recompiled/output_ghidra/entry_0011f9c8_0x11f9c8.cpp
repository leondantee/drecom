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

// Function: entry_0011f9c8
// Address: 0x11f9c8 - 0x11f9d8
void entry_0011f9c8_0x11f9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f9c8_0x11f9c8");
#endif

    ctx->pc = 0x11f9c8u;

    // 0x11f9c8: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x11f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x11f9cc: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F9CCu;
    {
        const bool branch_taken_0x11f9cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9CCu;
        // 0x11f9d0: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9cc) {
            ctx->pc = 0x11F9B8u;
            return;
        }
    }
    ctx->pc = 0x11F9D4u;
    // 0x11f9d4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x11f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x11f9d8u;
}
