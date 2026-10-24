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

// Function: Om8bSetWaitColor
// Address: 0x33ff20 - 0x3401d0
void Om8bSetWaitColor_0x33ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8bSetWaitColor_0x33ff20");
#endif

    switch (ctx->pc) {
        case 0x33ffbcu: goto label_33ffbc;
        case 0x33ffc8u: goto label_33ffc8;
        case 0x33ffecu: goto label_33ffec;
        case 0x33fffcu: goto label_33fffc;
        case 0x340018u: goto label_340018;
        case 0x34003cu: goto label_34003c;
        case 0x34004cu: goto label_34004c;
        case 0x340080u: goto label_340080;
        case 0x3400a4u: goto label_3400a4;
        case 0x340120u: goto label_340120;
        case 0x340148u: goto label_340148;
        case 0x340158u: goto label_340158;
        case 0x340190u: goto label_340190;
        case 0x3401b4u: goto label_3401b4;
        default: break;
    }

    ctx->pc = 0x33ff20u;

    // 0x33ff20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33ff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33ff24: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x33ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x33ff28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33ff2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33ff30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ff30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ff34: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x33ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x33ff38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33ff3c: 0x8c631298  lw          $v1, 0x1298($v1)
    ctx->pc = 0x33ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4760)));
    // 0x33ff40: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x33FF40u;
    {
        const bool branch_taken_0x33ff40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ff40) {
            ctx->pc = 0x3400ACu;
            goto label_3400ac;
        }
    }
    ctx->pc = 0x33FF48u;
    // 0x33ff48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x33ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33ff4c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x33ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x33ff50: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x33ff50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x33ff54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33ff54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ff58: 0xc48012cc  lwc1        $f0, 0x12CC($a0)
    ctx->pc = 0x33ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ff5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33ff5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33ff60: 0xe48012cc  swc1        $f0, 0x12CC($a0)
    ctx->pc = 0x33ff60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4812), bits); }
    // 0x33ff64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33ff68: 0x8c641298  lw          $a0, 0x1298($v1)
    ctx->pc = 0x33ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4760)));
    // 0x33ff6c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33ff70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ff74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33ff78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ff7c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x33ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33ff80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33ff84: 0x8c631294  lw          $v1, 0x1294($v1)
    ctx->pc = 0x33ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4756)));
    // 0x33ff88: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x33ff88u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x33ff8c: 0x0  nop
    ctx->pc = 0x33ff8cu;
    // NOP
    // 0x33ff90: 0x0  nop
    ctx->pc = 0x33ff90u;
    // NOP
    // 0x33ff94: 0x9012  mflo        $s2
    ctx->pc = 0x33ff94u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x33ff98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x33ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33ff9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33ff9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ffa0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33ffa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33ffa4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x33ffa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33ffa8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33ffa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33ffac: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x33ffacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x33ffb0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x33ffb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33ffb4: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x33FFB4u;
    SET_GPR_U32(ctx, 31, 0x33FFBCu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x33FFB4u, 0x33FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FFBCu;
label_33ffbc:
    // 0x33ffbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x33ffbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ffc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33FFC0u;
    {
        const bool branch_taken_0x33ffc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ffc0) {
            ctx->pc = 0x340000u;
            goto label_340000;
        }
    }
    ctx->pc = 0x33FFC8u;
label_33ffc8:
    // 0x33ffc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x33ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33ffcc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x33ffccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33ffd0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x33ffd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ffd4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x33ffd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ffd8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x33ffd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ffdc: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x33ffdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ffe0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x33ffe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33ffe4: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x33FFE4u;
    SET_GPR_U32(ctx, 31, 0x33FFECu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x33FFE4u, 0x33FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FFECu;
label_33ffec:
    // 0x33ffec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x33ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fff0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x33fff0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33fff4: 0xc0cfc80  jal         func_33F200
    ctx->pc = 0x33FFF4u;
    SET_GPR_U32(ctx, 31, 0x33FFFCu);
    ctx->pc = 0x33F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F200u, 0x33FFF4u, 0x33FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FFFCu;
label_33fffc:
    // 0x33fffc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33fffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_340000:
    // 0x340000: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x340000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x340004: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x340004u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x340008: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x340008u;
    {
        const bool branch_taken_0x340008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340008) {
            ctx->pc = 0x33FFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ffc8;
        }
    }
    ctx->pc = 0x340010u;
    // 0x340010: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x340010u;
    {
        const bool branch_taken_0x340010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340010) {
            ctx->pc = 0x340050u;
            goto label_340050;
        }
    }
    ctx->pc = 0x340018u;
