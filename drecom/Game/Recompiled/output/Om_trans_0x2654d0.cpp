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

// Function: Om_trans
// Address: 0x2654d0 - 0x26584c
void Om_trans_0x2654d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_trans_0x2654d0");
#endif

    switch (ctx->pc) {
        case 0x26550cu: goto label_26550c;
        case 0x2655a8u: goto label_2655a8;
        case 0x265630u: goto label_265630;
        case 0x265658u: goto label_265658;
        case 0x265694u: goto label_265694;
        case 0x2656b4u: goto label_2656b4;
        case 0x2656dcu: goto label_2656dc;
        case 0x265704u: goto label_265704;
        case 0x265718u: goto label_265718;
        case 0x26575cu: goto label_26575c;
        case 0x265788u: goto label_265788;
        case 0x2657a8u: goto label_2657a8;
        case 0x2657bcu: goto label_2657bc;
        case 0x2657ccu: goto label_2657cc;
        default: break;
    }

    ctx->pc = 0x2654d0u;

    // 0x2654d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2654d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2654d4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2654d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2654d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2654d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2654dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2654dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2654e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2654e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2654e4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2654e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2654e8: 0x2472f9e0  addiu       $s2, $v1, -0x620
    ctx->pc = 0x2654e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965728));
    // 0x2654ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2654ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2654f0: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x2654f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E650u));
    // 0x2654f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2654f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2654f8: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x2654F8u;
    {
        const bool branch_taken_0x2654f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2654f8) {
            ctx->pc = 0x265830u;
            goto label_265830;
        }
    }
    ctx->pc = 0x265500u;
    // 0x265500: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x265500u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265504: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x265504u;
    {
        const bool branch_taken_0x265504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265504) {
            ctx->pc = 0x265638u;
            goto label_265638;
        }
    }
    ctx->pc = 0x26550Cu;
label_26550c:
    // 0x26550c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265510: 0x2221804  sllv        $v1, $v0, $s1
    ctx->pc = 0x265510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x265514: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265518: 0x8c22fcac  lw          $v0, -0x354($at)
    ctx->pc = 0x265518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FCACu));
    // 0x26551c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26551cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x265520: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x265520u;
    {
        const bool branch_taken_0x265520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265520) {
            ctx->pc = 0x2655B0u;
            goto label_2655b0;
        }
    }
    ctx->pc = 0x265528u;
    // 0x265528: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x265528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x26552c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x26552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x265530: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x265530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x265534: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x265534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x265538: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x265538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x26553c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x26553cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265540: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x265544: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x265544u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265548: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x265548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26554c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265550: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265554: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x265554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x265558: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x265558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x26555c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x26555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x265560: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x265560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x265564: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x265564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x265568: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x265568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x26556c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x26556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x265574: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x265574u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265578: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x265578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26557c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265584: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x265584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x265588: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26558c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x26558cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265590: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x265590u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265594: 0x8ca415b4  lw          $a0, 0x15B4($a1)
    ctx->pc = 0x265594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5556)));
    // 0x265598: 0x8c6515ac  lw          $a1, 0x15AC($v1)
    ctx->pc = 0x265598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5548)));
    // 0x26559c: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x26559cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2655a0: 0xc06af78  jal         func_1ABDE0
    ctx->pc = 0x2655A0u;
    SET_GPR_U32(ctx, 31, 0x2655A8u);
    ctx->pc = 0x1ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDE0u, 0x2655A0u, 0x2655A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655A8u;
label_2655a8:
    // 0x2655a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2655A8u;
    {
        const bool branch_taken_0x2655a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2655a8) {
            ctx->pc = 0x265630u;
            goto label_265630;
        }
    }
    ctx->pc = 0x2655B0u;
label_2655b0:
    // 0x2655b0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2655b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2655b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2655b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2655b8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2655b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2655bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2655bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2655c0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x2655c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x2655c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2655c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2655c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2655c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2655cc: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2655ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2655d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2655d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2655d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2655d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2655d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2655d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2655dc: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2655dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2655e0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2655e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2655e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2655e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2655e8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2655e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2655ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2655ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2655f0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x2655f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x2655f4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2655f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2655f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2655f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2655fc: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2655fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265600: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x265600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x265604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265608: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x265608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26560c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x26560cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x265610: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x265614: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x265614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265618: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x265618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26561c: 0x8ca415b4  lw          $a0, 0x15B4($a1)
    ctx->pc = 0x26561cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5556)));
    // 0x265620: 0x8c6515ac  lw          $a1, 0x15AC($v1)
    ctx->pc = 0x265620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5548)));
    // 0x265624: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x265624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x265628: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x265628u;
    SET_GPR_U32(ctx, 31, 0x265630u);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x265628u, 0x265630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265630u;
