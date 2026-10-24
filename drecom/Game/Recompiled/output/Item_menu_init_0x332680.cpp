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

// Function: Item_menu_init
// Address: 0x332680 - 0x333310
void Item_menu_init_0x332680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_menu_init_0x332680");
#endif

    switch (ctx->pc) {
        case 0x33271cu: goto label_33271c;
        case 0x332c80u: goto label_332c80;
        case 0x332d10u: goto label_332d10;
        case 0x332dd4u: goto label_332dd4;
        case 0x332e60u: goto label_332e60;
        case 0x332f14u: goto label_332f14;
        case 0x332f44u: goto label_332f44;
        case 0x332f8cu: goto label_332f8c;
        case 0x33302cu: goto label_33302c;
        case 0x333150u: goto label_333150;
        case 0x3332a0u: goto label_3332a0;
        case 0x3332d0u: goto label_3332d0;
        default: break;
    }

    ctx->pc = 0x332680u;

    // 0x332680: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x332680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x332684: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x332684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x332688: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x332688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x33268c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x332690: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x332690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x332694: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x332694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x332698: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x332698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33269c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3326a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3326a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3326a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3326a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3326a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3326a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3326ac: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x3326acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x3326b0: 0x26436150  addiu       $v1, $s2, 0x6150
    ctx->pc = 0x3326b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
    // 0x3326b4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x3326b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3326b8: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x3326b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x3326bc: 0x2477cb10  addiu       $s7, $v1, -0x34F0
    ctx->pc = 0x3326bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953744));
    // 0x3326c0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3326c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3326c4: 0x247edbc0  addiu       $fp, $v1, -0x2440
    ctx->pc = 0x3326c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x3326c8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3326c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3326cc: 0x8c302788  lw          $s0, 0x2788($at)
    ctx->pc = 0x3326ccu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x892788u));
    // 0x3326d0: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x3326d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3326d4: 0x12150301  beq         $s0, $s5, . + 4 + (0x301 << 2)
    ctx->pc = 0x3326D4u;
    {
        const bool branch_taken_0x3326d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x3326d4) {
            ctx->pc = 0x3332DCu;
            goto label_3332dc;
        }
    }
    ctx->pc = 0x3326DCu;
    // 0x3326dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3326dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3326e0: 0x12030222  beq         $s0, $v1, . + 4 + (0x222 << 2)
    ctx->pc = 0x3326E0u;
    {
        const bool branch_taken_0x3326e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3326e0) {
            ctx->pc = 0x332F6Cu;
            goto label_332f6c;
        }
    }
    ctx->pc = 0x3326E8u;
    // 0x3326e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3326E8u;
    {
        const bool branch_taken_0x3326e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3326e8) {
            ctx->pc = 0x3326F8u;
            goto label_3326f8;
        }
    }
    ctx->pc = 0x3326F0u;
    // 0x3326f0: 0x100002fa  b           . + 4 + (0x2FA << 2)
    ctx->pc = 0x3326F0u;
    {
        const bool branch_taken_0x3326f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3326f0) {
            ctx->pc = 0x3332DCu;
            goto label_3332dc;
        }
    }
    ctx->pc = 0x3326F8u;
label_3326f8:
    // 0x3326f8: 0xae206870  sw          $zero, 0x6870($s1)
    ctx->pc = 0x3326f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26736), GPR_U32(ctx, 0));
    // 0x3326fc: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x3326fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x332700: 0xae360120  sw          $s6, 0x120($s1)
    ctx->pc = 0x332700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 22));
    // 0x332704: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x332704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x332708: 0xae260520  sw          $a2, 0x520($s1)
    ctx->pc = 0x332708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 6));
    // 0x33270c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33270cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332710: 0xac202780  sw          $zero, 0x2780($at)
    ctx->pc = 0x332710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892780u, _value); } while (0);
    // 0x332714: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x332714u;
    {
        const bool branch_taken_0x332714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332714) {
            ctx->pc = 0x332A98u;
            goto label_332a98;
        }
    }
    ctx->pc = 0x33271Cu;
