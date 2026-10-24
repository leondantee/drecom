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

// Function: ectrl10_move10
// Address: 0x2faf50 - 0x2fcf74
void ectrl10_move10_0x2faf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl10_move10_0x2faf50");
#endif

    switch (ctx->pc) {
        case 0x2fb074u: goto label_2fb074;
        case 0x2fb15cu: goto label_2fb15c;
        case 0x2fb16cu: goto label_2fb16c;
        case 0x2fb2a8u: goto label_2fb2a8;
        case 0x2fb2b4u: goto label_2fb2b4;
        case 0x2fb370u: goto label_2fb370;
        case 0x2fb37cu: goto label_2fb37c;
        case 0x2fb468u: goto label_2fb468;
        case 0x2fb530u: goto label_2fb530;
        case 0x2fb53cu: goto label_2fb53c;
        case 0x2fb5e4u: goto label_2fb5e4;
        case 0x2fb6a4u: goto label_2fb6a4;
        case 0x2fb6b0u: goto label_2fb6b0;
        case 0x2fb75cu: goto label_2fb75c;
        case 0x2fb81cu: goto label_2fb81c;
        case 0x2fb82cu: goto label_2fb82c;
        case 0x2fb8d8u: goto label_2fb8d8;
        case 0x2fba64u: goto label_2fba64;
        case 0x2fbcb8u: goto label_2fbcb8;
        case 0x2fbfc0u: goto label_2fbfc0;
        case 0x2fc4acu: goto label_2fc4ac;
        case 0x2fc4ecu: goto label_2fc4ec;
        case 0x2fc520u: goto label_2fc520;
        case 0x2fc554u: goto label_2fc554;
        case 0x2fc598u: goto label_2fc598;
        case 0x2fc688u: goto label_2fc688;
        case 0x2fc6acu: goto label_2fc6ac;
        case 0x2fc700u: goto label_2fc700;
        case 0x2fc728u: goto label_2fc728;
        case 0x2fc748u: goto label_2fc748;
        case 0x2fc768u: goto label_2fc768;
        case 0x2fc780u: goto label_2fc780;
        case 0x2fc7a4u: goto label_2fc7a4;
        case 0x2fc7c8u: goto label_2fc7c8;
        case 0x2fc830u: goto label_2fc830;
        case 0x2fc974u: goto label_2fc974;
        case 0x2fca70u: goto label_2fca70;
        case 0x2fca94u: goto label_2fca94;
        case 0x2fcac0u: goto label_2fcac0;
        case 0x2fcaecu: goto label_2fcaec;
        case 0x2fcb10u: goto label_2fcb10;
        case 0x2fcb3cu: goto label_2fcb3c;
        case 0x2fcb68u: goto label_2fcb68;
        case 0x2fcb8cu: goto label_2fcb8c;
        case 0x2fcbb8u: goto label_2fcbb8;
        case 0x2fcbe4u: goto label_2fcbe4;
        case 0x2fcc08u: goto label_2fcc08;
        case 0x2fcc34u: goto label_2fcc34;
        case 0x2fcd18u: goto label_2fcd18;
        case 0x2fceb0u: goto label_2fceb0;
        case 0x2fcf00u: goto label_2fcf00;
        case 0x2fcf20u: goto label_2fcf20;
        case 0x2fcf3cu: goto label_2fcf3c;
        default: break;
    }

    ctx->pc = 0x2faf50u;

    // 0x2faf50: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2faf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2faf54: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2faf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2faf58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2faf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2faf5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2faf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2faf60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2faf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2faf64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2faf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2faf68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2faf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2faf6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2faf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2faf70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2faf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2faf74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2faf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2faf78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2faf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2faf7c: 0xafa40178  sw          $a0, 0x178($sp)
    ctx->pc = 0x2faf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 4));
    // 0x2faf80: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2faf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2faf84: 0x2464dbc0  addiu       $a0, $v1, -0x2440
    ctx->pc = 0x2faf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2faf88: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x2faf88u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2faf8c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2faf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2faf90: 0x24649030  addiu       $a0, $v1, -0x6FD0
    ctx->pc = 0x2faf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938672));
    // 0x2faf94: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2faf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2faf98: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x2faf98u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x399030u));
    // 0x2faf9c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2faf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fafa0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2fafa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2fafa4: 0x24c39040  addiu       $v1, $a2, -0x6FC0
    ctx->pc = 0x2fafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938688));
    // 0x2fafa8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2fafa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fafac: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fafacu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399040u));
    // 0x2fafb0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fafb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fafb4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2fafb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2fafb8: 0x24a49050  addiu       $a0, $a1, -0x6FB0
    ctx->pc = 0x2fafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938704));
    // 0x2fafbc: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2fafbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2fafc0: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2fafc0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x399050u));
    // 0x2fafc4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fafc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fafc8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2fafc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2fafcc: 0x24c59060  addiu       $a1, $a2, -0x6FA0
    ctx->pc = 0x2fafccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938720));
    // 0x2fafd0: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2fafd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2fafd4: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2fafd4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x399060u));
    // 0x2fafd8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fafd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fafdc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fafe0: 0x24639070  addiu       $v1, $v1, -0x6F90
    ctx->pc = 0x2fafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938736));
    // 0x2fafe4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2fafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2fafe8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fafe8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x399070u));
    // 0x2fafec: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2fafecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2faff0: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2faff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2faff4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2faff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2faff8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAFF8u;
    {
        const bool branch_taken_0x2faff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faff8) {
            ctx->pc = 0x2FB014u;
            goto label_2fb014;
        }
    }
    ctx->pc = 0x2FB000u;
    // 0x2fb000: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb004: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fb004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb00c: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FB00Cu;
    {
        const bool branch_taken_0x2fb00c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fb00c) {
            ctx->pc = 0x2FB064u;
            goto label_2fb064;
        }
    }
    ctx->pc = 0x2FB014u;
label_2fb014:
    // 0x2fb014: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb018: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fb018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fb01c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb020: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB020u;
    {
        const bool branch_taken_0x2fb020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb020) {
            ctx->pc = 0x2FB03Cu;
            goto label_2fb03c;
        }
    }
    ctx->pc = 0x2FB028u;
    // 0x2fb028: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb02c: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fb02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb034: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FB034u;
    {
        const bool branch_taken_0x2fb034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fb034) {
            ctx->pc = 0x2FB064u;
            goto label_2fb064;
        }
    }
    ctx->pc = 0x2FB03Cu;
label_2fb03c:
    // 0x2fb03c: 0x8fb70178  lw          $s7, 0x178($sp)
    ctx->pc = 0x2fb03cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb040: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x2fb040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2fb044: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fb044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb048: 0x1483023f  bne         $a0, $v1, . + 4 + (0x23F << 2)
    ctx->pc = 0x2FB048u;
    {
        const bool branch_taken_0x2fb048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb048) {
            ctx->pc = 0x2FB948u;
            goto label_2fb948;
        }
    }
    ctx->pc = 0x2FB050u;
    // 0x2fb050: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb054: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2fb054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fb058: 0x24170007  addiu       $s7, $zero, 0x7
    ctx->pc = 0x2fb058u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2fb05c: 0x1477023a  bne         $v1, $s7, . + 4 + (0x23A << 2)
    ctx->pc = 0x2FB05Cu;
    {
        const bool branch_taken_0x2fb05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x2fb05c) {
            ctx->pc = 0x2FB948u;
            goto label_2fb948;
        }
    }
    ctx->pc = 0x2FB064u;
label_2fb064:
    // 0x2fb064: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb068: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2fb068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fb06c: 0xc0c50c4  jal         func_314310
    ctx->pc = 0x2FB06Cu;
    SET_GPR_U32(ctx, 31, 0x2FB074u);
    ctx->pc = 0x314310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314310u, 0x2FB06Cu, 0x2FB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB074u;
label_2fb074:
    // 0x2fb074: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2fb074u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb078: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb07c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2fb07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb080: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fb080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fb084: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb088: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fb088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fb08c: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x2fb08cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb090: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x2fb090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2fb094: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2fb094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb098: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fb098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb09c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2fb09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb0a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fb0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fb0a4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fb0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb0a8: 0x61c38  dsll        $v1, $a2, 16
    ctx->pc = 0x2fb0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 16);
    // 0x2fb0ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fb0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb0b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2fb0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2fb0b4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2fb0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2fb0b8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2fb0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2fb0bc: 0x24c3dbc0  addiu       $v1, $a2, -0x2440
    ctx->pc = 0x2fb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2fb0c0: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2fb0c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb0c4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fb0c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fb0c8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fb0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb0cc: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2fb0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2fb0d0: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x2fb0d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb0d4: 0xe62024  and         $a0, $a3, $a2
    ctx->pc = 0x2fb0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2fb0d8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2fb0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb0dc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2fb0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2fb0e0: 0x2484dbc0  addiu       $a0, $a0, -0x2440
    ctx->pc = 0x2fb0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    // 0x2fb0e4: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x2fb0e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb0e8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fb0e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fb0ec: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fb0ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb0f0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2fb0f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2fb0f4: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x2fb0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2fb0f8: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x2fb0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2fb0fc: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x2fb0fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2fb100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fb100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fb104: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fb104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fb108: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x2fb108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x2fb10c: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2fb10cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb110: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2fb110u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2fb114: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fb114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb118: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x2fb118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
    // 0x2fb11c: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x2fb11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fb120: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x2fb120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2fb124: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fb124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb128: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fb128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fb12c: 0x8c28dcf0  lw          $t0, -0x2310($at)
    ctx->pc = 0x2fb12cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fb130: 0x250401c0  addiu       $a0, $t0, 0x1C0
    ctx->pc = 0x2fb130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 448));
    // 0x2fb134: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x2fb134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb138: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fb138u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fb13c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2fb13cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb140: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2fb140u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2fb144: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2fb144u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2fb148: 0xe82024  and         $a0, $a3, $t0
    ctx->pc = 0x2fb148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x2fb14c: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x2fb14cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fb150: 0x24041d02  addiu       $a0, $zero, 0x1D02
    ctx->pc = 0x2fb150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7426));
    // 0x2fb154: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB154u;
    SET_GPR_U32(ctx, 31, 0x2FB15Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB154u, 0x2FB15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB15Cu;
label_2fb15c:
    // 0x2fb15c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fb15cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb160: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2fb160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb164: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB164u;
    SET_GPR_U32(ctx, 31, 0x2FB16Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB164u, 0x2FB16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB16Cu;
label_2fb16c:
    // 0x2fb16c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fb16cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb170: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x2fb170u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fb174: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x2fb174u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb178: 0x34e50011  ori         $a1, $a3, 0x11
    ctx->pc = 0x2fb178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17);
    // 0x2fb17c: 0x12250011  beq         $s1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FB17Cu;
    {
        const bool branch_taken_0x2fb17c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x2fb17c) {
            ctx->pc = 0x2FB1C4u;
            goto label_2fb1c4;
        }
    }
    ctx->pc = 0x2FB184u;
    // 0x2fb184: 0x3c044288  lui         $a0, 0x4288
    ctx->pc = 0x2fb184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb188: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb188u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb18c: 0x0  nop
    ctx->pc = 0x2fb18cu;
    // NOP
    // 0x2fb190: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb194: 0x3c054288  lui         $a1, 0x4288
    ctx->pc = 0x2fb194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb198: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2fb198u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb19c: 0x0  nop
    ctx->pc = 0x2fb19cu;
    // NOP
    // 0x2fb1a0: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb1a4: 0x3c064288  lui         $a2, 0x4288
    ctx->pc = 0x2fb1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb1a8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb1a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb1ac: 0x0  nop
    ctx->pc = 0x2fb1acu;
    // NOP
    // 0x2fb1b0: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb1b4: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2fb1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2fb1b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb1b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb1bc: 0x0  nop
    ctx->pc = 0x2fb1bcu;
    // NOP
    // 0x2fb1c0: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x2fb1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_2fb1c4:
    // 0x2fb1c4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb1c8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fb1c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb1cc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fb1ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fb1d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb1d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fb1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fb1d8: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x2fb1d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb1dc: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x2fb1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2fb1e0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2fb1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb1e4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb1e8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fb1e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb1ec: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fb1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fb1f0: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2fb1f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb1f4: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x2fb1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
    // 0x2fb1f8: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x2fb1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb1fc: 0xc72024  and         $a0, $a2, $a3
    ctx->pc = 0x2fb1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2fb200: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2fb200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2fb204: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2fb204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2fb208: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x2fb208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2fb20c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fb20cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb210: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fb210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fb214: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fb214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb218: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2fb218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2fb21c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fb21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb220: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2fb220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2fb224: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fb224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb228: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2fb228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2fb22c: 0x2486dbc0  addiu       $a2, $a0, -0x2440
    ctx->pc = 0x2fb22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    // 0x2fb230: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x2fb230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fb234: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fb234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fb238: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fb238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb23c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2fb23cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2fb240: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x2fb240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fb244: 0xe62024  and         $a0, $a3, $a2
    ctx->pc = 0x2fb244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2fb248: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x2fb248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fb24c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fb24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fb250: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fb250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fb254: 0x24690200  addiu       $t1, $v1, 0x200
    ctx->pc = 0x2fb254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2fb258: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x2fb258u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2fb25c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2fb25cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2fb260: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb264: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x2fb264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
    // 0x2fb268: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x2fb268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fb26c: 0x1041824  and         $v1, $t0, $a0
    ctx->pc = 0x2fb26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x2fb270: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fb270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb274: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fb274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fb278: 0x8c24dcf0  lw          $a0, -0x2310($at)
    ctx->pc = 0x2fb278u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fb27c: 0x24890200  addiu       $t1, $a0, 0x200
    ctx->pc = 0x2fb27cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x2fb280: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x2fb280u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2fb284: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fb284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fb288: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2fb288u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb28c: 0x82438  dsll        $a0, $t0, 16
    ctx->pc = 0x2fb28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << 16);
    // 0x2fb290: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fb290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fb294: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x2fb294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2fb298: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x2fb298u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fb29c: 0x24041d02  addiu       $a0, $zero, 0x1D02
    ctx->pc = 0x2fb29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7426));
    // 0x2fb2a0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB2A0u;
    SET_GPR_U32(ctx, 31, 0x2FB2A8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB2A0u, 0x2FB2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2A8u;
label_2fb2a8:
    // 0x2fb2a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fb2a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb2ac: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB2ACu;
    SET_GPR_U32(ctx, 31, 0x2FB2B4u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB2ACu, 0x2FB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB2B4u;
label_2fb2b4:
    // 0x2fb2b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fb2b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb2b8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2fb2b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb2bc: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x2fb2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb2c0: 0x34d60011  ori         $s6, $a2, 0x11
    ctx->pc = 0x2fb2c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
    // 0x2fb2c4: 0x12360011  beq         $s1, $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FB2C4u;
    {
        const bool branch_taken_0x2fb2c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 22));
        if (branch_taken_0x2fb2c4) {
            ctx->pc = 0x2FB30Cu;
            goto label_2fb30c;
        }
    }
    ctx->pc = 0x2FB2CCu;
    // 0x2fb2cc: 0x3c054288  lui         $a1, 0x4288
    ctx->pc = 0x2fb2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb2d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2fb2d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb2d4: 0x0  nop
    ctx->pc = 0x2fb2d4u;
    // NOP
    // 0x2fb2d8: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb2dc: 0x3c044288  lui         $a0, 0x4288
    ctx->pc = 0x2fb2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb2e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb2e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb2e4: 0x0  nop
    ctx->pc = 0x2fb2e4u;
    // NOP
    // 0x2fb2e8: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb2ec: 0x3c034288  lui         $v1, 0x4288
    ctx->pc = 0x2fb2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb2f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb2f4: 0x0  nop
    ctx->pc = 0x2fb2f4u;
    // NOP
    // 0x2fb2f8: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb2fc: 0x3c1642b4  lui         $s6, 0x42B4
    ctx->pc = 0x2fb2fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17076 << 16));
    // 0x2fb300: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2fb300u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb304: 0x0  nop
    ctx->pc = 0x2fb304u;
    // NOP
    // 0x2fb308: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x2fb308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_2fb30c:
    // 0x2fb30c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb310: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2fb310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fb314: 0x14600071  bnez        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2FB314u;
    {
        const bool branch_taken_0x2fb314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb314) {
            ctx->pc = 0x2FB4DCu;
            goto label_2fb4dc;
        }
    }
    ctx->pc = 0x2FB31Cu;
    // 0x2fb31c: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x2fb31cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb320: 0x16303c  dsll32      $a2, $s6, 0
    ctx->pc = 0x2fb320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2fb324: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fb324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fb328: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb32c: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2fb32cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2fb330: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x2fb330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fb334: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2fb334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2fb338: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fb338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb33c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb340: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2fb340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb344: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fb344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fb348: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fb348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb34c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2fb34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2fb350: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2fb350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fb354: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2fb354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fb358: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x2fb358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2fb35c: 0x24041903  addiu       $a0, $zero, 0x1903
    ctx->pc = 0x2fb35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6403));
    // 0x2fb360: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fb360u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb364: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fb364u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb368: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB368u;
    SET_GPR_U32(ctx, 31, 0x2FB370u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB368u, 0x2FB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB370u;
label_2fb370:
    // 0x2fb370: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fb370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb374: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB374u;
    SET_GPR_U32(ctx, 31, 0x2FB37Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB374u, 0x2FB37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB37Cu;
label_2fb37c:
    // 0x2fb37c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fb37cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb380: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2fb380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb384: 0xaca30100  sw          $v1, 0x100($a1)
    ctx->pc = 0x2fb384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 3));
    // 0x2fb388: 0x868315f0  lh          $v1, 0x15F0($s4)
    ctx->pc = 0x2fb388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fb38c: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x2fb38cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fb390: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x2fb390u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x2fb394: 0x121e3c  dsll32      $v1, $s2, 24
    ctx->pc = 0x2fb394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
    // 0x2fb398: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb398u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb39c: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x2fb39cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb3a0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb3a4: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x2fb3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2fb3a8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2fb3a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb3ac: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2fb3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb3b0: 0x34a40011  ori         $a0, $a1, 0x11
    ctx->pc = 0x2fb3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17);
    // 0x2fb3b4: 0x12240164  beq         $s1, $a0, . + 4 + (0x164 << 2)
    ctx->pc = 0x2FB3B4u;
    {
        const bool branch_taken_0x2fb3b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fb3b4) {
            ctx->pc = 0x2FB948u;
            goto label_2fb948;
        }
    }
    ctx->pc = 0x2FB3BCu;
    // 0x2fb3bc: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x2fb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fb3c0: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x2fb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2fb3c4: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x2fb3c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fb3c8: 0xae250b18  sw          $a1, 0xB18($s1)
    ctx->pc = 0x2fb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 5));
    // 0x2fb3cc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2fb3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2fb3d0: 0xa2230348  sb          $v1, 0x348($s1)
    ctx->pc = 0x2fb3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb3d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2fb3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fb3d8: 0xa2230346  sb          $v1, 0x346($s1)
    ctx->pc = 0x2fb3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb3dc: 0x3c0442b0  lui         $a0, 0x42B0
    ctx->pc = 0x2fb3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17072 << 16));
    // 0x2fb3e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb3e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb3e4: 0x0  nop
    ctx->pc = 0x2fb3e4u;
    // NOP
    // 0x2fb3e8: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb3ec: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x2fb3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x2fb3f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb3f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb3f4: 0x0  nop
    ctx->pc = 0x2fb3f4u;
    // NOP
    // 0x2fb3f8: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb3fc: 0x3c064268  lui         $a2, 0x4268
    ctx->pc = 0x2fb3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17000 << 16));
    // 0x2fb400: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb400u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb404: 0x0  nop
    ctx->pc = 0x2fb404u;
    // NOP
    // 0x2fb408: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb40c: 0x3c034288  lui         $v1, 0x4288
    ctx->pc = 0x2fb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb414: 0x0  nop
    ctx->pc = 0x2fb414u;
    // NOP
    // 0x2fb418: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fb418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fb41c: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2fb41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb420: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb420u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb424: 0x0  nop
    ctx->pc = 0x2fb424u;
    // NOP
    // 0x2fb428: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb42c: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x2fb42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb430: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2fb430u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb434: 0x0  nop
    ctx->pc = 0x2fb434u;
    // NOP
    // 0x2fb438: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb43c: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2fb43cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb440: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb440u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb444: 0x0  nop
    ctx->pc = 0x2fb444u;
    // NOP
    // 0x2fb448: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb44c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2fb44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb450: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb454: 0x0  nop
    ctx->pc = 0x2fb454u;
    // NOP
    // 0x2fb458: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fb458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fb45c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fb45cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb460: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB460u;
    {
        const bool branch_taken_0x2fb460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb460) {
            ctx->pc = 0x2FB4C8u;
            goto label_2fb4c8;
        }
    }
    ctx->pc = 0x2FB468u;
