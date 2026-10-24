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

// Function: Rck_area_set
// Address: 0x196030 - 0x196794
void Rck_area_set_0x196030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rck_area_set_0x196030");
#endif

    switch (ctx->pc) {
        case 0x196128u: goto label_196128;
        case 0x19614cu: goto label_19614c;
        case 0x1961a8u: goto label_1961a8;
        case 0x196240u: goto label_196240;
        case 0x1964b8u: goto label_1964b8;
        case 0x196570u: goto label_196570;
        case 0x196664u: goto label_196664;
        case 0x1966dcu: goto label_1966dc;
        case 0x196710u: goto label_196710;
        default: break;
    }

    ctx->pc = 0x196030u;

    // 0x196030: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x196030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x196034: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x196034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x196038: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x196038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19603c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19603cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x196040: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x196040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x196044: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x196044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x196048: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x196048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19604c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x196050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x196054: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19605c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x19605cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x196060: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x196060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x196064: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x196064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
    // 0x196068: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x196068u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x19606c: 0x2623ac60  addiu       $v1, $s1, -0x53A0
    ctx->pc = 0x19606cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945888));
    // 0x196070: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x196070u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x196074: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x196074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x196078: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x196078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x19607c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19607Cu;
    {
        const bool branch_taken_0x19607c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19607c) {
            ctx->pc = 0x196094u;
            goto label_196094;
        }
    }
    ctx->pc = 0x196084u;
    // 0x196084: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196088: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x196088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x19608c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19608Cu;
    {
        const bool branch_taken_0x19608c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19608c) {
            ctx->pc = 0x1960BCu;
            goto label_1960bc;
        }
    }
    ctx->pc = 0x196094u;
label_196094:
    // 0x196094: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x196094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x196098: 0x8c631250  lw          $v1, 0x1250($v1)
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x19609c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x19609cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1960a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1960a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1960a4: 0x24631240  addiu       $v1, $v1, 0x1240
    ctx->pc = 0x1960a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x1960a8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1960a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1960ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1960acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1960b0: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x1960b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
    // 0x1960b4: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x1960B4u;
    {
        const bool branch_taken_0x1960b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960b4) {
            ctx->pc = 0x196760u;
            goto label_196760;
        }
    }
    ctx->pc = 0x1960BCu;
label_1960bc:
    // 0x1960bc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1960bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1960c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1960c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1960c4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1960C4u;
    {
        const bool branch_taken_0x1960c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1960c4) {
            ctx->pc = 0x1960DCu;
            goto label_1960dc;
        }
    }
    ctx->pc = 0x1960CCu;
    // 0x1960cc: 0x8fb600c8  lw          $s6, 0xC8($sp)
    ctx->pc = 0x1960ccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1960d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1960d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1960d4: 0x16c3000b  bne         $s6, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1960D4u;
    {
        const bool branch_taken_0x1960d4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x1960d4) {
            ctx->pc = 0x196104u;
            goto label_196104;
        }
    }
    ctx->pc = 0x1960DCu;
label_1960dc:
    // 0x1960dc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1960dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1960e0: 0x8c831250  lw          $v1, 0x1250($a0)
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4688)));
    // 0x1960e4: 0x78730000  lq          $s3, 0x0($v1)
    ctx->pc = 0x1960e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1960e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1960e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1960ec: 0x24631240  addiu       $v1, $v1, 0x1240
    ctx->pc = 0x1960ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x1960f0: 0x7c730000  sq          $s3, 0x0($v1)
    ctx->pc = 0x1960f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 19));
    // 0x1960f4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1960f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1960f8: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x1960f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
    // 0x1960fc: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x1960FCu;
    {
        const bool branch_taken_0x1960fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960fc) {
            ctx->pc = 0x196760u;
            goto label_196760;
        }
    }
    ctx->pc = 0x196104u;