label_33271c:
    // 0x33271c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33271cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332720: 0x8c252780  lw          $a1, 0x2780($at)
    ctx->pc = 0x332720u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x892780u));
    // 0x332724: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x332724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x332728: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x332728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33272c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33272cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x332730: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x332730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x332734: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x332734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x332738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33273c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x332740: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x332740u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x332744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x332744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332748: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33274c: 0x8c242780  lw          $a0, 0x2780($at)
    ctx->pc = 0x33274cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x892780u));
    // 0x332750: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x332750u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x332754: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x332754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x332758: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x332758u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33275c: 0x3c080089  lui         $t0, 0x89
    ctx->pc = 0x33275cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)137 << 16));
    // 0x332760: 0x25092730  addiu       $t1, $t0, 0x2730
    ctx->pc = 0x332760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 10032));
    // 0x332764: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x332764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x332768: 0x90500020  lbu         $s0, 0x20($v0)
    ctx->pc = 0x332768u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x33276c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33276cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x332770: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x332770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x332774: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x332774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x332778: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x332778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x33277c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33277cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x332780: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x332780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x332784: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x332784u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332788: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33278c: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x33278cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332790: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332794: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x332794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332798: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x332798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33279c: 0x3c060089  lui         $a2, 0x89
    ctx->pc = 0x33279cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)137 << 16));
    // 0x3327a0: 0x24c72730  addiu       $a3, $a2, 0x2730
    ctx->pc = 0x3327a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 10032));
    // 0x3327a4: 0xe54021  addu        $t0, $a3, $a1
    ctx->pc = 0x3327a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3327a8: 0x95090020  lhu         $t1, 0x20($t0)
    ctx->pc = 0x3327a8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x3327ac: 0x31420007  andi        $v0, $t2, 0x7
    ctx->pc = 0x3327acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
    // 0x3327b0: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x3327b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3327b4: 0x2402fe3f  addiu       $v0, $zero, -0x1C1
    ctx->pc = 0x3327b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x3327b8: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3327b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3327bc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x3327bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x3327c0: 0xa5020020  sh          $v0, 0x20($t0)
    ctx->pc = 0x3327c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x3327c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3327c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3327c8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3327c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3327cc: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x3327ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x3327d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3327d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3327d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3327d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3327d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3327d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3327dc: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3327dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3327e0: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x3327e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x3327e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3327e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3327e8: 0x90440021  lbu         $a0, 0x21($v0)
    ctx->pc = 0x3327e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x3327ec: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3327ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3327f0: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x3327f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3327f4: 0x2407fffd  addiu       $a3, $zero, -0x3
    ctx->pc = 0x3327f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3327f8: 0x874024  and         $t0, $a0, $a3
    ctx->pc = 0x3327f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x3327fc: 0x1064825  or          $t1, $t0, $a2
    ctx->pc = 0x3327fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x332800: 0xa0490021  sb          $t1, 0x21($v0)
    ctx->pc = 0x332800u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 9));
    // 0x332804: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x332804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332808: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33280c: 0x8c302780  lw          $s0, 0x2780($at)
    ctx->pc = 0x33280cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x892780u));
    // 0x332810: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x332810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x332814: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x332814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x332818: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x332818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33281c: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x33281cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x332820: 0x24632730  addiu       $v1, $v1, 0x2730
    ctx->pc = 0x332820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x332824: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x332824u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332828: 0xdd430018  ld          $v1, 0x18($t2)
    ctx->pc = 0x332828u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x33282c: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x33282cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x332830: 0x42bb8  dsll        $a1, $a0, 14
    ctx->pc = 0x332830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 14);
    // 0x332834: 0x3c07fff0  lui         $a3, 0xFFF0
    ctx->pc = 0x332834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65520 << 16));
    // 0x332838: 0x34e63fff  ori         $a2, $a3, 0x3FFF
    ctx->pc = 0x332838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16383);
    // 0x33283c: 0x664024  and         $t0, $v1, $a2
    ctx->pc = 0x33283cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x332840: 0x1054825  or          $t1, $t0, $a1
    ctx->pc = 0x332840u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x332844: 0xfd490018  sd          $t1, 0x18($t2)
    ctx->pc = 0x332844u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 9));
    // 0x332848: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x332848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x33284c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332850: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332854: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x332854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332858: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x332858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33285c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x33285cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x332860: 0x3c140089  lui         $s4, 0x89
    ctx->pc = 0x332860u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)137 << 16));
    // 0x332864: 0x26832730  addiu       $v1, $s4, 0x2730
    ctx->pc = 0x332864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 10032));
    // 0x332868: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x332868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33286c: 0x9493001a  lhu         $s3, 0x1A($a0)
    ctx->pc = 0x33286cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x332870: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x332870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x332874: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x332874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x332878: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x332878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x33287c: 0x2629024  and         $s2, $s3, $v0
    ctx->pc = 0x33287cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x332880: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x332880u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x332884: 0xa492001a  sh          $s2, 0x1A($a0)
    ctx->pc = 0x332884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 18));
    // 0x332888: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x332888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33288c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33288cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332890: 0x8c222780  lw          $v0, 0x2780($at)
    ctx->pc = 0x332890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892780u));
    // 0x332894: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x332894u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332898: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x332898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x33289c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33289cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3328a0: 0x3c120089  lui         $s2, 0x89
    ctx->pc = 0x3328a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)137 << 16));
    // 0x3328a4: 0x26422730  addiu       $v0, $s2, 0x2730
    ctx->pc = 0x3328a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 10032));
    // 0x3328a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3328a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3328ac: 0x9064001b  lbu         $a0, 0x1B($v1)
    ctx->pc = 0x3328acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
    // 0x3328b0: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x3328b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x3328b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3328b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3328b8: 0x2416ffc3  addiu       $s6, $zero, -0x3D
    ctx->pc = 0x3328b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x3328bc: 0x963024  and         $a2, $a0, $s6
    ctx->pc = 0x3328bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 22));
    // 0x3328c0: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x3328c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3328c4: 0xa065001b  sb          $a1, 0x1B($v1)
    ctx->pc = 0x3328c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27), (uint8_t)GPR_U32(ctx, 5));
    // 0x3328c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3328c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3328cc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3328ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3328d0: 0x8c242780  lw          $a0, 0x2780($at)
    ctx->pc = 0x3328d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x892780u));
    // 0x3328d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3328d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3328d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3328d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3328dc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3328dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3328e0: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x3328e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x3328e4: 0x24742730  addiu       $s4, $v1, 0x2730
    ctx->pc = 0x3328e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x3328e8: 0x2843021  addu        $a2, $s4, $a0
    ctx->pc = 0x3328e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x3328ec: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3328ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3328f0: 0x3053000f  andi        $s3, $v0, 0xF
    ctx->pc = 0x3328f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3328f4: 0x1317b8  dsll        $v0, $s3, 30
    ctx->pc = 0x3328f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << 30);
    // 0x3328f8: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x3328f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3328fc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3328fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x332900: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x332900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x332904: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x332904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x332908: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x332908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33290c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x33290cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x332910: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x332910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x332914: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x332914u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x332918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x332918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33291c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33291cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332920: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332920u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332924: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332928: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x332928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33292c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x33292cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x332930: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x332930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x332934: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x332934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x332938: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x332938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33293c: 0x90c4001c  lbu         $a0, 0x1C($a2)
    ctx->pc = 0x33293cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x332940: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x332940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x332944: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x332944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332948: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x332948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x33294c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x33294cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x332950: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x332950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x332954: 0xa0c2001c  sb          $v0, 0x1C($a2)
    ctx->pc = 0x332954u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x332958: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33295c: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x33295cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332960: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332968: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x332968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33296c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33296cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x332970: 0x24822730  addiu       $v0, $a0, 0x2730
    ctx->pc = 0x332970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10032));
    // 0x332974: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x332974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332978: 0x90c5001c  lbu         $a1, 0x1C($a2)
    ctx->pc = 0x332978u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x33297c: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x33297cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x332980: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x332980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x332984: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x332984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x332988: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x332988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x33298c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x332990: 0xa0c2001c  sb          $v0, 0x1C($a2)
    ctx->pc = 0x332990u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x332994: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332998: 0x8c282780  lw          $t0, 0x2780($at)
    ctx->pc = 0x332998u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x892780u));
    // 0x33299c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x33299cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3329a0: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x3329a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3329a4: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x3329a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3329a8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3329a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3329ac: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x3329acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x3329b0: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x3329b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3329b4: 0x90a4001e  lbu         $a0, 0x1E($a1)
    ctx->pc = 0x3329b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x3329b8: 0x3002000f  andi        $v0, $zero, 0xF
    ctx->pc = 0x3329b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)15);
    // 0x3329bc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3329bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3329c0: 0x2402ff87  addiu       $v0, $zero, -0x79
    ctx->pc = 0x3329c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x3329c4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3329c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3329c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3329c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3329cc: 0xa0a2001e  sb          $v0, 0x1E($a1)
    ctx->pc = 0x3329ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x3329d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3329d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3329d4: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x3329d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x3329d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3329d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3329dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3329dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3329e0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3329e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3329e4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3329e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3329e8: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x3329e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x3329ec: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3329ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3329f0: 0x90a3001e  lbu         $v1, 0x1E($a1)
    ctx->pc = 0x3329f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x3329f4: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x3329f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x3329f8: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x3329f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x3329fc: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x3329fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x332a00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x332a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x332a04: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x332a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x332a08: 0xa0a2001e  sb          $v0, 0x1E($a1)
    ctx->pc = 0x332a08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x332a0c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332a10: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332a10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332a14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332a1c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x332a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x332a20: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x332a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x332a24: 0x24622730  addiu       $v0, $v1, 0x2730
    ctx->pc = 0x332a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x332a28: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x332a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x332a2c: 0x90c4001f  lbu         $a0, 0x1F($a2)
    ctx->pc = 0x332a2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31)));
    // 0x332a30: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x332a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x332a34: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x332a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x332a38: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x332a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x332a3c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x332a3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x332a40: 0xa0c5001f  sb          $a1, 0x1F($a2)
    ctx->pc = 0x332a40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 31), (uint8_t)GPR_U32(ctx, 5));
    // 0x332a44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x332a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332a48: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332a4c: 0x8c222780  lw          $v0, 0x2780($at)
    ctx->pc = 0x332a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892780u));
    // 0x332a50: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x332a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332a54: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x332a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x332a58: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x332a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x332a5c: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x332a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x332a60: 0x24632730  addiu       $v1, $v1, 0x2730
    ctx->pc = 0x332a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
    // 0x332a64: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x332a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332a68: 0x90e5001f  lbu         $a1, 0x1F($a3)
    ctx->pc = 0x332a68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 31)));
    // 0x332a6c: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x332a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x332a70: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x332a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x332a74: 0x2403ff1f  addiu       $v1, $zero, -0xE1
    ctx->pc = 0x332a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x332a78: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x332a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x332a7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x332a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x332a80: 0xa0e3001f  sb          $v1, 0x1F($a3)
    ctx->pc = 0x332a80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 31), (uint8_t)GPR_U32(ctx, 3));
    // 0x332a84: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332a88: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332a88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332a8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x332a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x332a90: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332a94: 0xac232780  sw          $v1, 0x2780($at)
    ctx->pc = 0x332a94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x892780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892780u, _value); } while (0);
