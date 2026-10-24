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

// Function: Char_flg_set
// Address: 0x378300 - 0x3784d8
void Char_flg_set_0x378300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Char_flg_set_0x378300");
#endif

    switch (ctx->pc) {
        case 0x378320u: goto label_378320;
        default: break;
    }

    ctx->pc = 0x378300u;

    // 0x378300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x378304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x378304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x378308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37830c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x37830cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x378310: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x378310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x378314: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x378314u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x378318: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x378318u;
    {
        const bool branch_taken_0x378318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378318) {
            ctx->pc = 0x3784B8u;
            goto label_3784b8;
        }
    }
    ctx->pc = 0x378320u;
label_378320:
    // 0x378320: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x378320u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x378324: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x378324u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x378328: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x378328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37832c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x37832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378330: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x378330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378334: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x378334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x378338: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37833c: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x37833cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x378340: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x378340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x378344: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x378344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x378348: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x378348u;
    {
        const bool branch_taken_0x378348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378348) {
            ctx->pc = 0x378358u;
            goto label_378358;
        }
    }
    ctx->pc = 0x378350u;
    // 0x378350: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x378350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378354: 0x0  nop
    ctx->pc = 0x378354u;
    // NOP
label_378358:
    // 0x378358: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x378358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x37835c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x37835cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x378360: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x378360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378364: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x378364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x378368: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x378368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x37836c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37836cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378370: 0x832006  srlv        $a0, $v1, $a0
    ctx->pc = 0x378370u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x378374: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x378374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x378378: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x378378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x37837c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x37837Cu;
    {
        const bool branch_taken_0x37837c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37837c) {
            ctx->pc = 0x378388u;
            goto label_378388;
        }
    }
    ctx->pc = 0x378384u;
    // 0x378384: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x378384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_378388:
    // 0x378388: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x378388u;
    {
        const bool branch_taken_0x378388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x378388) {
            ctx->pc = 0x3784B0u;
            goto label_3784b0;
        }
    }
    ctx->pc = 0x378390u;
    // 0x378390: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x378390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x378394: 0x12230038  beq         $s1, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x378394u;
    {
        const bool branch_taken_0x378394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x378394) {
            ctx->pc = 0x378478u;
            goto label_378478;
        }
    }
    ctx->pc = 0x37839Cu;
    // 0x37839c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3783a0: 0x12230024  beq         $s1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3783A0u;
    {
        const bool branch_taken_0x3783a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3783a0) {
            ctx->pc = 0x378434u;
            goto label_378434;
        }
    }
    ctx->pc = 0x3783A8u;
    // 0x3783a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3783a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3783ac: 0x12230015  beq         $s1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3783ACu;
    {
        const bool branch_taken_0x3783ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x3783ac) {
            ctx->pc = 0x378404u;
            goto label_378404;
        }
    }
    ctx->pc = 0x3783B4u;
    // 0x3783b4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3783B4u;
    {
        const bool branch_taken_0x3783b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3783b4) {
            ctx->pc = 0x3783C4u;
            goto label_3783c4;
        }
    }
    ctx->pc = 0x3783BCu;
    // 0x3783bc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3783BCu;
    {
        const bool branch_taken_0x3783bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3783bc) {
            ctx->pc = 0x3784B0u;
            goto label_3784b0;
        }
    }
    ctx->pc = 0x3783C4u;
label_3783c4:
    // 0x3783c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3783c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3783c8: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3783C8u;
    {
        const bool branch_taken_0x3783c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3783c8) {
            ctx->pc = 0x3783ECu;
            goto label_3783ec;
        }
    }
    ctx->pc = 0x3783D0u;
    // 0x3783d0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x3783d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3783d4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3783d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3783d8: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3783d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3783dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3783dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3783e0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3783e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3783e4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3783E4u;
    {
        const bool branch_taken_0x3783e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3783e4) {
            ctx->pc = 0x3784B0u;
            goto label_3784b0;
        }
    }
    ctx->pc = 0x3783ECu;
label_3783ec:
    // 0x3783ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3783ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3783f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3783f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3783f4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3783f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3783f8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3783f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3783fc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3783FCu;
    {
        const bool branch_taken_0x3783fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3783fc) {
            ctx->pc = 0x3784B0u;
            goto label_3784b0;
        }
    }
    ctx->pc = 0x378404u;
label_378404:
    // 0x378404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378408: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x378408u;
    {
        const bool branch_taken_0x378408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x378408) {
            ctx->pc = 0x378424u;
            goto label_378424;
        }
    }
    ctx->pc = 0x378410u;
    // 0x378410: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x378410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378414: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x378414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x378418: 0xac23efb4  sw          $v1, -0x104C($at)
    ctx->pc = 0x378418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFB4u, _value); } while (0);
    // 0x37841c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x37841Cu;
    {
        const bool branch_taken_0x37841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37841c) {
            ctx->pc = 0x3784B0u;
            goto label_3784b0;
        }
    }
    ctx->pc = 0x378424u;
label_378424:
    // 0x378424: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x378424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x378428: 0xac20efb4  sw          $zero, -0x104C($at)
    ctx->pc = 0x378428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFB4u, _value); } while (0);
    // 0x37842c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x37842Cu;
    {
        const bool branch_taken_0x37842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37842c) {
            ctx->pc = 0x3784B0u;
            goto label_3784b0;
        }
    }
    ctx->pc = 0x378434u;
label_378434:
    // 0x378434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378438: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x378438u;
    {
        const bool branch_taken_0x378438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x378438) {
            ctx->pc = 0x37845Cu;
            goto label_37845c;
        }
    }
    ctx->pc = 0x378440u;
    // 0x378440: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x378440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378444: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x378444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x378448: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37844c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x37844cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x378450: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x378450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x378454: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x378454u;
    {
        const bool branch_taken_0x378454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378454) {
            ctx->pc = 0x3784B0u;
            goto label_3784b0;
        }
    }
    ctx->pc = 0x37845Cu;
label_37845c:
    // 0x37845c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378460: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x378460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x378464: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x378464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x378468: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x378468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x37846c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x37846cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x378470: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x378470u;
    {
        const bool branch_taken_0x378470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378470) {
            ctx->pc = 0x3784B0u;
            goto label_3784b0;
        }
    }
    ctx->pc = 0x378478u;
label_378478:
    // 0x378478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37847c: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37847Cu;
    {
        const bool branch_taken_0x37847c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x37847c) {
            ctx->pc = 0x3784A0u;
            goto label_3784a0;
        }
    }
    ctx->pc = 0x378484u;
    // 0x378484: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x378484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378488: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x378488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37848c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x37848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x378490: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x378490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x378494: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x378494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x378498: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x378498u;
    {
        const bool branch_taken_0x378498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378498) {
            ctx->pc = 0x3784B0u;
            goto label_3784b0;
        }
    }
    ctx->pc = 0x3784A0u;
label_3784a0:
    // 0x3784a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3784a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3784a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3784a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3784a8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3784a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3784ac: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3784acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_3784b0:
    // 0x3784b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3784b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3784b4: 0x0  nop
    ctx->pc = 0x3784b4u;
    // NOP
label_3784b8:
    // 0x3784b8: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x3784b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3784bc: 0x1460ff98  bnez        $v1, . + 4 + (-0x68 << 2)
    ctx->pc = 0x3784BCu;
    {
        const bool branch_taken_0x3784bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3784bc) {
            ctx->pc = 0x378320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378320;
        }
    }
    ctx->pc = 0x3784C4u;
    // 0x3784c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3784c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3784c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3784c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3784cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3784ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3784d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3784D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3784D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3784D8u;
}
