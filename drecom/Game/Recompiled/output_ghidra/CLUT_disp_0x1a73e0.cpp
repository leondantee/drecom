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

// Function: CLUT_disp
// Address: 0x1a73e0 - 0x1a8214
void CLUT_disp_0x1a73e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CLUT_disp_0x1a73e0");
#endif

    switch (ctx->pc) {
        case 0x1a7428u: goto label_1a7428;
        case 0x1a7e7cu: goto label_1a7e7c;
        case 0x1a8038u: goto label_1a8038;
        case 0x1a8160u: goto label_1a8160;
        case 0x1a8194u: goto label_1a8194;
        case 0x1a81d0u: goto label_1a81d0;
        case 0x1a81e8u: goto label_1a81e8;
        default: break;
    }

    ctx->pc = 0x1a73e0u;

    // 0x1a73e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a73e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a73e4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x1a73e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1a73e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a73e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a73ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a73ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a73f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a73f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a73f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a73f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a73f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a73f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a73fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a73fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7400: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1a7400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x1a7404: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1a7404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a7408: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1a7408u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a740c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a7410: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x1a7410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x1a7414: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1a7414u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7418: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1a7418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1a741c: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1a741cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a7420: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x1A7420u;
    {
        const bool branch_taken_0x1a7420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7420) {
            ctx->pc = 0x1A7E88u;
            goto label_1a7e88;
        }
    }
    ctx->pc = 0x1A7428u;
label_1a7428:
    // 0x1a7428: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a742c: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a742cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7430: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7438: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a7438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a743c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7440: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a7440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7444: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7448: 0xac440340  sw          $a0, 0x340($v0)
    ctx->pc = 0x1a7448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 832), GPR_U32(ctx, 4));
    // 0x1a744c: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x1a744cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x1a7450: 0x34442b16  ori         $a0, $v0, 0x2B16
    ctx->pc = 0x1a7450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x1a7454: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7458: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a745c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7460: 0x2a040  sll         $s4, $v0, 1
    ctx->pc = 0x1a7460u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7464: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x1a7464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a7468: 0x144080  sll         $t0, $s4, 2
    ctx->pc = 0x1a7468u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1a746c: 0x2483021  addu        $a2, $s2, $t0
    ctx->pc = 0x1a746cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1a7470: 0xacc40344  sw          $a0, 0x344($a2)
    ctx->pc = 0x1a7470u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 836), GPR_U32(ctx, 4));
    // 0x1a7474: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7478: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a747c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1a747cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7480: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x1a7480u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1a7484: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1a7484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a7488: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a7488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a748c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7490: 0xac60034c  sw          $zero, 0x34C($v1)
    ctx->pc = 0x1a7490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 844), GPR_U32(ctx, 0));
    // 0x1a7494: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a7494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a7498: 0x34468080  ori         $a2, $v0, 0x8080
    ctx->pc = 0x1a7498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a749c: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a74a0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1a74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a74a4: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x1a74a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a74a8: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1a74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1a74ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a74acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a74b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a74b4: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a74b8: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x1a74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x1a74bc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a74bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a74c0: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a74c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a74c4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A74C4u;
    {
        const bool branch_taken_0x1a74c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74c4) {
            ctx->pc = 0x1A7588u;
            goto label_1a7588;
        }
    }
    ctx->pc = 0x1A74CCu;
    // 0x1a74cc: 0x9208031c  lbu         $t0, 0x31C($s0)
    ctx->pc = 0x1a74ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a74d0: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1a74d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1a74d4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a74d8: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1a74d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a74dc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a74e0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a74e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a74e4: 0x2482cca0  addiu       $v0, $a0, -0x3360
    ctx->pc = 0x1a74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a74e8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a74ec: 0x9062001e  lbu         $v0, 0x1E($v1)
    ctx->pc = 0x1a74ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1a74f0: 0x23e7c  dsll32      $a3, $v0, 25
    ctx->pc = 0x1a74f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a74f4: 0x7273e  dsrl32      $a0, $a3, 28
    ctx->pc = 0x1a74f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> (32 + 28));
    // 0x1a74f8: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x1a74f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1a74fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7500: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1a7500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a7504: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a7504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7508: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1a7508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a750c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1a750cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1a7510: 0xd12821  addu        $a1, $a2, $s1
    ctx->pc = 0x1a7510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1a7514: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1a7514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a7518: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a7518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a751c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1a751cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1a7520: 0x9203031c  lbu         $v1, 0x31C($s0)
    ctx->pc = 0x1a7520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a7524: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1a7524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a7528: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a7528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a752c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a7530: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1a7530u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7534: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a7534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a7538: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x1a7538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a753c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a753cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a7540: 0xdca60018  ld          $a2, 0x18($a1)
    ctx->pc = 0x1a7540u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a7544: 0x61b78  dsll        $v1, $a2, 13
    ctx->pc = 0x1a7544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 13);
    // 0x1a7548: 0x314be  dsrl32      $v0, $v1, 18
    ctx->pc = 0x1a7548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x1a754c: 0x44202d  daddu       $a0, $v0, $a0
    ctx->pc = 0x1a754cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a7550: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1a7550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a7554: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x1a7554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7558: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a7558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a755c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a7560: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1a7560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7564: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1a7564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a7568: 0x944800b0  lhu         $t0, 0xB0($v0)
    ctx->pc = 0x1a7568u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1a756c: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1a756cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1a7570: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x1a7570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1a7574: 0x1033824  and         $a3, $t0, $v1
    ctx->pc = 0x1a7574u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1a7578: 0xe41825  or          $v1, $a3, $a0
    ctx->pc = 0x1a7578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1a757c: 0xa44300b0  sh          $v1, 0xB0($v0)
    ctx->pc = 0x1a757cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 176), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a7580: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1A7580u;
    {
        const bool branch_taken_0x1a7580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7580) {
            ctx->pc = 0x1A77E8u;
            goto label_1a77e8;
        }
    }
    ctx->pc = 0x1A7588u;