label_2fb468:
    // 0x2fb468: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fb468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb46c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb46cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb470: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x2fb470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fb474: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x2fb474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fb478: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x2fb478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fb47c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fb47cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb480: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fb480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb484: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fb484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fb488: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2fb488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fb48c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2fb48cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2fb490: 0x152e3c  dsll32      $a1, $s5, 24
    ctx->pc = 0x2fb490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb494: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2fb494u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2fb498: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x2fb498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2fb49c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2fb49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fb4a0: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x2fb4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x2fb4a4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fb4a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb4a8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fb4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb4ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fb4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fb4b0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fb4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fb4b4: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2fb4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fb4b8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fb4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fb4bc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fb4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb4c0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fb4c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb4c4: 0x0  nop
    ctx->pc = 0x2fb4c4u;
    // NOP
label_2fb4c8:
    // 0x2fb4c8: 0x2e040010  sltiu       $a0, $s0, 0x10
    ctx->pc = 0x2fb4c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fb4cc: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2FB4CCu;
    {
        const bool branch_taken_0x2fb4cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb4cc) {
            ctx->pc = 0x2FB468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb468;
        }
    }
    ctx->pc = 0x2FB4D4u;
    // 0x2fb4d4: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x2FB4D4u;
    {
        const bool branch_taken_0x2fb4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb4d4) {
            ctx->pc = 0x2FB948u;
            goto label_2fb948;
        }
    }
    ctx->pc = 0x2FB4DCu;
label_2fb4dc:
    // 0x2fb4dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2fb4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb4e0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2fb4e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fb4e4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fb4e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fb4e8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb4ec: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2fb4ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2fb4f0: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x2fb4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fb4f4: 0xc34024  and         $t0, $a2, $v1
    ctx->pc = 0x2fb4f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2fb4f8: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x2fb4f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2fb4fc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb500: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2fb500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb504: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fb504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fb508: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fb508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb50c: 0x62438  dsll        $a0, $a2, 16
    ctx->pc = 0x2fb50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 16);
    // 0x2fb510: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2fb510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fb514: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2fb514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fb518: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x2fb518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2fb51c: 0x24041900  addiu       $a0, $zero, 0x1900
    ctx->pc = 0x2fb51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    // 0x2fb520: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fb520u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb524: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fb524u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb528: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB528u;
    SET_GPR_U32(ctx, 31, 0x2FB530u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB528u, 0x2FB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB530u;
label_2fb530:
    // 0x2fb530: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fb530u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb534: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB534u;
    SET_GPR_U32(ctx, 31, 0x2FB53Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB534u, 0x2FB53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB53Cu;
label_2fb53c:
    // 0x2fb53c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb540: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x2fb540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
    // 0x2fb544: 0x868315f0  lh          $v1, 0x15F0($s4)
    ctx->pc = 0x2fb544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fb548: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x2fb548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fb54c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fb54cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fb550: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x2fb550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fb554: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb554u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb558: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x2fb558u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb55c: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb560: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x2fb560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2fb564: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2fb564u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb568: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x2fb568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb56c: 0x34c50011  ori         $a1, $a2, 0x11
    ctx->pc = 0x2fb56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
    // 0x2fb570: 0x12250037  beq         $s1, $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FB570u;
    {
        const bool branch_taken_0x2fb570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x2fb570) {
            ctx->pc = 0x2FB650u;
            goto label_2fb650;
        }
    }
    ctx->pc = 0x2FB578u;
    // 0x2fb578: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x2fb578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fb57c: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x2fb57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2fb580: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fb580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fb584: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x2fb584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
    // 0x2fb588: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2fb588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fb58c: 0xa2250348  sb          $a1, 0x348($s1)
    ctx->pc = 0x2fb58cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x2fb590: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2fb590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2fb594: 0xa2240346  sb          $a0, 0x346($s1)
    ctx->pc = 0x2fb594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x2fb598: 0x3c034332  lui         $v1, 0x4332
    ctx->pc = 0x2fb598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17202 << 16));
    // 0x2fb59c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb5a0: 0x0  nop
    ctx->pc = 0x2fb5a0u;
    // NOP
    // 0x2fb5a4: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb5a8: 0x3c044332  lui         $a0, 0x4332
    ctx->pc = 0x2fb5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17202 << 16));
    // 0x2fb5ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb5acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb5b0: 0x0  nop
    ctx->pc = 0x2fb5b0u;
    // NOP
    // 0x2fb5b4: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb5b8: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2fb5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb5bc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb5bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb5c0: 0x0  nop
    ctx->pc = 0x2fb5c0u;
    // NOP
    // 0x2fb5c4: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb5c8: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x2fb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb5cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2fb5ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb5d0: 0x0  nop
    ctx->pc = 0x2fb5d0u;
    // NOP
    // 0x2fb5d4: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fb5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fb5d8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fb5d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb5dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB5DCu;
    {
        const bool branch_taken_0x2fb5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb5dc) {
            ctx->pc = 0x2FB640u;
            goto label_2fb640;
        }
    }
    ctx->pc = 0x2FB5E4u;
label_2fb5e4:
    // 0x2fb5e4: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fb5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb5e8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb5e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb5ec: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x2fb5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fb5f0: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x2fb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fb5f4: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x2fb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fb5f8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fb5f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb5fc: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x2fb5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb600: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2fb600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fb604: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fb604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fb608: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fb608u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fb60c: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fb60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb610: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb610u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb614: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x2fb614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fb618: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2fb618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2fb61c: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x2fb61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x2fb620: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fb620u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb624: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fb624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb628: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fb628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fb62c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fb62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fb630: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2fb630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fb634: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fb634u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fb638: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x2fb638u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb63c: 0x72e08628  paddub      $s0, $s7, $zero
    ctx->pc = 0x2fb63cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_2fb640:
    // 0x2fb640: 0x2e040010  sltiu       $a0, $s0, 0x10
    ctx->pc = 0x2fb640u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fb644: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2FB644u;
    {
        const bool branch_taken_0x2fb644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb644) {
            ctx->pc = 0x2FB5E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb5e4;
        }
    }
    ctx->pc = 0x2FB64Cu;
    // 0x2fb64c: 0x0  nop
    ctx->pc = 0x2fb64cu;
    // NOP
label_2fb650:
    // 0x2fb650: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb654: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2fb654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb658: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fb658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fb65c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb660: 0x3bc38  dsll        $s7, $v1, 16
    ctx->pc = 0x2fb660u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << 16);
    // 0x2fb664: 0x36e3ffff  ori         $v1, $s7, 0xFFFF
    ctx->pc = 0x2fb664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x2fb668: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2fb668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2fb66c: 0x4b83c  dsll32      $s7, $a0, 0
    ctx->pc = 0x2fb66cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb670: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb674: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2fb674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb678: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fb678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fb67c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb680: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fb680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fb684: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x2fb684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb688: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x2fb688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2fb68c: 0x2e32825  or          $a1, $s7, $v1
    ctx->pc = 0x2fb68cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x2fb690: 0x24041901  addiu       $a0, $zero, 0x1901
    ctx->pc = 0x2fb690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6401));
    // 0x2fb694: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fb694u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb698: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fb698u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb69c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB69Cu;
    SET_GPR_U32(ctx, 31, 0x2FB6A4u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB69Cu, 0x2FB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6A4u;
label_2fb6a4:
    // 0x2fb6a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fb6a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb6a8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB6A8u;
    SET_GPR_U32(ctx, 31, 0x2FB6B0u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB6A8u, 0x2FB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6B0u;
label_2fb6b0:
    // 0x2fb6b0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fb6b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb6b4: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb6b8: 0xac660104  sw          $a2, 0x104($v1)
    ctx->pc = 0x2fb6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 6));
    // 0x2fb6bc: 0x868315f0  lh          $v1, 0x15F0($s4)
    ctx->pc = 0x2fb6bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fb6c0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2fb6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fb6c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb6c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb6c8: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x2fb6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fb6cc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2fb6ccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2fb6d0: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x2fb6d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2fb6d4: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fb6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb6d8: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x2fb6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x2fb6dc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2fb6dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb6e0: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2fb6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb6e4: 0x34870011  ori         $a3, $a0, 0x11
    ctx->pc = 0x2fb6e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x2fb6e8: 0x12270037  beq         $s1, $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FB6E8u;
    {
        const bool branch_taken_0x2fb6e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 7));
        if (branch_taken_0x2fb6e8) {
            ctx->pc = 0x2FB7C8u;
            goto label_2fb7c8;
        }
    }
    ctx->pc = 0x2FB6F0u;
    // 0x2fb6f0: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x2fb6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fb6f4: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x2fb6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2fb6f8: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x2fb6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2fb6fc: 0xae240b18  sw          $a0, 0xB18($s1)
    ctx->pc = 0x2fb6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 4));
    // 0x2fb700: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2fb700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fb704: 0xa2230348  sb          $v1, 0x348($s1)
    ctx->pc = 0x2fb704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb708: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2fb708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fb70c: 0xa2240346  sb          $a0, 0x346($s1)
    ctx->pc = 0x2fb70cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x2fb710: 0x3c044332  lui         $a0, 0x4332
    ctx->pc = 0x2fb710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17202 << 16));
    // 0x2fb714: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb714u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb718: 0x0  nop
    ctx->pc = 0x2fb718u;
    // NOP
    // 0x2fb71c: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb720: 0x3c074332  lui         $a3, 0x4332
    ctx->pc = 0x2fb720u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17202 << 16));
    // 0x2fb724: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2fb724u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb728: 0x0  nop
    ctx->pc = 0x2fb728u;
    // NOP
    // 0x2fb72c: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb730: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2fb730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb734: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb734u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb738: 0x0  nop
    ctx->pc = 0x2fb738u;
    // NOP
    // 0x2fb73c: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb740: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2fb740u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2fb744: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb744u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb748: 0x0  nop
    ctx->pc = 0x2fb748u;
    // NOP
    // 0x2fb74c: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fb74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fb750: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fb750u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb754: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB754u;
    {
        const bool branch_taken_0x2fb754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb754) {
            ctx->pc = 0x2FB7B8u;
            goto label_2fb7b8;
        }
    }
    ctx->pc = 0x2FB75Cu;