label_196104:
    // 0x196104: 0x8fb600c0  lw          $s6, 0xC0($sp)
    ctx->pc = 0x196104u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x196108: 0x8e1e0000  lw          $fp, 0x0($s0)
    ctx->pc = 0x196108u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19610c: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x19610cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x196110: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x196110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x196114: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x196114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196118: 0x8e750038  lw          $s5, 0x38($s3)
    ctx->pc = 0x196118u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x19611c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19611cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196120: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x196120u;
    {
        const bool branch_taken_0x196120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196120) {
            ctx->pc = 0x196188u;
            goto label_196188;
        }
    }
    ctx->pc = 0x196128u;
label_196128:
    // 0x196128: 0x8eb70010  lw          $s7, 0x10($s5)
    ctx->pc = 0x196128u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x19612c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x19612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x196130: 0x16e30011  bne         $s7, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x196130u;
    {
        const bool branch_taken_0x196130 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x196130) {
            ctx->pc = 0x196178u;
            goto label_196178;
        }
    }
    ctx->pc = 0x196138u;
    // 0x196138: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x196138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19613c: 0x24641240  addiu       $a0, $v1, 0x1240
    ctx->pc = 0x19613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x196140: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x196140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x196144: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x196144u;
    SET_GPR_U32(ctx, 31, 0x19614Cu);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x19614Cu;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19614Cu) { return; }
    ctx->pc = 0x19614Cu;
label_19614c:
    // 0x19614c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x19614cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196150: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x196150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x196154: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x196154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x196158: 0xac641274  sw          $a0, 0x1274($v1)
    ctx->pc = 0x196158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 4));
    // 0x19615c: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x19615cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x196160: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x196160u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196164: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x196164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x196168: 0x24731260  addiu       $s3, $v1, 0x1260
    ctx->pc = 0x196168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4704));
    // 0x19616c: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x19616cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x196170: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x196170u;
    {
        const bool branch_taken_0x196170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196170) {
            ctx->pc = 0x196760u;
            goto label_196760;
        }
    }
    ctx->pc = 0x196178u;
label_196178:
    // 0x196178: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x19617c: 0x26370001  addiu       $s7, $s1, 0x1
    ctx->pc = 0x19617cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x196180: 0x72e08e28  paddub      $s1, $s7, $zero
    ctx->pc = 0x196180u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x196184: 0x0  nop
    ctx->pc = 0x196184u;
    // NOP
label_196188:
    // 0x196188: 0x96630034  lhu         $v1, 0x34($s3)
    ctx->pc = 0x196188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x19618c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19618cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x196190: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x196190u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x196194: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x196194u;
    {
        const bool branch_taken_0x196194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196194) {
            ctx->pc = 0x196128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196128;
        }
    }
    ctx->pc = 0x19619Cu;
    // 0x19619c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19619cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1961a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1961A0u;
    {
        const bool branch_taken_0x1961a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1961a0) {
            ctx->pc = 0x1961F8u;
            goto label_1961f8;
        }
    }
    ctx->pc = 0x1961A8u;
label_1961a8:
    // 0x1961a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1961a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1961ac: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1961acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1961b0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1961b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1961b4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1961b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1961b8: 0x94860034  lhu         $a2, 0x34($a0)
    ctx->pc = 0x1961b8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1961bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1961bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1961c0: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1961c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1961c4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1961c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1961c8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1961c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1961cc: 0xa4a60036  sh          $a2, 0x36($a1)
    ctx->pc = 0x1961ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 54), (uint16_t)GPR_U32(ctx, 6));
    // 0x1961d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1961d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1961d4: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1961d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1961d8: 0x8c950010  lw          $s5, 0x10($a0)
    ctx->pc = 0x1961d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1961dc: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1961e0: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x1961e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x1961e4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1961e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1961e8: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x1961e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1961ec: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1961ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1961f0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1961f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1961f4: 0x0  nop
    ctx->pc = 0x1961f4u;
    // NOP