label_332a98:
    // 0x332a98: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332a9c: 0x8c242780  lw          $a0, 0x2780($at)
    ctx->pc = 0x332a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x892780u));
    // 0x332aa0: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x332aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x332aa4: 0x1460ff1d  bnez        $v1, . + 4 + (-0xE3 << 2)
    ctx->pc = 0x332AA4u;
    {
        const bool branch_taken_0x332aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332aa4) {
            ctx->pc = 0x33271Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33271c;
        }
    }
    ctx->pc = 0x332AACu;
    // 0x332aac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332ab0: 0xae230120  sw          $v1, 0x120($s1)
    ctx->pc = 0x332ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
    // 0x332ab4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332ab8: 0xae230520  sw          $v1, 0x520($s1)
    ctx->pc = 0x332ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1312), GPR_U32(ctx, 3));
    // 0x332abc: 0x26230520  addiu       $v1, $s1, 0x520
    ctx->pc = 0x332abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    // 0x332ac0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332ac4: 0xac232790  sw          $v1, 0x2790($at)
    ctx->pc = 0x332ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x332ac8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x332ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x332acc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332ad0: 0x8c242790  lw          $a0, 0x2790($at)
    ctx->pc = 0x332ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x892790u));
    // 0x332ad4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x332ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x332ad8: 0x92236625  lbu         $v1, 0x6625($s1)
    ctx->pc = 0x332ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26149)));
    // 0x332adc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x332adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x332ae0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x332AE0u;
    {
        const bool branch_taken_0x332ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332ae0) {
            ctx->pc = 0x332AECu;
            goto label_332aec;
        }
    }
    ctx->pc = 0x332AE8u;
    // 0x332ae8: 0xa2205deb  sb          $zero, 0x5DEB($s1)
    ctx->pc = 0x332ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24043), (uint8_t)GPR_U32(ctx, 0));
