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

// Function: entry_0019fa2c
// Address: 0x19fa2c - 0x19fb1c
void entry_0019fa2c_0x19fa2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa2c_0x19fa2c");
#endif

    switch (ctx->pc) {
        case 0x19fa38u: goto label_19fa38;
        case 0x19fa40u: goto label_19fa40;
        case 0x19fab0u: goto label_19fab0;
        case 0x19fabcu: goto label_19fabc;
        case 0x19faccu: goto label_19facc;
        case 0x19fae0u: goto label_19fae0;
        default: break;
    }

    ctx->pc = 0x19fa2cu;

    // 0x19fa2c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x19fa2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19fa30: 0xc0ce718  jal         func_339C60
    ctx->pc = 0x19FA30u;
    SET_GPR_U32(ctx, 31, 0x19FA38u);
    ctx->pc = 0x339C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339C60u, 0x19FA30u, 0x19FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA38u;
label_19fa38:
    // 0x19fa38: 0xc0ce6b4  jal         func_339AD0
    ctx->pc = 0x19FA38u;
    SET_GPR_U32(ctx, 31, 0x19FA40u);
    ctx->pc = 0x339AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339AD0u, 0x19FA38u, 0x19FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA40u;
label_19fa40:
    // 0x19fa40: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x19fa40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19fa44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19fa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19fa48: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19fa4c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19fa50: 0x24427bb0  addiu       $v0, $v0, 0x7BB0
    ctx->pc = 0x19fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31664));
    // 0x19fa54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fa58: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x19fa58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fa5c: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x19fa5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19fa60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19fa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19fa64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19fa68: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x19fa68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19fa6c: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x19fa6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19fa70: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19fa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19fa74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fa78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fa7c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x19fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19fa80: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x19fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x19fa84: 0x24428050  addiu       $v0, $v0, -0x7FB0
    ctx->pc = 0x19fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934608));
    // 0x19fa88: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fa8c: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x19fa8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19fa90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19fa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19fa94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fa98: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19fa98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fa9c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x19fa9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19faa0: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x19faa0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19faa4: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x19faa4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19faa8: 0xc0ce5d4  jal         func_339750
    ctx->pc = 0x19FAA8u;
    SET_GPR_U32(ctx, 31, 0x19FAB0u);
    ctx->pc = 0x339750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339750u, 0x19FAA8u, 0x19FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAB0u;
label_19fab0:
    // 0x19fab0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x19fab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19fab4: 0xc0ce718  jal         func_339C60
    ctx->pc = 0x19FAB4u;
    SET_GPR_U32(ctx, 31, 0x19FABCu);
    ctx->pc = 0x339C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339C60u, 0x19FAB4u, 0x19FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FABCu;
label_19fabc:
    // 0x19fabc: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x19fabcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x19fac0: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x19fac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x19fac4: 0xc0ce604  jal         func_339810
    ctx->pc = 0x19FAC4u;
    SET_GPR_U32(ctx, 31, 0x19FACCu);
    ctx->pc = 0x339810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339810u, 0x19FAC4u, 0x19FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FACCu;
label_19facc:
    // 0x19facc: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x19faccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19fad0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x19fad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19fad4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x19fad4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19fad8: 0xc0ce590  jal         func_339640
    ctx->pc = 0x19FAD8u;
    SET_GPR_U32(ctx, 31, 0x19FAE0u);
    ctx->pc = 0x339640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339640u, 0x19FAD8u, 0x19FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAE0u;
label_19fae0:
    // 0x19fae0: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x19fae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x19fae4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x19fae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19fae8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19fae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19faec: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19faecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19faf0: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19faf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19faf8: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x19faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x19fafc: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x19fafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x19fb00: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x19fb00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x19fb04: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x19fb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19fb08: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fb0c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19fb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19fb10: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19fb14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19fb18: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x19fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    ctx->pc = 0x19fb1cu;
}