label_340018:
    // 0x340018: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x340018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34001c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x34001cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340020: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x340020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340024: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x340024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340028: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x340028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34002c: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x34002cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x340030: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x340030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x340034: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340034u;
    SET_GPR_U32(ctx, 31, 0x34003Cu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340034u, 0x34003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34003Cu;
label_34003c:
    // 0x34003c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x34003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340040: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340040u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340044: 0xc0cfcbc  jal         func_33F2F0
    ctx->pc = 0x340044u;
    SET_GPR_U32(ctx, 31, 0x34004Cu);
    ctx->pc = 0x33F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F2F0u, 0x340044u, 0x34004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34004Cu;
label_34004c:
    // 0x34004c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34004cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_340050:
    // 0x340050: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x340050u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x340054: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x340054u;
    {
        const bool branch_taken_0x340054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340054) {
            ctx->pc = 0x340018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340018;
        }
    }
    ctx->pc = 0x34005Cu;
    // 0x34005c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x34005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340060: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x340060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x340064: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340064u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340068: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340068u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34006c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34006cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340070: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x340070u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340074: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x340074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x340078: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340078u;
    SET_GPR_U32(ctx, 31, 0x340080u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340078u, 0x340080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340080u;
label_340080:
    // 0x340080: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x340080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340084: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x340084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340088: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340088u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34008c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x34008cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340090: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x340090u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340094: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x340094u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340098: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x340098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x34009c: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x34009Cu;
    SET_GPR_U32(ctx, 31, 0x3400A4u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x34009Cu, 0x3400A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3400A4u;
label_3400a4:
    // 0x3400a4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3400A4u;
    {
        const bool branch_taken_0x3400a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3400a4) {
            ctx->pc = 0x3401B4u;
            goto label_3401b4;
        }
    }
    ctx->pc = 0x3400ACu;
label_3400ac:
    // 0x3400ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3400acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3400b0: 0x8c6312ac  lw          $v1, 0x12AC($v1)
    ctx->pc = 0x3400b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x3400b4: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3400B4u;
    {
        const bool branch_taken_0x3400b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3400b4) {
            ctx->pc = 0x3400ECu;
            goto label_3400ec;
        }
    }
    ctx->pc = 0x3400BCu;
    // 0x3400bc: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x3400bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3400c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3400c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3400c4: 0x8c8312ac  lw          $v1, 0x12AC($a0)
    ctx->pc = 0x3400c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4780)));
    // 0x3400c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3400c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3400cc: 0xac8312ac  sw          $v1, 0x12AC($a0)
    ctx->pc = 0x3400ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4780), GPR_U32(ctx, 3));
    // 0x3400d0: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3400D0u;
    {
        const bool branch_taken_0x3400d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3400d0) {
            ctx->pc = 0x340114u;
            goto label_340114;
        }
    }
    ctx->pc = 0x3400D8u;
    // 0x3400d8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x3400d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3400dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3400dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3400e0: 0xac6412ac  sw          $a0, 0x12AC($v1)
    ctx->pc = 0x3400e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 4));
    // 0x3400e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3400E4u;
    {
        const bool branch_taken_0x3400e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3400e4) {
            ctx->pc = 0x340114u;
            goto label_340114;
        }
    }
    ctx->pc = 0x3400ECu;
label_3400ec:
    // 0x3400ec: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3400ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3400f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3400f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3400f4: 0x8c8312ac  lw          $v1, 0x12AC($a0)
    ctx->pc = 0x3400f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4780)));
    // 0x3400f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3400f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3400fc: 0xac8312ac  sw          $v1, 0x12AC($a0)
    ctx->pc = 0x3400fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4780), GPR_U32(ctx, 3));
    // 0x340100: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x340100u;
    {
        const bool branch_taken_0x340100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340100) {
            ctx->pc = 0x340114u;
            goto label_340114;
        }
    }
    ctx->pc = 0x340108u;
    // 0x340108: 0x2404ffc4  addiu       $a0, $zero, -0x3C
    ctx->pc = 0x340108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967236));
    // 0x34010c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340110: 0xac6412ac  sw          $a0, 0x12AC($v1)
    ctx->pc = 0x340110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 4));
label_340114:
    // 0x340114: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340114u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340118: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x340118u;
    {
        const bool branch_taken_0x340118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340118) {
            ctx->pc = 0x340160u;
            goto label_340160;
        }
    }
    ctx->pc = 0x340120u;
label_340120:
    // 0x340120: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x340120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x340124: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x340124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x340128: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x340128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34012c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x34012cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340130: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x340130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340134: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x340134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340138: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x340138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x34013c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x34013cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340140: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340140u;
    SET_GPR_U32(ctx, 31, 0x340148u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340140u, 0x340148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340148u;
label_340148:
    // 0x340148: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x340148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34014c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x34014cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340150: 0xc0cfcf0  jal         func_33F3C0
    ctx->pc = 0x340150u;
    SET_GPR_U32(ctx, 31, 0x340158u);
    ctx->pc = 0x33F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F3C0u, 0x340150u, 0x340158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340158u;
label_340158:
    // 0x340158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x340158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34015c: 0x0  nop
    ctx->pc = 0x34015cu;
    // NOP
label_340160:
    // 0x340160: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x340160u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x340164: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x340164u;
    {
        const bool branch_taken_0x340164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340164) {
            ctx->pc = 0x340120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340120;
        }
    }
    ctx->pc = 0x34016Cu;
    // 0x34016c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x34016cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340170: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x340170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x340174: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340174u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340178: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340178u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34017c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34017cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340180: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x340180u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340184: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x340184u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340188: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340188u;
    SET_GPR_U32(ctx, 31, 0x340190u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340188u, 0x340190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340190u;
label_340190:
    // 0x340190: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x340190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340194: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x340194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340198: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340198u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34019c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x34019cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3401a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3401a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3401a4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x3401a4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3401a8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x3401a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3401ac: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3401ACu;
    SET_GPR_U32(ctx, 31, 0x3401B4u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3401ACu, 0x3401B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3401B4u;
label_3401b4:
    // 0x3401b4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x3401b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3401b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3401b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3401bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3401bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3401c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3401c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3401c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3401c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3401c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3401C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3401C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3401D0u;
}