label_265630:
    // 0x265630: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x265630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x265634: 0x0  nop
    ctx->pc = 0x265634u;
    // NOP
label_265638:
    // 0x265638: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26563c: 0x8c23fca4  lw          $v1, -0x35C($at)
    ctx->pc = 0x26563cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCA4u));
    // 0x265640: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x265640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x265644: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x265644u;
    {
        const bool branch_taken_0x265644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265644) {
            ctx->pc = 0x26550Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26550c;
        }
    }
    ctx->pc = 0x26564Cu;
    // 0x26564c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x26564cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265650: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x265650u;
    {
        const bool branch_taken_0x265650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265650) {
            ctx->pc = 0x265818u;
            goto label_265818;
        }
    }
    ctx->pc = 0x265658u;
label_265658:
    // 0x265658: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x265658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26565c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x265660: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x265660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x265664: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x265664u;
    {
        const bool branch_taken_0x265664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265664) {
            ctx->pc = 0x265810u;
            goto label_265810;
        }
    }
    ctx->pc = 0x26566Cu;
    // 0x26566c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x265670: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x265670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x265674: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x265674u;
    {
        const bool branch_taken_0x265674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265674) {
            ctx->pc = 0x2657D4u;
            goto label_2657d4;
        }
    }
    ctx->pc = 0x26567Cu;
    // 0x26567c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x265680: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x265680u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265684: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x265684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x265688: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x265688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x26568c: 0xc095c94  jal         func_257250
    ctx->pc = 0x26568Cu;
    SET_GPR_U32(ctx, 31, 0x265694u);
    ctx->pc = 0x257250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257250u, 0x26568Cu, 0x265694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265694u;
label_265694:
    // 0x265694: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x265694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x265698: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x265698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26569c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x26569cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2656a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2656A0u;
    {
        const bool branch_taken_0x2656a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656a0) {
            ctx->pc = 0x2656BCu;
            goto label_2656bc;
        }
    }
    ctx->pc = 0x2656A8u;
    // 0x2656a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2656a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2656ac: 0xc0771a0  jal         func_1DC680
    ctx->pc = 0x2656ACu;
    SET_GPR_U32(ctx, 31, 0x2656B4u);
    ctx->pc = 0x1DC680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC680u, 0x2656ACu, 0x2656B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656B4u;
label_2656b4:
    // 0x2656b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2656B4u;
    {
        const bool branch_taken_0x2656b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656b4) {
            ctx->pc = 0x265718u;
            goto label_265718;
        }
    }
    ctx->pc = 0x2656BCu;
label_2656bc:
    // 0x2656bc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2656bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2656c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2656c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2656c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2656c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2656c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2656C8u;
    {
        const bool branch_taken_0x2656c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656c8) {
            ctx->pc = 0x2656E4u;
            goto label_2656e4;
        }
    }
    ctx->pc = 0x2656D0u;
    // 0x2656d0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2656d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2656d4: 0xc0771f8  jal         func_1DC7E0
    ctx->pc = 0x2656D4u;
    SET_GPR_U32(ctx, 31, 0x2656DCu);
    ctx->pc = 0x1DC7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC7E0u, 0x2656D4u, 0x2656DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656DCu;
label_2656dc:
    // 0x2656dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2656DCu;
    {
        const bool branch_taken_0x2656dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656dc) {
            ctx->pc = 0x265718u;
            goto label_265718;
        }
    }
    ctx->pc = 0x2656E4u;
label_2656e4:
    // 0x2656e4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2656e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2656e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2656e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2656ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2656ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2656f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2656F0u;
    {
        const bool branch_taken_0x2656f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656f0) {
            ctx->pc = 0x26570Cu;
            goto label_26570c;
        }
    }
    ctx->pc = 0x2656F8u;
    // 0x2656f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2656f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2656fc: 0xc077674  jal         func_1DD9D0
    ctx->pc = 0x2656FCu;
    SET_GPR_U32(ctx, 31, 0x265704u);
    ctx->pc = 0x1DD9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9D0u, 0x2656FCu, 0x265704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265704u;
label_265704:
    // 0x265704: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x265704u;
    {
        const bool branch_taken_0x265704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265704) {
            ctx->pc = 0x265718u;
            goto label_265718;
        }
    }
    ctx->pc = 0x26570Cu;
label_26570c:
    // 0x26570c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26570cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265710: 0xc0772f0  jal         func_1DCBC0
    ctx->pc = 0x265710u;
    SET_GPR_U32(ctx, 31, 0x265718u);
    ctx->pc = 0x1DCBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBC0u, 0x265710u, 0x265718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265718u;