label_1a7588:
    // 0x1a7588: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a7588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a758c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a758cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a7590: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a7590u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a7594: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1a7594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a7598: 0x4410030  bgez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A7598u;
    {
        const bool branch_taken_0x1a7598 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a7598) {
            ctx->pc = 0x1A765Cu;
            goto label_1a765c;
        }
    }
    ctx->pc = 0x1A75A0u;
    // 0x1a75a0: 0x9202031c  lbu         $v0, 0x31C($s0)
    ctx->pc = 0x1a75a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a75a4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1a75a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a75a8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1a75a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a75ac: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1a75acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a75b0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a75b4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a75b8: 0x2462cca0  addiu       $v0, $v1, -0x3360
    ctx->pc = 0x1a75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a75bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a75c0: 0x9042001e  lbu         $v0, 0x1E($v0)
    ctx->pc = 0x1a75c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x1a75c4: 0x23e7c  dsll32      $a3, $v0, 25
    ctx->pc = 0x1a75c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a75c8: 0x7373e  dsrl32      $a2, $a3, 28
    ctx->pc = 0x1a75c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) >> (32 + 28));
    // 0x1a75cc: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x1a75ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1a75d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a75d4: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x1a75d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a75d8: 0x820202b0  lb          $v0, 0x2B0($s0)
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1a75dc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a75dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a75e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a75e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a75e4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a75e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a75e8: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1a75e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a75ec: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1a75ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a75f0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1a75f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1a75f4: 0x9202031c  lbu         $v0, 0x31C($s0)
    ctx->pc = 0x1a75f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a75f8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1a75f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a75fc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7600: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1a7600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7604: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7608: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1a7608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1a760c: 0x24c4cca0  addiu       $a0, $a2, -0x3360
    ctx->pc = 0x1a760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x1a7610: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a7610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a7614: 0xdc430018  ld          $v1, 0x18($v0)
    ctx->pc = 0x1a7614u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1a7618: 0x31378  dsll        $v0, $v1, 13
    ctx->pc = 0x1a7618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 13);
    // 0x1a761c: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x1a761cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x1a7620: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x1a7620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x1a7624: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1a7624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7628: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a762c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a762cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7630: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7634: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7638: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1a7638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a763c: 0x94c700b0  lhu         $a3, 0xB0($a2)
    ctx->pc = 0x1a763cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x1a7640: 0x30a33fff  andi        $v1, $a1, 0x3FFF
    ctx->pc = 0x1a7640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x1a7644: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1a7644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1a7648: 0xe22024  and         $a0, $a3, $v0
    ctx->pc = 0x1a7648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1a764c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1a764cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a7650: 0xa4c500b0  sh          $a1, 0xB0($a2)
    ctx->pc = 0x1a7650u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 176), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a7654: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1A7654u;
    {
        const bool branch_taken_0x1a7654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7654) {
            ctx->pc = 0x1A77E8u;
            goto label_1a77e8;
        }
    }
    ctx->pc = 0x1A765Cu;
label_1a765c:
    // 0x1a765c: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a765cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7660: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1a7660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a7664: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1a7664u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1a7668: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x1a7668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1a766c: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1a766cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a7670: 0x14200030  bnez        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A7670u;
    {
        const bool branch_taken_0x1a7670 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7670) {
            ctx->pc = 0x1A7734u;
            goto label_1a7734;
        }
    }
    ctx->pc = 0x1A7678u;
    // 0x1a7678: 0x9205031c  lbu         $a1, 0x31C($s0)
    ctx->pc = 0x1a7678u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a767c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1a767cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a7680: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a7684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7688: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1a7688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a768c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a768cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a7690: 0x2462cca0  addiu       $v0, $v1, -0x3360
    ctx->pc = 0x1a7690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a7694: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1a7694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7698: 0x9062001e  lbu         $v0, 0x1E($v1)
    ctx->pc = 0x1a7698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1a769c: 0x21e7c  dsll32      $v1, $v0, 25
    ctx->pc = 0x1a769cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a76a0: 0x3173e  dsrl32      $v0, $v1, 28
    ctx->pc = 0x1a76a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1a76a4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1a76a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a76a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a76ac: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1a76acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a76b0: 0x820202b0  lb          $v0, 0x2B0($s0)
    ctx->pc = 0x1a76b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1a76b4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a76b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a76b8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a76b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a76bc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1a76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a76c0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1a76c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a76c4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1a76c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a76c8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1a76c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1a76cc: 0x9204031c  lbu         $a0, 0x31C($s0)
    ctx->pc = 0x1a76ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a76d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1a76d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a76d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a76d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a76dc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a76e0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a76e4: 0x2445cca0  addiu       $a1, $v0, -0x3360
    ctx->pc = 0x1a76e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a76e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a76ec: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x1a76ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a76f0: 0x21b78  dsll        $v1, $v0, 13
    ctx->pc = 0x1a76f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 13);
    // 0x1a76f4: 0x314be  dsrl32      $v0, $v1, 18
    ctx->pc = 0x1a76f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x1a76f8: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x1a76f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x1a76fc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a76fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7700: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7704: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7708: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a770c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a770cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7710: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1a7710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7714: 0x94c200b0  lhu         $v0, 0xB0($a2)
    ctx->pc = 0x1a7714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x1a7718: 0x30853fff  andi        $a1, $a0, 0x3FFF
    ctx->pc = 0x1a7718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x1a771c: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x1a771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1a7720: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x1a7720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1a7724: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1a7724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a7728: 0xa4c200b0  sh          $v0, 0xB0($a2)
    ctx->pc = 0x1a7728u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 176), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a772c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1A772Cu;
    {
        const bool branch_taken_0x1a772c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a772c) {
            ctx->pc = 0x1A77E8u;
            goto label_1a77e8;
        }
    }
    ctx->pc = 0x1A7734u;
