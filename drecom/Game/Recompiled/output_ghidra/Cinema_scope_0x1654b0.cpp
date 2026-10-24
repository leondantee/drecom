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

// Function: Cinema_scope
// Address: 0x1654b0 - 0x165740
void Cinema_scope_0x1654b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cinema_scope_0x1654b0");
#endif

    switch (ctx->pc) {
        case 0x165668u: goto label_165668;
        case 0x1656e0u: goto label_1656e0;
        case 0x165724u: goto label_165724;
        default: break;
    }

    ctx->pc = 0x1654b0u;

    // 0x1654b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1654b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1654b4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1654b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1654b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1654b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1654bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1654bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1654c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1654c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1654c4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1654c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1654c8: 0x2470fe10  addiu       $s0, $v1, -0x1F0
    ctx->pc = 0x1654c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x1654cc: 0x8e04024c  lw          $a0, 0x24C($s0)
    ctx->pc = 0x1654ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D005Cu));
    // 0x1654d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1654d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1654d4: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1654D4u;
    {
        const bool branch_taken_0x1654d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1654d4) {
            ctx->pc = 0x1655A8u;
            goto label_1655a8;
        }
    }
    ctx->pc = 0x1654DCu;
    // 0x1654dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1654dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1654e0: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1654E0u;
    {
        const bool branch_taken_0x1654e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1654e0) {
            ctx->pc = 0x16557Cu;
            goto label_16557c;
        }
    }
    ctx->pc = 0x1654E8u;
    // 0x1654e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1654e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1654ec: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1654ECu;
    {
        const bool branch_taken_0x1654ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1654ec) {
            ctx->pc = 0x165544u;
            goto label_165544;
        }
    }
    ctx->pc = 0x1654F4u;
    // 0x1654f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1654F4u;
    {
        const bool branch_taken_0x1654f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1654f4) {
            ctx->pc = 0x165504u;
            goto label_165504;
        }
    }
    ctx->pc = 0x1654FCu;
    // 0x1654fc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1654FCu;
    {
        const bool branch_taken_0x1654fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1654fc) {
            ctx->pc = 0x1655C8u;
            goto label_1655c8;
        }
    }
    ctx->pc = 0x165504u;
label_165504:
    // 0x165504: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165508: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x165508u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x16550c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16550cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x165510: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x165510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x165514: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x165514u;
    {
        const bool branch_taken_0x165514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165514) {
            ctx->pc = 0x1655C8u;
            goto label_1655c8;
        }
    }
    ctx->pc = 0x16551Cu;
    // 0x16551c: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x16551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x165520: 0xae030248  sw          $v1, 0x248($s0)
    ctx->pc = 0x165520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 3));
    // 0x165524: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x165524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x165528: 0xae030254  sw          $v1, 0x254($s0)
    ctx->pc = 0x165528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 3));
    // 0x16552c: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x16552cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x165530: 0x8e03024c  lw          $v1, 0x24C($s0)
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x165534: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165538: 0xae03024c  sw          $v1, 0x24C($s0)
    ctx->pc = 0x165538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 3));
    // 0x16553c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16553Cu;
    {
        const bool branch_taken_0x16553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16553c) {
            ctx->pc = 0x1655C8u;
            goto label_1655c8;
        }
    }
    ctx->pc = 0x165544u;
label_165544:
    // 0x165544: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x165544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x165548: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x165548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x16554c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x16554cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x165550: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x165550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x165554: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x165554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x165558: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x165558u;
    {
        const bool branch_taken_0x165558 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x165558) {
            ctx->pc = 0x1655C8u;
            goto label_1655c8;
        }
    }
    ctx->pc = 0x165560u;
    // 0x165560: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x165560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x165564: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x165564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x165568: 0x8e03024c  lw          $v1, 0x24C($s0)
    ctx->pc = 0x165568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x16556c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165570: 0xae03024c  sw          $v1, 0x24C($s0)
    ctx->pc = 0x165570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 3));
    // 0x165574: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x165574u;
    {
        const bool branch_taken_0x165574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165574) {
            ctx->pc = 0x1655C8u;
            goto label_1655c8;
        }
    }
    ctx->pc = 0x16557Cu;
label_16557c:
    // 0x16557c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16557cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165580: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x165580u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x165584: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x165584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x165588: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x165588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16558c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x16558Cu;
    {
        const bool branch_taken_0x16558c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16558c) {
            ctx->pc = 0x1655C8u;
            goto label_1655c8;
        }
    }
    ctx->pc = 0x165594u;
    // 0x165594: 0x8e03024c  lw          $v1, 0x24C($s0)
    ctx->pc = 0x165594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x165598: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16559c: 0xae03024c  sw          $v1, 0x24C($s0)
    ctx->pc = 0x16559cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 3));
    // 0x1655a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1655A0u;
    {
        const bool branch_taken_0x1655a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655a0) {
            ctx->pc = 0x1655C8u;
            goto label_1655c8;
        }
    }
    ctx->pc = 0x1655A8u;