label_332aec:
    // 0x332aec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x332aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332af0: 0x0  nop
    ctx->pc = 0x332af0u;
    // NOP
    // 0x332af4: 0xe6206620  swc1        $f0, 0x6620($s1)
    ctx->pc = 0x332af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26144), bits); }
    // 0x332af8: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x332af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x332afc: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x332afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x332b00: 0xae24685c  sw          $a0, 0x685C($s1)
    ctx->pc = 0x332b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 4));
    // 0x332b04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x332b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x332b08: 0xae235de0  sw          $v1, 0x5DE0($s1)
    ctx->pc = 0x332b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24032), GPR_U32(ctx, 3));
    // 0x332b0c: 0xae235dd8  sw          $v1, 0x5DD8($s1)
    ctx->pc = 0x332b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24024), GPR_U32(ctx, 3));
    // 0x332b10: 0x240301cc  addiu       $v1, $zero, 0x1CC
    ctx->pc = 0x332b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x332b14: 0xae235ddc  sw          $v1, 0x5DDC($s1)
    ctx->pc = 0x332b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24028), GPR_U32(ctx, 3));
    // 0x332b18: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x332b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x332b1c: 0xae235de4  sw          $v1, 0x5DE4($s1)
    ctx->pc = 0x332b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24036), GPR_U32(ctx, 3));
    // 0x332b20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x332b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332b24: 0xa2235dfc  sb          $v1, 0x5DFC($s1)
    ctx->pc = 0x332b24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24060), (uint8_t)GPR_U32(ctx, 3));
    // 0x332b28: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x332b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x332b2c: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x332b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x332b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332b34: 0x0  nop
    ctx->pc = 0x332b34u;
    // NOP
    // 0x332b38: 0xe6205df0  swc1        $f0, 0x5DF0($s1)
    ctx->pc = 0x332b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24048), bits); }
    // 0x332b3c: 0x3c123d4c  lui         $s2, 0x3D4C
    ctx->pc = 0x332b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15692 << 16));
    // 0x332b40: 0x3642cccd  ori         $v0, $s2, 0xCCCD
    ctx->pc = 0x332b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)52429);
    // 0x332b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332b48: 0x0  nop
    ctx->pc = 0x332b48u;
    // NOP
    // 0x332b4c: 0xe6205df4  swc1        $f0, 0x5DF4($s1)
    ctx->pc = 0x332b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24052), bits); }
    // 0x332b50: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x332b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x332b54: 0x3452c28f  ori         $s2, $v0, 0xC28F
    ctx->pc = 0x332b54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x332b58: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x332b58u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332b5c: 0x0  nop
    ctx->pc = 0x332b5cu;
    // NOP
    // 0x332b60: 0xe6205df8  swc1        $f0, 0x5DF8($s1)
    ctx->pc = 0x332b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24056), bits); }
    // 0x332b64: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x332b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x332b68: 0xae225db0  sw          $v0, 0x5DB0($s1)
    ctx->pc = 0x332b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23984), GPR_U32(ctx, 2));
    // 0x332b6c: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x332b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x332b70: 0x3472adfd  ori         $s2, $v1, 0xADFD
    ctx->pc = 0x332b70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44541);
    // 0x332b74: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x332b74u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332b78: 0x0  nop
    ctx->pc = 0x332b78u;
    // NOP
    // 0x332b7c: 0xe6205dbc  swc1        $f0, 0x5DBC($s1)
    ctx->pc = 0x332b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 23996), bits); }
    // 0x332b80: 0x82235deb  lb          $v1, 0x5DEB($s1)
    ctx->pc = 0x332b80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24043)));
    // 0x332b84: 0x3be3c  dsll32      $s7, $v1, 24
    ctx->pc = 0x332b84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 24));
    // 0x332b88: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x332b88u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x332b8c: 0x8e236850  lw          $v1, 0x6850($s1)
    ctx->pc = 0x332b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26704)));
    // 0x332b90: 0x2e3f023  subu        $fp, $s7, $v1
    ctx->pc = 0x332b90u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x332b94: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332b98: 0xac3e2780  sw          $fp, 0x2780($at)
    ctx->pc = 0x332b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x892780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892780u, _value); } while (0);
    // 0x332b9c: 0x26305e08  addiu       $s0, $s1, 0x5E08
    ctx->pc = 0x332b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24072));
    // 0x332ba0: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x332ba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332ba4: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x332ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x332ba8: 0x3c164299  lui         $s6, 0x4299
    ctx->pc = 0x332ba8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17049 << 16));
    // 0x332bac: 0x36c3999a  ori         $v1, $s6, 0x999A
    ctx->pc = 0x332bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)39322);
    // 0x332bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332bb4: 0x0  nop
    ctx->pc = 0x332bb4u;
    // NOP
    // 0x332bb8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x332bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x332bbc: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x332bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x332bc0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x332bc0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332bc4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332bc8: 0x8c252780  lw          $a1, 0x2780($at)
    ctx->pc = 0x332bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x892780u));
    // 0x332bcc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x332bccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332bd0: 0x0  nop
    ctx->pc = 0x332bd0u;
    // NOP
    // 0x332bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x332bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x332bd8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x332bd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x332bdc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x332bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x332be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332be4: 0x0  nop
    ctx->pc = 0x332be4u;
    // NOP
    // 0x332be8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x332be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x332bec: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x332becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x332bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332bf4: 0x0  nop
    ctx->pc = 0x332bf4u;
    // NOP
    // 0x332bf8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x332bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x332bfc: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x332bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x332c00: 0x3c03434d  lui         $v1, 0x434D
    ctx->pc = 0x332c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17229 << 16));
    // 0x332c04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332c04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c08: 0x0  nop
    ctx->pc = 0x332c08u;
    // NOP
    // 0x332c0c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x332c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x332c10: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x332c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x332c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c18: 0x0  nop
    ctx->pc = 0x332c18u;
    // NOP
    // 0x332c1c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x332c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x332c20: 0x3c0243ef  lui         $v0, 0x43EF
    ctx->pc = 0x332c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17391 << 16));
    // 0x332c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c28: 0x0  nop
    ctx->pc = 0x332c28u;
    // NOP
    // 0x332c2c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x332c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x332c30: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x332c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x332c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c38: 0x0  nop
    ctx->pc = 0x332c38u;
    // NOP
    // 0x332c3c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x332c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x332c40: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x332c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x332c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c48: 0x0  nop
    ctx->pc = 0x332c48u;
    // NOP
    // 0x332c4c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x332c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x332c50: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x332c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x332c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c58: 0x0  nop
    ctx->pc = 0x332c58u;
    // NOP
    // 0x332c5c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x332c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x332c60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x332c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332c64: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x332c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x332c68: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x332c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x332c6c: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x332c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x332c70: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x332c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x332c74: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x332c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x332c78: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x332C78u;
    SET_GPR_U32(ctx, 31, 0x332C80u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x332C78u, 0x332C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332C80u;
label_332c80:
    // 0x332c80: 0x26306090  addiu       $s0, $s1, 0x6090
    ctx->pc = 0x332c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24720));
    // 0x332c84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x332c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332c88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x332c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x332c8c: 0x3c044380  lui         $a0, 0x4380
    ctx->pc = 0x332c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17280 << 16));
    // 0x332c90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x332c90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332c94: 0x0  nop
    ctx->pc = 0x332c94u;
    // NOP
    // 0x332c98: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x332c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x332c9c: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x332c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x332ca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332ca4: 0x0  nop
    ctx->pc = 0x332ca4u;
    // NOP
    // 0x332ca8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x332ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x332cac: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x332cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x332cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332cb4: 0x0  nop
    ctx->pc = 0x332cb4u;
    // NOP
    // 0x332cb8: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x332cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x332cbc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x332cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x332cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332cc4: 0x0  nop
    ctx->pc = 0x332cc4u;
    // NOP
    // 0x332cc8: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x332cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x332ccc: 0x3c0343a7  lui         $v1, 0x43A7
    ctx->pc = 0x332cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17319 << 16));
    // 0x332cd0: 0x346a3333  ori         $t2, $v1, 0x3333
    ctx->pc = 0x332cd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x332cd4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x332cd4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332cd8: 0x0  nop
    ctx->pc = 0x332cd8u;
    // NOP
    // 0x332cdc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x332cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x332ce0: 0x3c02438b  lui         $v0, 0x438B
    ctx->pc = 0x332ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17291 << 16));
    // 0x332ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332ce8: 0x0  nop
    ctx->pc = 0x332ce8u;
    // NOP
    // 0x332cec: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x332cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x332cf0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x332cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332cf4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x332cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x332cf8: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x332cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x332cfc: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x332cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x332d00: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x332d00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x332d04: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x332d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x332d08: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x332D08u;
    SET_GPR_U32(ctx, 31, 0x332D10u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x332D08u, 0x332D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D10u;
label_332d10:
    // 0x332d10: 0x26305f4c  addiu       $s0, $s1, 0x5F4C
    ctx->pc = 0x332d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24396));
    // 0x332d14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x332d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332d18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x332d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x332d1c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x332d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x332d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d24: 0x0  nop
    ctx->pc = 0x332d24u;
    // NOP
    // 0x332d28: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x332d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x332d2c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x332d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x332d30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d34: 0x0  nop
    ctx->pc = 0x332d34u;
    // NOP
    // 0x332d38: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x332d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x332d3c: 0x3c05435c  lui         $a1, 0x435C
    ctx->pc = 0x332d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17244 << 16));
    // 0x332d40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x332d40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d44: 0x0  nop
    ctx->pc = 0x332d44u;
    // NOP
    // 0x332d48: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x332d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x332d4c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x332d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x332d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d54: 0x0  nop
    ctx->pc = 0x332d54u;
    // NOP
    // 0x332d58: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x332d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x332d5c: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x332d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x332d60: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x332d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x332d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d68: 0x0  nop
    ctx->pc = 0x332d68u;
    // NOP
    // 0x332d6c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x332d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x332d70: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x332d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x332d74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x332d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x332d78: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332d7c: 0x8c222780  lw          $v0, 0x2780($at)
    ctx->pc = 0x332d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892780u));
    // 0x332d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d84: 0x0  nop
    ctx->pc = 0x332d84u;
    // NOP
    // 0x332d88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x332d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x332d8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x332d8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x332d90: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x332d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x332d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332d98: 0x0  nop
    ctx->pc = 0x332d98u;
    // NOP
    // 0x332d9c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x332d9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x332da0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x332da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x332da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332da8: 0x0  nop
    ctx->pc = 0x332da8u;
    // NOP
    // 0x332dac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x332dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x332db0: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x332db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x332db4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x332db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332db8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x332db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x332dbc: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x332dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x332dc0: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x332dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x332dc4: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x332dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x332dc8: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x332dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x332dcc: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x332DCCu;
    SET_GPR_U32(ctx, 31, 0x332DD4u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x332DCCu, 0x332DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332DD4u;
label_332dd4:
    // 0x332dd4: 0x2630645c  addiu       $s0, $s1, 0x645C
    ctx->pc = 0x332dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 25692));
    // 0x332dd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x332dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332ddc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x332ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x332de0: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x332de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x332de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332de8: 0x0  nop
    ctx->pc = 0x332de8u;
    // NOP
    // 0x332dec: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x332decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x332df0: 0x3c044360  lui         $a0, 0x4360
    ctx->pc = 0x332df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17248 << 16));
    // 0x332df4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x332df4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332df8: 0x0  nop
    ctx->pc = 0x332df8u;
    // NOP
    // 0x332dfc: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x332dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x332e00: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x332e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x332e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332e08: 0x0  nop
    ctx->pc = 0x332e08u;
    // NOP
    // 0x332e0c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x332e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x332e10: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x332e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x332e14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332e14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332e18: 0x0  nop
    ctx->pc = 0x332e18u;
    // NOP
    // 0x332e1c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x332e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x332e20: 0x3c0a4380  lui         $t2, 0x4380
    ctx->pc = 0x332e20u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17280 << 16));
    // 0x332e24: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x332e24u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332e28: 0x0  nop
    ctx->pc = 0x332e28u;
    // NOP
    // 0x332e2c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x332e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x332e30: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x332e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x332e34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332e38: 0x0  nop
    ctx->pc = 0x332e38u;
    // NOP
    // 0x332e3c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x332e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x332e40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x332e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332e44: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x332e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x332e48: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x332e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x332e4c: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x332e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x332e50: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x332e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x332e54: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x332e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x332e58: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x332E58u;
    SET_GPR_U32(ctx, 31, 0x332E60u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x332E58u, 0x332E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332E60u;
label_332e60:
    // 0x332e60: 0x26230620  addiu       $v1, $s1, 0x620
    ctx->pc = 0x332e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    // 0x332e64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332e68: 0xac232790  sw          $v1, 0x2790($at)
    ctx->pc = 0x332e68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x332e6c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x332e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x332e70: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332e74: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x332e74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x332e78: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x332e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x332e7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332e80: 0xac202720  sw          $zero, 0x2720($at)
    ctx->pc = 0x332e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
    // 0x332e84: 0x9224683f  lbu         $a0, 0x683F($s1)
    ctx->pc = 0x332e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26687)));
    // 0x332e88: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x332e88u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x332e8c: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x332e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x332e90: 0x9023c98e  lbu         $v1, -0x3672($at)
    ctx->pc = 0x332e90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x332e94: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x332e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x332e98: 0x949823  subu        $s3, $a0, $s4
    ctx->pc = 0x332e98u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x332e9c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332ea0: 0xac202780  sw          $zero, 0x2780($at)
    ctx->pc = 0x332ea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892780u, _value); } while (0);
    // 0x332ea4: 0x1a60001e  blez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x332EA4u;
    {
        const bool branch_taken_0x332ea4 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x332ea4) {
            ctx->pc = 0x332F20u;
            goto label_332f20;
        }
    }
    ctx->pc = 0x332EACu;
    // 0x332eac: 0x8e226850  lw          $v0, 0x6850($s1)
    ctx->pc = 0x332eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26704)));
    // 0x332eb0: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x332eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x332eb4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332eb8: 0x8c222780  lw          $v0, 0x2780($at)
    ctx->pc = 0x332eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892780u));
    // 0x332ebc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x332ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332ec0: 0x254082a  slt         $at, $s2, $s4
    ctx->pc = 0x332ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x332ec4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x332EC4u;
    {
        const bool branch_taken_0x332ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332ec4) {
            ctx->pc = 0x332ED0u;
            goto label_332ed0;
        }
    }
    ctx->pc = 0x332ECCu;
    // 0x332ecc: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x332eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_332ed0:
    // 0x332ed0: 0x2932821  addu        $a1, $s4, $s3
    ctx->pc = 0x332ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x332ed4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x332ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x332ed8: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x332ed8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x332edc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x332EDCu;
    {
        const bool branch_taken_0x332edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332edc) {
            ctx->pc = 0x332EE8u;
            goto label_332ee8;
        }
    }
    ctx->pc = 0x332EE4u;
    // 0x332ee4: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x332ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_332ee8:
    // 0x332ee8: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x332ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x332eec: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x332eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x332ef0: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x332ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x332ef4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x332EF4u;
    {
        const bool branch_taken_0x332ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332ef4) {
            ctx->pc = 0x332F00u;
            goto label_332f00;
        }
    }
    ctx->pc = 0x332EFCu;
    // 0x332efc: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x332efcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_332f00:
    // 0x332f00: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x332f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x332f04: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x332f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x332f08: 0x2464663e  addiu       $a0, $v1, 0x663E
    ctx->pc = 0x332f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 26174));
    // 0x332f0c: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x332F0Cu;
    SET_GPR_U32(ctx, 31, 0x332F14u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x332F0Cu, 0x332F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F14u;
label_332f14:
    // 0x332f14: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x332f14u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x332f18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x332F18u;
    {
        const bool branch_taken_0x332f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332f18) {
            ctx->pc = 0x332F24u;
            goto label_332f24;
        }
    }
    ctx->pc = 0x332F20u;
