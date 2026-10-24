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

// Function: Em00_R0_scenario
// Address: 0x2d55b0 - 0x2d55f8
void Em00_R0_scenario_0x2d55b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R0_scenario_0x2d55b0");
#endif

    switch (ctx->pc) {
        case 0x2d55b0u: goto label_2d55b0;
        case 0x2d55b4u: goto label_2d55b4;
        case 0x2d55b8u: goto label_2d55b8;
        case 0x2d55bcu: goto label_2d55bc;
        case 0x2d55c0u: goto label_2d55c0;
        case 0x2d55c4u: goto label_2d55c4;
        case 0x2d55c8u: goto label_2d55c8;
        case 0x2d55ccu: goto label_2d55cc;
        case 0x2d55d0u: goto label_2d55d0;
        case 0x2d55d4u: goto label_2d55d4;
        case 0x2d55d8u: goto label_2d55d8;
        case 0x2d55dcu: goto label_2d55dc;
        case 0x2d55e0u: goto label_2d55e0;
        case 0x2d55e4u: goto label_2d55e4;
        case 0x2d55e8u: goto label_2d55e8;
        case 0x2d55ecu: goto label_2d55ec;
        case 0x2d55f0u: goto label_2d55f0;
        case 0x2d55f4u: goto label_2d55f4;
        default: break;
    }

    ctx->pc = 0x2d55b0u;

label_2d55b0:
    // 0x2d55b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d55b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d55b4:
    // 0x2d55b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d55b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2d55b8:
    // 0x2d55b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2d55bc:
    // 0x2d55bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d55bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d55c0:
    // 0x2d55c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d55c4:
    // 0x2d55c4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2d55c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2d55c8:
    // 0x2d55c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d55c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d55cc:
    // 0x2d55cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d55d0:
    // 0x2d55d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2d55d4:
    // 0x2d55d4: 0x244286a8  addiu       $v0, $v0, -0x7958
    ctx->pc = 0x2d55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936232));
label_2d55d8:
    // 0x2d55d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d55dc:
    // 0x2d55dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d55e0:
    // 0x2d55e0: 0x40f809  jalr        $v0
label_2d55e4:
    if (ctx->pc == 0x2D55E4u) {
        ctx->pc = 0x2D55E8u;
        goto label_2d55e8;
    }
    ctx->pc = 0x2D55E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D55E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D55E0u, 0x2D55E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D55E8u;
label_2d55e8:
    // 0x2d55e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d55e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d55ec:
    // 0x2d55ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d55ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d55f0:
    // 0x2d55f0: 0x3e00008  jr          $ra
label_2d55f4:
    if (ctx->pc == 0x2D55F4u) {
        ctx->pc = 0x2D55F8u;
        goto label_fallthrough_0x2d55f0;
    }
    ctx->pc = 0x2D55F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D55F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d55f0:
    ctx->pc = 0x2D55F8u;
}
