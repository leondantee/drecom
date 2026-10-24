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

// Function: entry_001169d0
// Address: 0x1169d0 - 0x1169f4
void entry_001169d0_0x1169d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001169d0_0x1169d0");
#endif

    ctx->pc = 0x1169d0u;

    // 0x1169d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1169D0u;
    {
        const bool branch_taken_0x1169d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169D0u;
        // 0x1169d4: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169d0) {
            ctx->pc = 0x1169F4u;
            return;
        }
    }
    ctx->pc = 0x1169D8u;
    // 0x1169d8: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x1169d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x1169dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1169dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1169e0: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1169e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1169e4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1169e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1169e8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1169e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1169ec: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1169ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1169f0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1169f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    ctx->pc = 0x1169f4u;
}