label_2fb75c:
    // 0x2fb75c: 0x15263c  dsll32      $a0, $s5, 24
    ctx->pc = 0x2fb75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb760: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fb760u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fb764: 0x439c0  sll         $a3, $a0, 7
    ctx->pc = 0x2fb764u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fb768: 0x2873021  addu        $a2, $s4, $a3
    ctx->pc = 0x2fb768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2fb76c: 0x24c31600  addiu       $v1, $a2, 0x1600
    ctx->pc = 0x2fb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 5632));
    // 0x2fb770: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fb770u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb774: 0x104040  sll         $t0, $s0, 1
    ctx->pc = 0x2fb774u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb778: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x2fb778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fb77c: 0x2243821  addu        $a3, $s1, $a0
    ctx->pc = 0x2fb77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fb780: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2fb780u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2fb784: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fb784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb788: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb788u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb78c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fb78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fb790: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2fb790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fb794: 0x24681610  addiu       $t0, $v1, 0x1610
    ctx->pc = 0x2fb794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x2fb798: 0x79040000  lq          $a0, 0x0($t0)
    ctx->pc = 0x2fb798u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fb79c: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x2fb79cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb7a0: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x2fb7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2fb7a4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2fb7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fb7a8: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x2fb7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2fb7ac: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x2fb7acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x2fb7b0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2fb7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb7b4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2fb7b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2fb7b8:
    // 0x2fb7b8: 0x2e070010  sltiu       $a3, $s0, 0x10
    ctx->pc = 0x2fb7b8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fb7bc: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2FB7BCu;
    {
        const bool branch_taken_0x2fb7bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb7bc) {
            ctx->pc = 0x2FB75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb75c;
        }
    }
    ctx->pc = 0x2FB7C4u;
    // 0x2fb7c4: 0x0  nop
    ctx->pc = 0x2fb7c4u;
    // NOP
label_2fb7c8:
    // 0x2fb7c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb7cc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2fb7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb7d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fb7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fb7d4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fb7d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb7d8: 0x62c38  dsll        $a1, $a2, 16
    ctx->pc = 0x2fb7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 16);
    // 0x2fb7dc: 0x34a7ffff  ori         $a3, $a1, 0xFFFF
    ctx->pc = 0x2fb7dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fb7e0: 0x672024  and         $a0, $v1, $a3
    ctx->pc = 0x2fb7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2fb7e4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2fb7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb7e8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2fb7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb7ec: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x2fb7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fb7f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fb7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fb7f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb7f8: 0x33438  dsll        $a2, $v1, 16
    ctx->pc = 0x2fb7f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 16);
    // 0x2fb7fc: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x2fb7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2fb800: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2fb800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2fb804: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2fb804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2fb808: 0x24041903  addiu       $a0, $zero, 0x1903
    ctx->pc = 0x2fb808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6403));
    // 0x2fb80c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fb80cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb810: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fb810u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb814: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB814u;
    SET_GPR_U32(ctx, 31, 0x2FB81Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB814u, 0x2FB81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB81Cu;
label_2fb81c:
    // 0x2fb81c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fb81cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb820: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2fb820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2fb824: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB824u;
    SET_GPR_U32(ctx, 31, 0x2FB82Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB824u, 0x2FB82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB82Cu;
label_2fb82c:
    // 0x2fb82c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fb82cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb830: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fb830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb834: 0xacc30108  sw          $v1, 0x108($a2)
    ctx->pc = 0x2fb834u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 264), GPR_U32(ctx, 3));
    // 0x2fb838: 0x868715f0  lh          $a3, 0x15F0($s4)
    ctx->pc = 0x2fb838u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fb83c: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x2fb83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2fb840: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb840u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb844: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x2fb844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fb848: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2fb848u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2fb84c: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x2fb84cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fb850: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb854: 0x8c850108  lw          $a1, 0x108($a0)
    ctx->pc = 0x2fb854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x2fb858: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x2fb858u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2fb85c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fb85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb860: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fb860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fb864: 0x12230038  beq         $s1, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2FB864u;
    {
        const bool branch_taken_0x2fb864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fb864) {
            ctx->pc = 0x2FB948u;
            goto label_2fb948;
        }
    }
    ctx->pc = 0x2FB86Cu;
    // 0x2fb86c: 0x8e260b18  lw          $a2, 0xB18($s1)
    ctx->pc = 0x2fb86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fb870: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x2fb870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2fb874: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2fb874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2fb878: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x2fb878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
    // 0x2fb87c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2fb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fb880: 0xa2230348  sb          $v1, 0x348($s1)
    ctx->pc = 0x2fb880u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb884: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2fb884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fb888: 0xa2230346  sb          $v1, 0x346($s1)
    ctx->pc = 0x2fb888u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb88c: 0x3c03431e  lui         $v1, 0x431E
    ctx->pc = 0x2fb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17182 << 16));
    // 0x2fb890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fb890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb894: 0x0  nop
    ctx->pc = 0x2fb894u;
    // NOP
    // 0x2fb898: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb89c: 0x3c044328  lui         $a0, 0x4328
    ctx->pc = 0x2fb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17192 << 16));
    // 0x2fb8a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb8a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb8a4: 0x0  nop
    ctx->pc = 0x2fb8a4u;
    // NOP
    // 0x2fb8a8: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb8ac: 0x3c0642d8  lui         $a2, 0x42D8
    ctx->pc = 0x2fb8acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17112 << 16));
    // 0x2fb8b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb8b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb8b4: 0x0  nop
    ctx->pc = 0x2fb8b4u;
    // NOP
    // 0x2fb8b8: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb8bc: 0x3c0742b0  lui         $a3, 0x42B0
    ctx->pc = 0x2fb8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17072 << 16));
    // 0x2fb8c0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2fb8c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb8c4: 0x0  nop
    ctx->pc = 0x2fb8c4u;
    // NOP
    // 0x2fb8c8: 0xe62002dc  swc1        $f0, 0x2DC($s1)
    ctx->pc = 0x2fb8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 732), bits); }
    // 0x2fb8cc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fb8ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fb8d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB8D0u;
    {
        const bool branch_taken_0x2fb8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb8d0) {
            ctx->pc = 0x2FB938u;
            goto label_2fb938;
        }
    }
    ctx->pc = 0x2FB8D8u;
label_2fb8d8:
    // 0x2fb8d8: 0x15263c  dsll32      $a0, $s5, 24
    ctx->pc = 0x2fb8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb8dc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fb8dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fb8e0: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x2fb8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fb8e4: 0x2843021  addu        $a2, $s4, $a0
    ctx->pc = 0x2fb8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fb8e8: 0x24c41600  addiu       $a0, $a2, 0x1600
    ctx->pc = 0x2fb8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5632));
    // 0x2fb8ec: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2fb8ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb8f0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2fb8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb8f4: 0x34900  sll         $t1, $v1, 4
    ctx->pc = 0x2fb8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fb8f8: 0x2294021  addu        $t0, $s1, $t1
    ctx->pc = 0x2fb8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x2fb8fc: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x2fb8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x2fb900: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fb900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fb904: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fb904u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fb908: 0x339c0  sll         $a3, $v1, 7
    ctx->pc = 0x2fb908u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fb90c: 0x2872021  addu        $a0, $s4, $a3
    ctx->pc = 0x2fb90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2fb910: 0x24831610  addiu       $v1, $a0, 0x1610
    ctx->pc = 0x2fb910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
    // 0x2fb914: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fb914u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb918: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2fb918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2fb91c: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x2fb91cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fb920: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x2fb920u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2fb924: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x2fb924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2fb928: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x2fb928u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x2fb92c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2fb92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb930: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2fb930u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fb934: 0x0  nop
    ctx->pc = 0x2fb934u;
    // NOP
label_2fb938:
    // 0x2fb938: 0x2e040010  sltiu       $a0, $s0, 0x10
    ctx->pc = 0x2fb938u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fb93c: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2FB93Cu;
    {
        const bool branch_taken_0x2fb93c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb93c) {
            ctx->pc = 0x2FB8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb8d8;
        }
    }
    ctx->pc = 0x2FB944u;
    // 0x2fb944: 0x0  nop
    ctx->pc = 0x2fb944u;
    // NOP
label_2fb948:
    // 0x2fb948: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb94c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2fb94cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fb950: 0x14e0000b  bnez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2FB950u;
    {
        const bool branch_taken_0x2fb950 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb950) {
            ctx->pc = 0x2FB980u;
            goto label_2fb980;
        }
    }
    ctx->pc = 0x2FB958u;
    // 0x2fb958: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb95c: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x2fb95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fb960: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x2fb960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb964: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB964u;
    {
        const bool branch_taken_0x2fb964 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb964) {
            ctx->pc = 0x2FB980u;
            goto label_2fb980;
        }
    }
    ctx->pc = 0x2FB96Cu;
    // 0x2fb96c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb970: 0x8c7600d4  lw          $s6, 0xD4($v1)
    ctx->pc = 0x2fb970u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb974: 0x2ac60011  slti        $a2, $s6, 0x11
    ctx->pc = 0x2fb974u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2fb978: 0x14c0001f  bnez        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FB978u;
    {
        const bool branch_taken_0x2fb978 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb978) {
            ctx->pc = 0x2FB9F8u;
            goto label_2fb9f8;
        }
    }
    ctx->pc = 0x2FB980u;
label_2fb980:
    // 0x2fb980: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2fb980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb984: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2fb984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2fb988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb98c: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FB98Cu;
    {
        const bool branch_taken_0x2fb98c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb98c) {
            ctx->pc = 0x2FB9BCu;
            goto label_2fb9bc;
        }
    }
    ctx->pc = 0x2FB994u;
    // 0x2fb994: 0x8fb60178  lw          $s6, 0x178($sp)
    ctx->pc = 0x2fb994u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb998: 0x8ec300d4  lw          $v1, 0xD4($s6)
    ctx->pc = 0x2fb998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 212)));
    // 0x2fb99c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2fb99cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fb9a0: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB9A0u;
    {
        const bool branch_taken_0x2fb9a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9a0) {
            ctx->pc = 0x2FB9BCu;
            goto label_2fb9bc;
        }
    }
    ctx->pc = 0x2FB9A8u;
    // 0x2fb9a8: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb9ac: 0x8c7600d4  lw          $s6, 0xD4($v1)
    ctx->pc = 0x2fb9acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb9b0: 0x2ac60009  slti        $a2, $s6, 0x9
    ctx->pc = 0x2fb9b0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2fb9b4: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FB9B4u;
    {
        const bool branch_taken_0x2fb9b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9b4) {
            ctx->pc = 0x2FB9F8u;
            goto label_2fb9f8;
        }
    }
    ctx->pc = 0x2FB9BCu;
label_2fb9bc:
    // 0x2fb9bc: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb9c0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fb9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fb9c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fb9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb9c8: 0x14a4023d  bne         $a1, $a0, . + 4 + (0x23D << 2)
    ctx->pc = 0x2FB9C8u;
    {
        const bool branch_taken_0x2fb9c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fb9c8) {
            ctx->pc = 0x2FC2C0u;
            goto label_2fc2c0;
        }
    }
    ctx->pc = 0x2FB9D0u;
    // 0x2fb9d0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb9d4: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x2fb9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb9d8: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x2fb9d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2fb9dc: 0x14200238  bnez        $at, . + 4 + (0x238 << 2)
    ctx->pc = 0x2FB9DCu;
    {
        const bool branch_taken_0x2fb9dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9dc) {
            ctx->pc = 0x2FC2C0u;
            goto label_2fc2c0;
        }
    }
    ctx->pc = 0x2FB9E4u;
    // 0x2fb9e4: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb9e8: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fb9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb9ec: 0x28a10011  slti        $at, $a1, 0x11
    ctx->pc = 0x2fb9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2fb9f0: 0x10200233  beqz        $at, . + 4 + (0x233 << 2)
    ctx->pc = 0x2FB9F0u;
    {
        const bool branch_taken_0x2fb9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9f0) {
            ctx->pc = 0x2FC2C0u;
            goto label_2fc2c0;
        }
    }
    ctx->pc = 0x2FB9F8u;
label_2fb9f8:
    // 0x2fb9f8: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb9fc: 0x8c840100  lw          $a0, 0x100($a0)
    ctx->pc = 0x2fb9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2fba00: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x2fba00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fba04: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fba04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fba08: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fba08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fba0c: 0x1223022c  beq         $s1, $v1, . + 4 + (0x22C << 2)
    ctx->pc = 0x2FBA0Cu;
    {
        const bool branch_taken_0x2fba0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fba0c) {
            ctx->pc = 0x2FC2C0u;
            goto label_2fc2c0;
        }
    }
    ctx->pc = 0x2FBA14u;
    // 0x2fba14: 0x868515f0  lh          $a1, 0x15F0($s4)
    ctx->pc = 0x2fba14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fba18: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x2fba18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2fba1c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fba1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fba20: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x2fba20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fba24: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fba24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fba28: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x2fba28u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fba2c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fba30: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2fba30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fba34: 0x10a0015e  beqz        $a1, . + 4 + (0x15E << 2)
    ctx->pc = 0x2FBA34u;
    {
        const bool branch_taken_0x2fba34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fba34) {
            ctx->pc = 0x2FBFB0u;
            goto label_2fbfb0;
        }
    }
    ctx->pc = 0x2FBA3Cu;
    // 0x2fba3c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fba40: 0x8c720104  lw          $s2, 0x104($v1)
    ctx->pc = 0x2fba40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2fba44: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fba44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fba48: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fba48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fba4c: 0x1243008f  beq         $s2, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x2FBA4Cu;
    {
        const bool branch_taken_0x2fba4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fba4c) {
            ctx->pc = 0x2FBC8Cu;
            goto label_2fbc8c;
        }
    }
    ctx->pc = 0x2FBA54u;
    // 0x2fba54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fba58: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fba58u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fba5c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2FBA5Cu;
    {
        const bool branch_taken_0x2fba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fba5c) {
            ctx->pc = 0x2FBBC8u;
            goto label_2fbbc8;
        }
    }
    ctx->pc = 0x2FBA64u;
label_2fba64:
    // 0x2fba64: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fba68: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2fba68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fba6c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2fba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fba70: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fba70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fba74: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x2fba74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fba78: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fba78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fba7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fba80: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fba84: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2fba84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2fba88: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fba8c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x2fba8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fba90: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2fba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fba94: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fba94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fba98: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x2fba98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fba9c: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fba9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbaa0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbaa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fbaa8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbaac: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbab0: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2fbab0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2fbab4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbab8: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x2fbab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbabc: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x2fbabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2fbac0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbac4: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fbac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbac8: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x2fbac8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbacc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbad0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2fbad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2fbad4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbad8: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fbad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbadc: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2fbadcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2fbae0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbae4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fbae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbae8: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x2fbae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2fbaec: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2fbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fbaf0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2fbaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbaf4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fbaf4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbaf8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x2fbaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbafc: 0x24a60003  addiu       $a2, $a1, 0x3
    ctx->pc = 0x2fbafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x2fbb00: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2fbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbb04: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2fbb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbb08: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2fbb08u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2fbb0c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbb10: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x2fbb10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbb14: 0x25070004  addiu       $a3, $t0, 0x4
    ctx->pc = 0x2fbb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2fbb18: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2fbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fbb1c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2fbb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbb20: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fbb20u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbb24: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbb24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbb28: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x2fbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2fbb2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbb30: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2fbb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbb34: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2fbb34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2fbb38: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbb3c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2fbb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbb40: 0x24830005  addiu       $v1, $a0, 0x5
    ctx->pc = 0x2fbb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x2fbb44: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbb44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbb48: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fbb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbb4c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fbb4cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbb50: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x2fbb50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbb54: 0x24c30005  addiu       $v1, $a2, 0x5
    ctx->pc = 0x2fbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x2fbb58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbb58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbb5c: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fbb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbb60: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fbb60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fbb64: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2fbb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbb68: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2fbb68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2fbb6c: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x2fbb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x2fbb70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbb70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbb74: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x2fbb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbb78: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x2fbb78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fbb7c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbb80: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x2fbb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2fbb84: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbb88: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2fbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbb8c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fbb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fbb90: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2fbb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbb94: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x2fbb94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2fbb98: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x2fbb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x2fbb9c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fbb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbba0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2fbba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbba4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fbba4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbba8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbbac: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x2fbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2fbbb0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbbb4: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fbbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbbb8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fbbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fbbbc: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbbc0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fbbc0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fbbc4: 0x0  nop
    ctx->pc = 0x2fbbc4u;
    // NOP
