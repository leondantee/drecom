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

// Function: entry_00214778
// Address: 0x214778 - 0x214788
void entry_00214778_0x214778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214778_0x214778");
#endif

    ctx->pc = 0x214778u;

    // 0x214778: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214778u;
    {
        const bool branch_taken_0x214778 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x21477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214778u;
        // 0x21477c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214778) {
            ctx->pc = 0x214788u;
            return;
        }
    }
    ctx->pc = 0x214780u;
    // 0x214780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x214780u;
    {
        const bool branch_taken_0x214780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214780u;
        // 0x214784: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214780) {
            ctx->pc = 0x21478Cu;
            return;
        }
    }
    ctx->pc = 0x214788u;
}
