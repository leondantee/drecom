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

// Function: Em0b_R0_die
// Address: 0x1f70b0 - 0x1f70f8
void Em0b_R0_die_0x1f70b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R0_die_0x1f70b0");
#endif

    switch (ctx->pc) {
        case 0x1f70b0u: goto label_1f70b0;
        case 0x1f70b4u: goto label_1f70b4;
        case 0x1f70b8u: goto label_1f70b8;
        case 0x1f70bcu: goto label_1f70bc;
        case 0x1f70c0u: goto label_1f70c0;
        case 0x1f70c4u: goto label_1f70c4;
        case 0x1f70c8u: goto label_1f70c8;
        case 0x1f70ccu: goto label_1f70cc;
        case 0x1f70d0u: goto label_1f70d0;
        case 0x1f70d4u: goto label_1f70d4;
        case 0x1f70d8u: goto label_1f70d8;
        case 0x1f70dcu: goto label_1f70dc;
        case 0x1f70e0u: goto label_1f70e0;
        case 0x1f70e4u: goto label_1f70e4;
        case 0x1f70e8u: goto label_1f70e8;
        case 0x1f70ecu: goto label_1f70ec;
        case 0x1f70f0u: goto label_1f70f0;
        case 0x1f70f4u: goto label_1f70f4;
        default: break;
    }

    ctx->pc = 0x1f70b0u;

label_1f70b0:
    // 0x1f70b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f70b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f70b4:
    // 0x1f70b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1f70b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1f70b8:
    // 0x1f70b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1f70b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1f70bc:
    // 0x1f70bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f70bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1f70c0:
    // 0x1f70c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1f70c4:
    // 0x1f70c4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1f70c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1f70c8:
    // 0x1f70c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f70c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f70cc:
    // 0x1f70cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f70d0:
    // 0x1f70d0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f70d4:
    // 0x1f70d4: 0x24429ee0  addiu       $v0, $v0, -0x6120
    ctx->pc = 0x1f70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942432));
label_1f70d8:
    // 0x1f70d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f70dc:
    // 0x1f70dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f70e0:
    // 0x1f70e0: 0x40f809  jalr        $v0
label_1f70e4:
    if (ctx->pc == 0x1F70E4u) {
        ctx->pc = 0x1F70E8u;
        goto label_1f70e8;
    }
    ctx->pc = 0x1F70E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F70E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F70E0u, 0x1F70E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F70E8u;
label_1f70e8:
    // 0x1f70e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1f70e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f70ec:
    // 0x1f70ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f70ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f70f0:
    // 0x1f70f0: 0x3e00008  jr          $ra
label_1f70f4:
    if (ctx->pc == 0x1F70F4u) {
        ctx->pc = 0x1F70F8u;
        goto label_fallthrough_0x1f70f0;
    }
    ctx->pc = 0x1F70F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F70F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f70f0:
    ctx->pc = 0x1F70F8u;
}
