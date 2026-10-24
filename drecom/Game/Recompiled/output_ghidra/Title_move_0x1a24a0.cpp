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

// Function: Title_move
// Address: 0x1a24a0 - 0x1a2888
void Title_move_0x1a24a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Title_move_0x1a24a0");
#endif

    switch (ctx->pc) {
        case 0x1a252cu: goto label_1a252c;
        case 0x1a2560u: goto label_1a2560;
        case 0x1a2690u: goto label_1a2690;
        case 0x1a27fcu: goto label_1a27fc;
        default: break;
    }

    ctx->pc = 0x1a24a0u;

    // 0x1a24a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a24a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a24a4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1a24a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1a24a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a24a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a24ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a24acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a24b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a24b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a24b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a24b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a24b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a24b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a24bc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1a24bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1a24c0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a24c4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1a24c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1a24c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a24cc: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1a24ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a24d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a24d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a24d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a24d8: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1A24D8u;
    {
        const bool branch_taken_0x1a24d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a24d8) {
            ctx->pc = 0x1A2708u;
            goto label_1a2708;
        }
    }
    ctx->pc = 0x1A24E0u;
    // 0x1a24e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a24e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a24e4: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A24E4u;
    {
        const bool branch_taken_0x1a24e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a24e4) {
            ctx->pc = 0x1A2580u;
            goto label_1a2580;
        }
    }
    ctx->pc = 0x1A24ECu;
    // 0x1a24ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a24ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a24f0: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A24F0u;
    {
        const bool branch_taken_0x1a24f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a24f0) {
            ctx->pc = 0x1A2554u;
            goto label_1a2554;
        }
    }
    ctx->pc = 0x1A24F8u;
    // 0x1a24f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A24F8u;
    {
        const bool branch_taken_0x1a24f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24f8) {
            ctx->pc = 0x1A2508u;
            goto label_1a2508;
        }
    }
    ctx->pc = 0x1A2500u;
    // 0x1a2500: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x1A2500u;
    {
        const bool branch_taken_0x1a2500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2500) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A2508u;
label_1a2508:
    // 0x1a2508: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2508u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a250c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a250cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2510: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a2510u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2514: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2514u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2518: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1a2518u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1a251c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1a251cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2520: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1a2520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a2524: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2524u;
    SET_GPR_U32(ctx, 31, 0x1A252Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2524u, 0x1A252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A252Cu;
label_1a252c:
    // 0x1a252c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2530: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x1a2530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2534: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2538: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1a2538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1a253c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2540: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x1a2540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2544: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2548: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a2548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a254c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2550: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a2550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_1a2554:
    // 0x1a2554: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2558: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A2558u;
    SET_GPR_U32(ctx, 31, 0x1A2560u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A2558u, 0x1A2560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2560u;
label_1a2560:
    // 0x1a2560: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1A2560u;
    {
        const bool branch_taken_0x1a2560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2560) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A2568u;
    // 0x1a2568: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a2568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a256c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1a256cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1a2570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2574: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1a2574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a2578: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1A2578u;
    {
        const bool branch_taken_0x1a2578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2578) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A2580u;
label_1a2580:
    // 0x1a2580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2584: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x1a2584u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x1a2588: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1a2588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1a258c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a258cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a2590: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2590u;
    {
        const bool branch_taken_0x1a2590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2590) {
            ctx->pc = 0x1A25A8u;
            goto label_1a25a8;
        }
    }
    ctx->pc = 0x1A2598u;
    // 0x1a2598: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a2598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a259c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a259cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a25a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a25a4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1a25a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1a25a8:
    // 0x1a25a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a25a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a25ac: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x1a25acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x1a25b0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1a25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1a25b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a25b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a25b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A25B8u;
    {
        const bool branch_taken_0x1a25b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25b8) {
            ctx->pc = 0x1A25D0u;
            goto label_1a25d0;
        }
    }
    ctx->pc = 0x1A25C0u;
    // 0x1a25c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a25c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a25c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a25c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a25cc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1a25ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1a25d0:
    // 0x1a25d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a25d4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a25d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a25d8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A25D8u;
    {
        const bool branch_taken_0x1a25d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a25d8) {
            ctx->pc = 0x1A25ECu;
            goto label_1a25ec;
        }
    }
    ctx->pc = 0x1A25E0u;
    // 0x1a25e0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1a25e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a25e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A25E4u;
    {
        const bool branch_taken_0x1a25e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25e4) {
            ctx->pc = 0x1A261Cu;
            goto label_1a261c;
        }
    }
    ctx->pc = 0x1A25ECu;
