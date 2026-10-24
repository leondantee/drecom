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

// Function: entry_0010c090
// Address: 0x10c090 - 0x10c09c
void entry_0010c090_0x10c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c090_0x10c090");
#endif

    ctx->pc = 0x10c090u;

    // 0x10c090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c094: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C094u;
    {
        const bool branch_taken_0x10c094 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C094u;
        // 0x10c098: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c094) {
            ctx->pc = 0x10C0A8u;
            return;
        }
    }
    ctx->pc = 0x10C09Cu;
}
