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

// Function: entry_00214838
// Address: 0x214838 - 0x214848
void entry_00214838_0x214838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214838_0x214838");
#endif

    ctx->pc = 0x214838u;

    // 0x214838: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214838u;
    {
        const bool branch_taken_0x214838 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x21483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214838u;
        // 0x21483c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214838) {
            ctx->pc = 0x214848u;
            return;
        }
    }
    ctx->pc = 0x214840u;
    // 0x214840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x214840u;
    {
        const bool branch_taken_0x214840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214840u;
        // 0x214844: 0x8671fff8  lh          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214840) {
            ctx->pc = 0x21484Cu;
            return;
        }
    }
    ctx->pc = 0x214848u;
}
