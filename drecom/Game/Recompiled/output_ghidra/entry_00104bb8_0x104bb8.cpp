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

// Function: entry_00104bb8
// Address: 0x104bb8 - 0x104be8
void entry_00104bb8_0x104bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104bb8_0x104bb8");
#endif

    ctx->pc = 0x104bb8u;

    // 0x104bb8: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x104bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104bbc: 0x26a541f8  addiu       $a1, $s5, 0x41F8
    ctx->pc = 0x104bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16888));
    // 0x104bc0: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x104bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104bc4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x104bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x104bc8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x104bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x104bcc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x104BCCu;
    {
        const bool branch_taken_0x104bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BCCu;
        // 0x104bd0: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bcc) {
            ctx->pc = 0x104BF0u;
            return;
        }
    }
    ctx->pc = 0x104BD4u;
    // 0x104bd4: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x104bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
    // 0x104bd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x104BD8u;
    {
        const bool branch_taken_0x104bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BD8u;
        // 0x104bdc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bd8) {
            ctx->pc = 0x104BE8u;
            return;
        }
    }
    ctx->pc = 0x104BE0u;
    // 0x104be0: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x104BE0u;
    SET_GPR_U32(ctx, 31, 0x104BE8u);
    ctx->pc = 0x104BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BE0u;
    // 0x104be4: 0x2484c648  addiu       $a0, $a0, -0x39B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x104BE0u, 0x104BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BE8u;
}