label_332f20:
    // 0x332f20: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x332f20u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332f24:
    // 0x332f24: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x332f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x332f28: 0x34560096  ori         $s6, $v0, 0x96
    ctx->pc = 0x332f28u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)150);
    // 0x332f2c: 0x8e2665a0  lw          $a2, 0x65A0($s1)
    ctx->pc = 0x332f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x332f30: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x332f30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x332f34: 0x3405a800  ori         $a1, $zero, 0xA800
    ctx->pc = 0x332f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x332f38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x332f38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332f3c: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x332F3Cu;
    SET_GPR_U32(ctx, 31, 0x332F44u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x332F3Cu, 0x332F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F44u;
label_332f44:
    // 0x332f44: 0x8e24685c  lw          $a0, 0x685C($s1)
    ctx->pc = 0x332f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x332f48: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x332f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x332f4c: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x332f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x332f50: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332f54: 0x8c232788  lw          $v1, 0x2788($at)
    ctx->pc = 0x332f54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892788u));
    // 0x332f58: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x332f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x332f5c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332f60: 0xac242788  sw          $a0, 0x2788($at)
    ctx->pc = 0x332f60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x892788u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892788u, _value); } while (0);
    // 0x332f64: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x332F64u;
    {
        const bool branch_taken_0x332f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332f64) {
            ctx->pc = 0x3332DCu;
            goto label_3332dc;
        }
    }
    ctx->pc = 0x332F6Cu;
