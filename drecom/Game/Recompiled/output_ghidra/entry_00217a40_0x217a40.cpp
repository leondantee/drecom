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

// Function: entry_00217a40
// Address: 0x217a40 - 0x217a54
void entry_00217a40_0x217a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217a40_0x217a40");
#endif

    ctx->pc = 0x217a40u;

    // 0x217a40: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217A40u;
    {
        const bool branch_taken_0x217a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x217a40) {
            ctx->pc = 0x217A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217A40u;
            // 0x217a44: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217A54u;
            return;
        }
    }
    ctx->pc = 0x217A48u;
    // 0x217a48: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x217a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x217a4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x217A4Cu;
    {
        const bool branch_taken_0x217a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A4Cu;
        // 0x217a50: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a4c) {
            ctx->pc = 0x217A9Cu;
            return;
        }
    }
    ctx->pc = 0x217A54u;
}