label_1a25ec:
    // 0x1a25ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a25f0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a25f4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1a25f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a25f8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A25F8u;
    {
        const bool branch_taken_0x1a25f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a25f8) {
            ctx->pc = 0x1A260Cu;
            goto label_1a260c;
        }
    }
    ctx->pc = 0x1A2600u;
    // 0x1a2600: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a2600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2604u;
    {
        const bool branch_taken_0x1a2604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2604) {
            ctx->pc = 0x1A2618u;
            goto label_1a2618;
        }
    }
    ctx->pc = 0x1A260Cu;
label_1a260c:
    // 0x1a260c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2610: 0x8c72000c  lw          $s2, 0xC($v1)
    ctx->pc = 0x1a2610u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a2614: 0x0  nop
    ctx->pc = 0x1a2614u;
    // NOP
label_1a2618:
    // 0x1a2618: 0x72408e28  paddub      $s1, $s2, $zero
    ctx->pc = 0x1a2618u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1a261c:
    // 0x1a261c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2620: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x1a2620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x1a2624: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1a2624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1a2628: 0x3c031080  lui         $v1, 0x1080
    ctx->pc = 0x1a2628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4224 << 16));
    // 0x1a262c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a262cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a2630: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A2630u;
    {
        const bool branch_taken_0x1a2630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2630) {
            ctx->pc = 0x1A26F0u;
            goto label_1a26f0;
        }
    }
    ctx->pc = 0x1A2638u;
    // 0x1a2638: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a263c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1a263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a2640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2644: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A2644u;
    {
        const bool branch_taken_0x1a2644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2644) {
            ctx->pc = 0x1A2698u;
            goto label_1a2698;
        }
    }
    ctx->pc = 0x1A264Cu;
    // 0x1a264c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A264Cu;
    {
        const bool branch_taken_0x1a264c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a264c) {
            ctx->pc = 0x1A265Cu;
            goto label_1a265c;
        }
    }
    ctx->pc = 0x1A2654u;
    // 0x1a2654: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1A2654u;
    {
        const bool branch_taken_0x1a2654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2654) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A265Cu;
label_1a265c:
    // 0x1a265c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a2660: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a2660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2664: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a2664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a2668: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a266c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1a266cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2670: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a2670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2674: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1a2674u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2678: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1a2678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a267c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1a267cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2680: 0x3c0403ff  lui         $a0, 0x3FF
    ctx->pc = 0x1a2680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1023 << 16));
    // 0x1a2684: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x1a2684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x1a2688: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1A2688u;
    SET_GPR_U32(ctx, 31, 0x1A2690u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1A2688u, 0x1A2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2690u;
label_1a2690:
    // 0x1a2690: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1A2690u;
    {
        const bool branch_taken_0x1a2690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2690) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A2698u;
label_1a2698:
    // 0x1a2698: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a269c: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x1a269cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x1a26a0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1a26a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1a26a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A26A4u;
    {
        const bool branch_taken_0x1a26a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26a4) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A26ACu;
    // 0x1a26ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a26acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a26b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a26b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26b4: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1a26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1a26b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A26B8u;
    {
        const bool branch_taken_0x1a26b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26b8) {
            ctx->pc = 0x1A26C8u;
            goto label_1a26c8;
        }
    }
    ctx->pc = 0x1A26C0u;
label_1a26c0:
    // 0x1a26c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26c4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1a26c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_1a26c8:
    // 0x1a26c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26cc: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x1a26ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a26d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a26d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a26d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a26d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26d8: 0xa0640005  sb          $a0, 0x5($v1)
    ctx->pc = 0x1a26d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a26dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a26e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a26e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a26e8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1A26E8u;
    {
        const bool branch_taken_0x1a26e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26e8) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A26F0u;
label_1a26f0:
    // 0x1a26f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26f4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1a26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a26f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a26fc: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1a26fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1a2700: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1A2700u;
    {
        const bool branch_taken_0x1a2700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2700) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A2708u;
