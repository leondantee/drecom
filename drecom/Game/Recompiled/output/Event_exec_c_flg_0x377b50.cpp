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

// Function: Event_exec_c_flg
// Address: 0x377b50 - 0x377c64
void Event_exec_c_flg_0x377b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_exec_c_flg_0x377b50");
#endif

    switch (ctx->pc) {
        case 0x377b70u: goto label_377b70;
        case 0x377be0u: goto label_377be0;
        default: break;
    }

    ctx->pc = 0x377b50u;

    // 0x377b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x377b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x377b54: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x377b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x377b58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377b5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377b60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377b64: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x377b64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x377b68: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x377B68u;
    {
        const bool branch_taken_0x377b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377b68) {
            ctx->pc = 0x377C30u;
            goto label_377c30;
        }
    }
    ctx->pc = 0x377B70u;
label_377b70:
    // 0x377b70: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x377b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377b74: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377b78: 0x24630350  addiu       $v1, $v1, 0x350
    ctx->pc = 0x377b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
    // 0x377b7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377b80: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x377b80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377b84: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x377b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377b88: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377b8c: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377b90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377b94: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x377b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x377b98: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x377B98u;
    {
        const bool branch_taken_0x377b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377b98) {
            ctx->pc = 0x377C28u;
            goto label_377c28;
        }
    }
    ctx->pc = 0x377BA0u;
    // 0x377ba0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x377ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377ba4: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377ba8: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377bac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377bb0: 0x8c7100cc  lw          $s1, 0xCC($v1)
    ctx->pc = 0x377bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x377bb4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x377bb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x377bb8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377bbc: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377bc0: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x377bc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x377bc4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x377bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377bc8: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x377BC8u;
    {
        const bool branch_taken_0x377bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377bc8) {
            ctx->pc = 0x377C28u;
            goto label_377c28;
        }
    }
    ctx->pc = 0x377BD0u;
    // 0x377bd0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x377bd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x377bd4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x377bd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x377bd8: 0xc0de0c0  jal         func_378300
    ctx->pc = 0x377BD8u;
    SET_GPR_U32(ctx, 31, 0x377BE0u);
    ctx->pc = 0x378300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378300u, 0x377BD8u, 0x377BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377BE0u;
label_377be0:
    // 0x377be0: 0x2631002c  addiu       $s1, $s1, 0x2C
    ctx->pc = 0x377be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x377be4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x377be4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x377be8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377bec: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x377becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x377bf0: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x377BF0u;
    {
        const bool branch_taken_0x377bf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377bf0) {
            ctx->pc = 0x377C14u;
            goto label_377c14;
        }
    }
    ctx->pc = 0x377BF8u;
    // 0x377bf8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x377bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377bfc: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377c00: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377c04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377c08: 0xac6000cc  sw          $zero, 0xCC($v1)
    ctx->pc = 0x377c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 0));
    // 0x377c0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x377C0Cu;
    {
        const bool branch_taken_0x377c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377c0c) {
            ctx->pc = 0x377C28u;
            goto label_377c28;
        }
    }
    ctx->pc = 0x377C14u;
label_377c14:
    // 0x377c14: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x377c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377c18: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377c1c: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377c20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377c24: 0xac7100cc  sw          $s1, 0xCC($v1)
    ctx->pc = 0x377c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 17));
label_377c28:
    // 0x377c28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x377c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x377c2c: 0x0  nop
    ctx->pc = 0x377c2cu;
    // NOP
label_377c30:
    // 0x377c30: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377c34: 0x90230396  lbu         $v1, 0x396($at)
    ctx->pc = 0x377c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x377c38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x377c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x377c3c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x377c3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x377c40: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x377C40u;
    {
        const bool branch_taken_0x377c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377c40) {
            ctx->pc = 0x377B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377b70;
        }
    }
    ctx->pc = 0x377C48u;
    // 0x377c48: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x377c48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377c58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x377c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x377c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x377C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377C64u;
}
