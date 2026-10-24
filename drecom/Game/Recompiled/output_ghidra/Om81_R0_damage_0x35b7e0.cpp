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

// Function: Om81_R0_damage
// Address: 0x35b7e0 - 0x35b828
void Om81_R0_damage_0x35b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om81_R0_damage_0x35b7e0");
#endif

    switch (ctx->pc) {
        case 0x35b7e0u: goto label_35b7e0;
        case 0x35b7e4u: goto label_35b7e4;
        case 0x35b7e8u: goto label_35b7e8;
        case 0x35b7ecu: goto label_35b7ec;
        case 0x35b7f0u: goto label_35b7f0;
        case 0x35b7f4u: goto label_35b7f4;
        case 0x35b7f8u: goto label_35b7f8;
        case 0x35b7fcu: goto label_35b7fc;
        case 0x35b800u: goto label_35b800;
        case 0x35b804u: goto label_35b804;
        case 0x35b808u: goto label_35b808;
        case 0x35b80cu: goto label_35b80c;
        case 0x35b810u: goto label_35b810;
        case 0x35b814u: goto label_35b814;
        case 0x35b818u: goto label_35b818;
        case 0x35b81cu: goto label_35b81c;
        case 0x35b820u: goto label_35b820;
        case 0x35b824u: goto label_35b824;
        default: break;
    }

    ctx->pc = 0x35b7e0u;

label_35b7e0:
    // 0x35b7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35b7e4:
    // 0x35b7e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35b7e8:
    // 0x35b7e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35b7ec:
    // 0x35b7ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35b7f0:
    // 0x35b7f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35b7f4:
    // 0x35b7f4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35b7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35b7f8:
    // 0x35b7f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35b7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35b7fc:
    // 0x35b7fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35b800:
    // 0x35b800: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35b800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35b804:
    // 0x35b804: 0x2442a9f8  addiu       $v0, $v0, -0x5608
    ctx->pc = 0x35b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945272));
label_35b808:
    // 0x35b808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35b80c:
    // 0x35b80c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35b810:
    // 0x35b810: 0x40f809  jalr        $v0
label_35b814:
    if (ctx->pc == 0x35B814u) {
        ctx->pc = 0x35B818u;
        goto label_35b818;
    }
    ctx->pc = 0x35B810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35B818u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B810u, 0x35B818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35B818u;
label_35b818:
    // 0x35b818: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35b818u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35b81c:
    // 0x35b81c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b81cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35b820:
    // 0x35b820: 0x3e00008  jr          $ra
label_35b824:
    if (ctx->pc == 0x35B824u) {
        ctx->pc = 0x35B828u;
        goto label_fallthrough_0x35b820;
    }
    ctx->pc = 0x35B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35b820:
    ctx->pc = 0x35B828u;
}