label_1655a8:
    // 0x1655a8: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1655a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1655ac: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x1655acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1655b0: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1655b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1655b4: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1655b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1655b8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1655B8u;
    {
        const bool branch_taken_0x1655b8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1655b8) {
            ctx->pc = 0x1655C8u;
            goto label_1655c8;
        }
    }
    ctx->pc = 0x1655C0u;
    // 0x1655c0: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x1655c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x1655c4: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1655c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
label_1655c8:
    // 0x1655c8: 0x8e03024c  lw          $v1, 0x24C($s0)
    ctx->pc = 0x1655c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x1655cc: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x1655CCu;
    {
        const bool branch_taken_0x1655cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1655cc) {
            ctx->pc = 0x165724u;
            goto label_165724;
        }
    }
    ctx->pc = 0x1655D4u;
    // 0x1655d4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1655d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1655d8: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1655d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1655dc: 0x26020208  addiu       $v0, $s0, 0x208
    ctx->pc = 0x1655dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x1655e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1655e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1655e4: 0x8e030248  lw          $v1, 0x248($s0)
    ctx->pc = 0x1655e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x1655e8: 0x2602020c  addiu       $v0, $s0, 0x20C
    ctx->pc = 0x1655e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
    // 0x1655ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1655ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1655f0: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x1655f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1655f4: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x1655f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x1655f8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1655f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1655fc: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1655fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x165600: 0x26020210  addiu       $v0, $s0, 0x210
    ctx->pc = 0x165600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x165604: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165608: 0x8e030248  lw          $v1, 0x248($s0)
    ctx->pc = 0x165608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x16560c: 0x26020214  addiu       $v0, $s0, 0x214
    ctx->pc = 0x16560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 532));
    // 0x165610: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165614: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x165614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x165618: 0x24020870  addiu       $v0, $zero, 0x870
    ctx->pc = 0x165618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
    // 0x16561c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16561cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165620: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x165620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x165624: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x165624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x165628: 0x26020224  addiu       $v0, $s0, 0x224
    ctx->pc = 0x165628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
    // 0x16562c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16562cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165630: 0x8e030248  lw          $v1, 0x248($s0)
    ctx->pc = 0x165630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x165634: 0x26020228  addiu       $v0, $s0, 0x228
    ctx->pc = 0x165634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x165638: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16563c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x16563cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x165640: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x165640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x165644: 0x2602022c  addiu       $v0, $s0, 0x22C
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x165648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16564c: 0x8e030248  lw          $v1, 0x248($s0)
    ctx->pc = 0x16564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x165650: 0x26020230  addiu       $v0, $s0, 0x230
    ctx->pc = 0x165650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x165654: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165658: 0x261101fc  addiu       $s1, $s0, 0x1FC
    ctx->pc = 0x165658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
    // 0x16565c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x16565cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165660: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x165660u;
    {
        const bool branch_taken_0x165660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165660) {
            ctx->pc = 0x1656E8u;
            goto label_1656e8;
        }
    }
    ctx->pc = 0x165668u;
label_165668:
    // 0x165668: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x165668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16566c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16566cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x165670: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x165670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x165674: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x165674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x165678: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x165678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x16567c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x165680: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x165680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x165684: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x165684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x165688: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x165688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x16568c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16568cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165690: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x165690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165694: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x165694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x165698: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x165698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16569c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16569cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1656a0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1656a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1656a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1656a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1656a8: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1656a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1656ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1656acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1656b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1656b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1656b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1656b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1656b8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1656b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1656bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1656c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1656c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1656c4: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1656c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1656c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1656c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1656cc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1656ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1656d0: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1656d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1656d4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1656d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1656d8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1656D8u;
    SET_GPR_U32(ctx, 31, 0x1656E0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1656D8u, 0x1656E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656E0u;
label_1656e0:
    // 0x1656e0: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x1656e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1656e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1656e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1656e8:
    // 0x1656e8: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1656e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1656ec: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1656ECu;
    {
        const bool branch_taken_0x1656ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1656ec) {
            ctx->pc = 0x165668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165668;
        }
    }
    ctx->pc = 0x1656F4u;
    // 0x1656f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1656f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1656f8: 0xae020238  sw          $v0, 0x238($s0)
    ctx->pc = 0x1656f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
    // 0x1656fc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1656fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x165700: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x165700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x165704: 0xae02023c  sw          $v0, 0x23C($s0)
    ctx->pc = 0x165704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    // 0x165708: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x165708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x16570c: 0xfe020240  sd          $v0, 0x240($s0)
    ctx->pc = 0x16570cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 576), GPR_U64(ctx, 2));
    // 0x165710: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x165710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x165714: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x165714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x165718: 0x26050238  addiu       $a1, $s0, 0x238
    ctx->pc = 0x165718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
    // 0x16571c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x16571Cu;
    SET_GPR_U32(ctx, 31, 0x165724u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x16571Cu, 0x165724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165724u;
label_165724:
    // 0x165724: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x165724u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16572c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16572cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165734: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x165734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x165738: 0x3e00008  jr          $ra
    ctx->pc = 0x165738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165740u;
}
