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

// Function: Pixel_disp
// Address: 0x1a5440 - 0x1a5f48
void Pixel_disp_0x1a5440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pixel_disp_0x1a5440");
#endif

    switch (ctx->pc) {
        case 0x1a549cu: goto label_1a549c;
        case 0x1a54ccu: goto label_1a54cc;
        case 0x1a5638u: goto label_1a5638;
        case 0x1a564cu: goto label_1a564c;
        case 0x1a565cu: goto label_1a565c;
        case 0x1a566cu: goto label_1a566c;
        case 0x1a5724u: goto label_1a5724;
        case 0x1a5738u: goto label_1a5738;
        case 0x1a574cu: goto label_1a574c;
        case 0x1a575cu: goto label_1a575c;
        case 0x1a5d6cu: goto label_1a5d6c;
        case 0x1a5d98u: goto label_1a5d98;
        case 0x1a5db8u: goto label_1a5db8;
        case 0x1a5dccu: goto label_1a5dcc;
        case 0x1a5de0u: goto label_1a5de0;
        case 0x1a5df4u: goto label_1a5df4;
        case 0x1a5e0cu: goto label_1a5e0c;
        case 0x1a5e20u: goto label_1a5e20;
        case 0x1a5e34u: goto label_1a5e34;
        case 0x1a5e60u: goto label_1a5e60;
        case 0x1a5e90u: goto label_1a5e90;
        case 0x1a5edcu: goto label_1a5edc;
        case 0x1a5f2cu: goto label_1a5f2c;
        default: break;
    }

    ctx->pc = 0x1a5440u;

    // 0x1a5440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a5440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5444: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1a5444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1a5448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a544c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5454: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1a5454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1a5458: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a5458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a545c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1a545cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5460: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1a5460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a5464: 0x24820320  addiu       $v0, $a0, 0x320
    ctx->pc = 0x1a5464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x1a5468: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1a5468u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a546c: 0x8e03030c  lw          $v1, 0x30C($s0)
    ctx->pc = 0x1a546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a5470: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5478: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a5478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a547c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a547cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a5480: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x1a5480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a5484: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a5484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5488: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1a5488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a548c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x1a548cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1a5490: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1a5490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a5494: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x1A5494u;
    SET_GPR_U32(ctx, 31, 0x1A549Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x1A549Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A549Cu) { return; }
    ctx->pc = 0x1A549Cu;
label_1a549c:
    // 0x1a549c: 0x8e04030c  lw          $a0, 0x30C($s0)
    ctx->pc = 0x1a549cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a54a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a54a4: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1a54a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a54a8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a54ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a54acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a54b0: 0x2483cca0  addiu       $v1, $a0, -0x3360
    ctx->pc = 0x1a54b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a54b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a54b8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1a54b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1a54bc: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1a54bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1a54c0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1a54c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a54c4: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x1A54C4u;
    SET_GPR_U32(ctx, 31, 0x1A54CCu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x1A54CCu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A54CCu) { return; }
    ctx->pc = 0x1A54CCu;
label_1a54cc:
    // 0x1a54cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a54d0: 0xae2302bc  sw          $v1, 0x2BC($s1)
    ctx->pc = 0x1a54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 3));
    // 0x1a54d4: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x1a54d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x1a54d8: 0x34642b16  ori         $a0, $v1, 0x2B16
    ctx->pc = 0x1a54d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x1a54dc: 0xae2402c0  sw          $a0, 0x2C0($s1)
    ctx->pc = 0x1a54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 4));
    // 0x1a54e0: 0xae2002c8  sw          $zero, 0x2C8($s1)
    ctx->pc = 0x1a54e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 0));
    // 0x1a54e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a54e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a54e8: 0xde040028  ld          $a0, 0x28($s0)
    ctx->pc = 0x1a54e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a54ec: 0x41fb8  dsll        $v1, $a0, 30
    ctx->pc = 0x1a54ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 30);
    // 0x1a54f0: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x1a54f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1a54f4: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x1a54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a54f8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a54f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1a54fc: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x1a54fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a5500: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x1a5500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x1a5504: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x1a5504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x1a5508: 0x311b8  dsll        $v0, $v1, 6
    ctx->pc = 0x1a5508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 6);
    // 0x1a550c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1a550cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5510: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1a5510u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1a5514: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x1a5514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1a5518: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x1a5518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a551c: 0x236fc  dsll32      $a2, $v0, 27
    ctx->pc = 0x1a551cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1a5520: 0x6177e  dsrl32      $v0, $a2, 29
    ctx->pc = 0x1a5520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> (32 + 29));
    // 0x1a5524: 0xa20202f8  sb          $v0, 0x2F8($s0)
    ctx->pc = 0x1a5524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 760), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5528: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1a5528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a552c: 0x225bc  dsll32      $a0, $v0, 22
    ctx->pc = 0x1a552cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1a5530: 0x41ebe  dsrl32      $v1, $a0, 26
    ctx->pc = 0x1a5530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 26));
    // 0x1a5534: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a5534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a5538: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A5538u;
    {
        const bool branch_taken_0x1a5538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5538) {
            ctx->pc = 0x1A5600u;
            goto label_1a5600;
        }
    }
    ctx->pc = 0x1A5540u;
    // 0x1a5540: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1a5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a5544: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A5544u;
    {
        const bool branch_taken_0x1a5544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5544) {
            ctx->pc = 0x1A55E0u;
            goto label_1a55e0;
        }
    }
    ctx->pc = 0x1A554Cu;
    // 0x1a554c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5550: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A5550u;
    {
        const bool branch_taken_0x1a5550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5550) {
            ctx->pc = 0x1A55BCu;
            goto label_1a55bc;
        }
    }
    ctx->pc = 0x1A5558u;
    // 0x1a5558: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1a5558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1a555c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A555Cu;
    {
        const bool branch_taken_0x1a555c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a555c) {
            ctx->pc = 0x1A5598u;
            goto label_1a5598;
        }
    }
    ctx->pc = 0x1A5564u;
    // 0x1a5564: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1a5564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1a5568: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5568u;
    {
        const bool branch_taken_0x1a5568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5568) {
            ctx->pc = 0x1A5598u;
            goto label_1a5598;
        }
    }
    ctx->pc = 0x1A5570u;
    // 0x1a5570: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1a5570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1a5574: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5574u;
    {
        const bool branch_taken_0x1a5574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a5574) {
            ctx->pc = 0x1A5598u;
            goto label_1a5598;
        }
    }
    ctx->pc = 0x1A557Cu;
    // 0x1a557c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a557cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5580: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5580u;
    {
        const bool branch_taken_0x1a5580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a5580) {
            ctx->pc = 0x1A5598u;
            goto label_1a5598;
        }
    }
    ctx->pc = 0x1A5588u;
    // 0x1a5588: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5588u;
    {
        const bool branch_taken_0x1a5588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5588) {
            ctx->pc = 0x1A5598u;
            goto label_1a5598;
        }
    }
    ctx->pc = 0x1A5590u;
    // 0x1a5590: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1A5590u;
    {
        const bool branch_taken_0x1a5590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5590) {
            ctx->pc = 0x1A5620u;
            goto label_1a5620;
        }
    }
    ctx->pc = 0x1A5598u;
