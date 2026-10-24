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

// Function: entry_0010a834
// Address: 0x10a834 - 0x10a86c
void entry_0010a834_0x10a834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a834_0x10a834");
#endif

    switch (ctx->pc) {
        case 0x10a840u: goto label_10a840;
        default: break;
    }

    ctx->pc = 0x10a834u;

    // 0x10a834: 0x8e643d04  lw          $a0, 0x3D04($s3)
    ctx->pc = 0x10a834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15620)));
    // 0x10a838: 0xc041fb0  jal         func_107EC0
    ctx->pc = 0x10A838u;
    SET_GPR_U32(ctx, 31, 0x10A840u);
    ctx->pc = 0x10A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A838u;
    // 0x10a83c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107EC0u, 0x10A838u, 0x10A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A840u;
label_10a840:
    // 0x10a840: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10a840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10a844: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10a844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a848: 0x8c433dac  lw          $v1, 0x3DAC($v0)
    ctx->pc = 0x10a848u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x10a84c: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A84Cu;
    {
        const bool branch_taken_0x10a84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A84Cu;
        // 0x10a850: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a84c) {
            ctx->pc = 0x10A86Cu;
            return;
        }
    }
    ctx->pc = 0x10A854u;
    // 0x10a854: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A854u;
    {
        const bool branch_taken_0x10a854 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A854u;
        // 0x10a858: 0x8e643d04  lw          $a0, 0x3D04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a854) {
            ctx->pc = 0x10A870u;
            return;
        }
    }
    ctx->pc = 0x10A85Cu;
    // 0x10a85c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10a860: 0x8c623d1c  lw          $v0, 0x3D1C($v1)
    ctx->pc = 0x10a860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D1Cu));
    // 0x10a864: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10a864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10a868: 0xac623d1c  sw          $v0, 0x3D1C($v1)
    ctx->pc = 0x10a868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15644), GPR_U32(ctx, 2));
    ctx->pc = 0x10a86cu;
}
