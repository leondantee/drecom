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

// Function: entry_0011b688
// Address: 0x11b688 - 0x11b6b8
void entry_0011b688_0x11b688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b688_0x11b688");
#endif

    ctx->pc = 0x11b688u;

label_11b688:
    // 0x11b688: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x11b688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11b68c: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x11b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b690: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x11b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x11b694: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x11b694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x11b698: 0x80970000  lb          $s7, 0x0($a0)
    ctx->pc = 0x11b698u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b69c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11b6a0: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x11b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x11b6a4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x11b6a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11b6a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B6A8u;
    {
        const bool branch_taken_0x11b6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6A8u;
        // 0x11b6ac: 0xafa401ec  sw          $a0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6a8) {
            ctx->pc = 0x11B688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b688;
        }
    }
    ctx->pc = 0x11B6B0u;
    // 0x11b6b0: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x11B6B0u;
    {
        const bool branch_taken_0x11b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6B0u;
        // 0x11b6b4: 0xafb001f4  sw          $s0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6b0) {
            ctx->pc = 0x11B560u;
            return;
        }
    }
    ctx->pc = 0x11B6B8u;
}