label_1a5598:
    // 0x1a5598: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a5598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a559c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a55a0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1a55a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a55a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a55a8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1a55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a55ac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1a55acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a55b0: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1a55b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x1a55b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1A55B4u;
    {
        const bool branch_taken_0x1a55b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55b4) {
            ctx->pc = 0x1A5620u;
            goto label_1a5620;
        }
    }
    ctx->pc = 0x1A55BCu;
label_1a55bc:
    // 0x1a55bc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a55c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a55c4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1a55c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a55c8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1a55c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a55cc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a55ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a55d0: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1a55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1a55d4: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1a55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x1a55d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A55D8u;
    {
        const bool branch_taken_0x1a55d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55d8) {
            ctx->pc = 0x1A5620u;
            goto label_1a5620;
        }
    }
    ctx->pc = 0x1A55E0u;
label_1a55e0:
    // 0x1a55e0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a55e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a55e8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1a55e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a55ec: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a55f0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1a55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a55f4: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1a55f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x1a55f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A55F8u;
    {
        const bool branch_taken_0x1a55f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55f8) {
            ctx->pc = 0x1A5620u;
            goto label_1a5620;
        }
    }
    ctx->pc = 0x1A5600u;
label_1a5600:
    // 0x1a5600: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a5600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5604: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a5604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a5608: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1a5608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a560c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5610: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1a5610u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a5614: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a5618: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1a5618u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1a561c: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1a561cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_1a5620:
    // 0x1a5620: 0xa2000314  sb          $zero, 0x314($s0)
    ctx->pc = 0x1a5620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 788), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a5624: 0x92020311  lbu         $v0, 0x311($s0)
    ctx->pc = 0x1a5624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 785)));
    // 0x1a5628: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1a5628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a562c: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x1a562cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1a5630: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1A5630u;
    SET_GPR_U32(ctx, 31, 0x1A5638u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1A5630u, 0x1A5638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5638u;
label_1a5638:
    // 0x1a5638: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1a5638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1a563c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1a563cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a5640: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a5640u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5644: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A5644u;
    SET_GPR_U32(ctx, 31, 0x1A564Cu);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A5644u, 0x1A564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A564Cu;
label_1a564c:
    // 0x1a564c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a564cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5650: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a5650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a5654: 0xc040044  jal         func_100110
    ctx->pc = 0x1A5654u;
    SET_GPR_U32(ctx, 31, 0x1A565Cu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A5654u, 0x1A565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A565Cu;
label_1a565c:
    // 0x1a565c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a565cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5660: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1a5660u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a5664: 0xc040050  jal         func_100140
    ctx->pc = 0x1A5664u;
    SET_GPR_U32(ctx, 31, 0x1A566Cu);
    ctx->pc = 0x100140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100140u, 0x1A5664u, 0x1A566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A566Cu;
label_1a566c:
    // 0x1a566c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A566Cu;
    {
        const bool branch_taken_0x1a566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a566c) {
            ctx->pc = 0x1A56CCu;
            goto label_1a56cc;
        }
    }
    ctx->pc = 0x1A5674u;
    // 0x1a5674: 0x92030314  lbu         $v1, 0x314($s0)
    ctx->pc = 0x1a5674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x1a5678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a5678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a567c: 0xa2030314  sb          $v1, 0x314($s0)
    ctx->pc = 0x1a567cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 788), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5680: 0x8e0202fc  lw          $v0, 0x2FC($s0)
    ctx->pc = 0x1a5680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x1a5684: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5688: 0xac223cf8  sw          $v0, 0x3CF8($at)
    ctx->pc = 0x1a5688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CF8u, _value); } while (0);
    // 0x1a568c: 0x92020311  lbu         $v0, 0x311($s0)
    ctx->pc = 0x1a568cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 785)));
    // 0x1a5690: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5694: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1a5694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a5698: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a5698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a569c: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x1a569cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a56a0: 0x8e0202fc  lw          $v0, 0x2FC($s0)
    ctx->pc = 0x1a56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x1a56a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a56a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56ac: 0xac223ce8  sw          $v0, 0x3CE8($at)
    ctx->pc = 0x1a56acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CE8u, _value); } while (0);
    // 0x1a56b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56b4: 0xac203cd8  sw          $zero, 0x3CD8($at)
    ctx->pc = 0x1a56b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CD8u, _value); } while (0);
    // 0x1a56b8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a56bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56c0: 0xac223cc8  sw          $v0, 0x3CC8($at)
    ctx->pc = 0x1a56c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CC8u, _value); } while (0);
    // 0x1a56c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A56C4u;
    {
        const bool branch_taken_0x1a56c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a56c4) {
            ctx->pc = 0x1A5710u;
            goto label_1a5710;
        }
    }
    ctx->pc = 0x1A56CCu;