label_2fbbc8:
    // 0x2fbbc8: 0x1600ffa6  bnez        $s0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x2FBBC8u;
    {
        const bool branch_taken_0x2fbbc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbbc8) {
            ctx->pc = 0x2FBA64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fba64;
        }
    }
    ctx->pc = 0x2FBBD0u;
    // 0x2fbbd0: 0x26250160  addiu       $a1, $s1, 0x160
    ctx->pc = 0x2fbbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x2fbbd4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2fbbd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbbd8: 0x10b900  sll         $s7, $s0, 4
    ctx->pc = 0x2fbbd8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fbbdc: 0x2572021  addu        $a0, $s2, $s7
    ctx->pc = 0x2fbbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x2fbbe0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fbbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fbbe4: 0x26230170  addiu       $v1, $s1, 0x170
    ctx->pc = 0x2fbbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x2fbbe8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fbbe8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbbec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fbbf0: 0x3b900  sll         $s7, $v1, 4
    ctx->pc = 0x2fbbf0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbbf4: 0x2571821  addu        $v1, $s2, $s7
    ctx->pc = 0x2fbbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x2fbbf8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fbbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fbbfc: 0x26240180  addiu       $a0, $s1, 0x180
    ctx->pc = 0x2fbbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x2fbc00: 0x78970000  lq          $s7, 0x0($a0)
    ctx->pc = 0x2fbc00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbc04: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x2fbc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2fbc08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbc08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbc0c: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2fbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2fbc10: 0x7c770000  sq          $s7, 0x0($v1)
    ctx->pc = 0x2fbc10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 23));
    // 0x2fbc14: 0x26230190  addiu       $v1, $s1, 0x190
    ctx->pc = 0x2fbc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x2fbc18: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fbc18u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbc1c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x2fbc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2fbc20: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fbc20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbc24: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x2fbc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2fbc28: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fbc2c: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x2fbc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x2fbc30: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2fbc30u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbc34: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2fbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2fbc38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbc3c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2fbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbc40: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2fbc40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2fbc44: 0x262501b0  addiu       $a1, $s1, 0x1B0
    ctx->pc = 0x2fbc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x2fbc48: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fbc48u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbc4c: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x2fbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x2fbc50: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2fbc50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbc54: 0x2472021  addu        $a0, $s2, $a3
    ctx->pc = 0x2fbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2fbc58: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fbc58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fbc5c: 0x262301c0  addiu       $v1, $s1, 0x1C0
    ctx->pc = 0x2fbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x2fbc60: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fbc60u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbc64: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x2fbc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2fbc68: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fbc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbc6c: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2fbc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2fbc70: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fbc70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fbc74: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x2fbc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x2fbc78: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x2fbc78u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbc7c: 0x26060007  addiu       $a2, $s0, 0x7
    ctx->pc = 0x2fbc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2fbc80: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2fbc80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbc84: 0x2462021  addu        $a0, $s2, $a2
    ctx->pc = 0x2fbc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2fbc88: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x2fbc88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_2fbc8c:
    // 0x2fbc8c: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x2fbc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbc90: 0x8ce60108  lw          $a2, 0x108($a3)
    ctx->pc = 0x2fbc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 264)));
    // 0x2fbc94: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x2fbc94u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fbc98: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fbc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fbc9c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fbc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fbca0: 0x126300c3  beq         $s3, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2FBCA0u;
    {
        const bool branch_taken_0x2fbca0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fbca0) {
            ctx->pc = 0x2FBFB0u;
            goto label_2fbfb0;
        }
    }
    ctx->pc = 0x2FBCA8u;
    // 0x2fbca8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2fbca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fbcac: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x2fbcacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fbcb0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2FBCB0u;
    {
        const bool branch_taken_0x2fbcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbcb0) {
            ctx->pc = 0x2FBE18u;
            goto label_2fbe18;
        }
    }
    ctx->pc = 0x2FBCB8u;
label_2fbcb8:
    // 0x2fbcb8: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fbcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbcbc: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x2fbcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fbcc0: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2fbcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fbcc4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2fbcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbcc8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fbcc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbccc: 0x1040c0  sll         $t0, $s0, 3
    ctx->pc = 0x2fbcccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbcd0: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x2fbcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fbcd4: 0x2643821  addu        $a3, $s3, $a0
    ctx->pc = 0x2fbcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2fbcd8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2fbcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2fbcdc: 0x2608ffff  addiu       $t0, $s0, -0x1
    ctx->pc = 0x2fbcdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbce0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2fbce0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2fbce4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2fbce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2fbce8: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x2fbce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fbcec: 0x2643821  addu        $a3, $s3, $a0
    ctx->pc = 0x2fbcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2fbcf0: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x2fbcf0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbcf4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbcf8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2fbcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fbcfc: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x2fbcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbd00: 0x2653821  addu        $a3, $s3, $a1
    ctx->pc = 0x2fbd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2fbd04: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x2fbd04u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x2fbd08: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fbd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbd0c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2fbd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fbd10: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x2fbd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2fbd14: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2fbd14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbd18: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x2fbd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2fbd1c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fbd1cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbd20: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbd24: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2fbd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2fbd28: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fbd28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbd2c: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x2fbd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2fbd30: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fbd30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fbd34: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x2fbd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbd38: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2fbd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2fbd3c: 0x24660003  addiu       $a2, $v1, 0x3
    ctx->pc = 0x2fbd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2fbd40: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x2fbd40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbd44: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x2fbd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2fbd48: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2fbd48u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbd4c: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbd50: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x2fbd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2fbd54: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2fbd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fbd58: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2fbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbd5c: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x2fbd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x2fbd60: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x2fbd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbd64: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2fbd64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2fbd68: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x2fbd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2fbd6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbd70: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2fbd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbd74: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fbd74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbd78: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbd7c: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x2fbd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2fbd80: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x2fbd80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbd84: 0x2672021  addu        $a0, $s3, $a3
    ctx->pc = 0x2fbd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2fbd88: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fbd88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fbd8c: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fbd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbd90: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x2fbd90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fbd94: 0x24c40005  addiu       $a0, $a2, 0x5
    ctx->pc = 0x2fbd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x2fbd98: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2fbd98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbd9c: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x2fbd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2fbda0: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x2fbda0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbda4: 0x1040c0  sll         $t0, $s0, 3
    ctx->pc = 0x2fbda4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbda8: 0x25030005  addiu       $v1, $t0, 0x5
    ctx->pc = 0x2fbda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x2fbdac: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2fbdacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbdb0: 0x2672021  addu        $a0, $s3, $a3
    ctx->pc = 0x2fbdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x2fbdb4: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x2fbdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x2fbdb8: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbdbc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fbdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbdc0: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x2fbdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2fbdc4: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x2fbdc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbdc8: 0x2693821  addu        $a3, $s3, $t1
    ctx->pc = 0x2fbdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x2fbdcc: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x2fbdccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fbdd0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbdd4: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x2fbdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x2fbdd8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2fbdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbddc: 0x2643821  addu        $a3, $s3, $a0
    ctx->pc = 0x2fbddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2fbde0: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x2fbde0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x2fbde4: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fbde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbde8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fbde8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fbdec: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2fbdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x2fbdf0: 0x3b100  sll         $s6, $v1, 4
    ctx->pc = 0x2fbdf0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbdf4: 0x2763021  addu        $a2, $s3, $s6
    ctx->pc = 0x2fbdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2fbdf8: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x2fbdf8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fbdfc: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbe00: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x2fbe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x2fbe04: 0x3b100  sll         $s6, $v1, 4
    ctx->pc = 0x2fbe04u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbe08: 0x2761821  addu        $v1, $s3, $s6
    ctx->pc = 0x2fbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2fbe0c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fbe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fbe10: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbe14: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fbe14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2fbe18:
    // 0x2fbe18: 0x1600ffa7  bnez        $s0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x2FBE18u;
    {
        const bool branch_taken_0x2fbe18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbe18) {
            ctx->pc = 0x2FBCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbcb8;
        }
    }
    ctx->pc = 0x2FBE20u;
    // 0x2fbe20: 0x8fb60178  lw          $s6, 0x178($sp)
    ctx->pc = 0x2fbe20u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbe24: 0x8ec60008  lw          $a2, 0x8($s6)
    ctx->pc = 0x2fbe24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2fbe28: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBE28u;
    {
        const bool branch_taken_0x2fbe28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbe28) {
            ctx->pc = 0x2FBE44u;
            goto label_2fbe44;
        }
    }
    ctx->pc = 0x2FBE30u;
    // 0x2fbe30: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbe34: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fbe34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fbe38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fbe38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbe3c: 0x14a4000a  bne         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FBE3Cu;
    {
        const bool branch_taken_0x2fbe3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fbe3c) {
            ctx->pc = 0x2FBE68u;
            goto label_2fbe68;
        }
    }
    ctx->pc = 0x2FBE44u;
label_2fbe44:
    // 0x2fbe44: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fbe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbe48: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x2fbe48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fbe4c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x2fbe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2fbe50: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2fbe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fbe54: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x2fbe54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2fbe58: 0x70801e28  paddub      $v1, $a0, $zero
    ctx->pc = 0x2fbe58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fbe5c: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2fbe5cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fbe60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FBE60u;
    {
        const bool branch_taken_0x2fbe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbe60) {
            ctx->pc = 0x2FBE9Cu;
            goto label_2fbe9c;
        }
    }
    ctx->pc = 0x2FBE68u;
label_2fbe68:
    // 0x2fbe68: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fbe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbe6c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fbe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fbe70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fbe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fbe74: 0x14a40009  bne         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FBE74u;
    {
        const bool branch_taken_0x2fbe74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fbe74) {
            ctx->pc = 0x2FBE9Cu;
            goto label_2fbe9c;
        }
    }
    ctx->pc = 0x2FBE7Cu;
    // 0x2fbe7c: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fbe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbe80: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2fbe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fbe84: 0x2465fff9  addiu       $a1, $v1, -0x7
    ctx->pc = 0x2fbe84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x2fbe88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2fbe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fbe8c: 0x51883  sra         $v1, $a1, 2
    ctx->pc = 0x2fbe8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
    // 0x2fbe90: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2fbe90u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fbe94: 0x72401e28  paddub      $v1, $s2, $zero
    ctx->pc = 0x2fbe94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2fbe98: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2fbe98u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2fbe9c:
    // 0x2fbe9c: 0x2fc10009  sltiu       $at, $fp, 0x9
    ctx->pc = 0x2fbe9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2fbea0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBEA0u;
    {
        const bool branch_taken_0x2fbea0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbea0) {
            ctx->pc = 0x2FBEB0u;
            goto label_2fbeb0;
        }
    }
    ctx->pc = 0x2FBEA8u;
    // 0x2fbea8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2fbea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fbeac: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2fbeacu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2fbeb0:
    // 0x2fbeb0: 0x1e2040  sll         $a0, $fp, 1
    ctx->pc = 0x2fbeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x2fbeb4: 0x7080f628  paddub      $fp, $a0, $zero
    ctx->pc = 0x2fbeb4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fbeb8: 0x1e2900  sll         $a1, $fp, 4
    ctx->pc = 0x2fbeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x2fbebc: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2fbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fbec0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fbec0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbec4: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2fbec4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fbec8: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x2fbec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2fbecc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fbeccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fbed0: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x2fbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2fbed4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbed8: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fbed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fbedc: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fbedcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbee0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fbee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fbee4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbee8: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x2fbee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2fbeec: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2fbeecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2fbef0: 0x27c60002  addiu       $a2, $fp, 0x2
    ctx->pc = 0x2fbef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x2fbef4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2fbef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fbef8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fbef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fbefc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fbefcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbf00: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x2fbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2fbf04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf08: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x2fbf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbf0c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2fbf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2fbf10: 0x27c30003  addiu       $v1, $fp, 0x3
    ctx->pc = 0x2fbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3));
    // 0x2fbf14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf18: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2fbf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fbf1c: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x2fbf1cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbf20: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x2fbf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2fbf24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf28: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2fbf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbf2c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fbf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fbf30: 0x27c40004  addiu       $a0, $fp, 0x4
    ctx->pc = 0x2fbf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2fbf34: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fbf34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbf38: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fbf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fbf3c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fbf3cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbf40: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2fbf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2fbf44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbf44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf48: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2fbf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbf4c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2fbf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2fbf50: 0x27c50005  addiu       $a1, $fp, 0x5
    ctx->pc = 0x2fbf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 5));
    // 0x2fbf54: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x2fbf54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fbf58: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2fbf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2fbf5c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fbf5cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbf60: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x2fbf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x2fbf64: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x2fbf64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf68: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x2fbf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x2fbf6c: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x2fbf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x2fbf70: 0x27c30006  addiu       $v1, $fp, 0x6
    ctx->pc = 0x2fbf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 6));
    // 0x2fbf74: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fbf74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf78: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x2fbf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fbf7c: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2fbf7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fbf80: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x2fbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2fbf84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf88: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x2fbf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2fbf8c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2fbf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2fbf90: 0x27c30007  addiu       $v1, $fp, 0x7
    ctx->pc = 0x2fbf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 7));
    // 0x2fbf94: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fbf94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbf98: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fbf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fbf9c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fbf9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fbfa0: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x2fbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2fbfa4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fbfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbfa8: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x2fbfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2fbfac: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2fbfacu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_2fbfb0:
    // 0x2fbfb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fbfb4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fbfb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fbfb8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2FBFB8u;
    {
        const bool branch_taken_0x2fbfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbfb8) {
            ctx->pc = 0x2FC120u;
            goto label_2fc120;
        }
    }
    ctx->pc = 0x2FBFC0u;
