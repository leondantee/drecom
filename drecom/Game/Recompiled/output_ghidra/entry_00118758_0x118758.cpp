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

// Function: entry_00118758
// Address: 0x118758 - 0x118788
void entry_00118758_0x118758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118758_0x118758");
#endif

    switch (ctx->pc) {
        case 0x118760u: goto label_118760;
        default: break;
    }

    ctx->pc = 0x118758u;

    // 0x118758: 0xc045fc4  jal         func_117F10
    ctx->pc = 0x118758u;
    SET_GPR_U32(ctx, 31, 0x118760u);
    ctx->pc = 0x11875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118758u;
    // 0x11875c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117F10u, 0x118758u, 0x118760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118760u;
label_118760:
    // 0x118760: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x118760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x118764: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x118764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x118768: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x118768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x11876c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x11876cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x118770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118770u;
    {
        const bool branch_taken_0x118770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118770u;
        // 0x118774: 0x2231023  subu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118770) {
            ctx->pc = 0x118788u;
            return;
        }
    }
    ctx->pc = 0x118778u;
    // 0x118778: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11877c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11877cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x118780: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x118780u;
    {
        const bool branch_taken_0x118780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118780u;
        // 0x118784: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118780) {
            ctx->pc = 0x118794u;
            return;
        }
    }
    ctx->pc = 0x118788u;
}
