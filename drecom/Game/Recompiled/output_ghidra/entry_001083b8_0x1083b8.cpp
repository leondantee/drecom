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

// Function: entry_001083b8
// Address: 0x1083b8 - 0x1083d0
void entry_001083b8_0x1083b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001083b8_0x1083b8");
#endif

    ctx->pc = 0x1083b8u;

    // 0x1083b8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1083B8u;
    {
        const bool branch_taken_0x1083b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1083BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083B8u;
        // 0x1083bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083b8) {
            ctx->pc = 0x1083E4u;
            return;
        }
    }
    ctx->pc = 0x1083C0u;
    // 0x1083c0: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1083c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1083c4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1083c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x1083c8: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1083c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1083cc: 0x24a5c828  addiu       $a1, $a1, -0x37D8
    ctx->pc = 0x1083ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953000));
    ctx->pc = 0x1083d0u;
}