label_2fbfc0:
    // 0x2fbfc0: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbfc4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2fbfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fbfc8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fbfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbfcc: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x2fbfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fbfd0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2fbfd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fbfd4: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fbfd8: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2fbfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fbfdc: 0x2262821  addu        $a1, $s1, $a2
    ctx->pc = 0x2fbfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2fbfe0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2fbfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2fbfe4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fbfe8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2fbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fbfec: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2fbfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fbff0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fbff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fbff4: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x2fbff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fbff8: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fbff8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fbffc: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc000: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2fc000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fc004: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc008: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x2fc008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc00c: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2fc00cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2fc010: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2fc010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc014: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fc014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fc018: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x2fc018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2fc01c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fc01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fc020: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fc020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc024: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fc024u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc028: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fc028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc02c: 0x24770002  addiu       $s7, $v1, 0x2
    ctx->pc = 0x2fc02cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2fc030: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x2fc030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2fc034: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fc034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc038: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2fc038u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2fc03c: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fc03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc040: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2fc040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fc044: 0x24770003  addiu       $s7, $v1, 0x3
    ctx->pc = 0x2fc044u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2fc048: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x2fc048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x2fc04c: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2fc04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc050: 0x78970000  lq          $s7, 0x0($a0)
    ctx->pc = 0x2fc050u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc054: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fc054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc058: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x2fc058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2fc05c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fc060: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fc060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc064: 0x7c770000  sq          $s7, 0x0($v1)
    ctx->pc = 0x2fc064u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 23));
    // 0x2fc068: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x2fc068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc06c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2fc06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2fc070: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2fc070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2fc074: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2fc074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fc078: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2fc078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc07c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2fc07cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc080: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fc080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc084: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2fc084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2fc088: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc08c: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x2fc08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc090: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2fc090u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2fc094: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x2fc094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc098: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2fc098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2fc09c: 0x24670005  addiu       $a3, $v1, 0x5
    ctx->pc = 0x2fc09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x2fc0a0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x2fc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fc0a4: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fc0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc0a8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2fc0a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc0ac: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2fc0acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc0b0: 0x24830005  addiu       $v1, $a0, 0x5
    ctx->pc = 0x2fc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x2fc0b4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2fc0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc0b8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2fc0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc0bc: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fc0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fc0c0: 0x2607ffff  addiu       $a3, $s0, -0x1
    ctx->pc = 0x2fc0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc0c4: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x2fc0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2fc0c8: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x2fc0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x2fc0cc: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2fc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fc0d0: 0x2243821  addu        $a3, $s1, $a0
    ctx->pc = 0x2fc0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc0d4: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x2fc0d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc0d8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2fc0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc0dc: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x2fc0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2fc0e0: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x2fc0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc0e4: 0x2282021  addu        $a0, $s1, $t0
    ctx->pc = 0x2fc0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2fc0e8: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fc0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fc0ec: 0x2607ffff  addiu       $a3, $s0, -0x1
    ctx->pc = 0x2fc0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc0f0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2fc0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2fc0f4: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x2fc0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2fc0f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc0fc: 0x2234021  addu        $t0, $s1, $v1
    ctx->pc = 0x2fc0fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc100: 0x79040000  lq          $a0, 0x0($t0)
    ctx->pc = 0x2fc100u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fc104: 0x1038c0  sll         $a3, $s0, 3
    ctx->pc = 0x2fc104u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2fc108: 0x24e80007  addiu       $t0, $a3, 0x7
    ctx->pc = 0x2fc108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x2fc10c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2fc10cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2fc110: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x2fc110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2fc114: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x2fc114u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    // 0x2fc118: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2fc118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2fc11c: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2fc11cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2fc120:
    // 0x2fc120: 0x1600ffa7  bnez        $s0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x2FC120u;
    {
        const bool branch_taken_0x2fc120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc120) {
            ctx->pc = 0x2FBFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbfc0;
        }
    }
    ctx->pc = 0x2FC128u;
    // 0x2fc128: 0x153e3c  dsll32      $a3, $s5, 24
    ctx->pc = 0x2fc128u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc12c: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2fc12cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2fc130: 0x721c0  sll         $a0, $a3, 7
    ctx->pc = 0x2fc130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x2fc134: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x2fc134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fc138: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x2fc138u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fc13c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2fc13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2fc140: 0x24a71600  addiu       $a3, $a1, 0x1600
    ctx->pc = 0x2fc140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5632));
    // 0x2fc144: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x2fc144u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc148: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2fc148u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fc14c: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x2fc14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fc150: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2fc150u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x2fc154: 0x15263c  dsll32      $a0, $s5, 24
    ctx->pc = 0x2fc154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc158: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc158u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc15c: 0x419c0  sll         $v1, $a0, 7
    ctx->pc = 0x2fc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fc160: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2fc160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc164: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fc164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc168: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc16c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2fc16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2fc170: 0x24a41600  addiu       $a0, $a1, 0x1600
    ctx->pc = 0x2fc170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5632));
    // 0x2fc174: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x2fc174u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc178: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fc178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc17c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2fc17cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc180: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x2fc180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2fc184: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x2fc184u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x2fc188: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fc188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc18c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc18cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc190: 0x339c0  sll         $a3, $v1, 7
    ctx->pc = 0x2fc190u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fc194: 0x2872021  addu        $a0, $s4, $a3
    ctx->pc = 0x2fc194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2fc198: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x2fc198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2fc19c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2fc19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fc1a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2fc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fc1a4: 0x24661600  addiu       $a2, $v1, 0x1600
    ctx->pc = 0x2fc1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fc1a8: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2fc1a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fc1ac: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x2fc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2fc1b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc1b4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fc1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc1b8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fc1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fc1bc: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fc1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc1c0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc1c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc1c4: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x2fc1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fc1c8: 0x2843021  addu        $a2, $s4, $a0
    ctx->pc = 0x2fc1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fc1cc: 0x26070003  addiu       $a3, $s0, 0x3
    ctx->pc = 0x2fc1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2fc1d0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x2fc1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fc1d4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2fc1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2fc1d8: 0x24861600  addiu       $a2, $a0, 0x1600
    ctx->pc = 0x2fc1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5632));
    // 0x2fc1dc: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2fc1dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fc1e0: 0x26060003  addiu       $a2, $s0, 0x3
    ctx->pc = 0x2fc1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2fc1e4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2fc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fc1e8: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x2fc1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc1ec: 0x7d240000  sq          $a0, 0x0($t1)
    ctx->pc = 0x2fc1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 4));
    // 0x2fc1f0: 0x15463c  dsll32      $t0, $s5, 24
    ctx->pc = 0x2fc1f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc1f4: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x2fc1f4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x2fc1f8: 0x819c0  sll         $v1, $t0, 7
    ctx->pc = 0x2fc1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x2fc1fc: 0x2833821  addu        $a3, $s4, $v1
    ctx->pc = 0x2fc1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc200: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2fc200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2fc204: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fc204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fc208: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2fc208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2fc20c: 0x24641600  addiu       $a0, $v1, 0x1600
    ctx->pc = 0x2fc20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fc210: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x2fc210u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc214: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x2fc214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2fc218: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x2fc218u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fc21c: 0x2282021  addu        $a0, $s1, $t0
    ctx->pc = 0x2fc21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2fc220: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x2fc220u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x2fc224: 0x15263c  dsll32      $a0, $s5, 24
    ctx->pc = 0x2fc224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc228: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc228u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc22c: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x2fc22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fc230: 0x2843821  addu        $a3, $s4, $a0
    ctx->pc = 0x2fc230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fc234: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x2fc234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x2fc238: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2fc238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fc23c: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x2fc23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2fc240: 0x24761600  addiu       $s6, $v1, 0x1600
    ctx->pc = 0x2fc240u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fc244: 0x7ac60000  lq          $a2, 0x0($s6)
    ctx->pc = 0x2fc244u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fc248: 0x26050005  addiu       $a1, $s0, 0x5
    ctx->pc = 0x2fc248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x2fc24c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2fc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fc250: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fc250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc254: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2fc254u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2fc258: 0x15b63c  dsll32      $s6, $s5, 24
    ctx->pc = 0x2fc258u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc25c: 0x16b63f  dsra32      $s6, $s6, 24
    ctx->pc = 0x2fc25cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
    // 0x2fc260: 0x1619c0  sll         $v1, $s6, 7
    ctx->pc = 0x2fc260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
    // 0x2fc264: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2fc264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc268: 0x26160006  addiu       $s6, $s0, 0x6
    ctx->pc = 0x2fc268u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2fc26c: 0x163100  sll         $a2, $s6, 4
    ctx->pc = 0x2fc26cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2fc270: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2fc270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2fc274: 0x24651600  addiu       $a1, $v1, 0x1600
    ctx->pc = 0x2fc274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fc278: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2fc278u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc27c: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x2fc27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2fc280: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2fc280u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc284: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2fc284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2fc288: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fc288u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fc28c: 0x152e3c  dsll32      $a1, $s5, 24
    ctx->pc = 0x2fc28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc290: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2fc290u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2fc294: 0x521c0  sll         $a0, $a1, 7
    ctx->pc = 0x2fc294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2fc298: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2fc298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fc29c: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x2fc29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2fc2a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc2a4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2fc2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fc2a8: 0x24a41600  addiu       $a0, $a1, 0x1600
    ctx->pc = 0x2fc2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5632));
    // 0x2fc2ac: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2fc2acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc2b0: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x2fc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2fc2b4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fc2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc2b8: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2fc2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fc2bc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fc2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2fc2c0:
    // 0x2fc2c0: 0x8fb20178  lw          $s2, 0x178($sp)
    ctx->pc = 0x2fc2c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc2c4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2fc2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2fc2c8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC2C8u;
    {
        const bool branch_taken_0x2fc2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc2c8) {
            ctx->pc = 0x2FC2F8u;
            goto label_2fc2f8;
        }
    }
    ctx->pc = 0x2FC2D0u;
    // 0x2fc2d0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc2d4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fc2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc2d8: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x2fc2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2fc2dc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC2DCu;
    {
        const bool branch_taken_0x2fc2dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc2dc) {
            ctx->pc = 0x2FC2F8u;
            goto label_2fc2f8;
        }
    }
    ctx->pc = 0x2FC2E4u;
    // 0x2fc2e4: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc2e8: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x2fc2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fc2ec: 0x28a30012  slti        $v1, $a1, 0x12
    ctx->pc = 0x2fc2ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2fc2f0: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FC2F0u;
    {
        const bool branch_taken_0x2fc2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc2f0) {
            ctx->pc = 0x2FC370u;
            goto label_2fc370;
        }
    }
    ctx->pc = 0x2FC2F8u;
label_2fc2f8:
    // 0x2fc2f8: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc2fc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2fc2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fc300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fc300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc304: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC304u;
    {
        const bool branch_taken_0x2fc304 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc304) {
            ctx->pc = 0x2FC334u;
            goto label_2fc334;
        }
    }
    ctx->pc = 0x2FC30Cu;
    // 0x2fc30c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc310: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2fc310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc314: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x2fc314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fc318: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC318u;
    {
        const bool branch_taken_0x2fc318 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc318) {
            ctx->pc = 0x2FC334u;
            goto label_2fc334;
        }
    }
    ctx->pc = 0x2FC320u;
    // 0x2fc320: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc324: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x2fc324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc328: 0x28c3000d  slti        $v1, $a2, 0xD
    ctx->pc = 0x2fc328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2fc32c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FC32Cu;
    {
        const bool branch_taken_0x2fc32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc32c) {
            ctx->pc = 0x2FC370u;
            goto label_2fc370;
        }
    }
    ctx->pc = 0x2FC334u;
label_2fc334:
    // 0x2fc334: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc338: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2fc338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fc33c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2fc33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc340: 0x14a60143  bne         $a1, $a2, . + 4 + (0x143 << 2)
    ctx->pc = 0x2FC340u;
    {
        const bool branch_taken_0x2fc340 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2fc340) {
            ctx->pc = 0x2FC850u;
            goto label_2fc850;
        }
    }
    ctx->pc = 0x2FC348u;
    // 0x2fc348: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc34c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fc34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc350: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x2fc350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2fc354: 0x1420013e  bnez        $at, . + 4 + (0x13E << 2)
    ctx->pc = 0x2FC354u;
    {
        const bool branch_taken_0x2fc354 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc354) {
            ctx->pc = 0x2FC850u;
            goto label_2fc850;
        }
    }
    ctx->pc = 0x2FC35Cu;
    // 0x2fc35c: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc360: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2fc360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fc364: 0x28610013  slti        $at, $v1, 0x13
    ctx->pc = 0x2fc364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2fc368: 0x10200139  beqz        $at, . + 4 + (0x139 << 2)
    ctx->pc = 0x2FC368u;
    {
        const bool branch_taken_0x2fc368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc368) {
            ctx->pc = 0x2FC850u;
            goto label_2fc850;
        }
    }
    ctx->pc = 0x2FC370u;
label_2fc370:
    // 0x2fc370: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc374: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fc374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fc378: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FC378u;
    {
        const bool branch_taken_0x2fc378 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc378) {
            ctx->pc = 0x2FC3C0u;
            goto label_2fc3c0;
        }
    }
    ctx->pc = 0x2FC380u;
    // 0x2fc380: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc384: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fc384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc388: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2fc388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2fc38c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x2fc38cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fc390: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2fc390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2fc394: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x2fc394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x2fc398: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x2fc398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x2fc39c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2fc39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2fc3a0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x2fc3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2fc3a4: 0x0  nop
    ctx->pc = 0x2fc3a4u;
    // NOP
    // 0x2fc3a8: 0x1810  mfhi        $v1
    ctx->pc = 0x2fc3a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fc3ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fc3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fc3b0: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x2fc3b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2fc3b4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2fc3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2fc3b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2fc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2fc3bc: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x2fc3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
label_2fc3c0:
    // 0x2fc3c0: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc3c4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2fc3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fc3c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fc3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc3cc: 0x14a60011  bne         $a1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FC3CCu;
    {
        const bool branch_taken_0x2fc3cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2fc3cc) {
            ctx->pc = 0x2FC414u;
            goto label_2fc414;
        }
    }
    ctx->pc = 0x2FC3D4u;
    // 0x2fc3d4: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc3d8: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fc3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc3dc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2fc3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2fc3e0: 0x654023  subu        $t0, $v1, $a1
    ctx->pc = 0x2fc3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fc3e4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2fc3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2fc3e8: 0x3c059249  lui         $a1, 0x9249
    ctx->pc = 0x2fc3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37449 << 16));
    // 0x2fc3ec: 0x34a32493  ori         $v1, $a1, 0x2493
    ctx->pc = 0x2fc3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9363);
    // 0x2fc3f0: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x2fc3f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2fc3f4: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x2fc3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x2fc3f8: 0x0  nop
    ctx->pc = 0x2fc3f8u;
    // NOP
    // 0x2fc3fc: 0x2010  mfhi        $a0
    ctx->pc = 0x2fc3fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2fc400: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x2fc400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2fc404: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2fc404u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2fc408: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2fc408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2fc40c: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x2fc40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2fc410: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x2fc410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_2fc414:
    // 0x2fc414: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc418: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fc418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fc41c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fc41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc420: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FC420u;
    {
        const bool branch_taken_0x2fc420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc420) {
            ctx->pc = 0x2FC468u;
            goto label_2fc468;
        }
    }
    ctx->pc = 0x2FC428u;
    // 0x2fc428: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc42c: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2fc42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fc430: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2fc430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2fc434: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x2fc434u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2fc438: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2fc438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2fc43c: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x2fc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x2fc440: 0x34642493  ori         $a0, $v1, 0x2493
    ctx->pc = 0x2fc440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x2fc444: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x2fc444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2fc448: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x2fc448u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2fc44c: 0x0  nop
    ctx->pc = 0x2fc44cu;
    // NOP
    // 0x2fc450: 0x2010  mfhi        $a0
    ctx->pc = 0x2fc450u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2fc454: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2fc454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2fc458: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x2fc458u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2fc45c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x2fc45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2fc460: 0x24c50002  addiu       $a1, $a2, 0x2
    ctx->pc = 0x2fc460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2fc464: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x2fc464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_2fc468:
    // 0x2fc468: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc46c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2fc46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fc470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fc470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fc474: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FC474u;
    {
        const bool branch_taken_0x2fc474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fc474) {
            ctx->pc = 0x2FC54Cu;
            goto label_2fc54c;
        }
    }
    ctx->pc = 0x2FC47Cu;
    // 0x2fc47c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fc47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc480: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FC480u;
    {
        const bool branch_taken_0x2fc480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fc480) {
            ctx->pc = 0x2FC518u;
            goto label_2fc518;
        }
    }
    ctx->pc = 0x2FC488u;
    // 0x2fc488: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fc488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc48c: 0x10850015  beq         $a0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FC48Cu;
    {
        const bool branch_taken_0x2fc48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2fc48c) {
            ctx->pc = 0x2FC4E4u;
            goto label_2fc4e4;
        }
    }
    ctx->pc = 0x2FC494u;
    // 0x2fc494: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC494u;
    {
        const bool branch_taken_0x2fc494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc494) {
            ctx->pc = 0x2FC4A4u;
            goto label_2fc4a4;
        }
    }
    ctx->pc = 0x2FC49Cu;
    // 0x2fc49c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2FC49Cu;
    {
        const bool branch_taken_0x2fc49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc49c) {
            ctx->pc = 0x2FC578u;
            goto label_2fc578;
        }
    }
    ctx->pc = 0x2FC4A4u;
