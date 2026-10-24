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

// Function: entry_0014fecc
// Address: 0x14fecc - 0x14ff14
void entry_0014fecc_0x14fecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fecc_0x14fecc");
#endif

    ctx->pc = 0x14feccu;

label_14fecc:
    // 0x14fecc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14feccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14fed0:
    // 0x14fed0: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x14fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_14fed4:
    // 0x14fed4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_14fed8:
    // 0x14fed8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14fed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14fedc:
    // 0x14fedc: 0x14400181  bnez        $v0, . + 4 + (0x181 << 2)
label_14fee0:
    if (ctx->pc == 0x14FEE0u) {
        ctx->pc = 0x14FEE4u;
        goto label_14fee4;
    }
    ctx->pc = 0x14FEDCu;
    {
        const bool branch_taken_0x14fedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fedc) {
            ctx->pc = 0x1504E4u;
            return;
        }
    }
    ctx->pc = 0x14FEE4u;
label_14fee4:
    // 0x14fee4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14fee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14fee8:
    // 0x14fee8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14fee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14feec:
    // 0x14feec: 0x2c81000c  sltiu       $at, $a0, 0xC
    ctx->pc = 0x14feecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_14fef0:
    // 0x14fef0: 0x10200175  beqz        $at, . + 4 + (0x175 << 2)
label_14fef4:
    if (ctx->pc == 0x14FEF4u) {
        ctx->pc = 0x14FEF8u;
        goto label_14fef8;
    }
    ctx->pc = 0x14FEF0u;
    {
        const bool branch_taken_0x14fef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fef0) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x14FEF8u;
label_14fef8:
    // 0x14fef8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x14fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_14fefc:
    // 0x14fefc: 0x2443e960  addiu       $v1, $v0, -0x16A0
    ctx->pc = 0x14fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
label_14ff00:
    // 0x14ff00: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x14ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14ff04:
    // 0x14ff04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ff08:
    // 0x14ff08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14ff0c:
    // 0x14ff0c: 0x400008  jr          $v0
label_14ff10:
    if (ctx->pc == 0x14FF10u) {
        ctx->pc = 0x14FF14u;
        goto label_fallthrough_0x14ff0c;
    }
    ctx->pc = 0x14FF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FF0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x14ff0c:
    ctx->pc = 0x14FF14u;
}
