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

// Function: entry_002147c4
// Address: 0x2147c4 - 0x2147d8
void entry_002147c4_0x2147c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002147c4_0x2147c4");
#endif

    ctx->pc = 0x2147c4u;

    // 0x2147c4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2147c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2147c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2147c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2147cc: 0x11893a  dsrl        $s1, $s1, 4
    ctx->pc = 0x2147ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 4);
    // 0x2147d0: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2147D0u;
    {
        const bool branch_taken_0x2147d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147D0u;
        // 0x2147d4: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147d0) {
            ctx->pc = 0x2147B0u;
            return;
        }
    }
    ctx->pc = 0x2147D8u;
}