label_2fc4a4:
    // 0x2fc4a4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FC4A4u;
    SET_GPR_U32(ctx, 31, 0x2FC4ACu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FC4A4u, 0x2FC4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC4ACu;
label_2fc4ac:
    // 0x2fc4ac: 0x3c064220  lui         $a2, 0x4220
    ctx->pc = 0x2fc4acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16928 << 16));
    // 0x2fc4b0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2fc4b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc4b4: 0x0  nop
    ctx->pc = 0x2fc4b4u;
    // NOP
    // 0x2fc4b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc4b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc4bc: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2fc4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2fc4c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fc4c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc4c4: 0x0  nop
    ctx->pc = 0x2fc4c4u;
    // NOP
    // 0x2fc4c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc4cc: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2fc4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2fc4d0: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2fc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2fc4d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc4d8: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x2fc4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x2fc4dc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FC4DCu;
    {
        const bool branch_taken_0x2fc4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc4dc) {
            ctx->pc = 0x2FC578u;
            goto label_2fc578;
        }
    }
    ctx->pc = 0x2FC4E4u;
label_2fc4e4:
    // 0x2fc4e4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FC4E4u;
    SET_GPR_U32(ctx, 31, 0x2FC4ECu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FC4E4u, 0x2FC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC4ECu;
label_2fc4ec:
    // 0x2fc4ec: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x2fc4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
    // 0x2fc4f0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2fc4f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc4f4: 0x0  nop
    ctx->pc = 0x2fc4f4u;
    // NOP
    // 0x2fc4f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc4f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc4fc: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2fc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2fc500: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc504: 0x0  nop
    ctx->pc = 0x2fc504u;
    // NOP
    // 0x2fc508: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc50c: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2fc50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2fc510: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC510u;
    {
        const bool branch_taken_0x2fc510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc510) {
            ctx->pc = 0x2FC578u;
            goto label_2fc578;
        }
    }
    ctx->pc = 0x2FC518u;
label_2fc518:
    // 0x2fc518: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FC518u;
    SET_GPR_U32(ctx, 31, 0x2FC520u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FC518u, 0x2FC520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC520u;
label_2fc520:
    // 0x2fc520: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x2fc520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
    // 0x2fc524: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fc524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc528: 0x0  nop
    ctx->pc = 0x2fc528u;
    // NOP
    // 0x2fc52c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc52cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc530: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x2fc530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
    // 0x2fc534: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fc534u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc538: 0x0  nop
    ctx->pc = 0x2fc538u;
    // NOP
    // 0x2fc53c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc540: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2fc540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2fc544: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FC544u;
    {
        const bool branch_taken_0x2fc544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc544) {
            ctx->pc = 0x2FC578u;
            goto label_2fc578;
        }
    }
    ctx->pc = 0x2FC54Cu;
label_2fc54c:
    // 0x2fc54c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FC54Cu;
    SET_GPR_U32(ctx, 31, 0x2FC554u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FC54Cu, 0x2FC554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC554u;
label_2fc554:
    // 0x2fc554: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x2fc554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x2fc558: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fc558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc55c: 0x0  nop
    ctx->pc = 0x2fc55cu;
    // NOP
    // 0x2fc560: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc564: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2fc564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2fc568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc56c: 0x0  nop
    ctx->pc = 0x2fc56cu;
    // NOP
    // 0x2fc570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc574: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2fc574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_2fc578:
    // 0x2fc578: 0x868515f0  lh          $a1, 0x15F0($s4)
    ctx->pc = 0x2fc578u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fc57c: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x2fc57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2fc580: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc580u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc584: 0x3be3c  dsll32      $s7, $v1, 24
    ctx->pc = 0x2fc584u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc588: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x2fc588u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x2fc58c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fc58cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fc590: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2FC590u;
    {
        const bool branch_taken_0x2fc590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc590) {
            ctx->pc = 0x2FC5E0u;
            goto label_2fc5e0;
        }
    }
    ctx->pc = 0x2FC598u;
label_2fc598:
    // 0x2fc598: 0x17263c  dsll32      $a0, $s7, 24
    ctx->pc = 0x2fc598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 24));
    // 0x2fc59c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc59cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc5a0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2fc5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2fc5a4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2fc5a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2fc5a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2fc5a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2fc5ac: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x2fc5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fc5b0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc5b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc5b4: 0x3be3c  dsll32      $s7, $v1, 24
    ctx->pc = 0x2fc5b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc5b8: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x2fc5b8u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x2fc5bc: 0x171e3c  dsll32      $v1, $s7, 24
    ctx->pc = 0x2fc5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 24));
    // 0x2fc5c0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc5c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc5c4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC5C4u;
    {
        const bool branch_taken_0x2fc5c4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2fc5c4) {
            ctx->pc = 0x2FC5D8u;
            goto label_2fc5d8;
        }
    }
    ctx->pc = 0x2FC5CCu;
    // 0x2fc5cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2fc5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fc5d0: 0x4be3c  dsll32      $s7, $a0, 24
    ctx->pc = 0x2fc5d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fc5d4: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x2fc5d4u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
label_2fc5d8:
    // 0x2fc5d8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fc5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc5dc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fc5dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_2fc5e0:
    // 0x2fc5e0: 0x2e040002  sltiu       $a0, $s0, 0x2
    ctx->pc = 0x2fc5e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fc5e4: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2FC5E4u;
    {
        const bool branch_taken_0x2fc5e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc5e4) {
            ctx->pc = 0x2FC598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc598;
        }
    }
    ctx->pc = 0x2FC5ECu;
    // 0x2fc5ec: 0x171e3c  dsll32      $v1, $s7, 24
    ctx->pc = 0x2fc5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 24));
    // 0x2fc5f0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc5f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc5f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc5f8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2fc5f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2fc5fc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2fc5fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2fc600: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x2fc600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2fc604: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc604u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc608: 0xa3a3016f  sb          $v1, 0x16F($sp)
    ctx->pc = 0x2fc608u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fc60c: 0x83a5016f  lb          $a1, 0x16F($sp)
    ctx->pc = 0x2fc60cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x2fc610: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x2fc610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2fc614: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc614u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc618: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC618u;
    {
        const bool branch_taken_0x2fc618 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2fc618) {
            ctx->pc = 0x2FC628u;
            goto label_2fc628;
        }
    }
    ctx->pc = 0x2FC620u;
    // 0x2fc620: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2fc620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fc624: 0xa3a4016f  sb          $a0, 0x16F($sp)
    ctx->pc = 0x2fc624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 4));
label_2fc628:
    // 0x2fc628: 0x83a6016f  lb          $a2, 0x16F($sp)
    ctx->pc = 0x2fc628u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x2fc62c: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x2fc62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2fc630: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc630u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc634: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fc634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fc638: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2fc638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc63c: 0x24651600  addiu       $a1, $v1, 0x1600
    ctx->pc = 0x2fc63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fc640: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fc640u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc644: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2fc644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2fc648: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2fc648u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2fc64c: 0x83a7016f  lb          $a3, 0x16F($sp)
    ctx->pc = 0x2fc64cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x2fc650: 0x7263c  dsll32      $a0, $a3, 24
    ctx->pc = 0x2fc650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2fc654: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc654u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc658: 0x419c0  sll         $v1, $a0, 7
    ctx->pc = 0x2fc658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fc65c: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2fc65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc660: 0x24c41610  addiu       $a0, $a2, 0x1610
    ctx->pc = 0x2fc660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5648));
    // 0x2fc664: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2fc664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc668: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2fc668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2fc66c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fc66cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fc670: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2fc670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fc674: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x2fc674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2fc678: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2fc678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fc67c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2fc67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2fc680: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FC680u;
    SET_GPR_U32(ctx, 31, 0x2FC688u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FC680u, 0x2FC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC688u;
label_2fc688:
    // 0x2fc688: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fc688u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc68c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2fc68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2fc690: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2fc690u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc694: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x2fc694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fc698: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2fc698u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fc69c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2fc69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fc6a0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2fc6a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fc6a4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FC6A4u;
    SET_GPR_U32(ctx, 31, 0x2FC6ACu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FC6ACu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FC6ACu) { return; }
    ctx->pc = 0x2FC6ACu;
label_2fc6ac:
    // 0x2fc6ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fc6acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc6b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fc6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc6b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc6b8: 0x0  nop
    ctx->pc = 0x2fc6b8u;
    // NOP
    // 0x2fc6bc: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2fc6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2fc6c0: 0x17463c  dsll32      $t0, $s7, 24
    ctx->pc = 0x2fc6c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) << (32 + 24));
    // 0x2fc6c4: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x2fc6c4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x2fc6c8: 0x821c0  sll         $a0, $t0, 7
    ctx->pc = 0x2fc6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x2fc6cc: 0x2843821  addu        $a3, $s4, $a0
    ctx->pc = 0x2fc6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fc6d0: 0x83a3016f  lb          $v1, 0x16F($sp)
    ctx->pc = 0x2fc6d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x2fc6d4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2fc6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc6d8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc6d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc6dc: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fc6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fc6e0: 0x2834021  addu        $t0, $s4, $v1
    ctx->pc = 0x2fc6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc6e4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2fc6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc6e8: 0x24e71600  addiu       $a3, $a3, 0x1600
    ctx->pc = 0x2fc6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5632));
    // 0x2fc6ec: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2fc6ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fc6f0: 0x25081600  addiu       $t0, $t0, 0x1600
    ctx->pc = 0x2fc6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5632));
    // 0x2fc6f4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2fc6f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fc6f8: 0xc040c80  jal         func_103200
    ctx->pc = 0x2FC6F8u;
    SET_GPR_U32(ctx, 31, 0x2FC700u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2FC700u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FC700u) { return; }
    ctx->pc = 0x2FC700u;
label_2fc700:
    // 0x2fc700: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2fc700u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc704: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2fc704u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc708: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2fc708u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc70c: 0x0  nop
    ctx->pc = 0x2fc70cu;
    // NOP
    // 0x2fc710: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x2fc710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x2fc714: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2fc714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc718: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x2fc718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc71c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2fc71cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fc720: 0xc040c24  jal         func_103090
    ctx->pc = 0x2FC720u;
    SET_GPR_U32(ctx, 31, 0x2FC728u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2FC728u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FC728u) { return; }
    ctx->pc = 0x2FC728u;
label_2fc728:
    // 0x2fc728: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fc728u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc72c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2fc72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2fc730: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fc730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc734: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2fc734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc738: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fc738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fc73c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2fc73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc740: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FC740u;
    SET_GPR_U32(ctx, 31, 0x2FC748u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FC748u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FC748u) { return; }
    ctx->pc = 0x2FC748u;
label_2fc748:
    // 0x2fc748: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2fc748u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc74c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2fc74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc750: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fc750u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc754: 0x0  nop
    ctx->pc = 0x2fc754u;
    // NOP
    // 0x2fc758: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x2fc758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x2fc75c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fc75cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fc760: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2FC760u;
    {
        const bool branch_taken_0x2fc760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc760) {
            ctx->pc = 0x2FC840u;
            goto label_2fc840;
        }
    }
    ctx->pc = 0x2FC768u;
label_2fc768:
    // 0x2fc768: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2fc768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fc76c: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fc76cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc770: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2fc770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2fc774: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x2fc774u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x2fc778: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FC778u;
    SET_GPR_U32(ctx, 31, 0x2FC780u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FC778u, 0x2FC780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC780u;
label_2fc780:
    // 0x2fc780: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2fc780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2fc784: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fc784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc788: 0x0  nop
    ctx->pc = 0x2fc788u;
    // NOP
    // 0x2fc78c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc78cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc790: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x2fc790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc794: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc798: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2fc798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2fc79c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FC79Cu;
    SET_GPR_U32(ctx, 31, 0x2FC7A4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FC79Cu, 0x2FC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7A4u;
label_2fc7a4:
    // 0x2fc7a4: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x2fc7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x2fc7a8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2fc7a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc7ac: 0x0  nop
    ctx->pc = 0x2fc7acu;
    // NOP
    // 0x2fc7b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc7b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc7b4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2fc7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc7b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc7bc: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2fc7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2fc7c0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FC7C0u;
    SET_GPR_U32(ctx, 31, 0x2FC7C8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FC7C0u, 0x2FC7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7C8u;
label_2fc7c8:
    // 0x2fc7c8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2fc7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2fc7cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fc7ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc7d0: 0x0  nop
    ctx->pc = 0x2fc7d0u;
    // NOP
    // 0x2fc7d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc7d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc7d8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2fc7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc7dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc7dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc7e0: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2fc7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2fc7e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fc7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc7e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc7e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc7ec: 0x0  nop
    ctx->pc = 0x2fc7ecu;
    // NOP
    // 0x2fc7f0: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2fc7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2fc7f4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2fc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc7f8: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2fc7f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc7fc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2fc7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2fc800: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2fc800u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2fc804: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fc804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc80c: 0x0  nop
    ctx->pc = 0x2fc80cu;
    // NOP
    // 0x2fc810: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2fc810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2fc814: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2fc814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fc818: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fc818u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fc81c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2fc81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2fc820: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x2fc820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2fc824: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x2fc824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fc828: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x2FC828u;
    SET_GPR_U32(ctx, 31, 0x2FC830u);
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x2FC828u, 0x2FC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC830u;
label_2fc830:
    // 0x2fc830: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fc830u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc834: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x2fc834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc838: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x2fc838u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fc83c: 0x0  nop
    ctx->pc = 0x2fc83cu;
    // NOP
label_2fc840:
    // 0x2fc840: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2fc840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2fc844: 0x204282b  sltu        $a1, $s0, $a0
    ctx->pc = 0x2fc844u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fc848: 0x14a0ffc7  bnez        $a1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2FC848u;
    {
        const bool branch_taken_0x2fc848 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc848) {
            ctx->pc = 0x2FC768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc768;
        }
    }
    ctx->pc = 0x2FC850u;
label_2fc850:
    // 0x2fc850: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc854: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2fc854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fc858: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2fc858u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fc85c: 0x142000f6  bnez        $at, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2FC85Cu;
    {
        const bool branch_taken_0x2fc85c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc85c) {
            ctx->pc = 0x2FCC38u;
            goto label_2fcc38;
        }
    }
    ctx->pc = 0x2FC864u;
    // 0x2fc864: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fc864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc868: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x2fc868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2fc86c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fc86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fc870: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2FC870u;
    {
        const bool branch_taken_0x2fc870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc870) {
            ctx->pc = 0x2FC8B0u;
            goto label_2fc8b0;
        }
    }
    ctx->pc = 0x2FC878u;
    // 0x2fc878: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc87c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2fc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fc880: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC880u;
    {
        const bool branch_taken_0x2fc880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc880) {
            ctx->pc = 0x2FC8B0u;
            goto label_2fc8b0;
        }
    }
    ctx->pc = 0x2FC888u;
    // 0x2fc888: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc88c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2fc88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc890: 0x2881000e  slti        $at, $a0, 0xE
    ctx->pc = 0x2fc890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2fc894: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC894u;
    {
        const bool branch_taken_0x2fc894 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc894) {
            ctx->pc = 0x2FC8B0u;
            goto label_2fc8b0;
        }
    }
    ctx->pc = 0x2FC89Cu;
    // 0x2fc89c: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fc89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc8a0: 0x8cc700d4  lw          $a3, 0xD4($a2)
    ctx->pc = 0x2fc8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fc8a4: 0x28e40013  slti        $a0, $a3, 0x13
    ctx->pc = 0x2fc8a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2fc8a8: 0x14800024  bnez        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2FC8A8u;
    {
        const bool branch_taken_0x2fc8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc8a8) {
            ctx->pc = 0x2FC93Cu;
            goto label_2fc93c;
        }
    }
    ctx->pc = 0x2FC8B0u;
