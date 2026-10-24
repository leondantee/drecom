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

// Function: set_effect_footsonud
// Address: 0x315bc0 - 0x315c68
void set_effect_footsonud_0x315bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_effect_footsonud_0x315bc0");
#endif

    switch (ctx->pc) {
        case 0x315bc0u: goto label_315bc0;
        case 0x315bc4u: goto label_315bc4;
        case 0x315bc8u: goto label_315bc8;
        case 0x315bccu: goto label_315bcc;
        case 0x315bd0u: goto label_315bd0;
        case 0x315bd4u: goto label_315bd4;
        case 0x315bd8u: goto label_315bd8;
        case 0x315bdcu: goto label_315bdc;
        case 0x315be0u: goto label_315be0;
        case 0x315be4u: goto label_315be4;
        case 0x315be8u: goto label_315be8;
        case 0x315becu: goto label_315bec;
        case 0x315bf0u: goto label_315bf0;
        case 0x315bf4u: goto label_315bf4;
        case 0x315bf8u: goto label_315bf8;
        case 0x315bfcu: goto label_315bfc;
        case 0x315c00u: goto label_315c00;
        case 0x315c04u: goto label_315c04;
        case 0x315c08u: goto label_315c08;
        case 0x315c0cu: goto label_315c0c;
        case 0x315c10u: goto label_315c10;
        case 0x315c14u: goto label_315c14;
        case 0x315c18u: goto label_315c18;
        case 0x315c1cu: goto label_315c1c;
        case 0x315c20u: goto label_315c20;
        case 0x315c24u: goto label_315c24;
        case 0x315c28u: goto label_315c28;
        case 0x315c2cu: goto label_315c2c;
        case 0x315c30u: goto label_315c30;
        case 0x315c34u: goto label_315c34;
        case 0x315c38u: goto label_315c38;
        case 0x315c3cu: goto label_315c3c;
        case 0x315c40u: goto label_315c40;
        case 0x315c44u: goto label_315c44;
        case 0x315c48u: goto label_315c48;
        case 0x315c4cu: goto label_315c4c;
        case 0x315c50u: goto label_315c50;
        case 0x315c54u: goto label_315c54;
        case 0x315c58u: goto label_315c58;
        case 0x315c5cu: goto label_315c5c;
        case 0x315c60u: goto label_315c60;
        case 0x315c64u: goto label_315c64;
        default: break;
    }

    ctx->pc = 0x315bc0u;

label_315bc0:
    // 0x315bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x315bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_315bc4:
    // 0x315bc4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x315bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_315bc8:
    // 0x315bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_315bcc:
    // 0x315bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x315bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_315bd0:
    // 0x315bd0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x315bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_315bd4:
    // 0x315bd4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x315bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_315bd8:
    // 0x315bd8: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x315bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
label_315bdc:
    // 0x315bdc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x315bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_315be0:
    // 0x315be0: 0x2471fce0  addiu       $s1, $v1, -0x320
    ctx->pc = 0x315be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966496));
label_315be4:
    // 0x315be4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x315be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_315be8:
    // 0x315be8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x315be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_315bec:
    // 0x315bec: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x315becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_315bf0:
    // 0x315bf0: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x315bf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_315bf4:
    // 0x315bf4: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x315bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_315bf8:
    // 0x315bf8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x315bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_315bfc:
    // 0x315bfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_315c00:
    // 0x315c00: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x315c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_315c04:
    // 0x315c04: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x315c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_315c08:
    // 0x315c08: 0x24639b60  addiu       $v1, $v1, -0x64A0
    ctx->pc = 0x315c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941536));
label_315c0c:
    // 0x315c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_315c10:
    // 0x315c10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x315c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_315c14:
    // 0x315c14: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_315c18:
    if (ctx->pc == 0x315C18u) {
        ctx->pc = 0x315C1Cu;
        goto label_315c1c;
    }
    ctx->pc = 0x315C14u;
    {
        const bool branch_taken_0x315c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x315c14) {
            ctx->pc = 0x315C50u;
            goto label_315c50;
        }
    }
    ctx->pc = 0x315C1Cu;
label_315c1c:
    // 0x315c1c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x315c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_315c20:
    // 0x315c20: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x315c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_315c24:
    // 0x315c24: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x315c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_315c28:
    // 0x315c28: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x315c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_315c2c:
    // 0x315c2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x315c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_315c30:
    // 0x315c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315c34:
    // 0x315c34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x315c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_315c38:
    // 0x315c38: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x315c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_315c3c:
    // 0x315c3c: 0x24429b60  addiu       $v0, $v0, -0x64A0
    ctx->pc = 0x315c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941536));
label_315c40:
    // 0x315c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_315c44:
    // 0x315c44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x315c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_315c48:
    // 0x315c48: 0x40f809  jalr        $v0
label_315c4c:
    if (ctx->pc == 0x315C4Cu) {
        ctx->pc = 0x315C50u;
        goto label_315c50;
    }
    ctx->pc = 0x315C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315C50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315C48u, 0x315C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315C50u;
label_315c50:
    // 0x315c50: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x315c50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315c54:
    // 0x315c54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315c58:
    // 0x315c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_315c5c:
    // 0x315c5c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x315c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_315c60:
    // 0x315c60: 0x3e00008  jr          $ra
label_315c64:
    if (ctx->pc == 0x315C64u) {
        ctx->pc = 0x315C68u;
        goto label_fallthrough_0x315c60;
    }
    ctx->pc = 0x315C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x315c60:
    ctx->pc = 0x315C68u;
}
