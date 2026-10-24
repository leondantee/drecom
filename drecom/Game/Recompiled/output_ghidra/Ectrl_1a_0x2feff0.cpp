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

// Function: Ectrl_1a
// Address: 0x2feff0 - 0x2ff034
void Ectrl_1a_0x2feff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_1a_0x2feff0");
#endif

    switch (ctx->pc) {
        case 0x2feff0u: goto label_2feff0;
        case 0x2feff4u: goto label_2feff4;
        case 0x2feff8u: goto label_2feff8;
        case 0x2feffcu: goto label_2feffc;
        case 0x2ff000u: goto label_2ff000;
        case 0x2ff004u: goto label_2ff004;
        case 0x2ff008u: goto label_2ff008;
        case 0x2ff00cu: goto label_2ff00c;
        case 0x2ff010u: goto label_2ff010;
        case 0x2ff014u: goto label_2ff014;
        case 0x2ff018u: goto label_2ff018;
        case 0x2ff01cu: goto label_2ff01c;
        case 0x2ff020u: goto label_2ff020;
        case 0x2ff024u: goto label_2ff024;
        case 0x2ff028u: goto label_2ff028;
        case 0x2ff02cu: goto label_2ff02c;
        case 0x2ff030u: goto label_2ff030;
        default: break;
    }

    ctx->pc = 0x2feff0u;

label_2feff0:
    // 0x2feff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2feff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2feff4:
    // 0x2feff4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2feff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2feff8:
    // 0x2feff8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2feff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2feffc:
    // 0x2feffc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2feffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff000:
    // 0x2ff000: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ff000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff004:
    // 0x2ff004: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2ff004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ff008:
    // 0x2ff008: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ff008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ff00c:
    // 0x2ff00c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2ff00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2ff010:
    // 0x2ff010: 0x24429200  addiu       $v0, $v0, -0x6E00
    ctx->pc = 0x2ff010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939136));
label_2ff014:
    // 0x2ff014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff018:
    // 0x2ff018: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ff018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ff01c:
    // 0x2ff01c: 0x40f809  jalr        $v0
label_2ff020:
    if (ctx->pc == 0x2FF020u) {
        ctx->pc = 0x2FF024u;
        goto label_2ff024;
    }
    ctx->pc = 0x2FF01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF024u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF01Cu, 0x2FF024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF024u;
label_2ff024:
    // 0x2ff024: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ff024u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff028:
    // 0x2ff028: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ff028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ff02c:
    // 0x2ff02c: 0x3e00008  jr          $ra
label_2ff030:
    if (ctx->pc == 0x2FF030u) {
        ctx->pc = 0x2FF034u;
        goto label_fallthrough_0x2ff02c;
    }
    ctx->pc = 0x2FF02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ff02c:
    ctx->pc = 0x2FF034u;
}
