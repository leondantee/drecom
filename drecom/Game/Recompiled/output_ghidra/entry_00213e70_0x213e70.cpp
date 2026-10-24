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

// Function: entry_00213e70
// Address: 0x213e70 - 0x213e8c
void entry_00213e70_0x213e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213e70_0x213e70");
#endif

    ctx->pc = 0x213e70u;

    // 0x213e70: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x213e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213e74: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x213e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x213e78: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x213e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x213e7c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x213e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x213e80: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x213e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x213e84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x213E84u;
    {
        const bool branch_taken_0x213e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E84u;
        // 0x213e88: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e84) {
            ctx->pc = 0x213EB0u;
            return;
        }
    }
    ctx->pc = 0x213E8Cu;
}
