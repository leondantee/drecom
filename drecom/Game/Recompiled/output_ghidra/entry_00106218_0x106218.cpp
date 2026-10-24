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

// Function: entry_00106218
// Address: 0x106218 - 0x106244
void entry_00106218_0x106218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106218_0x106218");
#endif

    switch (ctx->pc) {
        case 0x106234u: goto label_106234;
        default: break;
    }

    ctx->pc = 0x106218u;

    // 0x106218: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x106218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10621c: 0x266341f8  addiu       $v1, $s3, 0x41F8
    ctx->pc = 0x10621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16888));
    // 0x106220: 0x8c620280  lw          $v0, 0x280($v1)
    ctx->pc = 0x106220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x106224: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x106224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x106228: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x106228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10622c: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x10622Cu;
    SET_GPR_U32(ctx, 31, 0x106234u);
    ctx->pc = 0x106230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10622Cu;
    // 0x106230: 0xac40013c  sw          $zero, 0x13C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x10622Cu, 0x106234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106234u;
label_106234:
    // 0x106234: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106234u;
    {
        const bool branch_taken_0x106234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106234u;
        // 0x106238: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106234) {
            ctx->pc = 0x106244u;
            return;
        }
    }
    ctx->pc = 0x10623Cu;
    // 0x10623c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x10623Cu;
    {
        const bool branch_taken_0x10623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10623Cu;
        // 0x106240: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10623c) {
            ctx->pc = 0x106384u;
            return;
        }
    }
    ctx->pc = 0x106244u;
}
