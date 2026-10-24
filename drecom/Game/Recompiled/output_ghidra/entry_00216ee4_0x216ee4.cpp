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

// Function: entry_00216ee4
// Address: 0x216ee4 - 0x216ef8
void entry_00216ee4_0x216ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216ee4_0x216ee4");
#endif

    ctx->pc = 0x216ee4u;

    // 0x216ee4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x216ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x216ee8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216EE8u;
    {
        const bool branch_taken_0x216ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EE8u;
        // 0x216eec: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ee8) {
            ctx->pc = 0x216EF8u;
            return;
        }
    }
    ctx->pc = 0x216EF0u;
    // 0x216ef0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x216ef0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216ef4: 0x8c54aaec  lw          $s4, -0x5514($v0)
    ctx->pc = 0x216ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945516)));
    ctx->pc = 0x216ef8u;
}