label_1a7734:
    // 0x1a7734: 0x9202031c  lbu         $v0, 0x31C($s0)
    ctx->pc = 0x1a7734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a7738: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a7738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a773c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a773cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7744: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a7744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7748: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a7748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a774c: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x1a774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a7750: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7754: 0x9042001e  lbu         $v0, 0x1E($v0)
    ctx->pc = 0x1a7754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x1a7758: 0x2367c  dsll32      $a2, $v0, 25
    ctx->pc = 0x1a7758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a775c: 0x6173e  dsrl32      $v0, $a2, 28
    ctx->pc = 0x1a775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> (32 + 28));
    // 0x1a7760: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1a7760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a7764: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a7764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7768: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a7768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a776c: 0x820502b0  lb          $a1, 0x2B0($s0)
    ctx->pc = 0x1a776cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1a7770: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x1a7770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1a7774: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a7774u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a7778: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1a7778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a777c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a777cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7780: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1a7780u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1a7784: 0x9203031c  lbu         $v1, 0x31C($s0)
    ctx->pc = 0x1a7784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a7788: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1a7788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a778c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a778cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7790: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a7790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7794: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a7794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7798: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a7798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a779c: 0x2448cca0  addiu       $t0, $v0, -0x3360
    ctx->pc = 0x1a779cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a77a0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1a77a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a77a4: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x1a77a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a77a8: 0x21b78  dsll        $v1, $v0, 13
    ctx->pc = 0x1a77a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 13);
    // 0x1a77ac: 0x314be  dsrl32      $v0, $v1, 18
    ctx->pc = 0x1a77acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x1a77b0: 0x44382d  daddu       $a3, $v0, $a0
    ctx->pc = 0x1a77b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a77b4: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x1a77b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1a77b8: 0x26260003  addiu       $a2, $s1, 0x3
    ctx->pc = 0x1a77b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a77bc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a77c0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1a77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a77c4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a77c8: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a77c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a77cc: 0x94a300b0  lhu         $v1, 0xB0($a1)
    ctx->pc = 0x1a77ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x1a77d0: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x1a77d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x1a77d4: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1a77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1a77d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a77d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a77dc: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1a77dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a77e0: 0xa4a200b0  sh          $v0, 0xB0($a1)
    ctx->pc = 0x1a77e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 176), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a77e4: 0x0  nop
    ctx->pc = 0x1a77e4u;
    // NOP
label_1a77e8:
    // 0x1a77e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a77e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a77ec: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a77ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a77f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a77f4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a77f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a77f8: 0x498c0  sll         $s3, $a0, 3
    ctx->pc = 0x1a77f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a77fc: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1a77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1a7800: 0xdc4600b0  ld          $a2, 0xB0($v0)
    ctx->pc = 0x1a7800u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1a7804: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x1a7804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1a7808: 0x32bb8  dsll        $a1, $v1, 14
    ctx->pc = 0x1a7808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 14);
    // 0x1a780c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x1a780cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x1a7810: 0x34643fff  ori         $a0, $v1, 0x3FFF
    ctx->pc = 0x1a7810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x1a7814: 0xc49824  and         $s3, $a2, $a0
    ctx->pc = 0x1a7814u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1a7818: 0x2651825  or          $v1, $s3, $a1
    ctx->pc = 0x1a7818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    // 0x1a781c: 0xfc4300b0  sd          $v1, 0xB0($v0)
    ctx->pc = 0x1a781cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 176), GPR_U64(ctx, 3));
    // 0x1a7820: 0x9203002e  lbu         $v1, 0x2E($s0)
    ctx->pc = 0x1a7820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x1a7824: 0x3167c  dsll32      $v0, $v1, 25
    ctx->pc = 0x1a7824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 25));
    // 0x1a7828: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a7828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a782c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x1a782cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a7830: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x1a7830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a7834: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7838: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a783c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7840: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7844: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a7844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7848: 0x94a300b2  lhu         $v1, 0xB2($a1)
    ctx->pc = 0x1a7848u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 178)));
    // 0x1a784c: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x1a784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1a7850: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a7850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7854: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x1a7854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1a7858: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a7858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a785c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1a785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a7860: 0xa4a200b2  sh          $v0, 0xB2($a1)
    ctx->pc = 0x1a7860u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 178), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a7864: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a7864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a7868: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7868u;
    {
        const bool branch_taken_0x1a7868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7868) {
            ctx->pc = 0x1A787Cu;
            goto label_1a787c;
        }
    }
    ctx->pc = 0x1A7870u;
    // 0x1a7870: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x1a7870u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7874: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7874u;
    {
        const bool branch_taken_0x1a7874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7874) {
            ctx->pc = 0x1A7880u;
            goto label_1a7880;
        }
    }
    ctx->pc = 0x1A787Cu;
label_1a787c:
    // 0x1a787c: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1a787cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a7880:
    // 0x1a7880: 0x328800ff  andi        $t0, $s4, 0xFF
    ctx->pc = 0x1a7880u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1a7884: 0x26260003  addiu       $a2, $s1, 0x3
    ctx->pc = 0x1a7884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7888: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a7888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a788c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1a788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a7890: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1a7890u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7894: 0x2072821  addu        $a1, $s0, $a3
    ctx->pc = 0x1a7894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1a7898: 0x90a400b3  lbu         $a0, 0xB3($a1)
    ctx->pc = 0x1a7898u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 179)));
    // 0x1a789c: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x1a789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x1a78a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a78a4: 0x2406ffc3  addiu       $a2, $zero, -0x3D
    ctx->pc = 0x1a78a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1a78a8: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x1a78a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1a78ac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a78acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a78b0: 0xa0a300b3  sb          $v1, 0xB3($a1)
    ctx->pc = 0x1a78b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a78b4: 0x92050317  lbu         $a1, 0x317($s0)
    ctx->pc = 0x1a78b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a78b8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A78B8u;
    {
        const bool branch_taken_0x1a78b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a78b8) {
            ctx->pc = 0x1A78CCu;
            goto label_1a78cc;
        }
    }
    ctx->pc = 0x1A78C0u;
    // 0x1a78c0: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x1a78c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a78c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A78C4u;
    {
        const bool branch_taken_0x1a78c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a78c4) {
            ctx->pc = 0x1A78D8u;
            goto label_1a78d8;
        }
    }
    ctx->pc = 0x1A78CCu;
label_1a78cc:
    // 0x1a78cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a78d0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1a78d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a78d4: 0x0  nop
    ctx->pc = 0x1a78d4u;
    // NOP
