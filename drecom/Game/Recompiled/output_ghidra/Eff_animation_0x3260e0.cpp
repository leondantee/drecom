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

// Function: Eff_animation
// Address: 0x3260e0 - 0x326284
void Eff_animation_0x3260e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_animation_0x3260e0");
#endif

    switch (ctx->pc) {
        case 0x32625cu: goto label_32625c;
        default: break;
    }

    ctx->pc = 0x3260e0u;

    // 0x3260e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3260e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3260e4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3260e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3260e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3260e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3260ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3260ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3260f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x3260f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x3260f4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x3260f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x3260f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3260f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3260fc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3260fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x326100: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x326100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326104: 0x90420211  lbu         $v0, 0x211($v0)
    ctx->pc = 0x326104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 529)));
    // 0x326108: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x326108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32610c: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x32610Cu;
    {
        const bool branch_taken_0x32610c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32610c) {
            ctx->pc = 0x32620Cu;
            goto label_32620c;
        }
    }
    ctx->pc = 0x326114u;
    // 0x326114: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x326114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326118: 0x90620210  lbu         $v0, 0x210($v1)
    ctx->pc = 0x326118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x32611c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x326120: 0xa0620210  sb          $v0, 0x210($v1)
    ctx->pc = 0x326120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 528), (uint8_t)GPR_U32(ctx, 2));
    // 0x326124: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x326124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326128: 0x8c500204  lw          $s0, 0x204($v0)
    ctx->pc = 0x326128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x32612c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x32612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326130: 0x90420210  lbu         $v0, 0x210($v0)
    ctx->pc = 0x326130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x326134: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x326134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326138: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x326138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32613c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32613cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326140: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x326140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x326144: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x326144u;
    {
        const bool branch_taken_0x326144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326144) {
            ctx->pc = 0x3261D8u;
            goto label_3261d8;
        }
    }
    ctx->pc = 0x32614Cu;
    // 0x32614c: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x32614cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x326150: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x326150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326154: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x326154u;
    {
        const bool branch_taken_0x326154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326154) {
            ctx->pc = 0x3261B8u;
            goto label_3261b8;
        }
    }
    ctx->pc = 0x32615Cu;
    // 0x32615c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326160: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x326160u;
    {
        const bool branch_taken_0x326160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x326160) {
            ctx->pc = 0x32618Cu;
            goto label_32618c;
        }
    }
    ctx->pc = 0x326168u;
    // 0x326168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32616c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32616Cu;
    {
        const bool branch_taken_0x32616c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32616c) {
            ctx->pc = 0x32617Cu;
            goto label_32617c;
        }
    }
    ctx->pc = 0x326174u;
    // 0x326174: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x326174u;
    {
        const bool branch_taken_0x326174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326174) {
            ctx->pc = 0x3261B8u;
            goto label_3261b8;
        }
    }
    ctx->pc = 0x32617Cu;
label_32617c:
    // 0x32617c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x32617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326180: 0xa0400210  sb          $zero, 0x210($v0)
    ctx->pc = 0x326180u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 528), (uint8_t)GPR_U32(ctx, 0));
    // 0x326184: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x326184u;
    {
        const bool branch_taken_0x326184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326184) {
            ctx->pc = 0x3261D8u;
            goto label_3261d8;
        }
    }
    ctx->pc = 0x32618Cu;
label_32618c:
    // 0x32618c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x32618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326190: 0x90620210  lbu         $v0, 0x210($v1)
    ctx->pc = 0x326190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x326194: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326198: 0xa0620210  sb          $v0, 0x210($v1)
    ctx->pc = 0x326198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 528), (uint8_t)GPR_U32(ctx, 2));
    // 0x32619c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x32619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3261a0: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x3261a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x3261a4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x3261a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3261a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3261a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3261ac: 0xac82020c  sw          $v0, 0x20C($a0)
    ctx->pc = 0x3261acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 2));
    // 0x3261b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3261B0u;
    {
        const bool branch_taken_0x3261b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3261b0) {
            ctx->pc = 0x3261D8u;
            goto label_3261d8;
        }
    }
    ctx->pc = 0x3261B8u;
label_3261b8:
    // 0x3261b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3261b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3261bc: 0x90620210  lbu         $v0, 0x210($v1)
    ctx->pc = 0x3261bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x3261c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3261c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3261c4: 0xa0620210  sb          $v0, 0x210($v1)
    ctx->pc = 0x3261c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 528), (uint8_t)GPR_U32(ctx, 2));
    // 0x3261c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3261c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3261cc: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x3261ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x3261d0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3261d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3261d4: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x3261d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
label_3261d8:
    // 0x3261d8: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x3261d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3261dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3261dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3261e0: 0x90420210  lbu         $v0, 0x210($v0)
    ctx->pc = 0x3261e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x3261e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3261e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3261e8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3261e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3261ec: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x3261ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3261f0: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x3261f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3261f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3261f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3261f8: 0xa0430211  sb          $v1, 0x211($v0)
    ctx->pc = 0x3261f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 529), (uint8_t)GPR_U32(ctx, 3));
    // 0x3261fc: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x3261fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x326200: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x326200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326204: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x326204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x326208: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x326208u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_32620c:
    // 0x32620c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x32620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326210: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x326210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326214: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x326214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326218: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x326218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32621c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32621cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x326220: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x326220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x326224: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x326224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326228: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x326228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32622c: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x32622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326230: 0xc46000fc  lwc1        $f0, 0xFC($v1)
    ctx->pc = 0x326230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326234: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326238: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x326238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x32623c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x32623cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326240: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x326240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326244: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x326244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326248: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x326248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x32624c: 0x24650090  addiu       $a1, $v1, 0x90
    ctx->pc = 0x32624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x326250: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x326250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x326254: 0xc040c86  jal         func_103218
    ctx->pc = 0x326254u;
    SET_GPR_U32(ctx, 31, 0x32625Cu);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x32625Cu;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32625Cu) { return; }
    ctx->pc = 0x32625Cu;
label_32625c:
    // 0x32625c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x32625cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326260: 0x90830211  lbu         $v1, 0x211($a0)
    ctx->pc = 0x326260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 529)));
    // 0x326264: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x326264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x326268: 0xa0830211  sb          $v1, 0x211($a0)
    ctx->pc = 0x326268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 529), (uint8_t)GPR_U32(ctx, 3));
    // 0x32626c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x32626cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326278: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x326278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32627c: 0x3e00008  jr          $ra
    ctx->pc = 0x32627Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32627Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326284u;
}
