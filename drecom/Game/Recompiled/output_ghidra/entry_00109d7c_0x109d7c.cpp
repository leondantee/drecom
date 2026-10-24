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

// Function: entry_00109d7c
// Address: 0x109d7c - 0x109da4
void entry_00109d7c_0x109d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109d7c_0x109d7c");
#endif

    switch (ctx->pc) {
        case 0x109da0u: goto label_109da0;
        default: break;
    }

    ctx->pc = 0x109d7cu;

    // 0x109d7c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x109d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x109d80: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x109d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x109d84: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x109d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x109d88: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x109d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x109d8c: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x109d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109d90: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x109D90u;
    {
        const bool branch_taken_0x109d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d90) {
            ctx->pc = 0x109D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109D90u;
            // 0x109d94: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109DA4u;
            return;
        }
    }
    ctx->pc = 0x109D98u;
    // 0x109d98: 0xc042430  jal         func_1090C0
    ctx->pc = 0x109D98u;
    SET_GPR_U32(ctx, 31, 0x109DA0u);
    ctx->pc = 0x109D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D98u;
    // 0x109d9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1090C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090C0u, 0x109D98u, 0x109DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DA0u;
label_109da0:
    // 0x109da0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x109da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x109da4u;
}