label_1a56cc:
    // 0x1a56cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56d0: 0xac203cf8  sw          $zero, 0x3CF8($at)
    ctx->pc = 0x1a56d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CF8u, _value); } while (0);
    // 0x1a56d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a56d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56dc: 0xac223ce8  sw          $v0, 0x3CE8($at)
    ctx->pc = 0x1a56dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CE8u, _value); } while (0);
    // 0x1a56e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56e4: 0xac203cd8  sw          $zero, 0x3CD8($at)
    ctx->pc = 0x1a56e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CD8u, _value); } while (0);
    // 0x1a56e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a56e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a56ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a56f0: 0x92020311  lbu         $v0, 0x311($s0)
    ctx->pc = 0x1a56f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 785)));
    // 0x1a56f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a56f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a56f8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1a56f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a56fc: 0x0  nop
    ctx->pc = 0x1a56fcu;
    // NOP
    // 0x1a5700: 0x0  nop
    ctx->pc = 0x1a5700u;
    // NOP
    // 0x1a5704: 0x1012  mflo        $v0
    ctx->pc = 0x1a5704u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a5708: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a570c: 0xac223cc8  sw          $v0, 0x3CC8($at)
    ctx->pc = 0x1a570cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CC8u, _value); } while (0);
label_1a5710:
    // 0x1a5710: 0x92020312  lbu         $v0, 0x312($s0)
    ctx->pc = 0x1a5710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 786)));
    // 0x1a5714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5718: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1a5718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a571c: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1A571Cu;
    SET_GPR_U32(ctx, 31, 0x1A5724u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1A571Cu, 0x1A5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5724u;
label_1a5724:
    // 0x1a5724: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1a5724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1a5728: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1a5728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a572c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a572cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5730: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A5730u;
    SET_GPR_U32(ctx, 31, 0x1A5738u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A5730u, 0x1A5738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5738u;
label_1a5738:
    // 0x1a5738: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a5738u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a573c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5740: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a5740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5744: 0xc040044  jal         func_100110
    ctx->pc = 0x1A5744u;
    SET_GPR_U32(ctx, 31, 0x1A574Cu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A5744u, 0x1A574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A574Cu;
label_1a574c:
    // 0x1a574c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a574cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5750: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1a5750u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a5754: 0xc040050  jal         func_100140
    ctx->pc = 0x1A5754u;
    SET_GPR_U32(ctx, 31, 0x1A575Cu);
    ctx->pc = 0x100140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100140u, 0x1A5754u, 0x1A575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A575Cu;
label_1a575c:
    // 0x1a575c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a575cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5760: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A5760u;
    {
        const bool branch_taken_0x1a5760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5760) {
            ctx->pc = 0x1A57C0u;
            goto label_1a57c0;
        }
    }
    ctx->pc = 0x1A5768u;
    // 0x1a5768: 0x92030314  lbu         $v1, 0x314($s0)
    ctx->pc = 0x1a5768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x1a576c: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x1a576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1a5770: 0xa2020314  sb          $v0, 0x314($s0)
    ctx->pc = 0x1a5770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 788), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5774: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x1a5774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x1a5778: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a577c: 0xac223cf0  sw          $v0, 0x3CF0($at)
    ctx->pc = 0x1a577cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CF0u, _value); } while (0);
    // 0x1a5780: 0x92020312  lbu         $v0, 0x312($s0)
    ctx->pc = 0x1a5780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 786)));
    // 0x1a5784: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5788: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a5788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a578c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a578cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a5790: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1a5790u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1a5794: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x1a5794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x1a5798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a579c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a579cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57a0: 0xac223ce0  sw          $v0, 0x3CE0($at)
    ctx->pc = 0x1a57a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CE0u, _value); } while (0);
    // 0x1a57a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57a8: 0xac203cd0  sw          $zero, 0x3CD0($at)
    ctx->pc = 0x1a57a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CD0u, _value); } while (0);
    // 0x1a57ac: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a57acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a57b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57b4: 0xac233cc0  sw          $v1, 0x3CC0($at)
    ctx->pc = 0x1a57b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CC0u, _value); } while (0);
    // 0x1a57b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A57B8u;
    {
        const bool branch_taken_0x1a57b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a57b8) {
            ctx->pc = 0x1A5804u;
            goto label_1a5804;
        }
    }
    ctx->pc = 0x1A57C0u;