label_1961f8:
    // 0x1961f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1961f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1961fc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1961fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x196200: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x196200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x196204: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x196204u;
    {
        const bool branch_taken_0x196204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196204) {
            ctx->pc = 0x1961A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1961a8;
        }
    }
    ctx->pc = 0x19620Cu;
    // 0x19620c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x19620cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196210: 0x8fb600c0  lw          $s6, 0xC0($sp)
    ctx->pc = 0x196210u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x196214: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x196214u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196218: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x196218u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19621c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19621cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196220: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x196220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x196224: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196228: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x196228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x19622c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196230: 0x2c32014  dsllv       $a0, $v1, $s6
    ctx->pc = 0x196230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (GPR_U32(ctx, 22) & 0x3F));
    // 0x196234: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x196234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x196238: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19623c: 0xfc642208  sd          $a0, 0x2208($v1)
    ctx->pc = 0x19623cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8712), GPR_U64(ctx, 4));
label_196240:
    // 0x196240: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196244: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x196244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x196248: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x196248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19624c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x19624cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196250: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x196250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196254: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x196254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x196258: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x196258u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x19625c: 0x32c5ffff  andi        $a1, $s6, 0xFFFF
    ctx->pc = 0x19625cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x196260: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x196260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x196264: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x196264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196268: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x196268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x19626c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196270: 0xa4650204  sh          $a1, 0x204($v1)
    ctx->pc = 0x196270u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 516), (uint16_t)GPR_U32(ctx, 5));
    // 0x196274: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x196274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x196278: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x196278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19627c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19627cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196280: 0x2c32014  dsllv       $a0, $v1, $s6
    ctx->pc = 0x196280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (GPR_U32(ctx, 22) & 0x3F));
    // 0x196284: 0xdca32208  ld          $v1, 0x2208($a1)
    ctx->pc = 0x196284u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8712)));
    // 0x196288: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x196288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19628c: 0xfca32208  sd          $v1, 0x2208($a1)
    ctx->pc = 0x19628cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8712), GPR_U64(ctx, 3));
    // 0x196290: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x196290u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196294: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x196294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x196298: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x196298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x19629c: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x19629Cu;
    {
        const bool branch_taken_0x19629c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19629c) {
            ctx->pc = 0x196388u;
            goto label_196388;
        }
    }
    ctx->pc = 0x1962A4u;
    // 0x1962a4: 0x13c000e5  beqz        $fp, . + 4 + (0xE5 << 2)
    ctx->pc = 0x1962A4u;
    {
        const bool branch_taken_0x1962a4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1962a4) {
            ctx->pc = 0x19663Cu;
            goto label_19663c;
        }
    }
    ctx->pc = 0x1962ACu;
    // 0x1962ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1962acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1962b0: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x1962b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1962b4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1962b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1962b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1962b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1962bc: 0x94650034  lhu         $a1, 0x34($v1)
    ctx->pc = 0x1962bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1962c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1962c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1962c4: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x1962c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1962c8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1962c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1962cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1962ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1962d0: 0xa4650036  sh          $a1, 0x36($v1)
    ctx->pc = 0x1962d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 5));
    // 0x1962d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1962d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1962d8: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x1962d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1962dc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1962dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1962e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1962e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1962e4: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x1962e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x1962e8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1962e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1962ec: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x1962ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1962f0: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1962f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1962f4: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x1962f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x1962f8: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1962f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1962fc: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x1962fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x196300: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196304: 0x94630204  lhu         $v1, 0x204($v1)
    ctx->pc = 0x196304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x196308: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x196308u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19630c: 0x17c0ffcc  bnez        $fp, . + 4 + (-0x34 << 2)
    ctx->pc = 0x19630Cu;
    {
        const bool branch_taken_0x19630c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x19630c) {
            ctx->pc = 0x196240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196240;
        }
    }
    ctx->pc = 0x196314u;
    // 0x196314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x196314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196318: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x196318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19631c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x19631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196320: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x196320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x196324: 0x32c5ffff  andi        $a1, $s6, 0xFFFF
    ctx->pc = 0x196324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x196328: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x196328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x19632c: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x19632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196330: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x196330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x196334: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196338: 0xa4650204  sh          $a1, 0x204($v1)
    ctx->pc = 0x196338u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 516), (uint16_t)GPR_U32(ctx, 5));
    // 0x19633c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196340: 0x2c32014  dsllv       $a0, $v1, $s6
    ctx->pc = 0x196340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (GPR_U32(ctx, 22) & 0x3F));
    // 0x196344: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x196344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x196348: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19634c: 0xfc642208  sd          $a0, 0x2208($v1)
    ctx->pc = 0x19634cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8712), GPR_U64(ctx, 4));
    // 0x196350: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196354: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x196354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x196358: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x196358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19635c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x19635cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196360: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x196360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196364: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x196364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x196368: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x196368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x19636c: 0x1060ffb4  beqz        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x19636Cu;
    {
        const bool branch_taken_0x19636c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19636c) {
            ctx->pc = 0x196240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196240;
        }
    }
    ctx->pc = 0x196374u;
    // 0x196374: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x196374u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196378: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x196378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19637c: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x19637cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x196380: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x196380u;
    {
        const bool branch_taken_0x196380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196380) {
            ctx->pc = 0x196240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196240;
        }
    }
    ctx->pc = 0x196388u;