label_2fc8b0:
    // 0x2fc8b0: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc8b4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2fc8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fc8b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fc8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc8bc: 0x14c4000b  bne         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC8BCu;
    {
        const bool branch_taken_0x2fc8bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fc8bc) {
            ctx->pc = 0x2FC8ECu;
            goto label_2fc8ec;
        }
    }
    ctx->pc = 0x2FC8C4u;
    // 0x2fc8c4: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fc8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc8c8: 0x8cc300d4  lw          $v1, 0xD4($a2)
    ctx->pc = 0x2fc8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fc8cc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2fc8ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2fc8d0: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC8D0u;
    {
        const bool branch_taken_0x2fc8d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc8d0) {
            ctx->pc = 0x2FC8ECu;
            goto label_2fc8ec;
        }
    }
    ctx->pc = 0x2FC8D8u;
    // 0x2fc8d8: 0x8fa90178  lw          $t1, 0x178($sp)
    ctx->pc = 0x2fc8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc8dc: 0x8d2800d4  lw          $t0, 0xD4($t1)
    ctx->pc = 0x2fc8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x2fc8e0: 0x2903000a  slti        $v1, $t0, 0xA
    ctx->pc = 0x2fc8e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2fc8e4: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FC8E4u;
    {
        const bool branch_taken_0x2fc8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc8e4) {
            ctx->pc = 0x2FC93Cu;
            goto label_2fc93c;
        }
    }
    ctx->pc = 0x2FC8ECu;
label_2fc8ec:
    // 0x2fc8ec: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x2fc8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc8f0: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2fc8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fc8f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fc8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fc8f8: 0x148300cf  bne         $a0, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x2FC8F8u;
    {
        const bool branch_taken_0x2fc8f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc8f8) {
            ctx->pc = 0x2FCC38u;
            goto label_2fcc38;
        }
    }
    ctx->pc = 0x2FC900u;
    // 0x2fc900: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc904: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fc904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fc908: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2fc908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc90c: 0x148900ca  bne         $a0, $t1, . + 4 + (0xCA << 2)
    ctx->pc = 0x2FC90Cu;
    {
        const bool branch_taken_0x2fc90c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        if (branch_taken_0x2fc90c) {
            ctx->pc = 0x2FCC38u;
            goto label_2fcc38;
        }
    }
    ctx->pc = 0x2FC914u;
    // 0x2fc914: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x2fc914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc918: 0x8ce800d4  lw          $t0, 0xD4($a3)
    ctx->pc = 0x2fc918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2fc91c: 0x2901000c  slti        $at, $t0, 0xC
    ctx->pc = 0x2fc91cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2fc920: 0x142000c5  bnez        $at, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2FC920u;
    {
        const bool branch_taken_0x2fc920 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc920) {
            ctx->pc = 0x2FCC38u;
            goto label_2fcc38;
        }
    }
    ctx->pc = 0x2FC928u;
    // 0x2fc928: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc92c: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x2fc92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fc930: 0x28810011  slti        $at, $a0, 0x11
    ctx->pc = 0x2fc930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2fc934: 0x102000c0  beqz        $at, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2FC934u;
    {
        const bool branch_taken_0x2fc934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc934) {
            ctx->pc = 0x2FCC38u;
            goto label_2fcc38;
        }
    }
    ctx->pc = 0x2FC93Cu;
label_2fc93c:
    // 0x2fc93c: 0x868415f0  lh          $a0, 0x15F0($s4)
    ctx->pc = 0x2fc93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fc940: 0x43e3c  dsll32      $a3, $a0, 24
    ctx->pc = 0x2fc940u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fc944: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2fc944u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2fc948: 0x7263c  dsll32      $a0, $a3, 24
    ctx->pc = 0x2fc948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2fc94c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc94cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc950: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x2fc950u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fc954: 0x868415f0  lh          $a0, 0x15F0($s4)
    ctx->pc = 0x2fc954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fc958: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x2fc958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fc95c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc95cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc960: 0x3b63c  dsll32      $s6, $v1, 24
    ctx->pc = 0x2fc960u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc964: 0x16b63f  dsra32      $s6, $s6, 24
    ctx->pc = 0x2fc964u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
    // 0x2fc968: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fc968u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fc96c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FC96Cu;
    {
        const bool branch_taken_0x2fc96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc96c) {
            ctx->pc = 0x2FC9C0u;
            goto label_2fc9c0;
        }
    }
    ctx->pc = 0x2FC974u;
label_2fc974:
    // 0x2fc974: 0x16363c  dsll32      $a2, $s6, 24
    ctx->pc = 0x2fc974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fc978: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x2fc978u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x2fc97c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x2fc97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2fc980: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x2fc980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2fc984: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2fc984u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2fc988: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x2fc988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fc98c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc98cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc990: 0x3b63c  dsll32      $s6, $v1, 24
    ctx->pc = 0x2fc990u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc994: 0x16b63f  dsra32      $s6, $s6, 24
    ctx->pc = 0x2fc994u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
    // 0x2fc998: 0x161e3c  dsll32      $v1, $s6, 24
    ctx->pc = 0x2fc998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fc99c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc99cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc9a0: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC9A0u;
    {
        const bool branch_taken_0x2fc9a0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2fc9a0) {
            ctx->pc = 0x2FC9B8u;
            goto label_2fc9b8;
        }
    }
    ctx->pc = 0x2FC9A8u;
    // 0x2fc9a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2fc9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fc9ac: 0x3b63c  dsll32      $s6, $v1, 24
    ctx->pc = 0x2fc9acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc9b0: 0x16b63f  dsra32      $s6, $s6, 24
    ctx->pc = 0x2fc9b0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
    // 0x2fc9b4: 0x0  nop
    ctx->pc = 0x2fc9b4u;
    // NOP
label_2fc9b8:
    // 0x2fc9b8: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2fc9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc9bc: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x2fc9bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_2fc9c0:
    // 0x2fc9c0: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2FC9C0u;
    {
        const bool branch_taken_0x2fc9c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc9c0) {
            ctx->pc = 0x2FC974u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc974;
        }
    }
    ctx->pc = 0x2FC9C8u;
    // 0x2fc9c8: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc9cc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fc9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fc9d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fc9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc9d4: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FC9D4u;
    {
        const bool branch_taken_0x2fc9d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fc9d4) {
            ctx->pc = 0x2FCA18u;
            goto label_2fca18;
        }
    }
    ctx->pc = 0x2FC9DCu;
    // 0x2fc9dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fc9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc9e0: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FC9E0u;
    {
        const bool branch_taken_0x2fc9e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fc9e0) {
            ctx->pc = 0x2FCA08u;
            goto label_2fca08;
        }
    }
    ctx->pc = 0x2FC9E8u;
    // 0x2fc9e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC9E8u;
    {
        const bool branch_taken_0x2fc9e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc9e8) {
            ctx->pc = 0x2FC9F8u;
            goto label_2fc9f8;
        }
    }
    ctx->pc = 0x2FC9F0u;
    // 0x2fc9f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FC9F0u;
    {
        const bool branch_taken_0x2fc9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc9f0) {
            ctx->pc = 0x2FCA20u;
            goto label_2fca20;
        }
    }
    ctx->pc = 0x2FC9F8u;
label_2fc9f8:
    // 0x2fc9f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fc9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc9fc: 0xafa60168  sw          $a2, 0x168($sp)
    ctx->pc = 0x2fc9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 6));
    // 0x2fca00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FCA00u;
    {
        const bool branch_taken_0x2fca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca00) {
            ctx->pc = 0x2FCA20u;
            goto label_2fca20;
        }
    }
    ctx->pc = 0x2FCA08u;
label_2fca08:
    // 0x2fca08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fca0c: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x2fca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x2fca10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCA10u;
    {
        const bool branch_taken_0x2fca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca10) {
            ctx->pc = 0x2FCA20u;
            goto label_2fca20;
        }
    }
    ctx->pc = 0x2FCA18u;
label_2fca18:
    // 0x2fca18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2fca18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fca1c: 0xafa50168  sw          $a1, 0x168($sp)
    ctx->pc = 0x2fca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 5));
label_2fca20:
    // 0x2fca20: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fca20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fca24: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2fca24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fca28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fca28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fca2c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCA2Cu;
    {
        const bool branch_taken_0x2fca2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fca2c) {
            ctx->pc = 0x2FCA48u;
            goto label_2fca48;
        }
    }
    ctx->pc = 0x2FCA34u;
    // 0x2fca34: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fca38: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fca38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fca3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fca40: 0x10a4007d  beq         $a1, $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2FCA40u;
    {
        const bool branch_taken_0x2fca40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fca40) {
            ctx->pc = 0x2FCC38u;
            goto label_2fcc38;
        }
    }
    ctx->pc = 0x2FCA48u;
label_2fca48:
    // 0x2fca48: 0x16263c  dsll32      $a0, $s6, 24
    ctx->pc = 0x2fca48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fca4c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fca4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fca50: 0x419c0  sll         $v1, $a0, 7
    ctx->pc = 0x2fca50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fca54: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x2fca54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fca58: 0x24a31600  addiu       $v1, $a1, 0x1600
    ctx->pc = 0x2fca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5632));
    // 0x2fca5c: 0x78720000  lq          $s2, 0x0($v1)
    ctx->pc = 0x2fca5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fca60: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2fca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fca64: 0x7c720000  sq          $s2, 0x0($v1)
    ctx->pc = 0x2fca64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 18));
    // 0x2fca68: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCA68u;
    SET_GPR_U32(ctx, 31, 0x2FCA70u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCA68u, 0x2FCA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCA70u;
label_2fca70:
    // 0x2fca70: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fca70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fca74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fca74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fca78: 0x0  nop
    ctx->pc = 0x2fca78u;
    // NOP
    // 0x2fca7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fca7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fca80: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fca84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fca84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fca88: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fca8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCA8Cu;
    SET_GPR_U32(ctx, 31, 0x2FCA94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCA8Cu, 0x2FCA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCA94u;
label_2fca94:
    // 0x2fca94: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fca94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fca98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fca98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fca9c: 0x0  nop
    ctx->pc = 0x2fca9cu;
    // NOP
    // 0x2fcaa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcaa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcaa4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcaa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcaac: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2fcab0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2fcab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcab4: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2fcab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2fcab8: 0xc0c4f74  jal         func_313DD0
    ctx->pc = 0x2FCAB8u;
    SET_GPR_U32(ctx, 31, 0x2FCAC0u);
    ctx->pc = 0x313DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313DD0u, 0x2FCAB8u, 0x2FCAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCAC0u;
label_2fcac0:
    // 0x2fcac0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fcac0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fcac4: 0x16263c  dsll32      $a0, $s6, 24
    ctx->pc = 0x2fcac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fcac8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fcac8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fcacc: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x2fcaccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fcad0: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2fcad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2fcad4: 0x24631620  addiu       $v1, $v1, 0x1620
    ctx->pc = 0x2fcad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5664));
    // 0x2fcad8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fcad8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcadc: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2fcadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcae0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fcae0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fcae4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCAE4u;
    SET_GPR_U32(ctx, 31, 0x2FCAECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCAE4u, 0x2FCAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCAECu;
label_2fcaec:
    // 0x2fcaec: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x2fcaecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcaf0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2fcaf0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcaf4: 0x0  nop
    ctx->pc = 0x2fcaf4u;
    // NOP
    // 0x2fcaf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcaf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcafc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcb00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcb00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcb04: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fcb08: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCB08u;
    SET_GPR_U32(ctx, 31, 0x2FCB10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCB08u, 0x2FCB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB10u;
label_2fcb10:
    // 0x2fcb10: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fcb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcb14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcb14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcb18: 0x0  nop
    ctx->pc = 0x2fcb18u;
    // NOP
    // 0x2fcb1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcb1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcb20: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcb24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcb24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcb28: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2fcb2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2fcb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcb30: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2fcb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2fcb34: 0xc0c4f74  jal         func_313DD0
    ctx->pc = 0x2FCB34u;
    SET_GPR_U32(ctx, 31, 0x2FCB3Cu);
    ctx->pc = 0x313DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313DD0u, 0x2FCB34u, 0x2FCB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB3Cu;
label_2fcb3c:
    // 0x2fcb3c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fcb3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fcb40: 0x161e3c  dsll32      $v1, $s6, 24
    ctx->pc = 0x2fcb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fcb44: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fcb44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fcb48: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fcb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fcb4c: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x2fcb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fcb50: 0x24831640  addiu       $v1, $a0, 0x1640
    ctx->pc = 0x2fcb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5696));
    // 0x2fcb54: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fcb54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcb58: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2fcb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcb5c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2fcb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2fcb60: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCB60u;
    SET_GPR_U32(ctx, 31, 0x2FCB68u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCB60u, 0x2FCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB68u;
label_2fcb68:
    // 0x2fcb68: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fcb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcb6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcb6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcb70: 0x0  nop
    ctx->pc = 0x2fcb70u;
    // NOP
    // 0x2fcb74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcb74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcb78: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcb7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcb80: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fcb84: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCB84u;
    SET_GPR_U32(ctx, 31, 0x2FCB8Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCB84u, 0x2FCB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCB8Cu;
label_2fcb8c:
    // 0x2fcb8c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fcb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcb90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcb90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcb94: 0x0  nop
    ctx->pc = 0x2fcb94u;
    // NOP
    // 0x2fcb98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcb98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcb9c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcba0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcba4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2fcba8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2fcba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcbac: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2fcbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2fcbb0: 0xc0c4f74  jal         func_313DD0
    ctx->pc = 0x2FCBB0u;
    SET_GPR_U32(ctx, 31, 0x2FCBB8u);
    ctx->pc = 0x313DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313DD0u, 0x2FCBB0u, 0x2FCBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBB8u;
label_2fcbb8:
    // 0x2fcbb8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fcbb8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fcbbc: 0x161e3c  dsll32      $v1, $s6, 24
    ctx->pc = 0x2fcbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 24));
    // 0x2fcbc0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fcbc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fcbc4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fcbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fcbc8: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x2fcbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fcbcc: 0x24831660  addiu       $v1, $a0, 0x1660
    ctx->pc = 0x2fcbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5728));
    // 0x2fcbd0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fcbd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcbd4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2fcbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcbd8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2fcbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2fcbdc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCBDCu;
    SET_GPR_U32(ctx, 31, 0x2FCBE4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCBDCu, 0x2FCBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBE4u;
label_2fcbe4:
    // 0x2fcbe4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fcbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcbe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcbe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcbec: 0x0  nop
    ctx->pc = 0x2fcbecu;
    // NOP
    // 0x2fcbf0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcbf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcbf4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcbf8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcbf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcbfc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2fcbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fcc00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2FCC00u;
    SET_GPR_U32(ctx, 31, 0x2FCC08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2FCC00u, 0x2FCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC08u;
label_2fcc08:
    // 0x2fcc08: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2fcc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2fcc0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fcc0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcc10: 0x0  nop
    ctx->pc = 0x2fcc10u;
    // NOP
    // 0x2fcc14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fcc14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fcc18: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcc1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcc1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fcc20: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2fcc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2fcc24: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2fcc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2fcc28: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2fcc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2fcc2c: 0xc0c4f74  jal         func_313DD0
    ctx->pc = 0x2FCC2Cu;
    SET_GPR_U32(ctx, 31, 0x2FCC34u);
    ctx->pc = 0x313DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313DD0u, 0x2FCC2Cu, 0x2FCC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC34u;
label_2fcc34:
    // 0x2fcc34: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fcc34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2fcc38:
    // 0x2fcc38: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc3c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2fcc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fcc40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fcc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fcc44: 0x14a30035  bne         $a1, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FCC44u;
    {
        const bool branch_taken_0x2fcc44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fcc44) {
            ctx->pc = 0x2FCD1Cu;
            goto label_2fcd1c;
        }
    }
    ctx->pc = 0x2FCC4Cu;
    // 0x2fcc4c: 0x8fa80178  lw          $t0, 0x178($sp)
    ctx->pc = 0x2fcc4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc50: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x2fcc50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2fcc54: 0x14e0000b  bnez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCC54u;
    {
        const bool branch_taken_0x2fcc54 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcc54) {
            ctx->pc = 0x2FCC84u;
            goto label_2fcc84;
        }
    }
    ctx->pc = 0x2FCC5Cu;
    // 0x2fcc5c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc60: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fcc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fcc64: 0x28a1000e  slti        $at, $a1, 0xE
    ctx->pc = 0x2fcc64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2fcc68: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCC68u;
    {
        const bool branch_taken_0x2fcc68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcc68) {
            ctx->pc = 0x2FCC84u;
            goto label_2fcc84;
        }
    }
    ctx->pc = 0x2FCC70u;
    // 0x2fcc70: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fcc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc74: 0x8cc400d4  lw          $a0, 0xD4($a2)
    ctx->pc = 0x2fcc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fcc78: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x2fcc78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fcc7c: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FCC7Cu;
    {
        const bool branch_taken_0x2fcc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcc7c) {
            ctx->pc = 0x2FCCFCu;
            goto label_2fccfc;
        }
    }
    ctx->pc = 0x2FCC84u;
