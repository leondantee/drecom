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

// Function: Coat_offset_set
// Address: 0x1446d0 - 0x1447a8
void Coat_offset_set_0x1446d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Coat_offset_set_0x1446d0");
#endif

    switch (ctx->pc) {
        case 0x14471cu: goto label_14471c;
        default: break;
    }

    ctx->pc = 0x1446d0u;

    // 0x1446d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1446d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1446d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1446d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1446d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1446d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1446dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1446dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1446e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1446e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1446e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1446e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1446e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1446e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1446ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1446ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1446f0: 0x2470a530  addiu       $s0, $v1, -0x5AD0
    ctx->pc = 0x1446f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944048));
    // 0x1446f4: 0x8e031370  lw          $v1, 0x1370($s0)
    ctx->pc = 0x1446f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FB8A0u));
    // 0x1446f8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1446F8u;
    {
        const bool branch_taken_0x1446f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1446f8) {
            ctx->pc = 0x144780u;
            goto label_144780;
        }
    }
    ctx->pc = 0x144700u;
    // 0x144700: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x144700u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x144704: 0x8eb40034  lw          $s4, 0x34($s5)
    ctx->pc = 0x144704u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x144708: 0x8e920028  lw          $s2, 0x28($s4)
    ctx->pc = 0x144708u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x14470c: 0x8e93002c  lw          $s3, 0x2C($s4)
    ctx->pc = 0x14470cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x144710: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x144710u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x144714: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x144714u;
    {
        const bool branch_taken_0x144714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144714) {
            ctx->pc = 0x144768u;
            goto label_144768;
        }
    }
    ctx->pc = 0x14471Cu;
label_14471c:
    // 0x14471c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14471cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x144720: 0x8e03137c  lw          $v1, 0x137C($s0)
    ctx->pc = 0x144720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4988)));
    // 0x144724: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x144724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144728: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x144728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14472c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x14472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x144730: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x144730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x144734: 0x8e03138c  lw          $v1, 0x138C($s0)
    ctx->pc = 0x144734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5004)));
    // 0x144738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x144738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14473c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x14473cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x144740: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x144740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x144744: 0x8e03137c  lw          $v1, 0x137C($s0)
    ctx->pc = 0x144744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4988)));
    // 0x144748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x144748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14474c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144750: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x144750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x144754: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x144754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x144758: 0x8e031390  lw          $v1, 0x1390($s0)
    ctx->pc = 0x144758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5008)));
    // 0x14475c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144760: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x144760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x144764: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x144764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_144768:
    // 0x144768: 0x8e031370  lw          $v1, 0x1370($s0)
    ctx->pc = 0x144768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x14476c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x144770: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x144770u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144774: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x144774u;
    {
        const bool branch_taken_0x144774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144774) {
            ctx->pc = 0x14471Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14471c;
        }
    }
    ctx->pc = 0x14477Cu;
    // 0x14477c: 0x0  nop
    ctx->pc = 0x14477cu;
    // NOP
label_144780:
    // 0x144780: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x144780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x144784: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x144784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144788: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14478c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14478cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14479c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x14479cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1447a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1447A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1447A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1447A8u;
}