label_1a78d8:
    // 0x1a78d8: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x1a78d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1a78dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1a78dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1a78e0: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a78e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a78e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a78e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a78ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a78f0: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x1a78f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a78f4: 0xdd0600b0  ld          $a2, 0xB0($t0)
    ctx->pc = 0x1a78f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x1a78f8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1a78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1a78fc: 0x22fb8  dsll        $a1, $v0, 30
    ctx->pc = 0x1a78fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 30);
    // 0x1a7900: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1a7900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a7904: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a7904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7908: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x1a7908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x1a790c: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x1a790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7910: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a7910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a7914: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x1a7914u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1a7918: 0xe52025  or          $a0, $a3, $a1
    ctx->pc = 0x1a7918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x1a791c: 0xfd0400b0  sd          $a0, 0xB0($t0)
    ctx->pc = 0x1a791cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 176), GPR_U64(ctx, 4));
    // 0x1a7920: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x1a7920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7924: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a7924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7928: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1a7928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a792c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7930: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1a7930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7934: 0x90c500b4  lbu         $a1, 0xB4($a2)
    ctx->pc = 0x1a7934u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x1a7938: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1a7938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a793c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7940: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1a7940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1a7944: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1a7944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a7948: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1a7948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a794c: 0xa0c200b4  sb          $v0, 0xB4($a2)
    ctx->pc = 0x1a794cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 180), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7950: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x1a7950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7954: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7958: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a7958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a795c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a795cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7960: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x1a7960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a7964: 0x90a600b4  lbu         $a2, 0xB4($a1)
    ctx->pc = 0x1a7964u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x1a7968: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1a7968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1a796c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a796cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7970: 0x2404ffe7  addiu       $a0, $zero, -0x19
    ctx->pc = 0x1a7970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1a7974: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x1a7974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1a7978: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a7978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a797c: 0xa0a200b4  sb          $v0, 0xB4($a1)
    ctx->pc = 0x1a797cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 180), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7980: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7984: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a7984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7988: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1a7988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a798c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a798cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a7990: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x1a7990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7994: 0xdd0400b0  ld          $a0, 0xB0($t0)
    ctx->pc = 0x1a7994u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x1a7998: 0x30033fff  andi        $v1, $zero, 0x3FFF
    ctx->pc = 0x1a7998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)16383);
    // 0x1a799c: 0x3397c  dsll32      $a3, $v1, 5
    ctx->pc = 0x1a799cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1a79a0: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x1a79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x1a79a4: 0x3443001f  ori         $v1, $v0, 0x1F
    ctx->pc = 0x1a79a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x1a79a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a79a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a79ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a79acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a79b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a79b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a79b4: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x1a79b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a79b8: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x1a79b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a79bc: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x1a79bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1a79c0: 0x472025  or          $a0, $v0, $a3
    ctx->pc = 0x1a79c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1a79c4: 0xfd0400b0  sd          $a0, 0xB0($t0)
    ctx->pc = 0x1a79c4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 176), GPR_U64(ctx, 4));
    // 0x1a79c8: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a79c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a79cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a79d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a79d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a79d8: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x1a79d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a79dc: 0x90e600b6  lbu         $a2, 0xB6($a3)
    ctx->pc = 0x1a79dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 182)));
    // 0x1a79e0: 0x3005000f  andi        $a1, $zero, 0xF
    ctx->pc = 0x1a79e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)15);
    // 0x1a79e4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a79e8: 0x2404ff87  addiu       $a0, $zero, -0x79
    ctx->pc = 0x1a79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x1a79ec: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x1a79ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1a79f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a79f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a79f4: 0xa0e200b6  sb          $v0, 0xB6($a3)
    ctx->pc = 0x1a79f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 182), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a79f8: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a79fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7a00: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1a7a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7a04: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a7a08: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a7a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7a0c: 0x90a300b6  lbu         $v1, 0xB6($a1)
    ctx->pc = 0x1a7a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 182)));
    // 0x1a7a10: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1a7a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a7a14: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a7a18: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x1a7a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a7a1c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x1a7a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1a7a20: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1a7a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a7a24: 0xa0a200b6  sb          $v0, 0xB6($a1)
    ctx->pc = 0x1a7a24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 182), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7a28: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7a2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7a30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7a34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7a38: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a7a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7a3c: 0x90a400b7  lbu         $a0, 0xB7($a1)
    ctx->pc = 0x1a7a3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 183)));
    // 0x1a7a40: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x1a7a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x1a7a44: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1a7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a7a48: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a7a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a7a4c: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1a7a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7a50: 0xa0a600b7  sb          $a2, 0xB7($a1)
    ctx->pc = 0x1a7a50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 183), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a7a54: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a7a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7a58: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7a5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7a60: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a7a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7a64: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1a7a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a7a68: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1a7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a7a6c: 0x904600b7  lbu         $a2, 0xB7($v0)
    ctx->pc = 0x1a7a6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 183)));
    // 0x1a7a70: 0x30e30007  andi        $v1, $a3, 0x7
    ctx->pc = 0x1a7a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x1a7a74: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1a7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7a78: 0x2404ff1f  addiu       $a0, $zero, -0xE1
    ctx->pc = 0x1a7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1a7a7c: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x1a7a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1a7a80: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a7a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a7a84: 0xa04300b7  sb          $v1, 0xB7($v0)
    ctx->pc = 0x1a7a84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 183), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a7a88: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7a8c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7a90: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7a94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7a98: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x1a7a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a7a9c: 0x904300b3  lbu         $v1, 0xB3($v0)
    ctx->pc = 0x1a7a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 179)));
    // 0x1a7aa0: 0x316bc  dsll32      $v0, $v1, 26
    ctx->pc = 0x1a7aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 26));
    // 0x1a7aa4: 0x21f3e  dsrl32      $v1, $v0, 28
    ctx->pc = 0x1a7aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a7aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7aac: 0x622004  sllv        $a0, $v0, $v1
    ctx->pc = 0x1a7aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a7ab0: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x1a7ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x1a7ab4: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x1a7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7ab8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7abc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7ac0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7ac4: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1a7ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a7ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7acc: 0xdcc300b0  ld          $v1, 0xB0($a2)
    ctx->pc = 0x1a7accu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x1a7ad0: 0x317b8  dsll        $v0, $v1, 30
    ctx->pc = 0x1a7ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 30);
    // 0x1a7ad4: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a7ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a7ad8: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x1a7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a7adc: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x1a7adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x1a7ae0: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a7ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a7ae4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A7AE4u;
    {
        const bool branch_taken_0x1a7ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ae4) {
            ctx->pc = 0x1A7B54u;
            goto label_1a7b54;
        }
    }
    ctx->pc = 0x1A7AECu;
    // 0x1a7aec: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x1a7aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7af0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7af4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1a7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7af8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1a7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7afc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1a7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7b00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7b04: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7b08: 0x24830354  addiu       $v1, $a0, 0x354
    ctx->pc = 0x1a7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 852));
    // 0x1a7b0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a7b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a7b10: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1a7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a7b14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7b18: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1a7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7b1c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1a7b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7b20: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1a7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1a7b24: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1a7b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a7b28: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7b2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7b30: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7b34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7b38: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1a7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7b3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7b40: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7b44: 0x24440360  addiu       $a0, $v0, 0x360
    ctx->pc = 0x1a7b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x1a7b48: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a7b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a7b4c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1A7B4Cu;
    {
        const bool branch_taken_0x1a7b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7b4c) {
            ctx->pc = 0x1A7D08u;
            goto label_1a7d08;
        }
    }
    ctx->pc = 0x1A7B54u;