label_1a57c0:
    // 0x1a57c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57c4: 0xac203cf0  sw          $zero, 0x3CF0($at)
    ctx->pc = 0x1a57c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CF0u, _value); } while (0);
    // 0x1a57c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a57cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57d0: 0xac223ce0  sw          $v0, 0x3CE0($at)
    ctx->pc = 0x1a57d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CE0u, _value); } while (0);
    // 0x1a57d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57d8: 0xac203cd0  sw          $zero, 0x3CD0($at)
    ctx->pc = 0x1a57d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CD0u, _value); } while (0);
    // 0x1a57dc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a57e0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a57e4: 0x92020312  lbu         $v0, 0x312($s0)
    ctx->pc = 0x1a57e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 786)));
    // 0x1a57e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a57e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a57ec: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1a57ecu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a57f0: 0x0  nop
    ctx->pc = 0x1a57f0u;
    // NOP
    // 0x1a57f4: 0x0  nop
    ctx->pc = 0x1a57f4u;
    // NOP
    // 0x1a57f8: 0x1012  mflo        $v0
    ctx->pc = 0x1a57f8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a57fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5800: 0xac223cc0  sw          $v0, 0x3CC0($at)
    ctx->pc = 0x1a5800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CC0u, _value); } while (0);
label_1a5804:
    // 0x1a5804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5808: 0x8c233ce0  lw          $v1, 0x3CE0($at)
    ctx->pc = 0x1a5808u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D3CE0u));
    // 0x1a580c: 0x2c620400  sltiu       $v0, $v1, 0x400
    ctx->pc = 0x1a580cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1a5810: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5810u;
    {
        const bool branch_taken_0x1a5810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5810) {
            ctx->pc = 0x1A5824u;
            goto label_1a5824;
        }
    }
    ctx->pc = 0x1A5818u;
    // 0x1a5818: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x1a5818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1a581c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a581cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5820: 0xac243ce0  sw          $a0, 0x3CE0($at)
    ctx->pc = 0x1a5820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D3CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CE0u, _value); } while (0);
label_1a5824:
    // 0x1a5824: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5828: 0x8c223cf8  lw          $v0, 0x3CF8($at)
    ctx->pc = 0x1a5828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CF8u));
    // 0x1a582c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a582cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5830: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5834: 0x8c223cf0  lw          $v0, 0x3CF0($at)
    ctx->pc = 0x1a5834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CF0u));
    // 0x1a5838: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a5838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a583c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1a583cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a5840: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a5840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5844: 0x262202d0  addiu       $v0, $s1, 0x2D0
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
    // 0x1a5848: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a584c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a584cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5850: 0x8c223ce8  lw          $v0, 0x3CE8($at)
    ctx->pc = 0x1a5850u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CE8u));
    // 0x1a5854: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a5854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5858: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a585c: 0x8c223ce0  lw          $v0, 0x3CE0($at)
    ctx->pc = 0x1a585cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CE0u));
    // 0x1a5860: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a5860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5864: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a5864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a5868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a5868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a586c: 0x262202dc  addiu       $v0, $s1, 0x2DC
    ctx->pc = 0x1a586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 732));
    // 0x1a5870: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5874: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a5874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a5878: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a5878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a587c: 0x262202cc  addiu       $v0, $s1, 0x2CC
    ctx->pc = 0x1a587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
    // 0x1a5880: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5884: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5888: 0x8c223cd8  lw          $v0, 0x3CD8($at)
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD8u));
    // 0x1a588c: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1a588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a5890: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1a5890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a5894: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a5894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a5898: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a5898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a589c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a589cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a58a0: 0x8c223cd0  lw          $v0, 0x3CD0($at)
    ctx->pc = 0x1a58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD0u));
    // 0x1a58a4: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1a58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a58a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a58ac: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a58b0: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a58b4: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1a58b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a58b8: 0x262202d4  addiu       $v0, $s1, 0x2D4
    ctx->pc = 0x1a58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 724));
    // 0x1a58bc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1a58c0: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a58c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a58c4: 0x262202d8  addiu       $v0, $s1, 0x2D8
    ctx->pc = 0x1a58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 728));
    // 0x1a58c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a58cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a58ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a58d0: 0x8c223cc8  lw          $v0, 0x3CC8($at)
    ctx->pc = 0x1a58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CC8u));
    // 0x1a58d4: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1a58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a58d8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1a58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a58dc: 0x24a27000  addiu       $v0, $a1, 0x7000
    ctx->pc = 0x1a58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x1a58e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a58e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a58e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a58e8: 0x8c223cc0  lw          $v0, 0x3CC0($at)
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CC0u));
    // 0x1a58ec: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1a58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a58f0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1a58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a58f4: 0x24a27900  addiu       $v0, $a1, 0x7900
    ctx->pc = 0x1a58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x1a58f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a58fc: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1a58fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5900: 0x262502e0  addiu       $a1, $s1, 0x2E0
    ctx->pc = 0x1a5900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x1a5904: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a5904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a5908: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x1a5908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a590c: 0x262302e4  addiu       $v1, $s1, 0x2E4
    ctx->pc = 0x1a590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 740));
    // 0x1a5910: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a5910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a5914: 0x9604002a  lhu         $a0, 0x2A($s0)
    ctx->pc = 0x1a5914u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5918: 0x42dbc  dsll32      $a1, $a0, 22
    ctx->pc = 0x1a5918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 22));
    // 0x1a591c: 0x516be  dsrl32      $v0, $a1, 26
    ctx->pc = 0x1a591cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (32 + 26));
    // 0x1a5920: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1a5920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1a5924: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x1a5924u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5928: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x1a5928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1a592c: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1a592cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5930: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x1a5930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1a5934: 0x226be  dsrl32      $a0, $v0, 26
    ctx->pc = 0x1a5934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a5938: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1a5938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1a593c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a593cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5940: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a5940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a5944: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x1a5944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a5948: 0xa42826  xor         $a1, $a1, $a0
    ctx->pc = 0x1a5948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x1a594c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1a594cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a5950: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a5950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a5954: 0xa2020315  sb          $v0, 0x315($s0)
    ctx->pc = 0x1a5954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 789), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5958: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a595c: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1A595Cu;
    {
        const bool branch_taken_0x1a595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a595c) {
            ctx->pc = 0x1A5BF0u;
            goto label_1a5bf0;
        }
    }
    ctx->pc = 0x1A5964u;
    // 0x1a5964: 0x9604002a  lhu         $a0, 0x2A($s0)
    ctx->pc = 0x1a5964u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5968: 0x42dbc  dsll32      $a1, $a0, 22
    ctx->pc = 0x1a5968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 22));
    // 0x1a596c: 0x516be  dsrl32      $v0, $a1, 26
    ctx->pc = 0x1a596cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (32 + 26));
    // 0x1a5970: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5978: 0xa2020317  sb          $v0, 0x317($s0)
    ctx->pc = 0x1a5978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 791), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a597c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a597cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5980: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A5980u;
    {
        const bool branch_taken_0x1a5980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5980) {
            ctx->pc = 0x1A5A44u;
            goto label_1a5a44;
        }
    }
    ctx->pc = 0x1A5988u;
    // 0x1a5988: 0x9202031c  lbu         $v0, 0x31C($s0)
    ctx->pc = 0x1a5988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a598c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a598cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5990: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a5990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5994: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5998: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1a5998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a599c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1a599cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1a59a0: 0x24c2cca0  addiu       $v0, $a2, -0x3360
    ctx->pc = 0x1a59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x1a59a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a59a8: 0x9046001e  lbu         $a2, 0x1E($v0)
    ctx->pc = 0x1a59a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x1a59ac: 0x6167c  dsll32      $v0, $a2, 25
    ctx->pc = 0x1a59acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 25));
    // 0x1a59b0: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a59b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a59b4: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1a59b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a59b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a59bc: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1a59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a59c0: 0x82040310  lb          $a0, 0x310($s0)
    ctx->pc = 0x1a59c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a59c4: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x1a59c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1a59c8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a59c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a59cc: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1a59ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a59d0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1a59d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a59d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a59d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a59d8: 0x9203031c  lbu         $v1, 0x31C($s0)
    ctx->pc = 0x1a59d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a59dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a59dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a59e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a59e4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a59e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a59e8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a59ec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a59f0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a59f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a59f8: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x1a59f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a59fc: 0x61b78  dsll        $v1, $a2, 13
    ctx->pc = 0x1a59fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 13);
    // 0x1a5a00: 0x31cbe  dsrl32      $v1, $v1, 18
    ctx->pc = 0x1a5a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x1a5a04: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x1a5a04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1a5a08: 0xde070028  ld          $a3, 0x28($s0)
    ctx->pc = 0x1a5a08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a5a0c: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1a5a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1a5a10: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x1a5a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1a5a14: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x1a5a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
    // 0x1a5a18: 0x34a2001f  ori         $v0, $a1, 0x1F
    ctx->pc = 0x1a5a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    // 0x1a5a1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a5a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5a20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a5a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a5a24: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a5a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a5a28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a5a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a5a2c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a5a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5a30: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1a5a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1a5a34: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a5a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a5a38: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1a5a38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1a5a3c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1A5A3Cu;
    {
        const bool branch_taken_0x1a5a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a3c) {
            ctx->pc = 0x1A5BF0u;
            goto label_1a5bf0;
        }
    }
    ctx->pc = 0x1A5A44u;