label_332f6c:
    // 0x332f6c: 0x9223683f  lbu         $v1, 0x683F($s1)
    ctx->pc = 0x332f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26687)));
    // 0x332f70: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x332f70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x332f74: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x332f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x332f78: 0x9026c98e  lbu         $a2, -0x3672($at)
    ctx->pc = 0x332f78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x332f7c: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x332f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x332f80: 0xb49823  subu        $s3, $a1, $s4
    ctx->pc = 0x332f80u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x332f84: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x332F84u;
    SET_GPR_U32(ctx, 31, 0x332F8Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x332F84u, 0x332F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F8Cu;
label_332f8c:
    // 0x332f8c: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x332F8Cu;
    {
        const bool branch_taken_0x332f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x332f8c) {
            ctx->pc = 0x3332DCu;
            goto label_3332dc;
        }
    }
    ctx->pc = 0x332F94u;
    // 0x332f94: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x332f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x332f98: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x332f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x332f9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x332f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x332fa0: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x332fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x332fa4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332fa8: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332fac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x332facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x332fb0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x332fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x332fb4: 0x24620620  addiu       $v0, $v1, 0x620
    ctx->pc = 0x332fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1568));
    // 0x332fb8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332fbc: 0xac222790  sw          $v0, 0x2790($at)
    ctx->pc = 0x332fbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x332fc0: 0x8e2565a0  lw          $a1, 0x65A0($s1)
    ctx->pc = 0x332fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x332fc4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332fc8: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x332fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x332fcc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x332fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x332fd0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332fd4: 0x8c222790  lw          $v0, 0x2790($at)
    ctx->pc = 0x332fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892790u));
    // 0x332fd8: 0x94470004  lhu         $a3, 0x4($v0)
    ctx->pc = 0x332fd8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x332fdc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332fe0: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x332fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x332fe4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332fec: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x332fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x332ff0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x332ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x332ff4: 0x24822730  addiu       $v0, $a0, 0x2730
    ctx->pc = 0x332ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10032));
    // 0x332ff8: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x332ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x332ffc: 0x94a30018  lhu         $v1, 0x18($a1)
    ctx->pc = 0x332ffcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x333000: 0x30e43fff  andi        $a0, $a3, 0x3FFF
    ctx->pc = 0x333000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x333004: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x333004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x333008: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x333008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33300c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x33300cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x333010: 0xa4a20018  sh          $v0, 0x18($a1)
    ctx->pc = 0x333010u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x333014: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333018: 0x8c222790  lw          $v0, 0x2790($at)
    ctx->pc = 0x333018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892790u));
    // 0x33301c: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x33301cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x333020: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x333020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x333024: 0xc05e990  jal         func_17A640
    ctx->pc = 0x333024u;
    SET_GPR_U32(ctx, 31, 0x33302Cu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x333024u, 0x33302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33302Cu;
label_33302c:
    // 0x33302c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x33302cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x333030: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x333030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x333034: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333038: 0x8c252780  lw          $a1, 0x2780($at)
    ctx->pc = 0x333038u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x892780u));
    // 0x33303c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x33303cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x333040: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x333040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x333044: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x333044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x333048: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x333048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33304c: 0x24422730  addiu       $v0, $v0, 0x2730
    ctx->pc = 0x33304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x333050: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x333050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333054: 0xdd070018  ld          $a3, 0x18($t0)
    ctx->pc = 0x333054u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x333058: 0x30c23fff  andi        $v0, $a2, 0x3FFF
    ctx->pc = 0x333058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x33305c: 0x2317c  dsll32      $a2, $v0, 5
    ctx->pc = 0x33305cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 5));
    // 0x333060: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x333060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x333064: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x333064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x333068: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x333068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33306c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x33306cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x333070: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x333070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x333074: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x333074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x333078: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x333078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x33307c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x33307cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x333080: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x333080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x333084: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x333084u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x333088: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33308c: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x33308cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x333090: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x333090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x333094: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333098: 0xac222790  sw          $v0, 0x2790($at)
    ctx->pc = 0x333098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x33309c: 0x8e2265a0  lw          $v0, 0x65A0($s1)
    ctx->pc = 0x33309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x3330a0: 0x24437fff  addiu       $v1, $v0, 0x7FFF
    ctx->pc = 0x3330a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x3330a4: 0x24622801  addiu       $v0, $v1, 0x2801
    ctx->pc = 0x3330a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10241));
    // 0x3330a8: 0xae2265a0  sw          $v0, 0x65A0($s1)
    ctx->pc = 0x3330a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26016), GPR_U32(ctx, 2));
    // 0x3330ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3330acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3330b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3330b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3330b4: 0x8c252790  lw          $a1, 0x2790($at)
    ctx->pc = 0x3330b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x892790u));
    // 0x3330b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3330b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3330bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3330bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3330c0: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x3330c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3330c4: 0x9462fffc  lhu         $v0, -0x4($v1)
    ctx->pc = 0x3330c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x3330c8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3330c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3330cc: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x3330ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x3330d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3330d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3330d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3330d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3330d8: 0x8c222790  lw          $v0, 0x2790($at)
    ctx->pc = 0x3330d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892790u));
    // 0x3330dc: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x3330dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3330e0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3330e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3330e4: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x3330e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3330e8: 0x9462fffe  lhu         $v0, -0x2($v1)
    ctx->pc = 0x3330e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x3330ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3330ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3330f0: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x3330f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3330f4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3330f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3330f8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3330f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3330fc: 0x8c222790  lw          $v0, 0x2790($at)
    ctx->pc = 0x3330fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892790u));
    // 0x333100: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x333100u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x333104: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333108: 0x8c262780  lw          $a2, 0x2780($at)
    ctx->pc = 0x333108u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x892780u));
    // 0x33310c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x33310cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x333110: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333114: 0xac242780  sw          $a0, 0x2780($at)
    ctx->pc = 0x333114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x892780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892780u, _value); } while (0);
    // 0x333118: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33311c: 0x8c232780  lw          $v1, 0x2780($at)
    ctx->pc = 0x33311cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892780u));
    // 0x333120: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x333120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x333124: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x333124u;
    {
        const bool branch_taken_0x333124 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x333124) {
            ctx->pc = 0x333228u;
            goto label_333228;
        }
    }
    ctx->pc = 0x33312Cu;
    // 0x33312c: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x33312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x333130: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333134: 0xac222790  sw          $v0, 0x2790($at)
    ctx->pc = 0x333134u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x333138: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33313c: 0x8c242790  lw          $a0, 0x2790($at)
    ctx->pc = 0x33313cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x892790u));
    // 0x333140: 0x26250720  addiu       $a1, $s1, 0x720
    ctx->pc = 0x333140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    // 0x333144: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x333144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x333148: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x333148u;
    SET_GPR_U32(ctx, 31, 0x333150u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x333150u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x333150u) { return; }
    ctx->pc = 0x333150u;
