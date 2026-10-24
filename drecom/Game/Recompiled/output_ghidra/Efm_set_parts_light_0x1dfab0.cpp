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

// Function: Efm_set_parts_light
// Address: 0x1dfab0 - 0x1dfb68
void Efm_set_parts_light_0x1dfab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_set_parts_light_0x1dfab0");
#endif

    switch (ctx->pc) {
        case 0x1dfad4u: goto label_1dfad4;
        default: break;
    }

    ctx->pc = 0x1dfab0u;

    // 0x1dfab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dfab4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dfab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dfab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfabc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dfac0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1dfac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1dfac4: 0xa3a50038  sb          $a1, 0x38($sp)
    ctx->pc = 0x1dfac4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 5));
    // 0x1dfac8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1dfac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfacc: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x1dfaccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dfad0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1dfad0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dfad4:
    // 0x1dfad4: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x1dfad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dfad8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dfad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dfadc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dfae0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dfae4: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x1dfae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dfae8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1dfae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dfaec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dfaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dfaf0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1dfaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1dfaf4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DFAF4u;
    {
        const bool branch_taken_0x1dfaf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfaf4) {
            ctx->pc = 0x1DFB24u;
            goto label_1dfb24;
        }
    }
    ctx->pc = 0x1DFAFCu;
    // 0x1dfafc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1dfafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dfb00: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x1dfb00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dfb04: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dfb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dfb08: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x1dfb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x1dfb0c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1dfb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1dfb10: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x1dfb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
    // 0x1dfb14: 0x34630084  ori         $v1, $v1, 0x84
    ctx->pc = 0x1dfb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)132);
    // 0x1dfb18: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1dfb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1dfb1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFB1Cu;
    {
        const bool branch_taken_0x1dfb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb1c) {
            ctx->pc = 0x1DFB30u;
            goto label_1dfb30;
        }
    }
    ctx->pc = 0x1DFB24u;
label_1dfb24:
    // 0x1dfb24: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x1dfb24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dfb28: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1dfb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1dfb2c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1dfb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1dfb30:
    // 0x1dfb30: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x1dfb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1dfb34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dfb34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1dfb38: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1dfb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfb3c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1dfb3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1dfb40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dfb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dfb44: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1dfb44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1dfb48: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1DFB48u;
    {
        const bool branch_taken_0x1dfb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb48) {
            ctx->pc = 0x1DFAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfad4;
        }
    }
    ctx->pc = 0x1DFB50u;
    // 0x1dfb50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dfb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfb54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfb54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfb58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfb5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1dfb5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dfb60: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB68u;
}
