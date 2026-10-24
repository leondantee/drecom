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

// Function: entry_001070a0
// Address: 0x1070a0 - 0x1070c0
void entry_001070a0_0x1070a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001070a0_0x1070a0");
#endif

    switch (ctx->pc) {
        case 0x1070bcu: goto label_1070bc;
        default: break;
    }

    ctx->pc = 0x1070a0u;

    // 0x1070a0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1070a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070a4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1070a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1070a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1070A8u;
    {
        const bool branch_taken_0x1070a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070A8u;
        // 0x1070ac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070a8) {
            ctx->pc = 0x1070C0u;
            return;
        }
    }
    ctx->pc = 0x1070B0u;
    // 0x1070b0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1070b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1070b4: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x1070B4u;
    SET_GPR_U32(ctx, 31, 0x1070BCu);
    ctx->pc = 0x1070B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070B4u;
    // 0x1070b8: 0x8c443bf4  lw          $a0, 0x3BF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x1070B4u, 0x1070BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070BCu;
label_1070bc:
    // 0x1070bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1070bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1070c0u;
}