label_1a5a44:
    // 0x1a5a44: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1a5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a5a48: 0x9604002a  lhu         $a0, 0x2A($s0)
    ctx->pc = 0x1a5a48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5a4c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1a5a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1a5a50: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5a54: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x1a5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1a5a58: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a5a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a5a5c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5a60: 0xa604002a  sh          $a0, 0x2A($s0)
    ctx->pc = 0x1a5a60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5a64: 0x9202031c  lbu         $v0, 0x31C($s0)
    ctx->pc = 0x1a5a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a5a68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a5a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5a6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5a70: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5a74: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1a5a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a5a78: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1a5a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1a5a7c: 0x24c2cca0  addiu       $v0, $a2, -0x3360
    ctx->pc = 0x1a5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x1a5a80: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1a5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5a84: 0x9082001e  lbu         $v0, 0x1E($a0)
    ctx->pc = 0x1a5a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x1a5a88: 0x22e7c  dsll32      $a1, $v0, 25
    ctx->pc = 0x1a5a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a5a8c: 0x5173e  dsrl32      $v0, $a1, 28
    ctx->pc = 0x1a5a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (32 + 28));
    // 0x1a5a90: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1a5a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a5a94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a5a98: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x1a5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5a9c: 0x820402b0  lb          $a0, 0x2B0($s0)
    ctx->pc = 0x1a5a9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1a5aa0: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x1a5aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1a5aa4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1a5aa4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1a5aa8: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x1a5aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1a5aac: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1a5aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a5ab0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a5ab0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a5ab4: 0x9203031c  lbu         $v1, 0x31C($s0)
    ctx->pc = 0x1a5ab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a5ab8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a5ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a5abc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a5ac0: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1a5ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5ac4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1a5ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a5ac8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a5acc: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a5accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a5ad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5ad4: 0xdc630018  ld          $v1, 0x18($v1)
    ctx->pc = 0x1a5ad4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a5ad8: 0x31b78  dsll        $v1, $v1, 13
    ctx->pc = 0x1a5ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 13);
    // 0x1a5adc: 0x31cbe  dsrl32      $v1, $v1, 18
    ctx->pc = 0x1a5adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x1a5ae0: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1a5ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1a5ae4: 0xde070028  ld          $a3, 0x28($s0)
    ctx->pc = 0x1a5ae4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a5ae8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1a5ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1a5aec: 0x2317c  dsll32      $a2, $v0, 5
    ctx->pc = 0x1a5aecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1a5af0: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x1a5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x1a5af4: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x1a5af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x1a5af8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a5af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5afc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a5afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a5b00: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x1a5b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x1a5b04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a5b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a5b08: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a5b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a5b0c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1a5b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1a5b10: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1a5b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1a5b14: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1a5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1a5b18: 0x9202002f  lbu         $v0, 0x2F($s0)
    ctx->pc = 0x1a5b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a5b1c: 0x3004001f  andi        $a0, $zero, 0x1F
    ctx->pc = 0x1a5b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x1a5b20: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x1a5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a5b24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a5b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a5b28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a5b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a5b2c: 0xa202002f  sb          $v0, 0x2F($s0)
    ctx->pc = 0x1a5b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5b34: 0x9204002f  lbu         $a0, 0x2F($s0)
    ctx->pc = 0x1a5b34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a5b38: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1a5b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1a5b3c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1a5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a5b40: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x1a5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1a5b44: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a5b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a5b48: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a5b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5b4c: 0xa203002f  sb          $v1, 0x2F($s0)
    ctx->pc = 0x1a5b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5b50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5b54: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x1a5b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
    // 0x1a5b58: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1a5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1a5b5c: 0x34621007  ori         $v0, $v1, 0x1007
    ctx->pc = 0x1a5b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4103);
    // 0x1a5b60: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x1a5b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
    // 0x1a5b64: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x1a5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a5b68: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1a5b68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5b6c: 0xfe020288  sd          $v0, 0x288($s0)
    ctx->pc = 0x1a5b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 648), GPR_U64(ctx, 2));
    // 0x1a5b70: 0x8e03030c  lw          $v1, 0x30C($s0)
    ctx->pc = 0x1a5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a5b74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5b7c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a5b80: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a5b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a5b84: 0x2462cca0  addiu       $v0, $v1, -0x3360
    ctx->pc = 0x1a5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a5b88: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1a5b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a5b8c: 0x9462001a  lhu         $v0, 0x1A($v1)
    ctx->pc = 0x1a5b8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1a5b90: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x1a5b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1a5b94: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1a5b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a5b98: 0x9606002a  lhu         $a2, 0x2A($s0)
    ctx->pc = 0x1a5b98u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5b9c: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x1a5b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1a5ba0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1a5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a5ba4: 0x2403fc0f  addiu       $v1, $zero, -0x3F1
    ctx->pc = 0x1a5ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1a5ba8: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1a5ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1a5bac: 0xa29025  or          $s2, $a1, $v0
    ctx->pc = 0x1a5bacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1a5bb0: 0xa612002a  sh          $s2, 0x2A($s0)
    ctx->pc = 0x1a5bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 18));
    // 0x1a5bb4: 0x9204002f  lbu         $a0, 0x2F($s0)
    ctx->pc = 0x1a5bb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a5bb8: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x1a5bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x1a5bbc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a5bc0: 0x2403ff1f  addiu       $v1, $zero, -0xE1
    ctx->pc = 0x1a5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1a5bc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a5bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a5bc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a5bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5bcc: 0xa202002f  sb          $v0, 0x2F($s0)
    ctx->pc = 0x1a5bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5bd0: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a5bd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a5bd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5bd8: 0x9204002f  lbu         $a0, 0x2F($s0)
    ctx->pc = 0x1a5bd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a5bdc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a5bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a5be0: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x1a5be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a5be4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a5be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a5be8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a5be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5bec: 0xa203002f  sb          $v1, 0x2F($s0)
    ctx->pc = 0x1a5becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 3));
