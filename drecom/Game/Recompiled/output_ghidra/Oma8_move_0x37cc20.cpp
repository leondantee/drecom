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

// Function: Oma8_move
// Address: 0x37cc20 - 0x37cc78
void Oma8_move_0x37cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma8_move_0x37cc20");
#endif

    switch (ctx->pc) {
        case 0x37cc20u: goto label_37cc20;
        case 0x37cc24u: goto label_37cc24;
        case 0x37cc28u: goto label_37cc28;
        case 0x37cc2cu: goto label_37cc2c;
        case 0x37cc30u: goto label_37cc30;
        case 0x37cc34u: goto label_37cc34;
        case 0x37cc38u: goto label_37cc38;
        case 0x37cc3cu: goto label_37cc3c;
        case 0x37cc40u: goto label_37cc40;
        case 0x37cc44u: goto label_37cc44;
        case 0x37cc48u: goto label_37cc48;
        case 0x37cc4cu: goto label_37cc4c;
        case 0x37cc50u: goto label_37cc50;
        case 0x37cc54u: goto label_37cc54;
        case 0x37cc58u: goto label_37cc58;
        case 0x37cc5cu: goto label_37cc5c;
        case 0x37cc60u: goto label_37cc60;
        case 0x37cc64u: goto label_37cc64;
        case 0x37cc68u: goto label_37cc68;
        case 0x37cc6cu: goto label_37cc6c;
        case 0x37cc70u: goto label_37cc70;
        case 0x37cc74u: goto label_37cc74;
        default: break;
    }

    ctx->pc = 0x37cc20u;

label_37cc20:
    // 0x37cc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37cc24:
    // 0x37cc24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x37cc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_37cc28:
    // 0x37cc28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37cc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37cc2c:
    // 0x37cc2c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x37cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_37cc30:
    // 0x37cc30: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x37cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_37cc34:
    // 0x37cc34: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x37cc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_37cc38:
    // 0x37cc38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_37cc3c:
    // 0x37cc3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_37cc40:
    // 0x37cc40: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x37cc40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_37cc44:
    // 0x37cc44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37cc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37cc48:
    // 0x37cc48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37cc4c:
    // 0x37cc4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_37cc50:
    // 0x37cc50: 0x2442ba80  addiu       $v0, $v0, -0x4580
    ctx->pc = 0x37cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949504));
label_37cc54:
    // 0x37cc54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37cc58:
    // 0x37cc58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37cc5c:
    // 0x37cc5c: 0x40f809  jalr        $v0
label_37cc60:
    if (ctx->pc == 0x37CC60u) {
        ctx->pc = 0x37CC64u;
        goto label_37cc64;
    }
    ctx->pc = 0x37CC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37CC64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CC5Cu, 0x37CC64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37CC64u;
label_37cc64:
    // 0x37cc64: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x37cc64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37cc68:
    // 0x37cc68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37cc68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37cc6c:
    // 0x37cc6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37cc6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_37cc70:
    // 0x37cc70: 0x3e00008  jr          $ra
label_37cc74:
    if (ctx->pc == 0x37CC74u) {
        ctx->pc = 0x37CC78u;
        goto label_fallthrough_0x37cc70;
    }
    ctx->pc = 0x37CC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37cc70:
    ctx->pc = 0x37CC78u;
}