label_1a7b54:
    // 0x1a7b54: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x1a7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7b58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7b5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7b60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7b64: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1a7b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7b68: 0x90c200b3  lbu         $v0, 0xB3($a2)
    ctx->pc = 0x1a7b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 179)));
    // 0x1a7b6c: 0x21ebc  dsll32      $v1, $v0, 26
    ctx->pc = 0x1a7b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1a7b70: 0x3173e  dsrl32      $v0, $v1, 28
    ctx->pc = 0x1a7b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1a7b74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7b78: 0x90c500b3  lbu         $a1, 0xB3($a2)
    ctx->pc = 0x1a7b78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 179)));
    // 0x1a7b7c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1a7b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a7b80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7b84: 0x2404ffc3  addiu       $a0, $zero, -0x3D
    ctx->pc = 0x1a7b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1a7b88: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1a7b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1a7b8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a7b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a7b90: 0xa0c200b3  sb          $v0, 0xB3($a2)
    ctx->pc = 0x1a7b90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7b94: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7b98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7b9c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7ba0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7ba4: 0x2024021  addu        $t0, $s0, $v0
    ctx->pc = 0x1a7ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7ba8: 0xdd0300b0  ld          $v1, 0xB0($t0)
    ctx->pc = 0x1a7ba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x1a7bac: 0x317b8  dsll        $v0, $v1, 30
    ctx->pc = 0x1a7bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 30);
    // 0x1a7bb0: 0x21f3e  dsrl32      $v1, $v0, 28
    ctx->pc = 0x1a7bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a7bb4: 0x64620008  daddiu      $v0, $v1, 0x8
    ctx->pc = 0x1a7bb4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)8);
    // 0x1a7bb8: 0xdd0700b0  ld          $a3, 0xB0($t0)
    ctx->pc = 0x1a7bb8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x1a7bbc: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x1a7bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a7bc0: 0x437b8  dsll        $a2, $a0, 30
    ctx->pc = 0x1a7bc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 30);
    // 0x1a7bc4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1a7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a7bc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a7bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a7bcc: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x1a7bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x1a7bd0: 0x34a2ffff  ori         $v0, $a1, 0xFFFF
    ctx->pc = 0x1a7bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1a7bd4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a7bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a7bd8: 0xe32024  and         $a0, $a3, $v1
    ctx->pc = 0x1a7bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1a7bdc: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x1a7bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1a7be0: 0xfd0200b0  sd          $v0, 0xB0($t0)
    ctx->pc = 0x1a7be0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 176), GPR_U64(ctx, 2));
    // 0x1a7be4: 0x82030310  lb          $v1, 0x310($s0)
    ctx->pc = 0x1a7be4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7be8: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x1a7be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a7bec: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a7becu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a7bf0: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x1a7bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a7bf4: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7BF4u;
    {
        const bool branch_taken_0x1a7bf4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1a7bf4) {
            ctx->pc = 0x1A7C18u;
            goto label_1a7c18;
        }
    }
    ctx->pc = 0x1A7BFCu;
    // 0x1a7bfc: 0x82030310  lb          $v1, 0x310($s0)
    ctx->pc = 0x1a7bfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7c00: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x1a7c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a7c04: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a7c04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a7c08: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a7c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a7c0c: 0x24930010  addiu       $s3, $a0, 0x10
    ctx->pc = 0x1a7c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1a7c10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7C10u;
    {
        const bool branch_taken_0x1a7c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c10) {
            ctx->pc = 0x1A7C60u;
            goto label_1a7c60;
        }
    }
    ctx->pc = 0x1A7C18u;
label_1a7c18:
    // 0x1a7c18: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a7c18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7c1c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1a7c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a7c20: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1a7c20u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1a7c24: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x1a7c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1a7c28: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1a7c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a7c2c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7C2Cu;
    {
        const bool branch_taken_0x1a7c2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c2c) {
            ctx->pc = 0x1A7C50u;
            goto label_1a7c50;
        }
    }
    ctx->pc = 0x1A7C34u;
    // 0x1a7c34: 0x82050310  lb          $a1, 0x310($s0)
    ctx->pc = 0x1a7c34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7c38: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x1a7c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1a7c3c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1a7c3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1a7c40: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1a7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1a7c44: 0x2473fff0  addiu       $s3, $v1, -0x10
    ctx->pc = 0x1a7c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1a7c48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7C48u;
    {
        const bool branch_taken_0x1a7c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c48) {
            ctx->pc = 0x1A7C60u;
            goto label_1a7c60;
        }
    }
    ctx->pc = 0x1A7C50u;
