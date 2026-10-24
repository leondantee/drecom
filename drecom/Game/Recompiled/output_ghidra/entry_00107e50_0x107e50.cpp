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

// Function: entry_00107e50
// Address: 0x107e50 - 0x107e64
void entry_00107e50_0x107e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e50_0x107e50");
#endif

    ctx->pc = 0x107e50u;

    // 0x107e50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x107e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107e54: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x107E54u;
    {
        const bool branch_taken_0x107e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E54u;
        // 0x107e58: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e54) {
            ctx->pc = 0x107E7Cu;
            return;
        }
    }
    ctx->pc = 0x107E5Cu;
    // 0x107e5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107E5Cu;
    {
        const bool branch_taken_0x107e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E5Cu;
        // 0x107e60: 0x8c503e44  lw          $s0, 0x3E44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e5c) {
            ctx->pc = 0x107E8Cu;
            return;
        }
    }
    ctx->pc = 0x107E64u;
}
