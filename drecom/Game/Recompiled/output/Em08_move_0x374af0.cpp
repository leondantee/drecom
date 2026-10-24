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

// Function: Em08_move
// Address: 0x374af0 - 0x374b48
void Em08_move_0x374af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_move_0x374af0");
#endif

    switch (ctx->pc) {
        case 0x374af0u: goto label_374af0;
        case 0x374af4u: goto label_374af4;
        case 0x374af8u: goto label_374af8;
        case 0x374afcu: goto label_374afc;
        case 0x374b00u: goto label_374b00;
        case 0x374b04u: goto label_374b04;
        case 0x374b08u: goto label_374b08;
        case 0x374b0cu: goto label_374b0c;
        case 0x374b10u: goto label_374b10;
        case 0x374b14u: goto label_374b14;
        case 0x374b18u: goto label_374b18;
        case 0x374b1cu: goto label_374b1c;
        case 0x374b20u: goto label_374b20;
        case 0x374b24u: goto label_374b24;
        case 0x374b28u: goto label_374b28;
        case 0x374b2cu: goto label_374b2c;
        case 0x374b30u: goto label_374b30;
        case 0x374b34u: goto label_374b34;
        case 0x374b38u: goto label_374b38;
        case 0x374b3cu: goto label_374b3c;
        case 0x374b40u: goto label_374b40;
        case 0x374b44u: goto label_374b44;
        default: break;
    }

    ctx->pc = 0x374af0u;

label_374af0:
    // 0x374af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_374af4:
    // 0x374af4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x374af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_374af8:
    // 0x374af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_374afc:
    // 0x374afc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x374afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_374b00:
    // 0x374b00: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x374b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_374b04:
    // 0x374b04: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x374b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_374b08:
    // 0x374b08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x374b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_374b0c:
    // 0x374b0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x374b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_374b10:
    // 0x374b10: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x374b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_374b14:
    // 0x374b14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_374b18:
    // 0x374b18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x374b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_374b1c:
    // 0x374b1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x374b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_374b20:
    // 0x374b20: 0x2442b620  addiu       $v0, $v0, -0x49E0
    ctx->pc = 0x374b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948384));
label_374b24:
    // 0x374b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_374b28:
    // 0x374b28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x374b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_374b2c:
    // 0x374b2c: 0x40f809  jalr        $v0
label_374b30:
    if (ctx->pc == 0x374B30u) {
        ctx->pc = 0x374B34u;
        goto label_374b34;
    }
    ctx->pc = 0x374B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x374B34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374B2Cu, 0x374B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x374B34u;
label_374b34:
    // 0x374b34: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x374b34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_374b38:
    // 0x374b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_374b3c:
    // 0x374b3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x374b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_374b40:
    // 0x374b40: 0x3e00008  jr          $ra
label_374b44:
    if (ctx->pc == 0x374B44u) {
        ctx->pc = 0x374B48u;
        goto label_fallthrough_0x374b40;
    }
    ctx->pc = 0x374B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x374b40:
    ctx->pc = 0x374B48u;
}