label_1a5bf0:
    // 0x1a5bf0: 0x9202031a  lbu         $v0, 0x31A($s0)
    ctx->pc = 0x1a5bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 794)));
    // 0x1a5bf4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1A5BF4u;
    {
        const bool branch_taken_0x1a5bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bf4) {
            ctx->pc = 0x1A5D50u;
            goto label_1a5d50;
        }
    }
    ctx->pc = 0x1A5BFCu;
    // 0x1a5bfc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5c00: 0xae2206f0  sw          $v0, 0x6F0($s1)
    ctx->pc = 0x1a5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1776), GPR_U32(ctx, 2));
    // 0x1a5c04: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1a5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x1a5c08: 0x34421a06  ori         $v0, $v0, 0x1A06
    ctx->pc = 0x1a5c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x1a5c0c: 0xae2206f4  sw          $v0, 0x6F4($s1)
    ctx->pc = 0x1a5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 2));
    // 0x1a5c10: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1a5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1a5c14: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1a5c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a5c18: 0x262206f8  addiu       $v0, $s1, 0x6F8
    ctx->pc = 0x1a5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1784));
    // 0x1a5c1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5c20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5c24: 0x8c223cd8  lw          $v0, 0x3CD8($at)
    ctx->pc = 0x1a5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD8u));
    // 0x1a5c28: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1a5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a5c2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5c30: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a5c34: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a5c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a5c38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5c3c: 0x8c223cd0  lw          $v0, 0x3CD0($at)
    ctx->pc = 0x1a5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD0u));
    // 0x1a5c40: 0x24430064  addiu       $v1, $v0, 0x64
    ctx->pc = 0x1a5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a5c44: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1a5c44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a5c48: 0x24b27900  addiu       $s2, $a1, 0x7900
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x1a5c4c: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x1a5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x1a5c50: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1a5c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a5c54: 0x262306fc  addiu       $v1, $s1, 0x6FC
    ctx->pc = 0x1a5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1788));
    // 0x1a5c58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a5c5c: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a5c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a5c60: 0x26220700  addiu       $v0, $s1, 0x700
    ctx->pc = 0x1a5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1a5c64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5c68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5c6c: 0x8c223cc8  lw          $v0, 0x3CC8($at)
    ctx->pc = 0x1a5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CC8u));
    // 0x1a5c70: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a5c74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5c78: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a5c7c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a5c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a5c80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5c84: 0x8c233cc0  lw          $v1, 0x3CC0($at)
    ctx->pc = 0x1a5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D3CC0u));
    // 0x1a5c88: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1a5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1a5c8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a5c90: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x1a5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a5c94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a5c98: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a5c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a5c9c: 0x26220704  addiu       $v0, $s1, 0x704
    ctx->pc = 0x1a5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1796));
    // 0x1a5ca0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5ca4: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x1a5ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a5ca8: 0x26230708  addiu       $v1, $s1, 0x708
    ctx->pc = 0x1a5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1800));
    // 0x1a5cac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a5cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a5cb0: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x1a5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x1a5cb4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1a5cb8: 0xae2202c0  sw          $v0, 0x2C0($s1)
    ctx->pc = 0x1a5cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 2));
    // 0x1a5cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5cc0: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x1a5cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a5cc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5cc8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a5cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5ccc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1a5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1a5cd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a5cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a5cd4: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1a5cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a5cd8: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x1a5cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5cdc: 0x9204002c  lbu         $a0, 0x2C($s0)
    ctx->pc = 0x1a5cdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a5ce0: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1a5ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1a5ce4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a5ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a5ce8: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1a5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1a5cec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a5cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a5cf0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a5cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5cf4: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x1a5cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a5cf8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5cfc: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x1a5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
    // 0x1a5d00: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1a5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1a5d04: 0x3442103b  ori         $v0, $v0, 0x103B
    ctx->pc = 0x1a5d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x1a5d08: 0xae0202ec  sw          $v0, 0x2EC($s0)
    ctx->pc = 0x1a5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 2));
    // 0x1a5d0c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a5d10: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1a5d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a5d14: 0xfe0202f0  sd          $v0, 0x2F0($s0)
    ctx->pc = 0x1a5d14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 752), GPR_U64(ctx, 2));
    // 0x1a5d18: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a5d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5d1c: 0xae0302b8  sw          $v1, 0x2B8($s0)
    ctx->pc = 0x1a5d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 3));
    // 0x1a5d20: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1a5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1a5d24: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x1a5d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x1a5d28: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x1a5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
    // 0x1a5d2c: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1a5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1a5d30: 0xfe0202c0  sd          $v0, 0x2C0($s0)
    ctx->pc = 0x1a5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 704), GPR_U64(ctx, 2));
    // 0x1a5d34: 0xde0402c0  ld          $a0, 0x2C0($s0)
    ctx->pc = 0x1a5d34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x1a5d38: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a5d3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a5d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5d40: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a5d44: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a5d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5d48: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a5d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a5d4c: 0xfe0202c0  sd          $v0, 0x2C0($s0)
    ctx->pc = 0x1a5d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 704), GPR_U64(ctx, 2));