label_2fcc84:
    // 0x2fcc84: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc88: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fcc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fcc8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fcc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcc90: 0x14a4000b  bne         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCC90u;
    {
        const bool branch_taken_0x2fcc90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fcc90) {
            ctx->pc = 0x2FCCC0u;
            goto label_2fccc0;
        }
    }
    ctx->pc = 0x2FCC98u;
    // 0x2fcc98: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc9c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2fcc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fcca0: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x2fcca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2fcca4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCCA4u;
    {
        const bool branch_taken_0x2fcca4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcca4) {
            ctx->pc = 0x2FCCC0u;
            goto label_2fccc0;
        }
    }
    ctx->pc = 0x2FCCACu;
    // 0x2fccac: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fccb0: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2fccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fccb4: 0x28830007  slti        $v1, $a0, 0x7
    ctx->pc = 0x2fccb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2fccb8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FCCB8u;
    {
        const bool branch_taken_0x2fccb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fccb8) {
            ctx->pc = 0x2FCCFCu;
            goto label_2fccfc;
        }
    }
    ctx->pc = 0x2FCCC0u;
label_2fccc0:
    // 0x2fccc0: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2fccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fccc4: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2fccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2fccc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fcccc: 0x14c30013  bne         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FCCCCu;
    {
        const bool branch_taken_0x2fcccc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fcccc) {
            ctx->pc = 0x2FCD1Cu;
            goto label_2fcd1c;
        }
    }
    ctx->pc = 0x2FCCD4u;
    // 0x2fccd4: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fccd8: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2fccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fccdc: 0x2861000c  slti        $at, $v1, 0xC
    ctx->pc = 0x2fccdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2fcce0: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2FCCE0u;
    {
        const bool branch_taken_0x2fcce0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcce0) {
            ctx->pc = 0x2FCD1Cu;
            goto label_2fcd1c;
        }
    }
    ctx->pc = 0x2FCCE8u;
    // 0x2fcce8: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2fcce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fccec: 0x8ca400d4  lw          $a0, 0xD4($a1)
    ctx->pc = 0x2fccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fccf0: 0x2881000e  slti        $at, $a0, 0xE
    ctx->pc = 0x2fccf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2fccf4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FCCF4u;
    {
        const bool branch_taken_0x2fccf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fccf4) {
            ctx->pc = 0x2FCD1Cu;
            goto label_2fcd1c;
        }
    }
    ctx->pc = 0x2FCCFCu;
label_2fccfc:
    // 0x2fccfc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2fccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2fcd00: 0x24649240  addiu       $a0, $v1, -0x6DC0
    ctx->pc = 0x2fcd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x2fcd04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fcd04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fcd08: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2fcd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2fcd0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fcd0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fcd10: 0xc087170  jal         func_21C5C0
    ctx->pc = 0x2FCD10u;
    SET_GPR_U32(ctx, 31, 0x2FCD18u);
    ctx->pc = 0x21C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5C0u, 0x2FCD10u, 0x2FCD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCD18u;
label_2fcd18:
    // 0x2fcd18: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fcd18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2fcd1c:
    // 0x2fcd1c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd20: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fcd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fcd24: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCD24u;
    {
        const bool branch_taken_0x2fcd24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcd24) {
            ctx->pc = 0x2FCD40u;
            goto label_2fcd40;
        }
    }
    ctx->pc = 0x2FCD2Cu;
    // 0x2fcd2c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd30: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fcd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fcd34: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2fcd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2fcd38: 0x10650015  beq         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FCD38u;
    {
        const bool branch_taken_0x2fcd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2fcd38) {
            ctx->pc = 0x2FCD90u;
            goto label_2fcd90;
        }
    }
    ctx->pc = 0x2FCD40u;
label_2fcd40:
    // 0x2fcd40: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fcd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd44: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2fcd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2fcd48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fcd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcd4c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCD4Cu;
    {
        const bool branch_taken_0x2fcd4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fcd4c) {
            ctx->pc = 0x2FCD68u;
            goto label_2fcd68;
        }
    }
    ctx->pc = 0x2FCD54u;
    // 0x2fcd54: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd58: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fcd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fcd5c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2fcd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2fcd60: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCD60u;
    {
        const bool branch_taken_0x2fcd60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fcd60) {
            ctx->pc = 0x2FCD90u;
            goto label_2fcd90;
        }
    }
    ctx->pc = 0x2FCD68u;
label_2fcd68:
    // 0x2fcd68: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd6c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fcd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fcd70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fcd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fcd74: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2FCD74u;
    {
        const bool branch_taken_0x2fcd74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fcd74) {
            ctx->pc = 0x2FCE18u;
            goto label_2fce18;
        }
    }
    ctx->pc = 0x2FCD7Cu;
    // 0x2fcd7c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd80: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fcd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fcd84: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2fcd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fcd88: 0x14a30023  bne         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2FCD88u;
    {
        const bool branch_taken_0x2fcd88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fcd88) {
            ctx->pc = 0x2FCE18u;
            goto label_2fce18;
        }
    }
    ctx->pc = 0x2FCD90u;
label_2fcd90:
    // 0x2fcd90: 0x8fb70178  lw          $s7, 0x178($sp)
    ctx->pc = 0x2fcd90u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd94: 0x8ee40100  lw          $a0, 0x100($s7)
    ctx->pc = 0x2fcd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 256)));
    // 0x2fcd98: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x2fcd98u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fcd9c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2fcd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2fcda0: 0x34830011  ori         $v1, $a0, 0x11
    ctx->pc = 0x2fcda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x2fcda4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCDA4u;
    {
        const bool branch_taken_0x2fcda4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fcda4) {
            ctx->pc = 0x2FCDB8u;
            goto label_2fcdb8;
        }
    }
    ctx->pc = 0x2FCDACu;
    // 0x2fcdac: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x2fcdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x2fcdb0: 0x34770008  ori         $s7, $v1, 0x8
    ctx->pc = 0x2fcdb0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2fcdb4: 0xae370b18  sw          $s7, 0xB18($s1)
    ctx->pc = 0x2fcdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 23));
label_2fcdb8:
    // 0x2fcdb8: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcdbc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2fcdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fcdc0: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FCDC0u;
    {
        const bool branch_taken_0x2fcdc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcdc0) {
            ctx->pc = 0x2FCE18u;
            goto label_2fce18;
        }
    }
    ctx->pc = 0x2FCDC8u;
    // 0x2fcdc8: 0x8fb70178  lw          $s7, 0x178($sp)
    ctx->pc = 0x2fcdc8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcdcc: 0x8ee30104  lw          $v1, 0x104($s7)
    ctx->pc = 0x2fcdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
    // 0x2fcdd0: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2fcdd0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fcdd4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fcdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fcdd8: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x2fcdd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fcddc: 0x12440004  beq         $s2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCDDCu;
    {
        const bool branch_taken_0x2fcddc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fcddc) {
            ctx->pc = 0x2FCDF0u;
            goto label_2fcdf0;
        }
    }
    ctx->pc = 0x2FCDE4u;
    // 0x2fcde4: 0x8e430b18  lw          $v1, 0xB18($s2)
    ctx->pc = 0x2fcde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2840)));
    // 0x2fcde8: 0x34660008  ori         $a2, $v1, 0x8
    ctx->pc = 0x2fcde8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2fcdec: 0xae460b18  sw          $a2, 0xB18($s2)
    ctx->pc = 0x2fcdecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2840), GPR_U32(ctx, 6));
label_2fcdf0:
    // 0x2fcdf0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcdf4: 0x8c650108  lw          $a1, 0x108($v1)
    ctx->pc = 0x2fcdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x2fcdf8: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x2fcdf8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2fcdfc: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2fcdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2fce00: 0x34840011  ori         $a0, $a0, 0x11
    ctx->pc = 0x2fce00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x2fce04: 0x12640004  beq         $s3, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCE04u;
    {
        const bool branch_taken_0x2fce04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fce04) {
            ctx->pc = 0x2FCE18u;
            goto label_2fce18;
        }
    }
    ctx->pc = 0x2FCE0Cu;
    // 0x2fce0c: 0x8e660b18  lw          $a2, 0xB18($s3)
    ctx->pc = 0x2fce0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2840)));
    // 0x2fce10: 0x34c30008  ori         $v1, $a2, 0x8
    ctx->pc = 0x2fce10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2fce14: 0xae630b18  sw          $v1, 0xB18($s3)
    ctx->pc = 0x2fce14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2840), GPR_U32(ctx, 3));
label_2fce18:
    // 0x2fce18: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fce18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce1c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2fce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fce20: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCE20u;
    {
        const bool branch_taken_0x2fce20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fce20) {
            ctx->pc = 0x2FCE3Cu;
            goto label_2fce3c;
        }
    }
    ctx->pc = 0x2FCE28u;
    // 0x2fce28: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2fce28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce2c: 0x8ca600d4  lw          $a2, 0xD4($a1)
    ctx->pc = 0x2fce2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fce30: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2fce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2fce34: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FCE34u;
    {
        const bool branch_taken_0x2fce34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fce34) {
            ctx->pc = 0x2FCE8Cu;
            goto label_2fce8c;
        }
    }
    ctx->pc = 0x2FCE3Cu;
label_2fce3c:
    // 0x2fce3c: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x2fce3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce40: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2fce40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2fce44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fce44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fce48: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCE48u;
    {
        const bool branch_taken_0x2fce48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fce48) {
            ctx->pc = 0x2FCE64u;
            goto label_2fce64;
        }
    }
    ctx->pc = 0x2FCE50u;
    // 0x2fce50: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fce50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce54: 0x8cc400d4  lw          $a0, 0xD4($a2)
    ctx->pc = 0x2fce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fce58: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2fce58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2fce5c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCE5Cu;
    {
        const bool branch_taken_0x2fce5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fce5c) {
            ctx->pc = 0x2FCE8Cu;
            goto label_2fce8c;
        }
    }
    ctx->pc = 0x2FCE64u;
label_2fce64:
    // 0x2fce64: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fce64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce68: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2fce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fce6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2fce6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fce70: 0x14870010  bne         $a0, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FCE70u;
    {
        const bool branch_taken_0x2fce70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x2fce70) {
            ctx->pc = 0x2FCEB4u;
            goto label_2fceb4;
        }
    }
    ctx->pc = 0x2FCE78u;
    // 0x2fce78: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fce78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce7c: 0x8cc600d4  lw          $a2, 0xD4($a2)
    ctx->pc = 0x2fce7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fce80: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2fce80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2fce84: 0x14c4000b  bne         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCE84u;
    {
        const bool branch_taken_0x2fce84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fce84) {
            ctx->pc = 0x2FCEB4u;
            goto label_2fceb4;
        }
    }
    ctx->pc = 0x2FCE8Cu;
label_2fce8c:
    // 0x2fce8c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fce8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fce90: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x2fce90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fce94: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fce94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fce98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fce98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fce9c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2fce9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fcea0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2fcea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcea4: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x2fcea4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fcea8: 0xc065580  jal         func_195600
    ctx->pc = 0x2FCEA8u;
    SET_GPR_U32(ctx, 31, 0x2FCEB0u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FCEA8u, 0x2FCEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCEB0u;
label_2fceb0:
    // 0x2fceb0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2fceb0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2fceb4:
    // 0x2fceb4: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fceb8: 0x8c8700d4  lw          $a3, 0xD4($a0)
    ctx->pc = 0x2fceb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fcebc: 0x28e30023  slti        $v1, $a3, 0x23
    ctx->pc = 0x2fcebcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x2fcec0: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FCEC0u;
    {
        const bool branch_taken_0x2fcec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcec0) {
            ctx->pc = 0x2FCF40u;
            goto label_2fcf40;
        }
    }
    ctx->pc = 0x2FCEC8u;
    // 0x2fcec8: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcecc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fced0: 0x38680010  xori        $t0, $v1, 0x10
    ctx->pc = 0x2fced0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2fced4: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fced4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fced8: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2fced8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x2fcedc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fcedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcee0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fcee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcee4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2fcee4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fcee8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fcee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fceec: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2fceecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fcef0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2fcef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fcef4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2fcef4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fcef8: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x2FCEF8u;
    SET_GPR_U32(ctx, 31, 0x2FCF00u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x2FCEF8u, 0x2FCF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF00u;
label_2fcf00:
    // 0x2fcf00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fcf00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fcf04: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fcf04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf08: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2fcf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf0c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2fcf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf10: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2fcf10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fcf14: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2fcf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fcf18: 0xc065580  jal         func_195600
    ctx->pc = 0x2FCF18u;
    SET_GPR_U32(ctx, 31, 0x2FCF20u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FCF18u, 0x2FCF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF20u;
label_2fcf20:
    // 0x2fcf20: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fcf20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fcf24: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fcf24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf28: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2fcf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf2c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fcf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf30: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2fcf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fcf34: 0xc0655c0  jal         func_195700
    ctx->pc = 0x2FCF34u;
    SET_GPR_U32(ctx, 31, 0x2FCF3Cu);
    ctx->pc = 0x195700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195700u, 0x2FCF34u, 0x2FCF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF3Cu;
label_2fcf3c:
    // 0x2fcf3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fcf3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2fcf40:
    // 0x2fcf40: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2fcf40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fcf44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2fcf44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fcf48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2fcf48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fcf4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2fcf4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fcf50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2fcf50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fcf54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fcf54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fcf58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fcf58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fcf5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fcf5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcf60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fcf60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcf64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fcf64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcf68: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x2fcf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2fcf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCF74u;
}
