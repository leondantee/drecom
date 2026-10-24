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

// Function: Om84_R0_init
// Address: 0x359ba0 - 0x359ca8
void Om84_R0_init_0x359ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om84_R0_init_0x359ba0");
#endif

    switch (ctx->pc) {
        case 0x359bc4u: goto label_359bc4;
        case 0x359c2cu: goto label_359c2c;
        default: break;
    }

    ctx->pc = 0x359ba0u;

    // 0x359ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x359ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x359ba4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x359ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x359ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x359bb0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x359bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x359bb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x359bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359bb8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x359bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x359bbc: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x359BBCu;
    SET_GPR_U32(ctx, 31, 0x359BC4u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x359BBCu, 0x359BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BC4u;
label_359bc4:
    // 0x359bc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x359bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359bc8: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x359bc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x359bcc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x359bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x359bd0: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x359bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x359bd4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x359bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x359bd8: 0x2464a850  addiu       $a0, $v1, -0x57B0
    ctx->pc = 0x359bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944848));
    // 0x359bdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359be0: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x359be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x359be4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x359be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359be8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359bec: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x359becu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x359bf0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x359bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x359bf4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359bf8: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x359bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x359bfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x359bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359c00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c04: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x359c04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x359c08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c0c: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x359c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x359c10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x359c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x359c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x359c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359c18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c1c: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x359c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x359c20: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x359c20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359c24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x359C24u;
    {
        const bool branch_taken_0x359c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359c24) {
            ctx->pc = 0x359C58u;
            goto label_359c58;
        }
    }
    ctx->pc = 0x359C2Cu;
label_359c2c:
    // 0x359c2c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x359c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c30: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x359c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x359c34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x359c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x359c38: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x359c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359c3c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x359c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x359c40: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x359c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x359c44: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x359c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x359c48: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x359c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x359c4c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x359c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x359c50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x359c54: 0x0  nop
    ctx->pc = 0x359c54u;
    // NOP
label_359c58:
    // 0x359c58: 0x2e030017  sltiu       $v1, $s0, 0x17
    ctx->pc = 0x359c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x359c5c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x359C5Cu;
    {
        const bool branch_taken_0x359c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359c5c) {
            ctx->pc = 0x359C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359c2c;
        }
    }
    ctx->pc = 0x359C64u;
    // 0x359c64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x359c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359c68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x359c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x359c70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c74: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x359c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x359c78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x359c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x359c80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x359c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x359c88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x359c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x359c90: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x359c90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359c9c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x359c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x359ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x359CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359CA8u;
}