label_1a5d50:
    // 0x1a5d50: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a5d54: 0xae2202c4  sw          $v0, 0x2C4($s1)
    ctx->pc = 0x1a5d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 2));
    // 0x1a5d58: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5d5c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5d60: 0x262502bc  addiu       $a1, $s1, 0x2BC
    ctx->pc = 0x1a5d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
    // 0x1a5d64: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5D64u;
    SET_GPR_U32(ctx, 31, 0x1A5D6Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5D64u, 0x1A5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D6Cu;
label_1a5d6c:
    // 0x1a5d6c: 0x92030315  lbu         $v1, 0x315($s0)
    ctx->pc = 0x1a5d6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 789)));
    // 0x1a5d70: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5D70u;
    {
        const bool branch_taken_0x1a5d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d70) {
            ctx->pc = 0x1A5D98u;
            goto label_1a5d98;
        }
    }
    ctx->pc = 0x1A5D78u;
    // 0x1a5d78: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a5d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a5d7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5D7Cu;
    {
        const bool branch_taken_0x1a5d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d7c) {
            ctx->pc = 0x1A5D98u;
            goto label_1a5d98;
        }
    }
    ctx->pc = 0x1A5D84u;
    // 0x1a5d84: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5d88: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5d8c: 0x26050280  addiu       $a1, $s0, 0x280
    ctx->pc = 0x1a5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x1a5d90: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5D90u;
    SET_GPR_U32(ctx, 31, 0x1A5D98u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5D90u, 0x1A5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D98u;
label_1a5d98:
    // 0x1a5d98: 0x9203031a  lbu         $v1, 0x31A($s0)
    ctx->pc = 0x1a5d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 794)));
    // 0x1a5d9c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5D9Cu;
    {
        const bool branch_taken_0x1a5d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d9c) {
            ctx->pc = 0x1A5DE0u;
            goto label_1a5de0;
        }
    }
    ctx->pc = 0x1A5DA4u;
    // 0x1a5da4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5da8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5dac: 0x262506f0  addiu       $a1, $s1, 0x6F0
    ctx->pc = 0x1a5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1a5db0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5DB0u;
    SET_GPR_U32(ctx, 31, 0x1A5DB8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5DB0u, 0x1A5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DB8u;
label_1a5db8:
    // 0x1a5db8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5dbc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5dc0: 0x260502b8  addiu       $a1, $s0, 0x2B8
    ctx->pc = 0x1a5dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
    // 0x1a5dc4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5DC4u;
    SET_GPR_U32(ctx, 31, 0x1A5DCCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5DC4u, 0x1A5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DCCu;
label_1a5dcc:
    // 0x1a5dcc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a5dd0: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x1a5dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x1a5dd4: 0x260502e8  addiu       $a1, $s0, 0x2E8
    ctx->pc = 0x1a5dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 744));
    // 0x1a5dd8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5DD8u;
    SET_GPR_U32(ctx, 31, 0x1A5DE0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5DD8u, 0x1A5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DE0u;
label_1a5de0:
    // 0x1a5de0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5de4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5de8: 0x26250474  addiu       $a1, $s1, 0x474
    ctx->pc = 0x1a5de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1140));
    // 0x1a5dec: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5DECu;
    SET_GPR_U32(ctx, 31, 0x1A5DF4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5DECu, 0x1A5DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DF4u;
label_1a5df4:
    // 0x1a5df4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5df8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5dfc: 0x26220510  addiu       $v0, $s1, 0x510
    ctx->pc = 0x1a5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1296));
    // 0x1a5e00: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a5e00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5e04: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5E04u;
    SET_GPR_U32(ctx, 31, 0x1A5E0Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5E04u, 0x1A5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E0Cu;
label_1a5e0c:
    // 0x1a5e0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5e10: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5e14: 0x262505e8  addiu       $a1, $s1, 0x5E8
    ctx->pc = 0x1a5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1512));
    // 0x1a5e18: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5E18u;
    SET_GPR_U32(ctx, 31, 0x1A5E20u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5E18u, 0x1A5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E20u;
label_1a5e20:
    // 0x1a5e20: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5e24: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5e28: 0x26250604  addiu       $a1, $s1, 0x604
    ctx->pc = 0x1a5e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1540));
    // 0x1a5e2c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A5E34u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5E2Cu, 0x1A5E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E34u;
