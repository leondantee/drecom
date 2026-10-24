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

// Function: Em08_R0_move
// Address: 0x374f30 - 0x374ff0
void Em08_R0_move_0x374f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R0_move_0x374f30");
#endif

    switch (ctx->pc) {
        case 0x374f30u: goto label_374f30;
        case 0x374f34u: goto label_374f34;
        case 0x374f38u: goto label_374f38;
        case 0x374f3cu: goto label_374f3c;
        case 0x374f40u: goto label_374f40;
        case 0x374f44u: goto label_374f44;
        case 0x374f48u: goto label_374f48;
        case 0x374f4cu: goto label_374f4c;
        case 0x374f50u: goto label_374f50;
        case 0x374f54u: goto label_374f54;
        case 0x374f58u: goto label_374f58;
        case 0x374f5cu: goto label_374f5c;
        case 0x374f60u: goto label_374f60;
        case 0x374f64u: goto label_374f64;
        case 0x374f68u: goto label_374f68;
        case 0x374f6cu: goto label_374f6c;
        case 0x374f70u: goto label_374f70;
        case 0x374f74u: goto label_374f74;
        case 0x374f78u: goto label_374f78;
        case 0x374f7cu: goto label_374f7c;
        case 0x374f80u: goto label_374f80;
        case 0x374f84u: goto label_374f84;
        case 0x374f88u: goto label_374f88;
        case 0x374f8cu: goto label_374f8c;
        case 0x374f90u: goto label_374f90;
        case 0x374f94u: goto label_374f94;
        case 0x374f98u: goto label_374f98;
        case 0x374f9cu: goto label_374f9c;
        case 0x374fa0u: goto label_374fa0;
        case 0x374fa4u: goto label_374fa4;
        case 0x374fa8u: goto label_374fa8;
        case 0x374facu: goto label_374fac;
        case 0x374fb0u: goto label_374fb0;
        case 0x374fb4u: goto label_374fb4;
        case 0x374fb8u: goto label_374fb8;
        case 0x374fbcu: goto label_374fbc;
        case 0x374fc0u: goto label_374fc0;
        case 0x374fc4u: goto label_374fc4;
        case 0x374fc8u: goto label_374fc8;
        case 0x374fccu: goto label_374fcc;
        case 0x374fd0u: goto label_374fd0;
        case 0x374fd4u: goto label_374fd4;
        case 0x374fd8u: goto label_374fd8;
        case 0x374fdcu: goto label_374fdc;
        case 0x374fe0u: goto label_374fe0;
        case 0x374fe4u: goto label_374fe4;
        case 0x374fe8u: goto label_374fe8;
        case 0x374fecu: goto label_374fec;
        default: break;
    }

    ctx->pc = 0x374f30u;

label_374f30:
    // 0x374f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_374f34:
    // 0x374f34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x374f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_374f38:
    // 0x374f38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x374f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_374f3c:
    // 0x374f3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x374f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374f40:
    // 0x374f40: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x374f40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_374f44:
    // 0x374f44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x374f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_374f48:
    // 0x374f48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x374f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_374f4c:
    // 0x374f4c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_374f50:
    if (ctx->pc == 0x374F50u) {
        ctx->pc = 0x374F54u;
        goto label_374f54;
    }
    ctx->pc = 0x374F4Cu;
    {
        const bool branch_taken_0x374f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374f4c) {
            ctx->pc = 0x374F88u;
            goto label_374f88;
        }
    }
    ctx->pc = 0x374F54u;
label_374f54:
    // 0x374f54: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x374f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374f58:
    // 0x374f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x374f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374f5c:
    // 0x374f5c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x374f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_374f60:
    // 0x374f60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_374f64:
    // 0x374f64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x374f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_374f68:
    // 0x374f68: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x374f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_374f6c:
    // 0x374f6c: 0x2442b650  addiu       $v0, $v0, -0x49B0
    ctx->pc = 0x374f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948432));
label_374f70:
    // 0x374f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_374f74:
    // 0x374f74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x374f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_374f78:
    // 0x374f78: 0x40f809  jalr        $v0
label_374f7c:
    if (ctx->pc == 0x374F7Cu) {
        ctx->pc = 0x374F80u;
        goto label_374f80;
    }
    ctx->pc = 0x374F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x374F80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374F78u, 0x374F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x374F80u;
label_374f80:
    // 0x374f80: 0x1000000c  b           . + 4 + (0xC << 2)
label_374f84:
    if (ctx->pc == 0x374F84u) {
        ctx->pc = 0x374F88u;
        goto label_374f88;
    }
    ctx->pc = 0x374F80u;
    {
        const bool branch_taken_0x374f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x374f80) {
            ctx->pc = 0x374FB4u;
            goto label_374fb4;
        }
    }
    ctx->pc = 0x374F88u;
label_374f88:
    // 0x374f88: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x374f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374f8c:
    // 0x374f8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x374f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374f90:
    // 0x374f90: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x374f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_374f94:
    // 0x374f94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_374f98:
    // 0x374f98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x374f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_374f9c:
    // 0x374f9c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x374f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_374fa0:
    // 0x374fa0: 0x2442b670  addiu       $v0, $v0, -0x4990
    ctx->pc = 0x374fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948464));
label_374fa4:
    // 0x374fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_374fa8:
    // 0x374fa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x374fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_374fac:
    // 0x374fac: 0x40f809  jalr        $v0
label_374fb0:
    if (ctx->pc == 0x374FB0u) {
        ctx->pc = 0x374FB4u;
        goto label_374fb4;
    }
    ctx->pc = 0x374FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x374FB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374FACu, 0x374FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x374FB4u;
label_374fb4:
    // 0x374fb4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x374fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374fb8:
    // 0x374fb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x374fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374fbc:
    // 0x374fbc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x374fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_374fc0:
    // 0x374fc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_374fc4:
    // 0x374fc4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x374fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_374fc8:
    // 0x374fc8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x374fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_374fcc:
    // 0x374fcc: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x374fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
label_374fd0:
    // 0x374fd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_374fd4:
    // 0x374fd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x374fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_374fd8:
    // 0x374fd8: 0x40f809  jalr        $v0
label_374fdc:
    if (ctx->pc == 0x374FDCu) {
        ctx->pc = 0x374FE0u;
        goto label_374fe0;
    }
    ctx->pc = 0x374FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x374FE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374FD8u, 0x374FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x374FE0u;
label_374fe0:
    // 0x374fe0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x374fe0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_374fe4:
    // 0x374fe4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x374fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_374fe8:
    // 0x374fe8: 0x3e00008  jr          $ra
label_374fec:
    if (ctx->pc == 0x374FECu) {
        ctx->pc = 0x374FF0u;
        goto label_fallthrough_0x374fe8;
    }
    ctx->pc = 0x374FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x374fe8:
    ctx->pc = 0x374FF0u;
}
