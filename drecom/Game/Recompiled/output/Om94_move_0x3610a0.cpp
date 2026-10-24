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

// Function: Om94_move
// Address: 0x3610a0 - 0x3610f8
void Om94_move_0x3610a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om94_move_0x3610a0");
#endif

    switch (ctx->pc) {
        case 0x3610a0u: goto label_3610a0;
        case 0x3610a4u: goto label_3610a4;
        case 0x3610a8u: goto label_3610a8;
        case 0x3610acu: goto label_3610ac;
        case 0x3610b0u: goto label_3610b0;
        case 0x3610b4u: goto label_3610b4;
        case 0x3610b8u: goto label_3610b8;
        case 0x3610bcu: goto label_3610bc;
        case 0x3610c0u: goto label_3610c0;
        case 0x3610c4u: goto label_3610c4;
        case 0x3610c8u: goto label_3610c8;
        case 0x3610ccu: goto label_3610cc;
        case 0x3610d0u: goto label_3610d0;
        case 0x3610d4u: goto label_3610d4;
        case 0x3610d8u: goto label_3610d8;
        case 0x3610dcu: goto label_3610dc;
        case 0x3610e0u: goto label_3610e0;
        case 0x3610e4u: goto label_3610e4;
        case 0x3610e8u: goto label_3610e8;
        case 0x3610ecu: goto label_3610ec;
        case 0x3610f0u: goto label_3610f0;
        case 0x3610f4u: goto label_3610f4;
        default: break;
    }

    ctx->pc = 0x3610a0u;

label_3610a0:
    // 0x3610a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3610a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3610a4:
    // 0x3610a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3610a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_3610a8:
    // 0x3610a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3610a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3610ac:
    // 0x3610ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3610acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_3610b0:
    // 0x3610b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3610b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_3610b4:
    // 0x3610b4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x3610b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_3610b8:
    // 0x3610b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3610b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3610bc:
    // 0x3610bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3610bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3610c0:
    // 0x3610c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3610c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3610c4:
    // 0x3610c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3610c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3610c8:
    // 0x3610c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3610c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3610cc:
    // 0x3610cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3610ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3610d0:
    // 0x3610d0: 0x2442ac60  addiu       $v0, $v0, -0x53A0
    ctx->pc = 0x3610d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945888));
label_3610d4:
    // 0x3610d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3610d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3610d8:
    // 0x3610d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3610d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3610dc:
    // 0x3610dc: 0x40f809  jalr        $v0
label_3610e0:
    if (ctx->pc == 0x3610E0u) {
        ctx->pc = 0x3610E4u;
        goto label_3610e4;
    }
    ctx->pc = 0x3610DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3610E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3610DCu, 0x3610E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3610E4u;
label_3610e4:
    // 0x3610e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3610e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3610e8:
    // 0x3610e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3610e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3610ec:
    // 0x3610ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3610ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3610f0:
    // 0x3610f0: 0x3e00008  jr          $ra
label_3610f4:
    if (ctx->pc == 0x3610F4u) {
        ctx->pc = 0x3610F8u;
        goto label_fallthrough_0x3610f0;
    }
    ctx->pc = 0x3610F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3610F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3610f0:
    ctx->pc = 0x3610F8u;
}
