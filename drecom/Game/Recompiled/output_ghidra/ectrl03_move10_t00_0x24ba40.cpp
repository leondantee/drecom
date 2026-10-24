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

// Function: ectrl03_move10_t00
// Address: 0x24ba40 - 0x24bb58
void ectrl03_move10_t00_0x24ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_move10_t00_0x24ba40");
#endif

    switch (ctx->pc) {
        case 0x24bb34u: goto label_24bb34;
        case 0x24bb40u: goto label_24bb40;
        default: break;
    }

    ctx->pc = 0x24ba40u;

    // 0x24ba40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24ba44: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x24ba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x24ba48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24ba4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24ba50: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x24ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x24ba54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x24ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24ba58: 0x8c700100  lw          $s0, 0x100($v1)
    ctx->pc = 0x24ba58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x24ba5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x24ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24ba60: 0x8c710104  lw          $s1, 0x104($v1)
    ctx->pc = 0x24ba60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x24ba64: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x24ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x24ba68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ba6c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BA6Cu;
    {
        const bool branch_taken_0x24ba6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24ba6c) {
            ctx->pc = 0x24BA88u;
            goto label_24ba88;
        }
    }
    ctx->pc = 0x24BA74u;
    // 0x24ba74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x24ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24ba78: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24ba7c: 0x28630078  slti        $v1, $v1, 0x78
    ctx->pc = 0x24ba7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x24ba80: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x24BA80u;
    {
        const bool branch_taken_0x24ba80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ba80) {
            ctx->pc = 0x24BAECu;
            goto label_24baec;
        }
    }
    ctx->pc = 0x24BA88u;
label_24ba88:
    // 0x24ba88: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x24ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x24ba8c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x24ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x24ba90: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x24ba90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x24ba94: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x24ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24ba98: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24ba98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ba9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x24ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24baa0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24baa4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24baa4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24baa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x24baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24baac: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24baacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24bab0: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x24bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x24bab4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24bab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24bab8: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x24bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x24babc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24babcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24bac0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24bac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24bac4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BAC4u;
    {
        const bool branch_taken_0x24bac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x24bac4) {
            ctx->pc = 0x24BAD8u;
            goto label_24bad8;
        }
    }
    ctx->pc = 0x24BACCu;
    // 0x24bacc: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x24baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x24bad0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24bad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24bad4: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x24bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
label_24bad8:
    // 0x24bad8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24badc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x24badcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24bae0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24bae4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24BAE4u;
    {
        const bool branch_taken_0x24bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bae4) {
            ctx->pc = 0x24BB40u;
            goto label_24bb40;
        }
    }
    ctx->pc = 0x24BAECu;
label_24baec:
    // 0x24baec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x24baecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x24baf0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x24baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x24baf4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x24BAF4u;
    {
        const bool branch_taken_0x24baf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24baf4) {
            ctx->pc = 0x24BB40u;
            goto label_24bb40;
        }
    }
    ctx->pc = 0x24BAFCu;
    // 0x24bafc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x24bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24bb00: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24bb04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24bb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bb08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24bb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24bb0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24bb10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24bb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24bb14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24bb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24bb18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24bb1c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24bb1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24bb20: 0x3404a507  ori         $a0, $zero, 0xA507
    ctx->pc = 0x24bb20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42247);
    // 0x24bb24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24bb24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bb28: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x24bb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24bb2c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24BB2Cu;
    SET_GPR_U32(ctx, 31, 0x24BB34u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24BB2Cu, 0x24BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB34u;
label_24bb34:
    // 0x24bb34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24bb34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24bb38: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24BB38u;
    SET_GPR_U32(ctx, 31, 0x24BB40u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24BB38u, 0x24BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB40u;
label_24bb40:
    // 0x24bb40: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x24bb40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bb44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24bb44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bb48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24bb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bb4c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24bb4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24bb50: 0x3e00008  jr          $ra
    ctx->pc = 0x24BB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BB58u;
}