label_333150:
    // 0x333150: 0x8e2465a0  lw          $a0, 0x65A0($s1)
    ctx->pc = 0x333150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x333154: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333158: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x333158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x33315c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33315cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x333160: 0x8e2465a0  lw          $a0, 0x65A0($s1)
    ctx->pc = 0x333160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x333164: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x333164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x333168: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x333168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x33316c: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x33316cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x333170: 0xae2765a0  sw          $a3, 0x65A0($s1)
    ctx->pc = 0x333170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26016), GPR_U32(ctx, 7));
    // 0x333174: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333178: 0x8c252790  lw          $a1, 0x2790($at)
    ctx->pc = 0x333178u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x892790u));
    // 0x33317c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x33317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x333180: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333184: 0xac232790  sw          $v1, 0x2790($at)
    ctx->pc = 0x333184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x892790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892790u, _value); } while (0);
    // 0x333188: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x333188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x33318c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33318cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333190: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x333190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x333194: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x333194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x333198: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33319c: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x33319cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3331a0: 0x9463fffc  lhu         $v1, -0x4($v1)
    ctx->pc = 0x3331a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x3331a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3331a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3331a8: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x3331a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x3331ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3331acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3331b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3331b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3331b4: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x3331b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3331b8: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x3331b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3331bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3331bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3331c0: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x3331c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3331c4: 0x9463fffe  lhu         $v1, -0x2($v1)
    ctx->pc = 0x3331c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x3331c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3331c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3331cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3331ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3331d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3331d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3331d4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3331d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3331d8: 0x8c232790  lw          $v1, 0x2790($at)
    ctx->pc = 0x3331d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892790u));
    // 0x3331dc: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x3331dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x3331e0: 0x8e236870  lw          $v1, 0x6870($s1)
    ctx->pc = 0x3331e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26736)));
    // 0x3331e4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3331e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3331e8: 0xae236870  sw          $v1, 0x6870($s1)
    ctx->pc = 0x3331e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26736), GPR_U32(ctx, 3));
    // 0x3331ec: 0x8e245dc4  lw          $a0, 0x5DC4($s1)
    ctx->pc = 0x3331ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24004)));
    // 0x3331f0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3331f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3331f4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3331F4u;
    {
        const bool branch_taken_0x3331f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3331f4) {
            ctx->pc = 0x333210u;
            goto label_333210;
        }
    }
    ctx->pc = 0x3331FCu;
    // 0x3331fc: 0x8e235dc8  lw          $v1, 0x5DC8($s1)
    ctx->pc = 0x3331fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24008)));
    // 0x333200: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x333200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x333204: 0xae235dc8  sw          $v1, 0x5DC8($s1)
    ctx->pc = 0x333204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 3));
    // 0x333208: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x333208u;
    {
        const bool branch_taken_0x333208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333208) {
            ctx->pc = 0x333218u;
            goto label_333218;
        }
    }
    ctx->pc = 0x333210u;