label_1a5e34:
    // 0x1a5e34: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1a5e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1a5e38: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a5e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a5e3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5e40: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a5e44: 0x34420401  ori         $v0, $v0, 0x401
    ctx->pc = 0x1a5e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1025);
    // 0x1a5e48: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5e4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5e50: 0x2445f0d8  addiu       $a1, $v0, -0xF28
    ctx->pc = 0x1a5e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963416));
    // 0x1a5e54: 0x8e06030c  lw          $a2, 0x30C($s0)
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a5e58: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5E58u;
    SET_GPR_U32(ctx, 31, 0x1A5E60u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5E58u, 0x1A5E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E60u;
label_1a5e60:
    // 0x1a5e60: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x1a5e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a5e64: 0x30463fff  andi        $a2, $v0, 0x3FFF
    ctx->pc = 0x1a5e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1a5e68: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1a5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1a5e6c: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a5e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a5e70: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a5e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5e74: 0x3c031c08  lui         $v1, 0x1C08
    ctx->pc = 0x1a5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7176 << 16));
    // 0x1a5e78: 0x34620e01  ori         $v0, $v1, 0xE01
    ctx->pc = 0x1a5e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3585);
    // 0x1a5e7c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x1a5e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a5e80: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5e84: 0x2445f0e8  addiu       $a1, $v0, -0xF18
    ctx->pc = 0x1a5e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963432));
    // 0x1a5e88: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5E88u;
    SET_GPR_U32(ctx, 31, 0x1A5E90u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5E88u, 0x1A5E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E90u;
label_1a5e90:
    // 0x1a5e90: 0x8e03030c  lw          $v1, 0x30C($s0)
    ctx->pc = 0x1a5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a5e94: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a5e94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5e98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a5e9c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1a5e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a5ea0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a5ea4: 0x2483cca0  addiu       $v1, $a0, -0x3360
    ctx->pc = 0x1a5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a5ea8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a5ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a5eac: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1a5eacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1a5eb0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1a5eb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a5eb4: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x1a5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x1a5eb8: 0x34630808  ori         $v1, $v1, 0x808
    ctx->pc = 0x1a5eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
    // 0x1a5ebc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a5ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a5ec0: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a5ec4: 0x34470402  ori         $a3, $v0, 0x402
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1026);
    // 0x1a5ec8: 0xe32025  or          $a0, $a3, $v1
    ctx->pc = 0x1a5ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1a5ecc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5ed0: 0x2445f0f8  addiu       $a1, $v0, -0xF08
    ctx->pc = 0x1a5ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963448));
    // 0x1a5ed4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5ED4u;
    SET_GPR_U32(ctx, 31, 0x1A5EDCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5ED4u, 0x1A5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EDCu;
label_1a5edc:
    // 0x1a5edc: 0x8e02030c  lw          $v0, 0x30C($s0)
    ctx->pc = 0x1a5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a5ee0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a5ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5ee4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5ee8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a5eec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a5ef0: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x1a5ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a5ef4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5ef8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1a5ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a5efc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a5efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5f00: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x1a5f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x1a5f04: 0x34820808  ori         $v0, $a0, 0x808
    ctx->pc = 0x1a5f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2056);
    // 0x1a5f08: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1a5f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5f0c: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a5f10: 0x34460403  ori         $a2, $v0, 0x403
    ctx->pc = 0x1a5f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1027);
    // 0x1a5f14: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x1a5f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1a5f18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5f1c: 0x2445f108  addiu       $a1, $v0, -0xEF8
    ctx->pc = 0x1a5f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963464));
    // 0x1a5f20: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x1a5f20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a5f24: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5F24u;
    SET_GPR_U32(ctx, 31, 0x1A5F2Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5F24u, 0x1A5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5F2Cu;
label_1a5f2c:
    // 0x1a5f2c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1a5f2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5f30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5f3c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a5f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a5f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5F48u;
}
