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

// Function: Om15_R0_move
// Address: 0x31bbe0 - 0x31bc28
void Om15_R0_move_0x31bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om15_R0_move_0x31bbe0");
#endif

    switch (ctx->pc) {
        case 0x31bbe0u: goto label_31bbe0;
        case 0x31bbe4u: goto label_31bbe4;
        case 0x31bbe8u: goto label_31bbe8;
        case 0x31bbecu: goto label_31bbec;
        case 0x31bbf0u: goto label_31bbf0;
        case 0x31bbf4u: goto label_31bbf4;
        case 0x31bbf8u: goto label_31bbf8;
        case 0x31bbfcu: goto label_31bbfc;
        case 0x31bc00u: goto label_31bc00;
        case 0x31bc04u: goto label_31bc04;
        case 0x31bc08u: goto label_31bc08;
        case 0x31bc0cu: goto label_31bc0c;
        case 0x31bc10u: goto label_31bc10;
        case 0x31bc14u: goto label_31bc14;
        case 0x31bc18u: goto label_31bc18;
        case 0x31bc1cu: goto label_31bc1c;
        case 0x31bc20u: goto label_31bc20;
        case 0x31bc24u: goto label_31bc24;
        default: break;
    }

    ctx->pc = 0x31bbe0u;

label_31bbe0:
    // 0x31bbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31bbe4:
    // 0x31bbe4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x31bbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_31bbe8:
    // 0x31bbe8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x31bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_31bbec:
    // 0x31bbec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x31bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_31bbf0:
    // 0x31bbf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x31bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_31bbf4:
    // 0x31bbf4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x31bbf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_31bbf8:
    // 0x31bbf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_31bbfc:
    // 0x31bbfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31bc00:
    // 0x31bc00: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_31bc04:
    // 0x31bc04: 0x24429cd0  addiu       $v0, $v0, -0x6330
    ctx->pc = 0x31bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941904));
label_31bc08:
    // 0x31bc08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31bc0c:
    // 0x31bc0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31bc10:
    // 0x31bc10: 0x40f809  jalr        $v0
label_31bc14:
    if (ctx->pc == 0x31BC14u) {
        ctx->pc = 0x31BC18u;
        goto label_31bc18;
    }
    ctx->pc = 0x31BC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31BC18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BC10u, 0x31BC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31BC18u;
label_31bc18:
    // 0x31bc18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31bc18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31bc1c:
    // 0x31bc1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31bc1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31bc20:
    // 0x31bc20: 0x3e00008  jr          $ra
label_31bc24:
    if (ctx->pc == 0x31BC24u) {
        ctx->pc = 0x31BC28u;
        goto label_fallthrough_0x31bc20;
    }
    ctx->pc = 0x31BC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31bc20:
    ctx->pc = 0x31BC28u;
}
