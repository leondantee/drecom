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

// Function: entry_002146d0
// Address: 0x2146d0 - 0x2146f0
void entry_002146d0_0x2146d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002146d0_0x2146d0");
#endif

    ctx->pc = 0x2146d0u;

    // 0x2146d0: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x2146d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x2146d4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2146D4u;
    {
        const bool branch_taken_0x2146d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2146D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146D4u;
        // 0x2146d8: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146d4) {
            ctx->pc = 0x2146F0u;
            return;
        }
    }
    ctx->pc = 0x2146DCu;
    // 0x2146dc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2146dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2146e0: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x2146e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x2146e4: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x2146e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x2146e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2146E8u;
    {
        const bool branch_taken_0x2146e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146E8u;
        // 0x2146ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146e8) {
            ctx->pc = 0x214718u;
            return;
        }
    }
    ctx->pc = 0x2146F0u;
}
