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

// Function: R10f_event_pic_kill
// Address: 0x27abc0 - 0x27ace4
void R10f_event_pic_kill_0x27abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_event_pic_kill_0x27abc0");
#endif

    switch (ctx->pc) {
        case 0x27abfcu: goto label_27abfc;
        case 0x27ac08u: goto label_27ac08;
        case 0x27ac10u: goto label_27ac10;
        case 0x27ac50u: goto label_27ac50;
        case 0x27ac68u: goto label_27ac68;
        case 0x27ac74u: goto label_27ac74;
        case 0x27ac8cu: goto label_27ac8c;
        case 0x27aca4u: goto label_27aca4;
        case 0x27acb0u: goto label_27acb0;
        case 0x27acc8u: goto label_27acc8;
        default: break;
    }

    ctx->pc = 0x27abc0u;

    // 0x27abc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27abc4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x27abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x27abc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27abcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27abccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27abd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27abd4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27abd8: 0x24501ac0  addiu       $s0, $v0, 0x1AC0
    ctx->pc = 0x27abd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x27abdc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x27abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x27abe0: 0x24520b10  addiu       $s2, $v0, 0xB10
    ctx->pc = 0x27abe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x27abe4: 0x8e5102d0  lw          $s1, 0x2D0($s2)
    ctx->pc = 0x27abe4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x27abe8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27abec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27abecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27abf0: 0x2445b410  addiu       $a1, $v0, -0x4BF0
    ctx->pc = 0x27abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947856));
    // 0x27abf4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27ABF4u;
    SET_GPR_U32(ctx, 31, 0x27ABFCu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27ABF4u, 0x27ABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ABFCu;
label_27abfc:
    // 0x27abfc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ac00: 0xc084964  jal         func_212590
    ctx->pc = 0x27AC00u;
    SET_GPR_U32(ctx, 31, 0x27AC08u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AC00u, 0x27AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC08u;
label_27ac08:
    // 0x27ac08: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x27AC08u;
    {
        const bool branch_taken_0x27ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ac08) {
            ctx->pc = 0x27ACB0u;
            goto label_27acb0;
        }
    }
    ctx->pc = 0x27AC10u;
label_27ac10:
    // 0x27ac10: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x27ac10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x27ac14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27ac18: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AC18u;
    {
        const bool branch_taken_0x27ac18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27ac18) {
            ctx->pc = 0x27AC34u;
            goto label_27ac34;
        }
    }
    ctx->pc = 0x27AC20u;
    // 0x27ac20: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x27ac20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x27ac24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27ac28: 0xa2020062  sb          $v0, 0x62($s0)
    ctx->pc = 0x27ac28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 2));
    // 0x27ac2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27AC2Cu;
    {
        const bool branch_taken_0x27ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ac2c) {
            ctx->pc = 0x27AC38u;
            goto label_27ac38;
        }
    }
    ctx->pc = 0x27AC34u;
label_27ac34:
    // 0x27ac34: 0xa2000062  sb          $zero, 0x62($s0)
    ctx->pc = 0x27ac34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 0));
label_27ac38:
    // 0x27ac38: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x27ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x27ac3c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x27ac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27ac40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ac40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ac44: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27ac44u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27ac48: 0xc04f560  jal         func_13D580
    ctx->pc = 0x27AC48u;
    SET_GPR_U32(ctx, 31, 0x27AC50u);
    ctx->pc = 0x13D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D580u, 0x27AC48u, 0x27AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC50u;
label_27ac50:
    // 0x27ac50: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x27ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x27ac54: 0x92050062  lbu         $a1, 0x62($s0)
    ctx->pc = 0x27ac54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x27ac58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ac58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ac5c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27ac5cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27ac60: 0xc04f588  jal         func_13D620
    ctx->pc = 0x27AC60u;
    SET_GPR_U32(ctx, 31, 0x27AC68u);
    ctx->pc = 0x13D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D620u, 0x27AC60u, 0x27AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC68u;
label_27ac68:
    // 0x27ac68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ac6c: 0xc084964  jal         func_212590
    ctx->pc = 0x27AC6Cu;
    SET_GPR_U32(ctx, 31, 0x27AC74u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AC6Cu, 0x27AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC74u;
label_27ac74:
    // 0x27ac74: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x27ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x27ac78: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x27ac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27ac7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ac7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ac80: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27ac80u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27ac84: 0xc04f560  jal         func_13D580
    ctx->pc = 0x27AC84u;
    SET_GPR_U32(ctx, 31, 0x27AC8Cu);
    ctx->pc = 0x13D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D580u, 0x27AC84u, 0x27AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC8Cu;
label_27ac8c:
    // 0x27ac8c: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x27ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x27ac90: 0x92050062  lbu         $a1, 0x62($s0)
    ctx->pc = 0x27ac90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x27ac94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ac98: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27ac98u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27ac9c: 0xc04f588  jal         func_13D620
    ctx->pc = 0x27AC9Cu;
    SET_GPR_U32(ctx, 31, 0x27ACA4u);
    ctx->pc = 0x13D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D620u, 0x27AC9Cu, 0x27ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACA4u;
label_27aca4:
    // 0x27aca4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aca8: 0xc084964  jal         func_212590
    ctx->pc = 0x27ACA8u;
    SET_GPR_U32(ctx, 31, 0x27ACB0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27ACA8u, 0x27ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACB0u;
label_27acb0:
    // 0x27acb0: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x27acb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x27acb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27acb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27acb8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x27ACB8u;
    {
        const bool branch_taken_0x27acb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27acb8) {
            ctx->pc = 0x27AC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ac10;
        }
    }
    ctx->pc = 0x27ACC0u;
    // 0x27acc0: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27ACC0u;
    SET_GPR_U32(ctx, 31, 0x27ACC8u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27ACC0u, 0x27ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACC8u;
label_27acc8:
    // 0x27acc8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27acc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27accc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27acccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27acd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27acd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27acd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27acd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27acd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27acd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27acdc: 0x3e00008  jr          $ra
    ctx->pc = 0x27ACDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ACDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ACE4u;
}