label_265718:
    // 0x265718: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x265718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26571c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x265720: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x265720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x265724: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x265724u;
    {
        const bool branch_taken_0x265724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265724) {
            ctx->pc = 0x2657C0u;
            goto label_2657c0;
        }
    }
    ctx->pc = 0x26572Cu;
    // 0x26572c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x265730: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x265730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x265734: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x265734u;
    {
        const bool branch_taken_0x265734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265734) {
            ctx->pc = 0x2657B0u;
            goto label_2657b0;
        }
    }
    ctx->pc = 0x26573Cu;
    // 0x26573c: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x26573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265740: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x265740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x265744: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x265744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x265748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265748u;
    {
        const bool branch_taken_0x265748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265748) {
            ctx->pc = 0x265764u;
            goto label_265764;
        }
    }
    ctx->pc = 0x265750u;
    // 0x265750: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265750u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265754: 0xc0d8554  jal         func_361550
    ctx->pc = 0x265754u;
    SET_GPR_U32(ctx, 31, 0x26575Cu);
    ctx->pc = 0x361550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361550u, 0x265754u, 0x26575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26575Cu;
label_26575c:
    // 0x26575c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26575Cu;
    {
        const bool branch_taken_0x26575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26575c) {
            ctx->pc = 0x2657C0u;
            goto label_2657c0;
        }
    }
    ctx->pc = 0x265764u;
label_265764:
    // 0x265764: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x265764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x265768: 0xa20211ec  sb          $v0, 0x11EC($s0)
    ctx->pc = 0x265768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x26576c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26576cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x265770: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x265770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265774: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x265774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265778: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26577c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x26577cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x265780: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x265780u;
    SET_GPR_U32(ctx, 31, 0x265788u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x265780u, 0x265788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265788u;
label_265788:
    // 0x265788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26578c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x26578cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x265790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x265794: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x265794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265798: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265798u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26579c: 0x920511ec  lbu         $a1, 0x11EC($s0)
    ctx->pc = 0x26579cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4588)));
    // 0x2657a0: 0xc096234  jal         func_2588D0
    ctx->pc = 0x2657A0u;
    SET_GPR_U32(ctx, 31, 0x2657A8u);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x2657A0u, 0x2657A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657A8u;
label_2657a8:
    // 0x2657a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2657A8u;
    {
        const bool branch_taken_0x2657a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2657a8) {
            ctx->pc = 0x2657C0u;
            goto label_2657c0;
        }
    }
    ctx->pc = 0x2657B0u;
label_2657b0:
    // 0x2657b0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2657b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2657b4: 0xc0d84e8  jal         func_3613A0
    ctx->pc = 0x2657B4u;
    SET_GPR_U32(ctx, 31, 0x2657BCu);
    ctx->pc = 0x3613A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3613A0u, 0x2657B4u, 0x2657BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657BCu;
label_2657bc:
    // 0x2657bc: 0x0  nop
    ctx->pc = 0x2657bcu;
    // NOP
label_2657c0:
    // 0x2657c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2657c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2657c4: 0xc077058  jal         func_1DC160
    ctx->pc = 0x2657C4u;
    SET_GPR_U32(ctx, 31, 0x2657CCu);
    ctx->pc = 0x1DC160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC160u, 0x2657C4u, 0x2657CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657CCu;
label_2657cc:
    // 0x2657cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2657CCu;
    {
        const bool branch_taken_0x2657cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2657cc) {
            ctx->pc = 0x265810u;
            goto label_265810;
        }
    }
    ctx->pc = 0x2657D4u;
label_2657d4:
    // 0x2657d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2657d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2657d8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2657d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2657dc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2657dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2657e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2657e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2657e4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2657e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2657e8: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x2657e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2657ec: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2657ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2657f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2657f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2657f4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2657f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2657f8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2657f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2657fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2657fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x265800: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x265800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x265804: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x265804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x265808: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x265808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x26580c: 0x0  nop
    ctx->pc = 0x26580cu;
    // NOP
label_265810:
    // 0x265810: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x265810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x265814: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x265814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_265818:
    // 0x265818: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26581c: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x26581cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E650u));
    // 0x265820: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x265820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x265824: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x265824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265828: 0x1460ff8b  bnez        $v1, . + 4 + (-0x75 << 2)
    ctx->pc = 0x265828u;
    {
        const bool branch_taken_0x265828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265828) {
            ctx->pc = 0x265658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265658;
        }
    }
    ctx->pc = 0x265830u;
label_265830:
    // 0x265830: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x265830u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26583c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26583cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265840: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x265840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x265844: 0x3e00008  jr          $ra
    ctx->pc = 0x265844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26584Cu;
}