label_196388:
    // 0x196388: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x196388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x19638c: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x19638cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x196390: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196394: 0xa4642608  sh          $a0, 0x2608($v1)
    ctx->pc = 0x196394u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9736), (uint16_t)GPR_U32(ctx, 4));
    // 0x196398: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19639c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x19639cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1963a0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1963a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1963a4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1963a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1963a8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1963ac: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x1963acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1963b0: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1963b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1963b4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1963b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1963b8: 0xdc642208  ld          $a0, 0x2208($v1)
    ctx->pc = 0x1963b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8712)));
    // 0x1963bc: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x1963bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1963c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1963c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1963c4: 0xfc642408  sd          $a0, 0x2408($v1)
    ctx->pc = 0x1963c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 9224), GPR_U64(ctx, 4));
    // 0x1963c8: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x1963c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x1963cc: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x1963ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
    // 0x1963d0: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x1963d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1963d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1963d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1963d8: 0x8e750038  lw          $s5, 0x38($s3)
    ctx->pc = 0x1963d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1963dc: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x1963dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x1963e0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1963e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1963e4: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1963e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1963e8: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1963e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1963ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1963ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1963f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1963f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1963f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1963f8: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1963f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1963fc: 0x8eb70010  lw          $s7, 0x10($s5)
    ctx->pc = 0x1963fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x196400: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x196400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x196404: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x196404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19640c: 0x2e32014  dsllv       $a0, $v1, $s7
    ctx->pc = 0x19640cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (GPR_U32(ctx, 23) & 0x3F));
    // 0x196410: 0xdca32208  ld          $v1, 0x2208($a1)
    ctx->pc = 0x196410u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8712)));
    // 0x196414: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x196414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x196418: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x196418u;
    {
        const bool branch_taken_0x196418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196418) {
            ctx->pc = 0x196430u;
            goto label_196430;
        }
    }
    ctx->pc = 0x196420u;
    // 0x196420: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x196420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x196424: 0x16e3007b  bne         $s7, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x196424u;
    {
        const bool branch_taken_0x196424 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x196424) {
            ctx->pc = 0x196614u;
            goto label_196614;
        }
    }
    ctx->pc = 0x19642Cu;
    // 0x19642c: 0x0  nop
    ctx->pc = 0x19642cu;
    // NOP
