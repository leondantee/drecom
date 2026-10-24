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

// Function: Ectrl_next
// Address: 0x195910 - 0x195a5c
void Ectrl_next_0x195910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_next_0x195910");
#endif

    switch (ctx->pc) {
        case 0x195950u: goto label_195950;
        default: break;
    }

    ctx->pc = 0x195910u;

    // 0x195910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x195914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19591c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19591cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x195920: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x195920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x195924: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x195924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x195928: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x195928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x19592c: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x19592cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x195930: 0xafa90048  sw          $t1, 0x48($sp)
    ctx->pc = 0x195930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 9));
    // 0x195934: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x195934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
    // 0x195938: 0xafab0058  sw          $t3, 0x58($sp)
    ctx->pc = 0x195938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 11));
    // 0x19593c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x19593cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x195940: 0x2471a630  addiu       $s1, $v1, -0x59D0
    ctx->pc = 0x195940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
    // 0x195944: 0x8e300078  lw          $s0, 0x78($s1)
    ctx->pc = 0x195944u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A6A8u));
    // 0x195948: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x195948u;
    {
        const bool branch_taken_0x195948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195948) {
            ctx->pc = 0x195A40u;
            goto label_195a40;
        }
    }
    ctx->pc = 0x195950u;
label_195950:
    // 0x195950: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x195950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195954: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195958: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195958u;
    {
        const bool branch_taken_0x195958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195958) {
            ctx->pc = 0x195970u;
            goto label_195970;
        }
    }
    ctx->pc = 0x195960u;
    // 0x195960: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195964: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195968: 0x14830033  bne         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x195968u;
    {
        const bool branch_taken_0x195968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195968) {
            ctx->pc = 0x195A38u;
            goto label_195a38;
        }
    }
    ctx->pc = 0x195970u;
label_195970:
    // 0x195970: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x195970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195974: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195978: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195978u;
    {
        const bool branch_taken_0x195978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195978) {
            ctx->pc = 0x195990u;
            goto label_195990;
        }
    }
    ctx->pc = 0x195980u;
    // 0x195980: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x195980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195984: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195988: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x195988u;
    {
        const bool branch_taken_0x195988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195988) {
            ctx->pc = 0x195A38u;
            goto label_195a38;
        }
    }
    ctx->pc = 0x195990u;
label_195990:
    // 0x195990: 0x920300e2  lbu         $v1, 0xE2($s0)
    ctx->pc = 0x195990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
    // 0x195994: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x195994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195998: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19599c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19599Cu;
    {
        const bool branch_taken_0x19599c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19599c) {
            ctx->pc = 0x1959B8u;
            goto label_1959b8;
        }
    }
    ctx->pc = 0x1959A4u;
    // 0x1959a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1959a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1959a8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1959a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1959ac: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1959ACu;
    {
        const bool branch_taken_0x1959ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1959ac) {
            ctx->pc = 0x195A38u;
            goto label_195a38;
        }
    }
    ctx->pc = 0x1959B4u;
    // 0x1959b4: 0x0  nop
    ctx->pc = 0x1959b4u;
    // NOP
label_1959b8:
    // 0x1959b8: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x1959b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1959bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1959bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1959c0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1959C0u;
    {
        const bool branch_taken_0x1959c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1959c0) {
            ctx->pc = 0x1959D8u;
            goto label_1959d8;
        }
    }
    ctx->pc = 0x1959C8u;
    // 0x1959c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1959c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1959cc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1959ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1959d0: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1959D0u;
    {
        const bool branch_taken_0x1959d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1959d0) {
            ctx->pc = 0x195A38u;
            goto label_195a38;
        }
    }
    ctx->pc = 0x1959D8u;
label_1959d8:
    // 0x1959d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1959d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1959dc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1959dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1959e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1959E0u;
    {
        const bool branch_taken_0x1959e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1959e0) {
            ctx->pc = 0x1959F0u;
            goto label_1959f0;
        }
    }
    ctx->pc = 0x1959E8u;
    // 0x1959e8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1959e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1959ec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1959ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1959f0:
    // 0x1959f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1959f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1959f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1959f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1959f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1959F8u;
    {
        const bool branch_taken_0x1959f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1959f8) {
            ctx->pc = 0x195A08u;
            goto label_195a08;
        }
    }
    ctx->pc = 0x195A00u;
    // 0x195a00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x195a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x195a04: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x195a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_195a08:
    // 0x195a08: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x195a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195a0c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195a10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A10u;
    {
        const bool branch_taken_0x195a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195a10) {
            ctx->pc = 0x195A20u;
            goto label_195a20;
        }
    }
    ctx->pc = 0x195A18u;
    // 0x195a18: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x195a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195a1c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x195a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_195a20:
    // 0x195a20: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x195a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x195a24: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195a28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A28u;
    {
        const bool branch_taken_0x195a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195a28) {
            ctx->pc = 0x195A38u;
            goto label_195a38;
        }
    }
    ctx->pc = 0x195A30u;
    // 0x195a30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x195a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x195a34: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x195a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_195a38:
    // 0x195a38: 0x8e1000e8  lw          $s0, 0xE8($s0)
    ctx->pc = 0x195a38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x195a3c: 0x0  nop
    ctx->pc = 0x195a3cu;
    // NOP
label_195a40:
    // 0x195a40: 0x1600ffc3  bnez        $s0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x195A40u;
    {
        const bool branch_taken_0x195a40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a40) {
            ctx->pc = 0x195950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195950;
        }
    }
    ctx->pc = 0x195A48u;
    // 0x195a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195a50: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x195a54: 0x3e00008  jr          $ra
    ctx->pc = 0x195A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195A5Cu;
}
