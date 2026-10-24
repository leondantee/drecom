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

// Function: entry_0021493c
// Address: 0x21493c - 0x21495c
void entry_0021493c_0x21493c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021493c_0x21493c");
#endif

    ctx->pc = 0x21493cu;

    // 0x21493c: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x21493cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x214940: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x214940u;
    {
        const bool branch_taken_0x214940 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x214944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214940u;
        // 0x214944: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214940) {
            ctx->pc = 0x21495Cu;
            return;
        }
    }
    ctx->pc = 0x214948u;
    // 0x214948: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x214948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x21494c: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x21494cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x214950: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x214950u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x214954: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x214954u;
    {
        const bool branch_taken_0x214954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214954u;
        // 0x214958: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214954) {
            ctx->pc = 0x214998u;
            return;
        }
    }
    ctx->pc = 0x21495Cu;
}