label_196430:
    // 0x196430: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x196430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x196434: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x196434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x196438: 0x16e30019  bne         $s7, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x196438u;
    {
        const bool branch_taken_0x196438 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x196438) {
            ctx->pc = 0x1964A0u;
            goto label_1964a0;
        }
    }
    ctx->pc = 0x196440u;
    // 0x196440: 0x32e5ffff  andi        $a1, $s7, 0xFFFF
    ctx->pc = 0x196440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x196444: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x196444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x196448: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x196448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19644c: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x19644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x196450: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x196450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x196454: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196458: 0xa4650204  sh          $a1, 0x204($v1)
    ctx->pc = 0x196458u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 516), (uint16_t)GPR_U32(ctx, 5));
    // 0x19645c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x19645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x196460: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x196460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x196464: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x196464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196468: 0x27c30002  addiu       $v1, $fp, 0x2
    ctx->pc = 0x196468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x19646c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x19646cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x196470: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196474: 0xa4650204  sh          $a1, 0x204($v1)
    ctx->pc = 0x196474u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 516), (uint16_t)GPR_U32(ctx, 5));
    // 0x196478: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x196478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19647c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x19647cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x196480: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196484: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x196484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196488: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x196488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19648c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x19648cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x196490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196494: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x196494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x196498: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x196498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19649c: 0x0  nop
    ctx->pc = 0x19649cu;
    // NOP
label_1964a0:
    // 0x1964a0: 0x12800066  beqz        $s4, . + 4 + (0x66 << 2)
    ctx->pc = 0x1964A0u;
    {
        const bool branch_taken_0x1964a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964a0) {
            ctx->pc = 0x19663Cu;
            goto label_19663c;
        }
    }
    ctx->pc = 0x1964A8u;
    // 0x1964a8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1964a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1964ac: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1964acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1964b0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1964B0u;
    {
        const bool branch_taken_0x1964b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964b0) {
            ctx->pc = 0x196528u;
            goto label_196528;
        }
    }
    ctx->pc = 0x1964B8u;
label_1964b8:
    // 0x1964b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1964b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1964bc: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1964bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1964c0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1964c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1964c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1964c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1964c8: 0x94630036  lhu         $v1, 0x36($v1)
    ctx->pc = 0x1964c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x1964cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1964ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1964d0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1964d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1964d4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1964D4u;
    {
        const bool branch_taken_0x1964d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964d4) {
            ctx->pc = 0x196520u;
            goto label_196520;
        }
    }
    ctx->pc = 0x1964DCu;
    // 0x1964dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1964dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1964e0: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1964e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1964e4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1964e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1964e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1964e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1964ec: 0x94650034  lhu         $a1, 0x34($v1)
    ctx->pc = 0x1964ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1964f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1964f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1964f4: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x1964f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1964f8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1964f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1964fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1964fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196500: 0xa4650036  sh          $a1, 0x36($v1)
    ctx->pc = 0x196500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 5));
    // 0x196504: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196508: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x196508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x19650c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x19650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x196510: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x196510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196514: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x196514u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x196518: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x196518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x19651c: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x19651cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
label_196520:
    // 0x196520: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x196524: 0x0  nop
    ctx->pc = 0x196524u;
    // NOP
label_196528:
    // 0x196528: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19652c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x19652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x196530: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x196530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x196534: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x196534u;
    {
        const bool branch_taken_0x196534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196534) {
            ctx->pc = 0x1964B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1964b8;
        }
    }
    ctx->pc = 0x19653Cu;
    // 0x19653c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196540: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x196540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x196544: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x196544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x196548: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x196548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19654c: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x19654cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196550: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x196550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x196554: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x196554u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x196558: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x196558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19655c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19655Cu;
    {
        const bool branch_taken_0x19655c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19655c) {
            ctx->pc = 0x1965B0u;
            goto label_1965b0;
        }
    }
    ctx->pc = 0x196564u;
    // 0x196564: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x196564u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196568: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x196568u;
    {
        const bool branch_taken_0x196568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196568) {
            ctx->pc = 0x1965A0u;
            goto label_1965a0;
        }
    }
    ctx->pc = 0x196570u;