label_333210:
    // 0x333210: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333214: 0xae235dd4  sw          $v1, 0x5DD4($s1)
    ctx->pc = 0x333214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 3));
label_333218:
    // 0x333218: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33321c: 0xac202788  sw          $zero, 0x2788($at)
    ctx->pc = 0x33321cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892788u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892788u, _value); } while (0);
    // 0x333220: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x333220u;
    {
        const bool branch_taken_0x333220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333220) {
            ctx->pc = 0x3332DCu;
            goto label_3332dc;
        }
    }
    ctx->pc = 0x333228u;
label_333228:
    // 0x333228: 0x1a600020  blez        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x333228u;
    {
        const bool branch_taken_0x333228 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x333228) {
            ctx->pc = 0x3332ACu;
            goto label_3332ac;
        }
    }
    ctx->pc = 0x333230u;
    // 0x333230: 0x8e226850  lw          $v0, 0x6850($s1)
    ctx->pc = 0x333230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26704)));
    // 0x333234: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x333234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x333238: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33323c: 0x8c222780  lw          $v0, 0x2780($at)
    ctx->pc = 0x33323cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892780u));
    // 0x333240: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x333240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333244: 0x254082a  slt         $at, $s2, $s4
    ctx->pc = 0x333244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x333248: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333248u;
    {
        const bool branch_taken_0x333248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333248) {
            ctx->pc = 0x333254u;
            goto label_333254;
        }
    }
    ctx->pc = 0x333250u;
    // 0x333250: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x333250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_333254:
    // 0x333254: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x333254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x333258: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x333258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33325c: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x33325cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x333260: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333260u;
    {
        const bool branch_taken_0x333260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333260) {
            ctx->pc = 0x33326Cu;
            goto label_33326c;
        }
    }
    ctx->pc = 0x333268u;
    // 0x333268: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x333268u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_33326c:
    // 0x33326c: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x33326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x333270: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x333270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x333274: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x333274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x333278: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x333278u;
    {
        const bool branch_taken_0x333278 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333278) {
            ctx->pc = 0x333288u;
            goto label_333288;
        }
    }
    ctx->pc = 0x333280u;
    // 0x333280: 0x253b823  subu        $s7, $s2, $s3
    ctx->pc = 0x333280u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x333284: 0x72e09628  paddub      $s2, $s7, $zero
    ctx->pc = 0x333284u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_333288:
    // 0x333288: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x333288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33328c: 0x223f021  addu        $fp, $s1, $v1
    ctx->pc = 0x33328cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x333290: 0x27d0663e  addiu       $s0, $fp, 0x663E
    ctx->pc = 0x333290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 26174));
    // 0x333294: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x333294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x333298: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x333298u;
    SET_GPR_U32(ctx, 31, 0x3332A0u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x333298u, 0x3332A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332A0u;
label_3332a0:
    // 0x3332a0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x3332a0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3332a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3332A4u;
    {
        const bool branch_taken_0x3332a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3332a4) {
            ctx->pc = 0x3332B0u;
            goto label_3332b0;
        }
    }
    ctx->pc = 0x3332ACu;
label_3332ac:
    // 0x3332ac: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x3332acu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3332b0:
    // 0x3332b0: 0x151c00  sll         $v1, $s5, 16
    ctx->pc = 0x3332b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x3332b4: 0x34760096  ori         $s6, $v1, 0x96
    ctx->pc = 0x3332b4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)150);
    // 0x3332b8: 0x8e2665a0  lw          $a2, 0x65A0($s1)
    ctx->pc = 0x3332b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x3332bc: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x3332bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x3332c0: 0x3405a800  ori         $a1, $zero, 0xA800
    ctx->pc = 0x3332c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x3332c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3332c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3332c8: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x3332C8u;
    SET_GPR_U32(ctx, 31, 0x3332D0u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x3332C8u, 0x3332D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332D0u;
label_3332d0:
    // 0x3332d0: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x3332d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x3332d4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3332d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3332d8: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x3332d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
label_3332dc:
    // 0x3332dc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x3332dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3332e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3332e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3332e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3332e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3332e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3332e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3332ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3332ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3332f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3332f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3332f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3332f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3332f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3332f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3332fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3332fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333304: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x333304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x333308: 0x3e00008  jr          $ra
    ctx->pc = 0x333308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333310u;
}
