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

// Function: Om85_move
// Address: 0x3608a0 - 0x3608f8
void Om85_move_0x3608a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om85_move_0x3608a0");
#endif

    switch (ctx->pc) {
        case 0x3608a0u: goto label_3608a0;
        case 0x3608a4u: goto label_3608a4;
        case 0x3608a8u: goto label_3608a8;
        case 0x3608acu: goto label_3608ac;
        case 0x3608b0u: goto label_3608b0;
        case 0x3608b4u: goto label_3608b4;
        case 0x3608b8u: goto label_3608b8;
        case 0x3608bcu: goto label_3608bc;
        case 0x3608c0u: goto label_3608c0;
        case 0x3608c4u: goto label_3608c4;
        case 0x3608c8u: goto label_3608c8;
        case 0x3608ccu: goto label_3608cc;
        case 0x3608d0u: goto label_3608d0;
        case 0x3608d4u: goto label_3608d4;
        case 0x3608d8u: goto label_3608d8;
        case 0x3608dcu: goto label_3608dc;
        case 0x3608e0u: goto label_3608e0;
        case 0x3608e4u: goto label_3608e4;
        case 0x3608e8u: goto label_3608e8;
        case 0x3608ecu: goto label_3608ec;
        case 0x3608f0u: goto label_3608f0;
        case 0x3608f4u: goto label_3608f4;
        default: break;
    }

    ctx->pc = 0x3608a0u;

label_3608a0:
    // 0x3608a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3608a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3608a4:
    // 0x3608a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3608a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_3608a8:
    // 0x3608a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3608a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3608ac:
    // 0x3608ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3608acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_3608b0:
    // 0x3608b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3608b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_3608b4:
    // 0x3608b4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x3608b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_3608b8:
    // 0x3608b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3608b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3608bc:
    // 0x3608bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3608bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3608c0:
    // 0x3608c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3608c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3608c4:
    // 0x3608c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3608c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3608c8:
    // 0x3608c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3608c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3608cc:
    // 0x3608cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3608ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3608d0:
    // 0x3608d0: 0x2442ac20  addiu       $v0, $v0, -0x53E0
    ctx->pc = 0x3608d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945824));
label_3608d4:
    // 0x3608d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3608d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3608d8:
    // 0x3608d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3608d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3608dc:
    // 0x3608dc: 0x40f809  jalr        $v0
label_3608e0:
    if (ctx->pc == 0x3608E0u) {
        ctx->pc = 0x3608E4u;
        goto label_3608e4;
    }
    ctx->pc = 0x3608DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3608E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3608DCu, 0x3608E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3608E4u;
label_3608e4:
    // 0x3608e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3608e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3608e8:
    // 0x3608e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3608e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3608ec:
    // 0x3608ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3608ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3608f0:
    // 0x3608f0: 0x3e00008  jr          $ra
label_3608f4:
    if (ctx->pc == 0x3608F4u) {
        ctx->pc = 0x3608F8u;
        goto label_fallthrough_0x3608f0;
    }
    ctx->pc = 0x3608F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3608F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3608f0:
    ctx->pc = 0x3608F8u;
}
