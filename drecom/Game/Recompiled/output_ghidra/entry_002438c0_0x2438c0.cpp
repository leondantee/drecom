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

// Function: entry_002438c0
// Address: 0x2438c0 - 0x243940
void entry_002438c0_0x2438c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002438c0_0x2438c0");
#endif

    switch (ctx->pc) {
        case 0x2438ecu: goto label_2438ec;
        case 0x243918u: goto label_243918;
        default: break;
    }

    ctx->pc = 0x2438c0u;

label_2438c0:
    // 0x2438c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2438c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2438c4:
    // 0x2438c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2438c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2438c8:
    // 0x2438c8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2438c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2438cc:
    // 0x2438cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2438ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2438d0:
    // 0x2438d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2438d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2438d4:
    // 0x2438d4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2438d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2438d8:
    // 0x2438d8: 0x2442b390  addiu       $v0, $v0, -0x4C70
    ctx->pc = 0x2438d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947728));
label_2438dc:
    // 0x2438dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2438dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2438e0:
    // 0x2438e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2438e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2438e4:
    // 0x2438e4: 0x40f809  jalr        $v0
label_2438e8:
    if (ctx->pc == 0x2438E8u) {
        ctx->pc = 0x2438ECu;
        goto label_2438ec;
    }
    ctx->pc = 0x2438E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2438ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2438E4u, 0x2438ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2438ECu;
label_2438ec:
    // 0x2438ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2438ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2438f0:
    // 0x2438f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2438f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2438f4:
    // 0x2438f4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2438f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2438f8:
    // 0x2438f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2438f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2438fc:
    // 0x2438fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2438fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_243900:
    // 0x243900: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x243900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_243904:
    // 0x243904: 0x2442b3d0  addiu       $v0, $v0, -0x4C30
    ctx->pc = 0x243904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947792));
label_243908:
    // 0x243908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24390c:
    // 0x24390c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_243910:
    // 0x243910: 0x40f809  jalr        $v0
label_243914:
    if (ctx->pc == 0x243914u) {
        ctx->pc = 0x243918u;
        goto label_243918;
    }
    ctx->pc = 0x243910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243918u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243910u, 0x243918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243918u;
label_243918:
    // 0x243918: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_24391c:
    // 0x24391c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243920:
    // 0x243920: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x243920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_243924:
    // 0x243924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_243928:
    if (ctx->pc == 0x243928u) {
        ctx->pc = 0x24392Cu;
        goto label_24392c;
    }
    ctx->pc = 0x243924u;
    {
        const bool branch_taken_0x243924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243924) {
            ctx->pc = 0x243940u;
            return;
        }
    }
    ctx->pc = 0x24392Cu;
label_24392c:
    // 0x24392c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_243930:
    // 0x243930: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x243930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_243934:
    // 0x243934: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x243934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
label_243938:
    // 0x243938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24393c:
    // 0x24393c: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x24393cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x243940u;
}
