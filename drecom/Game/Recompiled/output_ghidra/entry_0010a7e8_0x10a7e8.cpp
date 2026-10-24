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

// Function: entry_0010a7e8
// Address: 0x10a7e8 - 0x10a810
void entry_0010a7e8_0x10a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a7e8_0x10a7e8");
#endif

    switch (ctx->pc) {
        case 0x10a7f0u: goto label_10a7f0;
        case 0x10a808u: goto label_10a808;
        default: break;
    }

    ctx->pc = 0x10a7e8u;

    // 0x10a7e8: 0xc041fde  jal         func_107F78
    ctx->pc = 0x10A7E8u;
    SET_GPR_U32(ctx, 31, 0x10A7F0u);
    ctx->pc = 0x10A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7E8u;
    // 0x10a7ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F78u, 0x10A7E8u, 0x10A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A7F0u;
label_10a7f0:
    // 0x10a7f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A7F0u;
    {
        const bool branch_taken_0x10a7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7F0u;
        // 0x10a7f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7f0) {
            ctx->pc = 0x10A810u;
            return;
        }
    }
    ctx->pc = 0x10A7F8u;
    // 0x10a7f8: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x10a7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x10a7fc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a800: 0xc041f78  jal         func_107DE0
    ctx->pc = 0x10A800u;
    SET_GPR_U32(ctx, 31, 0x10A808u);
    ctx->pc = 0x10A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A800u;
    // 0x10a804: 0x8e643d04  lw          $a0, 0x3D04($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107DE0u, 0x10A800u, 0x10A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A808u;
label_10a808:
    // 0x10a808: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10A808u;
    {
        const bool branch_taken_0x10a808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A808u;
        // 0x10a80c: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a808) {
            ctx->pc = 0x10A814u;
            return;
        }
    }
    ctx->pc = 0x10A810u;
}