label_1a2708:
    // 0x1a2708: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a270c: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x1a270cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x1a2710: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1a2710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1a2714: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a2714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a2718: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2718u;
    {
        const bool branch_taken_0x1a2718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2718) {
            ctx->pc = 0x1A2730u;
            goto label_1a2730;
        }
    }
    ctx->pc = 0x1A2720u;
    // 0x1a2720: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a2720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2724: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1a2724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a2728: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a2728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a272c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1a272cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_1a2730:
    // 0x1a2730: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2734: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x1a2738: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1a2738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1a273c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a273cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a2740: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2740u;
    {
        const bool branch_taken_0x1a2740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2740) {
            ctx->pc = 0x1A2758u;
            goto label_1a2758;
        }
    }
    ctx->pc = 0x1A2748u;
    // 0x1a2748: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a2748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a274c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1a274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a2750: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2754: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1a2754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_1a2758:
    // 0x1a2758: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a275c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a2760: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2760u;
    {
        const bool branch_taken_0x1a2760 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a2760) {
            ctx->pc = 0x1A2774u;
            goto label_1a2774;
        }
    }
    ctx->pc = 0x1A2768u;
    // 0x1a2768: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1a2768u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a276c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A276Cu;
    {
        const bool branch_taken_0x1a276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a276c) {
            ctx->pc = 0x1A27A4u;
            goto label_1a27a4;
        }
    }
    ctx->pc = 0x1A2774u;
label_1a2774:
    // 0x1a2774: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2778: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a2778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a277c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1a277cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2780: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2780u;
    {
        const bool branch_taken_0x1a2780 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2780) {
            ctx->pc = 0x1A2794u;
            goto label_1a2794;
        }
    }
    ctx->pc = 0x1A2788u;
    // 0x1a2788: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a2788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a278c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A278Cu;
    {
        const bool branch_taken_0x1a278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a278c) {
            ctx->pc = 0x1A27A0u;
            goto label_1a27a0;
        }
    }
    ctx->pc = 0x1A2794u;
label_1a2794:
    // 0x1a2794: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2798: 0x8c740010  lw          $s4, 0x10($v1)
    ctx->pc = 0x1a2798u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a279c: 0x0  nop
    ctx->pc = 0x1a279cu;
    // NOP
label_1a27a0:
    // 0x1a27a0: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x1a27a0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1a27a4:
    // 0x1a27a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a27a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a27a8: 0xac730010  sw          $s3, 0x10($v1)
    ctx->pc = 0x1a27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 19));
    // 0x1a27ac: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1a27acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1a27b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a27b4: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1a27b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1a27b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a27b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a27bc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A27BCu;
    {
        const bool branch_taken_0x1a27bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a27bc) {
            ctx->pc = 0x1A2834u;
            goto label_1a2834;
        }
    }
    ctx->pc = 0x1A27C4u;
    // 0x1a27c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a27c8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a27cc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A27CCu;
    {
        const bool branch_taken_0x1a27cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a27cc) {
            ctx->pc = 0x1A2804u;
            goto label_1a2804;
        }
    }
    ctx->pc = 0x1A27D4u;
    // 0x1a27d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a27d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a27d8: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x1a27d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x1a27dc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1a27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1a27e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a27e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a27e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a27e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a27e8: 0xac221a40  sw          $v0, 0x1A40($at)
    ctx->pc = 0x1a27e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A40u, _value); } while (0);
    // 0x1a27ec: 0x3c0403ff  lui         $a0, 0x3FF
    ctx->pc = 0x1a27ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1023 << 16));
    // 0x1a27f0: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1a27f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1a27f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1A27F4u;
    SET_GPR_U32(ctx, 31, 0x1A27FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1A27F4u, 0x1A27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27FCu;
label_1a27fc:
    // 0x1a27fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A27FCu;
    {
        const bool branch_taken_0x1a27fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a27fc) {
            ctx->pc = 0x1A2818u;
            goto label_1a2818;
        }
    }
    ctx->pc = 0x1A2804u;
label_1a2804:
    // 0x1a2804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2808: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x1a2808u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x1a280c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1a280cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1a2810: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2814: 0xac231a40  sw          $v1, 0x1A40($at)
    ctx->pc = 0x1a2814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A40u, _value); } while (0);
label_1a2818:
    // 0x1a2818: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a281c: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x1a281cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2820: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2824: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x1a2824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2828: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a2828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a282c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2830: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a2830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1a2834:
    // 0x1a2834: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1a2834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1a2838: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a2838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1a283c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a283cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a2840: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2840u;
    {
        const bool branch_taken_0x1a2840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2840) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A2848u;
    // 0x1a2848: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a284c: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x1a284cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2850: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2854: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x1a2854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2858: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a2858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a285c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2860: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a2860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1a2864:
    // 0x1a2864: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1a2864u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2868: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a2868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a286c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a286cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a287c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1a287cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a2880: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2888u;
}
