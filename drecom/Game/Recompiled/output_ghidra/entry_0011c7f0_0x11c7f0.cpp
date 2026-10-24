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

// Function: entry_0011c7f0
// Address: 0x11c7f0 - 0x11c82c
void entry_0011c7f0_0x11c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c7f0_0x11c7f0");
#endif

    switch (ctx->pc) {
        case 0x11c824u: goto label_11c824;
        default: break;
    }

    ctx->pc = 0x11c7f0u;

    // 0x11c7f0: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x11c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11c7f4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x11c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x11c7f8: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x11c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11c7fc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x11c7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11c800: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x11c800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x11c804: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x11c804u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x11c808: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c80c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x11c80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x11c810: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C810u;
    {
        const bool branch_taken_0x11c810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C810u;
        // 0x11c814: 0xafa601f0  sw          $a2, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c810) {
            ctx->pc = 0x11C82Cu;
            return;
        }
    }
    ctx->pc = 0x11C818u;
    // 0x11c818: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11c818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x11c81c: 0xc046c84  jal         func_11B210
    ctx->pc = 0x11C81Cu;
    SET_GPR_U32(ctx, 31, 0x11C824u);
    ctx->pc = 0x11C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C81Cu;
    // 0x11c820: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B210u, 0x11C81Cu, 0x11C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C824u;
label_11c824:
    // 0x11c824: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11C824u;
    {
        const bool branch_taken_0x11c824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C824u;
        // 0x11c828: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c824) {
            ctx->pc = 0x11C85Cu;
            return;
        }
    }
    ctx->pc = 0x11C82Cu;
}