label_196570:
    // 0x196570: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x196570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x196574: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x196574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x196578: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x196578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19657c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x19657cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x196580: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196584: 0x94650204  lhu         $a1, 0x204($v1)
    ctx->pc = 0x196584u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x196588: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x196588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x19658c: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x19658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196590: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x196590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x196594: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196598: 0xa4650204  sh          $a1, 0x204($v1)
    ctx->pc = 0x196598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 516), (uint16_t)GPR_U32(ctx, 5));
    // 0x19659c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19659cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1965a0:
    // 0x1965a0: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x1965a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1965a4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1965A4u;
    {
        const bool branch_taken_0x1965a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1965a4) {
            ctx->pc = 0x196570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196570;
        }
    }
    ctx->pc = 0x1965ACu;
    // 0x1965ac: 0x0  nop
    ctx->pc = 0x1965acu;
    // NOP
label_1965b0:
    // 0x1965b0: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1965b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1965b4: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x1965b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1965b8: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x1965b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1965bc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1965bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1965c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1965c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1965c4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1965c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1965c8: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x1965c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1965cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1965d0: 0xdc642408  ld          $a0, 0x2408($v1)
    ctx->pc = 0x1965d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 9224)));
    // 0x1965d4: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1965d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1965d8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1965d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1965dc: 0xfc642208  sd          $a0, 0x2208($v1)
    ctx->pc = 0x1965dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8712), GPR_U64(ctx, 4));
    // 0x1965e0: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x1965e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1965e4: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1965e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1965e8: 0x94832608  lhu         $v1, 0x2608($a0)
    ctx->pc = 0x1965e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 9736)));
    // 0x1965ec: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x1965ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1965f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1965f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1965f4: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x1965f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1965f8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1965f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1965fc: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x1965fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x196600: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x196600u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x196604: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x196604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x196608: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x196608u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x19660c: 0x1000ff0c  b           . + 4 + (-0xF4 << 2)
    ctx->pc = 0x19660Cu;
    {
        const bool branch_taken_0x19660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19660c) {
            ctx->pc = 0x196240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196240;
        }
    }
    ctx->pc = 0x196614u;
label_196614:
    // 0x196614: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x196614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196618: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x196618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19661c: 0x203b021  addu        $s6, $s0, $v1
    ctx->pc = 0x19661cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196620: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x196620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x196624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x196628: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x196628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x19662c: 0x72e0b628  paddub      $s6, $s7, $zero
    ctx->pc = 0x19662cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x196630: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x196630u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x196634: 0x1000ff02  b           . + 4 + (-0xFE << 2)
    ctx->pc = 0x196634u;
    {
        const bool branch_taken_0x196634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196634) {
            ctx->pc = 0x196240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196240;
        }
    }
    ctx->pc = 0x19663Cu;
label_19663c:
    // 0x19663c: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x19663cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
    // 0x196640: 0x3464bc20  ori         $a0, $v1, 0xBC20
    ctx->pc = 0x196640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
    // 0x196644: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x196644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196648: 0x0  nop
    ctx->pc = 0x196648u;
    // NOP
    // 0x19664c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x19664cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x196650: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x196650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196654: 0xafb300ac  sw          $s3, 0xAC($sp)
    ctx->pc = 0x196654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 19));
    // 0x196658: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x196658u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19665c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19665Cu;
    {
        const bool branch_taken_0x19665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19665c) {
            ctx->pc = 0x1966A0u;
            goto label_1966a0;
        }
    }
    ctx->pc = 0x196664u;
label_196664:
    // 0x196664: 0x11a880  sll         $s5, $s1, 2
    ctx->pc = 0x196664u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x196668: 0x215b821  addu        $s7, $s0, $s5
    ctx->pc = 0x196668u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x19666c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x19666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196670: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x196670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196674: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x196674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196678: 0x0  nop
    ctx->pc = 0x196678u;
    // NOP
    // 0x19667c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19667Cu;
    {
        const bool branch_taken_0x19667c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19667c) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x196684u;
    // 0x196684: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x196684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x196688: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19668c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x19668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196690: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x196690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x196694: 0xafb100ac  sw          $s1, 0xAC($sp)
    ctx->pc = 0x196694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