label_1a7c50:
    // 0x1a7c50: 0x82030310  lb          $v1, 0x310($s0)
    ctx->pc = 0x1a7c50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7c54: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x1a7c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a7c58: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a7c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a7c5c: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x1a7c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a7c60:
    // 0x1a7c60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a7c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7c64: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1a7c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1a7c68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7c6c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1a7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7c70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a7c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7c74: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x1a7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x1a7c78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7c7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a7c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7c80: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7c84: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1a7c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1a7c88: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7c8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7c90: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a7c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7c94: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1a7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7c98: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7c9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7ca0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7ca4: 0x24540354  addiu       $s4, $v0, 0x354
    ctx->pc = 0x1a7ca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 852));
    // 0x1a7ca8: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x1a7ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x1a7cac: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1a7cacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7cb0: 0x32680001  andi        $t0, $s3, 0x1
    ctx->pc = 0x1a7cb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1a7cb4: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1a7cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1a7cb8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a7cbc: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1a7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a7cc0: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x1a7cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7cc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a7cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7cc8: 0x132042  srl         $a0, $s3, 1
    ctx->pc = 0x1a7cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x1a7ccc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1a7cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7cd0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1a7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7cd4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1a7cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7cd8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1a7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a7cdc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7ce0: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x1a7ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1a7ce4: 0x26350003  addiu       $s5, $s1, 0x3
    ctx->pc = 0x1a7ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7ce8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1a7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1a7cec: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1a7cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a7cf0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7cf4: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1a7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1a7cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7cfc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7d00: 0x24480360  addiu       $t0, $v0, 0x360
    ctx->pc = 0x1a7d00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x1a7d04: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1a7d04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_1a7d08:
    // 0x1a7d08: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1a7d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7d0c: 0x2261018  mult        $v0, $s1, $a2
    ctx->pc = 0x1a7d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a7d10: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1a7d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7d14: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1a7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a7d18: 0x246400c8  addiu       $a0, $v1, 0xC8
    ctx->pc = 0x1a7d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x1a7d1c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1a7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a7d20: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1a7d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7d24: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a7d28: 0x34478c20  ori         $a3, $v0, 0x8C20
    ctx->pc = 0x1a7d28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35872);
    // 0x1a7d2c: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7d30: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1a7d30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7d34: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1a7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a7d38: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1a7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7d3c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7d40: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a7d40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7d44: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1a7d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a7d48: 0x24a20358  addiu       $v0, $a1, 0x358
    ctx->pc = 0x1a7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 856));
    // 0x1a7d4c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1a7d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1a7d50: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a7d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7d54: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7d58: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1a7d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7d5c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1a7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a7d60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7d64: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1a7d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7d68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7d6c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a7d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7d70: 0x2465035c  addiu       $a1, $v1, 0x35C
    ctx->pc = 0x1a7d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 860));
    // 0x1a7d74: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a7d78: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1a7d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7d7c: 0x2261818  mult        $v1, $s1, $a2
    ctx->pc = 0x1a7d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a7d80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7d84: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a7d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7d88: 0x248300c8  addiu       $v1, $a0, 0xC8
    ctx->pc = 0x1a7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x1a7d8c: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1a7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7d90: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1a7d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7d94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a7d98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a7d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7d9c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a7d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a7da0: 0x24487900  addiu       $t0, $v0, 0x7900
    ctx->pc = 0x1a7da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7da4: 0x82400  sll         $a0, $t0, 16
    ctx->pc = 0x1a7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1a7da8: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a7da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a7dac: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x1a7dacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7db0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1a7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a7db4: 0x246201c2  addiu       $v0, $v1, 0x1C2
    ctx->pc = 0x1a7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 450));
    // 0x1a7db8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7dbc: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x1a7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a7dc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a7dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7dc4: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x1a7dc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a7dc8: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x1a7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7dcc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7dd0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1a7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a7dd4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7dd8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1a7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7ddc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7de0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7de4: 0x24470364  addiu       $a3, $v0, 0x364
    ctx->pc = 0x1a7de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 868));
    // 0x1a7de8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1a7de8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1a7dec: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a7decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7df0: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x1a7df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7df4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7df8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1a7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7dfc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1a7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7e00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a7e04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7e08: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a7e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7e0c: 0x24470368  addiu       $a3, $v0, 0x368
    ctx->pc = 0x1a7e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 872));
    // 0x1a7e10: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1a7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1a7e14: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x1a7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7e18: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1a7e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7e1c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1a7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a7e20: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7e24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7e28: 0x24460098  addiu       $a2, $v0, 0x98
    ctx->pc = 0x1a7e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x1a7e2c: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7e30: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7e34: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1a7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7e38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7e3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7e40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7e44: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1a7e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7e48: 0xaca60348  sw          $a2, 0x348($a1)
    ctx->pc = 0x1a7e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 840), GPR_U32(ctx, 6));
    // 0x1a7e4c: 0x26240003  addiu       $a0, $s1, 0x3
    ctx->pc = 0x1a7e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7e50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7e54: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7e58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7e5c: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1a7e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7e60: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1a7e60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7e64: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x1a7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1a7e68: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a7e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a7e6c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a7e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a7e70: 0x24650340  addiu       $a1, $v1, 0x340
    ctx->pc = 0x1a7e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x1a7e74: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A7E74u;
    SET_GPR_U32(ctx, 31, 0x1A7E7Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A7E74u, 0x1A7E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E7Cu;
label_1a7e7c:
    // 0x1a7e7c: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a7e80: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x1a7e80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a7e84: 0x0  nop
    ctx->pc = 0x1a7e84u;
    // NOP
label_1a7e88:
    // 0x1a7e88: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x1a7e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a7e8c: 0x1420fd66  bnez        $at, . + 4 + (-0x29A << 2)
    ctx->pc = 0x1A7E8Cu;
    {
        const bool branch_taken_0x1a7e8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e8c) {
            ctx->pc = 0x1A7428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7428;
        }
    }
    ctx->pc = 0x1A7E94u;
    // 0x1a7e94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7e98: 0xae4305b4  sw          $v1, 0x5B4($s2)
    ctx->pc = 0x1a7e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1460), GPR_U32(ctx, 3));
    // 0x1a7e9c: 0x3c044800  lui         $a0, 0x4800
    ctx->pc = 0x1a7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18432 << 16));
    // 0x1a7ea0: 0x34852a02  ori         $a1, $a0, 0x2A02
    ctx->pc = 0x1a7ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10754);
    // 0x1a7ea4: 0xae4505b8  sw          $a1, 0x5B8($s2)
    ctx->pc = 0x1a7ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1464), GPR_U32(ctx, 5));
    // 0x1a7ea8: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1a7ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x1a7eac: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1a7eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a7eb0: 0x264405bc  addiu       $a0, $s2, 0x5BC
    ctx->pc = 0x1a7eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1468));
    // 0x1a7eb4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a7eb8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1a7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7ebc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7ec0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7ec4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7ec8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7ecc: 0x240200c6  addiu       $v0, $zero, 0xC6
    ctx->pc = 0x1a7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x1a7ed0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1a7ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7ed4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7ed8: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x1a7ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7edc: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1a7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a7ee0: 0x34438c10  ori         $v1, $v0, 0x8C10
    ctx->pc = 0x1a7ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35856);
    // 0x1a7ee4: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x1a7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x1a7ee8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7eec: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x1a7eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7ef0: 0x264605c4  addiu       $a2, $s2, 0x5C4
    ctx->pc = 0x1a7ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1476));
    // 0x1a7ef4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a7ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1a7ef8: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x1a7ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a7efc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7f00: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7f04: 0x244201c2  addiu       $v0, $v0, 0x1C2
    ctx->pc = 0x1a7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 450));
    // 0x1a7f08: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a7f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7f0c: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x1a7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a7f10: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1a7f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7f14: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1a7f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7f18: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7f1c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7f20: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7f28: 0x240400c6  addiu       $a0, $zero, 0xC6
    ctx->pc = 0x1a7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x1a7f2c: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1a7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a7f30: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7f34: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1a7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7f38: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a7f3c: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1a7f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1a7f40: 0x264205c8  addiu       $v0, $s2, 0x5C8
    ctx->pc = 0x1a7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1480));
    // 0x1a7f44: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a7f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a7f48: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x1a7f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7f4c: 0x264405cc  addiu       $a0, $s2, 0x5CC
    ctx->pc = 0x1a7f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1484));
    // 0x1a7f50: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a7f54: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a7f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a7f58: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7f5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7f60: 0x244301c2  addiu       $v1, $v0, 0x1C2
    ctx->pc = 0x1a7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 450));
    // 0x1a7f64: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a7f68: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a7f6c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a7f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7f70: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1a7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7f74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7f78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7f80: 0x244600c8  addiu       $a2, $v0, 0xC8
    ctx->pc = 0x1a7f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1a7f84: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1a7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a7f88: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1a7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7f8c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a7f90: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1a7f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a7f94: 0x264505d0  addiu       $a1, $s2, 0x5D0
    ctx->pc = 0x1a7f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x1a7f98: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a7f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a7f9c: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a7f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7fa0: 0x264205d4  addiu       $v0, $s2, 0x5D4
    ctx->pc = 0x1a7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1492));
    // 0x1a7fa4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7fa8: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1a7fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7fac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7fb0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7fb4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7fb8: 0x246200c8  addiu       $v0, $v1, 0xC8
    ctx->pc = 0x1a7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x1a7fbc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7fc0: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x1a7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a7fc4: 0x24400  sll         $t0, $v0, 16
    ctx->pc = 0x1a7fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7fc8: 0x35038c10  ori         $v1, $t0, 0x8C10
    ctx->pc = 0x1a7fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35856);
    // 0x1a7fcc: 0x264205d8  addiu       $v0, $s2, 0x5D8
    ctx->pc = 0x1a7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1496));
    // 0x1a7fd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7fd4: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a7fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7fd8: 0x264205dc  addiu       $v0, $s2, 0x5DC
    ctx->pc = 0x1a7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1500));
    // 0x1a7fdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7fe0: 0x8e070090  lw          $a3, 0x90($s0)
    ctx->pc = 0x1a7fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a7fe4: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x1a7fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1a7fe8: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1a7fec: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1a7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1a7ff0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1a7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a7ff4: 0x240200c6  addiu       $v0, $zero, 0xC6
    ctx->pc = 0x1a7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x1a7ff8: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x1a7ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7ffc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a7ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a8000: 0x24647900  addiu       $a0, $v1, 0x7900
    ctx->pc = 0x1a8000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a8004: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1a8004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a8008: 0x34438c10  ori         $v1, $v0, 0x8C10
    ctx->pc = 0x1a8008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35856);
    // 0x1a800c: 0x264205e0  addiu       $v0, $s2, 0x5E0
    ctx->pc = 0x1a800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1504));
    // 0x1a8010: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8014: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x1a8014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a8018: 0x264305e4  addiu       $v1, $s2, 0x5E4
    ctx->pc = 0x1a8018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1508));
    // 0x1a801c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a801cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a8020: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8024: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a8024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a8028: 0x265305b4  addiu       $s3, $s2, 0x5B4
    ctx->pc = 0x1a8028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1460));
    // 0x1a802c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1a802cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a8030: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8030u;
    SET_GPR_U32(ctx, 31, 0x1A8038u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8030u, 0x1A8038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8038u;
label_1a8038:
    // 0x1a8038: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1a8038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1a803c: 0xae460580  sw          $a2, 0x580($s2)
    ctx->pc = 0x1a803cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1408), GPR_U32(ctx, 6));
    // 0x1a8040: 0x3c054800  lui         $a1, 0x4800
    ctx->pc = 0x1a8040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18432 << 16));
    // 0x1a8044: 0x34a32a02  ori         $v1, $a1, 0x2A02
    ctx->pc = 0x1a8044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10754);
    // 0x1a8048: 0xae430584  sw          $v1, 0x584($s2)
    ctx->pc = 0x1a8048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1412), GPR_U32(ctx, 3));
    // 0x1a804c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1a804cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a8050: 0x26430588  addiu       $v1, $s2, 0x588
    ctx->pc = 0x1a8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1416));
    // 0x1a8054: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a8054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a8058: 0x3c037f30  lui         $v1, 0x7F30
    ctx->pc = 0x1a8058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32560 << 16));
    // 0x1a805c: 0x34738c10  ori         $s3, $v1, 0x8C10
    ctx->pc = 0x1a805cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35856);
    // 0x1a8060: 0x2642058c  addiu       $v0, $s2, 0x58C
    ctx->pc = 0x1a8060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1420));
    // 0x1a8064: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1a8064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1a8068: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x1a8068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1a806c: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x1a806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x1a8070: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8074: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1a8074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a8078: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1a8078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a807c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1a807cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a8080: 0x248301c2  addiu       $v1, $a0, 0x1C2
    ctx->pc = 0x1a8080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 450));
    // 0x1a8084: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a8084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a8088: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a808c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a808cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8090: 0x3c057f30  lui         $a1, 0x7F30
    ctx->pc = 0x1a8090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32560 << 16));
    // 0x1a8094: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1a8094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a8098: 0x26420594  addiu       $v0, $s2, 0x594
    ctx->pc = 0x1a8098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1428));
    // 0x1a809c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a809cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a80a0: 0x3404fff9  ori         $a0, $zero, 0xFFF9
    ctx->pc = 0x1a80a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1a80a4: 0x26420598  addiu       $v0, $s2, 0x598
    ctx->pc = 0x1a80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1432));
    // 0x1a80a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a80a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a80ac: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1a80acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a80b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a80b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a80b8: 0x245401c2  addiu       $s4, $v0, 0x1C2
    ctx->pc = 0x1a80b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 450));
    // 0x1a80bc: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x1a80bcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1a80c0: 0x26887000  addiu       $t0, $s4, 0x7000
    ctx->pc = 0x1a80c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 28672));
    // 0x1a80c4: 0x3106ffff  andi        $a2, $t0, 0xFFFF
    ctx->pc = 0x1a80c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1a80c8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1a80c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a80cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a80d0: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1a80d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a80d4: 0x24e500c8  addiu       $a1, $a3, 0xC8
    ctx->pc = 0x1a80d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 200));
    // 0x1a80d8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a80d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a80dc: 0x24827900  addiu       $v0, $a0, 0x7900
    ctx->pc = 0x1a80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x1a80e0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a80e4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1a80e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a80e8: 0x2642059c  addiu       $v0, $s2, 0x59C
    ctx->pc = 0x1a80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1436));
    // 0x1a80ec: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a80ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a80f0: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x1a80f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1a80f4: 0x264505a0  addiu       $a1, $s2, 0x5A0
    ctx->pc = 0x1a80f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1440));
    // 0x1a80f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a80f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a80fc: 0x8e150090  lw          $s5, 0x90($s0)
    ctx->pc = 0x1a80fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1a8100: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1a8100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1a8104: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1a8104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a8108: 0x248300c8  addiu       $v1, $a0, 0xC8
    ctx->pc = 0x1a8108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x1a810c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a810cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a8110: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8114: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8118: 0x34488c10  ori         $t0, $v0, 0x8C10
    ctx->pc = 0x1a8118u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35856);
    // 0x1a811c: 0x264605a4  addiu       $a2, $s2, 0x5A4
    ctx->pc = 0x1a811cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1444));
    // 0x1a8120: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x1a8120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x1a8124: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x1a8124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1a8128: 0x264505a8  addiu       $a1, $s2, 0x5A8
    ctx->pc = 0x1a8128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1448));
    // 0x1a812c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a812cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a8130: 0x3c047f30  lui         $a0, 0x7F30
    ctx->pc = 0x1a8130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32560 << 16));
    // 0x1a8134: 0x34838c10  ori         $v1, $a0, 0x8C10
    ctx->pc = 0x1a8134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)35856);
    // 0x1a8138: 0x264205ac  addiu       $v0, $s2, 0x5AC
    ctx->pc = 0x1a8138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1452));
    // 0x1a813c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a813cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8140: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x1a8140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x1a8144: 0x264205b0  addiu       $v0, $s2, 0x5B0
    ctx->pc = 0x1a8144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
    // 0x1a8148: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a814c: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x1a814cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x1a8150: 0x24e41614  addiu       $a0, $a3, 0x1614
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 5652));
    // 0x1a8154: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x1a8154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1a8158: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8158u;
    SET_GPR_U32(ctx, 31, 0x1A8160u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8158u, 0x1A8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8160u;
label_1a8160:
    // 0x1a8160: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1a8160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1a8164: 0x34430808  ori         $v1, $v0, 0x808
    ctx->pc = 0x1a8164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a8168: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1a8168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a816c: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a8170: 0x34451a01  ori         $a1, $v0, 0x1A01
    ctx->pc = 0x1a8170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6657);
    // 0x1a8174: 0xa62025  or          $a0, $a1, $a2
    ctx->pc = 0x1a8174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1a8178: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1a8178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1a817c: 0x2465f128  addiu       $a1, $v1, -0xED8
    ctx->pc = 0x1a817cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963496));
    // 0x1a8180: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x1a8180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a8184: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x1a8184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x1a8188: 0x234be  dsrl32      $a2, $v0, 18
    ctx->pc = 0x1a8188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x1a818c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A818Cu;
    SET_GPR_U32(ctx, 31, 0x1A8194u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A818Cu, 0x1A8194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8194u;
label_1a8194:
    // 0x1a8194: 0x92030317  lbu         $v1, 0x317($s0)
    ctx->pc = 0x1a8194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a8198: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A8198u;
    {
        const bool branch_taken_0x1a8198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8198) {
            ctx->pc = 0x1A81D0u;
            goto label_1a81d0;
        }
    }
    ctx->pc = 0x1A81A0u;
    // 0x1a81a0: 0x9205002f  lbu         $a1, 0x2F($s0)
    ctx->pc = 0x1a81a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a81a4: 0x30a6001f  andi        $a2, $a1, 0x1F
    ctx->pc = 0x1a81a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1a81a8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1a81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1a81ac: 0x34430808  ori         $v1, $v0, 0x808
    ctx->pc = 0x1a81acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a81b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a81b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a81b4: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a81b8: 0x34432601  ori         $v1, $v0, 0x2601
    ctx->pc = 0x1a81b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9729);
    // 0x1a81bc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a81bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a81c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a81c4: 0x2445f138  addiu       $a1, $v0, -0xEC8
    ctx->pc = 0x1a81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963512));
    // 0x1a81c8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A81C8u;
    SET_GPR_U32(ctx, 31, 0x1A81D0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A81C8u, 0x1A81D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81D0u;
label_1a81d0:
    // 0x1a81d0: 0x92080001  lbu         $t0, 0x1($s0)
    ctx->pc = 0x1a81d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1a81d4: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A81D4u;
    {
        const bool branch_taken_0x1a81d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a81d4) {
            ctx->pc = 0x1A81ECu;
            goto label_1a81ec;
        }
    }
    ctx->pc = 0x1A81DCu;
    // 0x1a81dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1a81dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a81e0: 0xc06a088  jal         func_1A8220
    ctx->pc = 0x1A81E0u;
    SET_GPR_U32(ctx, 31, 0x1A81E8u);
    ctx->pc = 0x1A8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8220u, 0x1A81E0u, 0x1A81E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81E8u;
label_1a81e8:
    // 0x1a81e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a81e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1a81ec:
    // 0x1a81ec: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1a81ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a81f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a81f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a81f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a81f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a81f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a81f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a81fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a81fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a8204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8208: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1a8208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a820c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A820Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A820Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8214u;
}
