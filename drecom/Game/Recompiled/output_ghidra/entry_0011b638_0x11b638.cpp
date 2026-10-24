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

// Function: entry_0011b638
// Address: 0x11b638 - 0x11b660
void entry_0011b638_0x11b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b638_0x11b638");
#endif

    ctx->pc = 0x11b638u;

label_11b638:
    // 0x11b638: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x11b638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x11b63c: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x11b63cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x11b640: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x11b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b644: 0x80570000  lb          $s7, 0x0($v0)
    ctx->pc = 0x11b644u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b64c: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x11b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x11b650: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x11b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x11b654: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x11b654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11b658: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B658u;
    {
        const bool branch_taken_0x11b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B658u;
        // 0x11b65c: 0x2031018  mult        $v0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b658) {
            ctx->pc = 0x11B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b638;
        }
    }
    ctx->pc = 0x11B660u;
}
