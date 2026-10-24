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

// Function: entry_00112b50
// Address: 0x112b50 - 0x112b78
void entry_00112b50_0x112b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b50_0x112b50");
#endif

    switch (ctx->pc) {
        case 0x112b70u: goto label_112b70;
        default: break;
    }

    ctx->pc = 0x112b50u;

    // 0x112b50: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x112b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x112b54: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x112B54u;
    {
        const bool branch_taken_0x112b54 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x112B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B54u;
        // 0x112b58: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b54) {
            ctx->pc = 0x112B78u;
            return;
        }
    }
    ctx->pc = 0x112B5Cu;
    // 0x112b5c: 0x8fa8023c  lw          $t0, 0x23C($sp)
    ctx->pc = 0x112b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x112b60: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x112b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x112b64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x112b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x112b68: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x112B68u;
    SET_GPR_U32(ctx, 31, 0x112B70u);
    ctx->pc = 0x112B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B68u;
    // 0x112b6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x112B68u, 0x112B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B70u;
label_112b70:
    // 0x112b70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112B70u;
    {
        const bool branch_taken_0x112b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B70u;
        // 0x112b74: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b70) {
            ctx->pc = 0x112B80u;
            return;
        }
    }
    ctx->pc = 0x112B78u;
}