label_196698:
    // 0x196698: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x196698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19669c: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x19669cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1966a0:
    // 0x1966a0: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x1966a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1966a4: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1966A4u;
    {
        const bool branch_taken_0x1966a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1966a4) {
            ctx->pc = 0x196664u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196664;
        }
    }
    ctx->pc = 0x1966ACu;
    // 0x1966ac: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1966acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1966b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1966b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1966b4: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1966B4u;
    {
        const bool branch_taken_0x1966b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1966b4) {
            ctx->pc = 0x196760u;
            goto label_196760;
        }
    }
    ctx->pc = 0x1966BCu;
    // 0x1966bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1966bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1966c0: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x1966c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1966c4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1966c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1966c8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x1966c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1966cc: 0x8e750038  lw          $s5, 0x38($s3)
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1966d0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1966d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1966d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1966D4u;
    {
        const bool branch_taken_0x1966d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1966d4) {
            ctx->pc = 0x196748u;
            goto label_196748;
        }
    }
    ctx->pc = 0x1966DCu;
label_1966dc:
    // 0x1966dc: 0x8eb70010  lw          $s7, 0x10($s5)
    ctx->pc = 0x1966dcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1966e0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1966e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1966e4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1966e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1966e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1966e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1966ec: 0x94630206  lhu         $v1, 0x206($v1)
    ctx->pc = 0x1966ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 518)));
    // 0x1966f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1966f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1966f4: 0x16e40011  bne         $s7, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1966F4u;
    {
        const bool branch_taken_0x1966f4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 4));
        if (branch_taken_0x1966f4) {
            ctx->pc = 0x19673Cu;
            goto label_19673c;
        }
    }
    ctx->pc = 0x1966FCu;
    // 0x1966fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1966fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x196700: 0x24641240  addiu       $a0, $v1, 0x1240
    ctx->pc = 0x196700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x196704: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x196704u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x196708: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x196708u;
    SET_GPR_U32(ctx, 31, 0x196710u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x196710u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x196710u) { return; }
    ctx->pc = 0x196710u;
label_196710:
    // 0x196710: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x196710u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196714: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x196714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x196718: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x196718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19671c: 0xac831274  sw          $v1, 0x1274($a0)
    ctx->pc = 0x19671cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4724), GPR_U32(ctx, 3));
    // 0x196720: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x196720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x196724: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x196724u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196728: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x196728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19672c: 0x24831260  addiu       $v1, $a0, 0x1260
    ctx->pc = 0x19672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4704));
    // 0x196730: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x196730u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x196734: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x196734u;
    {
        const bool branch_taken_0x196734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196734) {
            ctx->pc = 0x196760u;
            goto label_196760;
        }
    }
    ctx->pc = 0x19673Cu;
label_19673c:
    // 0x19673c: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x19673cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x196740: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x196740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x196744: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x196744u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_196748:
    // 0x196748: 0x96630034  lhu         $v1, 0x34($s3)
    ctx->pc = 0x196748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x19674c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19674cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x196750: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x196750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x196754: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x196754u;
    {
        const bool branch_taken_0x196754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196754) {
            ctx->pc = 0x1966DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1966dc;
        }
    }
    ctx->pc = 0x19675Cu;
    // 0x19675c: 0x0  nop
    ctx->pc = 0x19675cu;
    // NOP
label_196760:
    // 0x196760: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x196760u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x196764: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x196764u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x196768: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x196768u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19676c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19676cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196770: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x196770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196774: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x196774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196778: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x196778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19677c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19677cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196788: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x196788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x19678c: 0x3e00008  jr          $ra
    ctx->pc = 0x19678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19678Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196794u;
}
