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

// Function: Strip_set_sp
// Address: 0x18d4b0 - 0x18dc70
void Strip_set_sp_0x18d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_set_sp_0x18d4b0");
#endif

    switch (ctx->pc) {
        case 0x18d608u: goto label_18d608;
        case 0x18d670u: goto label_18d670;
        case 0x18d85cu: goto label_18d85c;
        case 0x18d868u: goto label_18d868;
        case 0x18d874u: goto label_18d874;
        case 0x18d880u: goto label_18d880;
        case 0x18d8ecu: goto label_18d8ec;
        case 0x18d900u: goto label_18d900;
        case 0x18d958u: goto label_18d958;
        case 0x18d97cu: goto label_18d97c;
        case 0x18d9a8u: goto label_18d9a8;
        case 0x18da14u: goto label_18da14;
        case 0x18da28u: goto label_18da28;
        default: break;
    }

    ctx->pc = 0x18d4b0u;

    // 0x18d4b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18d4b4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x18d4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x18d4b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18d4bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18d4c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18d4c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18d4c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18d4cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18d4d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d4d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d4d8: 0xffa40090  sd          $a0, 0x90($sp)
    ctx->pc = 0x18d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 4));
    // 0x18d4dc: 0xffa50098  sd          $a1, 0x98($sp)
    ctx->pc = 0x18d4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 5));
    // 0x18d4e0: 0xffa600a0  sd          $a2, 0xA0($sp)
    ctx->pc = 0x18d4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 6));
    // 0x18d4e4: 0xffa700a8  sd          $a3, 0xA8($sp)
    ctx->pc = 0x18d4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 7));
    // 0x18d4e8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18d4ec: 0x2443a630  addiu       $v1, $v0, -0x59D0
    ctx->pc = 0x18d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18d4f0: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x18d4f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x18d4f4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18d4f8: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18d4fc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18d4fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18d500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18d504: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x18d504u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x18d508: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18d508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18d50c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D510u;
    {
        const bool branch_taken_0x18d510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d510) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D518u;
    // 0x18d518: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x18d518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x18d51c: 0x34620011  ori         $v0, $v1, 0x11
    ctx->pc = 0x18d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x18d520: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x18D520u;
    {
        const bool branch_taken_0x18d520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d520) {
            ctx->pc = 0x18DC40u;
            goto label_18dc40;
        }
    }
    ctx->pc = 0x18D528u;
label_18d528:
    // 0x18d528: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d528u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d52c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d530: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x18d530u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d534: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x18d534u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x18d538: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x18d538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x18d53c: 0x24626ef0  addiu       $v0, $v1, 0x6EF0
    ctx->pc = 0x18d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28400));
    // 0x18d540: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x18d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18d544: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x18d544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d548: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18d548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d54c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d550: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x18d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d554: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d558: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x18d558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18d55c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d560: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18d560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18d564: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18d564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18d568: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18d568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d56c: 0x92220097  lbu         $v0, 0x97($s1)
    ctx->pc = 0x18d56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 151)));
    // 0x18d570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d574: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D574u;
    {
        const bool branch_taken_0x18d574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d574) {
            ctx->pc = 0x18D58Cu;
            goto label_18d58c;
        }
    }
    ctx->pc = 0x18D57Cu;
    // 0x18d57c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d580: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18d580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18d584: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x18D584u;
    {
        const bool branch_taken_0x18d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d584) {
            ctx->pc = 0x18DC40u;
            goto label_18dc40;
        }
    }
    ctx->pc = 0x18D58Cu;
label_18d58c:
    // 0x18d58c: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d58cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d590: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x18d590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d594: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18d594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d598: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x18d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x18d59c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x18d59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d5a0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x18d5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18d5a4: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x18d5a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d5a8: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x18d5a8u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x18d5ac: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x18d5acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x18d5b0: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x18d5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d5b4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18d5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d5b8: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x18d5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x18d5bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d5c0: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x18d5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x18d5c4: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x18d5c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d5c8: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x18d5c8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x18d5cc: 0xdfa400a8  ld          $a0, 0xA8($sp)
    ctx->pc = 0x18d5ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x18d5d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d5d4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x18d5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x18d5d8: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x18d5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18d5dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x18d5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x18d5e0: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x18d5e0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d5e4: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x18d5e4u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x18d5e8: 0x32c28000  andi        $v0, $s6, 0x8000
    ctx->pc = 0x18d5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
    // 0x18d5ec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18D5ECu;
    {
        const bool branch_taken_0x18d5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5ec) {
            ctx->pc = 0x18D668u;
            goto label_18d668;
        }
    }
    ctx->pc = 0x18D5F4u;
    // 0x18d5f4: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x18d5f4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18d5f8: 0x8e421214  lw          $v0, 0x1214($s2)
    ctx->pc = 0x18d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4628)));
    // 0x18d5fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18d5fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d600: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18D600u;
    {
        const bool branch_taken_0x18d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d600) {
            ctx->pc = 0x18D628u;
            goto label_18d628;
        }
    }
    ctx->pc = 0x18D608u;
label_18d608:
    // 0x18d608: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x18d60c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D60Cu;
    {
        const bool branch_taken_0x18d60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d60c) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D614u;
    // 0x18d614: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x18d614u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d618: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18D618u;
    {
        const bool branch_taken_0x18d618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d618) {
            ctx->pc = 0x18D650u;
            goto label_18d650;
        }
    }
    ctx->pc = 0x18D620u;
label_18d620:
    // 0x18d620: 0x26020b30  addiu       $v0, $s0, 0xB30
    ctx->pc = 0x18d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
    // 0x18d624: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18d624u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18d628:
    // 0x18d628: 0x8e441214  lw          $a0, 0x1214($s2)
    ctx->pc = 0x18d628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4628)));
    // 0x18d62c: 0x92421218  lbu         $v0, 0x1218($s2)
    ctx->pc = 0x18d62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4632)));
    // 0x18d630: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18d630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d634: 0x24020b30  addiu       $v0, $zero, 0xB30
    ctx->pc = 0x18d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
    // 0x18d638: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x18d638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18d63c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18d640: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x18d640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18d644: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18D644u;
    {
        const bool branch_taken_0x18d644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d644) {
            ctx->pc = 0x18D608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d608;
        }
    }
    ctx->pc = 0x18D64Cu;
    // 0x18d64c: 0x0  nop
    ctx->pc = 0x18d64cu;
    // NOP
label_18d650:
    // 0x18d650: 0x1680000f  bnez        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x18D650u;
    {
        const bool branch_taken_0x18d650 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d650) {
            ctx->pc = 0x18D690u;
            goto label_18d690;
        }
    }
    ctx->pc = 0x18D658u;
    // 0x18d658: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d65c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18d65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18d660: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x18D660u;
    {
        const bool branch_taken_0x18d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d660) {
            ctx->pc = 0x18DC40u;
            goto label_18dc40;
        }
    }
    ctx->pc = 0x18D668u;
label_18d668:
    // 0x18d668: 0xc062f14  jal         func_18BC50
    ctx->pc = 0x18D668u;
    SET_GPR_U32(ctx, 31, 0x18D670u);
    ctx->pc = 0x18BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BC50u, 0x18D668u, 0x18D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D670u;
label_18d670:
    // 0x18d670: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18d670u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d674: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d678: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18d678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18d67c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D67Cu;
    {
        const bool branch_taken_0x18d67c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d67c) {
            ctx->pc = 0x18D690u;
            goto label_18d690;
        }
    }
    ctx->pc = 0x18D684u;
    // 0x18d684: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18d684u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18d688: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x18D688u;
    {
        const bool branch_taken_0x18d688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d688) {
            ctx->pc = 0x18DC40u;
            goto label_18dc40;
        }
    }
    ctx->pc = 0x18D690u;
label_18d690:
    // 0x18d690: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18d694: 0xae020b18  sw          $v0, 0xB18($s0)
    ctx->pc = 0x18d694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 2));
    // 0x18d698: 0xae150350  sw          $s5, 0x350($s0)
    ctx->pc = 0x18d698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 21));
    // 0x18d69c: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d69cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d6a0: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x18d6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x18d6a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d6a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d6ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d6acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d6b0: 0xae020354  sw          $v0, 0x354($s0)
    ctx->pc = 0x18d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 2));
    // 0x18d6b4: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d6b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d6b8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x18d6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x18d6bc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x18d6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x18d6c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d6c4: 0xa202036a  sb          $v0, 0x36A($s0)
    ctx->pc = 0x18d6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 874), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d6c8: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d6c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d6cc: 0x2153a  dsrl        $v0, $v0, 20
    ctx->pc = 0x18d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 20);
    // 0x18d6d0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x18d6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x18d6d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d6d8: 0xa2020342  sb          $v0, 0x342($s0)
    ctx->pc = 0x18d6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 834), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d6dc: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d6dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d6e0: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x18d6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x18d6e4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x18d6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x18d6e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d6ec: 0xa2020343  sb          $v0, 0x343($s0)
    ctx->pc = 0x18d6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 835), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d6f0: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d6f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d6f4: 0x216ba  dsrl        $v0, $v0, 26
    ctx->pc = 0x18d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 26);
    // 0x18d6f8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x18d6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x18d6fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d700: 0xa2020347  sb          $v0, 0x347($s0)
    ctx->pc = 0x18d700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 839), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d704: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x18d704u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d708: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18d708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d70c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d710: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d714: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d718: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d71c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18d720: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18d720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x18d724: 0xae110ac0  sw          $s1, 0xAC0($s0)
    ctx->pc = 0x18d724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2752), GPR_U32(ctx, 17));
    // 0x18d728: 0x92020347  lbu         $v0, 0x347($s0)
    ctx->pc = 0x18d728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 839)));
    // 0x18d72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18d734: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d738: 0xa2020349  sb          $v0, 0x349($s0)
    ctx->pc = 0x18d738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 841), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d73c: 0x92020347  lbu         $v0, 0x347($s0)
    ctx->pc = 0x18d73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 839)));
    // 0x18d740: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d744: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d748: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x18d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x18d74c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d750: 0xa202034a  sb          $v0, 0x34A($s0)
    ctx->pc = 0x18d750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 842), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d754: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d758: 0xa202034b  sb          $v0, 0x34B($s0)
    ctx->pc = 0x18d758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 843), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d75c: 0xa2000345  sb          $zero, 0x345($s0)
    ctx->pc = 0x18d75cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 837), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d764: 0xa2020348  sb          $v0, 0x348($s0)
    ctx->pc = 0x18d764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 840), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d768: 0xa200034f  sb          $zero, 0x34F($s0)
    ctx->pc = 0x18d768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d76c: 0xa200034e  sb          $zero, 0x34E($s0)
    ctx->pc = 0x18d76cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 846), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d770: 0xa2000abc  sb          $zero, 0xABC($s0)
    ctx->pc = 0x18d770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2748), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d774: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x18d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x18d778: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x18d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x18d77c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d780: 0x0  nop
    ctx->pc = 0x18d780u;
    // NOP
    // 0x18d784: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x18d784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x18d788: 0xdfa200a0  ld          $v0, 0xA0($sp)
    ctx->pc = 0x18d788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18d78c: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18d78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d790: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d794: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d798: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d79c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d7a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d7a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d7a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d7a8: 0xae020320  sw          $v0, 0x320($s0)
    ctx->pc = 0x18d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
    // 0x18d7ac: 0xdfa300a0  ld          $v1, 0xA0($sp)
    ctx->pc = 0x18d7acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18d7b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d7b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d7b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d7bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d7c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d7c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d7c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d7c8: 0xae020324  sw          $v0, 0x324($s0)
    ctx->pc = 0x18d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 2));
    // 0x18d7cc: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x18d7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x18d7d0: 0xa2020344  sb          $v0, 0x344($s0)
    ctx->pc = 0x18d7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 836), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d7d4: 0xdfa20098  ld          $v0, 0x98($sp)
    ctx->pc = 0x18d7d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18d7d8: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18d7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d7dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d7e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d7e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d7e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d7ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d7f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d7f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18d7f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d7f8: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x18d7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x18d7fc: 0x260202b0  addiu       $v0, $s0, 0x2B0
    ctx->pc = 0x18d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x18d800: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18d800u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18d804: 0xdfa30098  ld          $v1, 0x98($sp)
    ctx->pc = 0x18d804u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18d808: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d80c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d814: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d81c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d81cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d820: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18d820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d824: 0x92020344  lbu         $v0, 0x344($s0)
    ctx->pc = 0x18d824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x18d828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d82c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d830: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18d834: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18d834u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18d838: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x18d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x18d83c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18d840: 0xae000358  sw          $zero, 0x358($s0)
    ctx->pc = 0x18d840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 0));
    // 0x18d844: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x18d844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
    // 0x18d848: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x18d848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x18d84c: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x18d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x18d850: 0x26040a70  addiu       $a0, $s0, 0xA70
    ctx->pc = 0x18d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2672));
    // 0x18d854: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18D854u;
    SET_GPR_U32(ctx, 31, 0x18D85Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18D854u, 0x18D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D85Cu;
label_18d85c:
    // 0x18d85c: 0x26040a80  addiu       $a0, $s0, 0xA80
    ctx->pc = 0x18d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2688));
    // 0x18d860: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18D860u;
    SET_GPR_U32(ctx, 31, 0x18D868u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18D860u, 0x18D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D868u;
label_18d868:
    // 0x18d868: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x18d868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x18d86c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18D86Cu;
    SET_GPR_U32(ctx, 31, 0x18D874u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18D86Cu, 0x18D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D874u;
label_18d874:
    // 0x18d874: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x18d874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x18d878: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18D878u;
    SET_GPR_U32(ctx, 31, 0x18D880u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18D878u, 0x18D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D880u;
label_18d880:
    // 0x18d880: 0xa2000b1c  sb          $zero, 0xB1C($s0)
    ctx->pc = 0x18d880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2844), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d884: 0xa2000368  sb          $zero, 0x368($s0)
    ctx->pc = 0x18d884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 872), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d888: 0xa2000369  sb          $zero, 0x369($s0)
    ctx->pc = 0x18d888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 873), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d88c: 0xa2000b1e  sb          $zero, 0xB1E($s0)
    ctx->pc = 0x18d88cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2846), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d890: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x18d890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x18d894: 0x9202036a  lbu         $v0, 0x36A($s0)
    ctx->pc = 0x18d894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 874)));
    // 0x18d898: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18d898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d89c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d8a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d8a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18d8a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18d8ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18d8b0: 0xae020ac4  sw          $v0, 0xAC4($s0)
    ctx->pc = 0x18d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2756), GPR_U32(ctx, 2));
    // 0x18d8b4: 0x8e020ac4  lw          $v0, 0xAC4($s0)
    ctx->pc = 0x18d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2756)));
    // 0x18d8b8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18d8bc: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x18d8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x18d8c0: 0xa2020b1d  sb          $v0, 0xB1D($s0)
    ctx->pc = 0x18d8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2845), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d8c4: 0xa200034c  sb          $zero, 0x34C($s0)
    ctx->pc = 0x18d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 844), (uint8_t)GPR_U32(ctx, 0));
    // 0x18d8c8: 0x8e020ac0  lw          $v0, 0xAC0($s0)
    ctx->pc = 0x18d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2752)));
    // 0x18d8cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18d8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d8d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d8d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18d8d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D8D8u;
    {
        const bool branch_taken_0x18d8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d8d8) {
            ctx->pc = 0x18D8F4u;
            goto label_18d8f4;
        }
    }
    ctx->pc = 0x18D8E0u;
    // 0x18d8e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18d8e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18d8e4: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x18D8E4u;
    SET_GPR_U32(ctx, 31, 0x18D8ECu);
    ctx->pc = 0x326B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B90u, 0x18D8E4u, 0x18D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D8ECu;
label_18d8ec:
    // 0x18d8ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D8ECu;
    {
        const bool branch_taken_0x18d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d8ec) {
            ctx->pc = 0x18D900u;
            goto label_18d900;
        }
    }
    ctx->pc = 0x18D8F4u;
label_18d8f4:
    // 0x18d8f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18d8f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18d8f8: 0xc0c99d8  jal         func_326760
    ctx->pc = 0x18D8F8u;
    SET_GPR_U32(ctx, 31, 0x18D900u);
    ctx->pc = 0x326760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326760u, 0x18D8F8u, 0x18D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D900u;
label_18d900:
    // 0x18d900: 0xae000ab8  sw          $zero, 0xAB8($s0)
    ctx->pc = 0x18d900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 0));
    // 0x18d904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d90c: 0x0  nop
    ctx->pc = 0x18d90cu;
    // NOP
    // 0x18d910: 0xe60002e0  swc1        $f0, 0x2E0($s0)
    ctx->pc = 0x18d910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x18d914: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d91c: 0x0  nop
    ctx->pc = 0x18d91cu;
    // NOP
    // 0x18d920: 0xe60002e4  swc1        $f0, 0x2E4($s0)
    ctx->pc = 0x18d920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x18d924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d92c: 0x0  nop
    ctx->pc = 0x18d92cu;
    // NOP
    // 0x18d930: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x18d930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x18d934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d93c: 0x0  nop
    ctx->pc = 0x18d93cu;
    // NOP
    // 0x18d940: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x18d940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
    // 0x18d944: 0x26040270  addiu       $a0, $s0, 0x270
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x18d948: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18d948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18d94c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x18d94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d950: 0xc046314  jal         func_118C50
    ctx->pc = 0x18D950u;
    SET_GPR_U32(ctx, 31, 0x18D958u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x18D958u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18D958u) { return; }
    ctx->pc = 0x18D958u;
label_18d958:
    // 0x18d958: 0x92020343  lbu         $v0, 0x343($s0)
    ctx->pc = 0x18d958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 835)));
    // 0x18d95c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d960: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18d964: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18D964u;
    {
        const bool branch_taken_0x18d964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d964) {
            ctx->pc = 0x18D9CCu;
            goto label_18d9cc;
        }
    }
    ctx->pc = 0x18D96Cu;
    // 0x18d96c: 0x260403c0  addiu       $a0, $s0, 0x3C0
    ctx->pc = 0x18d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x18d970: 0x8e050324  lw          $a1, 0x324($s0)
    ctx->pc = 0x18d970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x18d974: 0xc040ca2  jal         func_103288
    ctx->pc = 0x18D974u;
    SET_GPR_U32(ctx, 31, 0x18D97Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x18D97Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18D97Cu) { return; }
    ctx->pc = 0x18D97Cu;
label_18d97c:
    // 0x18d97c: 0x92020344  lbu         $v0, 0x344($s0)
    ctx->pc = 0x18d97cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x18d980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d984: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d988: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x18d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18d98c: 0x92020344  lbu         $v0, 0x344($s0)
    ctx->pc = 0x18d98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x18d990: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d994: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d998: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x18d998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18d99c: 0x260503c0  addiu       $a1, $s0, 0x3C0
    ctx->pc = 0x18d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x18d9a0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x18D9A0u;
    SET_GPR_U32(ctx, 31, 0x18D9A8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x18D9A8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18D9A8u) { return; }
    ctx->pc = 0x18D9A8u;
label_18d9a8:
    // 0x18d9a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d9ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d9b0: 0x92020344  lbu         $v0, 0x344($s0)
    ctx->pc = 0x18d9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x18d9b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d9b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d9bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18d9c0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18d9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18d9c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18D9C4u;
    {
        const bool branch_taken_0x18d9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9c4) {
            ctx->pc = 0x18D9F0u;
            goto label_18d9f0;
        }
    }
    ctx->pc = 0x18D9CCu;
label_18d9cc:
    // 0x18d9cc: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18d9ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18d9d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18d9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18d9d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18d9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18d9d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D9D8u;
    {
        const bool branch_taken_0x18d9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9d8) {
            ctx->pc = 0x18D9F0u;
            goto label_18d9f0;
        }
    }
    ctx->pc = 0x18D9E0u;
    // 0x18d9e0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d9e4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18d9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18d9e8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x18D9E8u;
    {
        const bool branch_taken_0x18d9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9e8) {
            ctx->pc = 0x18DC40u;
            goto label_18dc40;
        }
    }
    ctx->pc = 0x18D9F0u;
label_18d9f0:
    // 0x18d9f0: 0x92020343  lbu         $v0, 0x343($s0)
    ctx->pc = 0x18d9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 835)));
    // 0x18d9f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d9f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18d9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18d9fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18D9FCu;
    {
        const bool branch_taken_0x18d9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9fc) {
            ctx->pc = 0x18DA40u;
            goto label_18da40;
        }
    }
    ctx->pc = 0x18DA04u;
    // 0x18da04: 0x26040380  addiu       $a0, $s0, 0x380
    ctx->pc = 0x18da04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    // 0x18da08: 0x8e050320  lw          $a1, 0x320($s0)
    ctx->pc = 0x18da08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x18da0c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x18DA0Cu;
    SET_GPR_U32(ctx, 31, 0x18DA14u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x18DA14u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18DA14u) { return; }
    ctx->pc = 0x18DA14u;
label_18da14:
    // 0x18da14: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18da14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18da18: 0x26050380  addiu       $a1, $s0, 0x380
    ctx->pc = 0x18da18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    // 0x18da1c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x18da1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18da20: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x18DA20u;
    SET_GPR_U32(ctx, 31, 0x18DA28u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x18DA28u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18DA28u) { return; }
    ctx->pc = 0x18DA28u;
label_18da28:
    // 0x18da28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18da28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18da2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18da2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18da30: 0x0  nop
    ctx->pc = 0x18da30u;
    // NOP
    // 0x18da34: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x18da34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x18da38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18DA38u;
    {
        const bool branch_taken_0x18da38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da38) {
            ctx->pc = 0x18DA64u;
            goto label_18da64;
        }
    }
    ctx->pc = 0x18DA40u;
label_18da40:
    // 0x18da40: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18da40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18da44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18da44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18da48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18da4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DA4Cu;
    {
        const bool branch_taken_0x18da4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da4c) {
            ctx->pc = 0x18DA64u;
            goto label_18da64;
        }
    }
    ctx->pc = 0x18DA54u;
    // 0x18da54: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18da54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18da58: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18da58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18da5c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x18DA5Cu;
    {
        const bool branch_taken_0x18da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da5c) {
            ctx->pc = 0x18DC40u;
            goto label_18dc40;
        }
    }
    ctx->pc = 0x18DA64u;
label_18da64:
    // 0x18da64: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18da64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18da68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18da68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18da6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18da6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18da70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DA70u;
    {
        const bool branch_taken_0x18da70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da70) {
            ctx->pc = 0x18DA88u;
            goto label_18da88;
        }
    }
    ctx->pc = 0x18DA78u;
    // 0x18da78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18da7c: 0xfe020a90  sd          $v0, 0xA90($s0)
    ctx->pc = 0x18da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2704), GPR_U64(ctx, 2));
    // 0x18da80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18DA80u;
    {
        const bool branch_taken_0x18da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da80) {
            ctx->pc = 0x18DA90u;
            goto label_18da90;
        }
    }
    ctx->pc = 0x18DA88u;
label_18da88:
    // 0x18da88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18da8c: 0xfe020a90  sd          $v0, 0xA90($s0)
    ctx->pc = 0x18da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2704), GPR_U64(ctx, 2));
label_18da90:
    // 0x18da90: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18da90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18da94: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18da94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18da98: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18da98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x18da9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DA9Cu;
    {
        const bool branch_taken_0x18da9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da9c) {
            ctx->pc = 0x18DAC0u;
            goto label_18dac0;
        }
    }
    ctx->pc = 0x18DAA4u;
    // 0x18daa4: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18daa8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18daa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18daac: 0x24020368  addiu       $v0, $zero, 0x368
    ctx->pc = 0x18daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x18dab0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18dab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18dab4: 0xfe020a98  sd          $v0, 0xA98($s0)
    ctx->pc = 0x18dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2712), GPR_U64(ctx, 2));
    // 0x18dab8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18DAB8u;
    {
        const bool branch_taken_0x18dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dab8) {
            ctx->pc = 0x18DAD4u;
            goto label_18dad4;
        }
    }
    ctx->pc = 0x18DAC0u;
label_18dac0:
    // 0x18dac0: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18dac4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18dac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dac8: 0x24020360  addiu       $v0, $zero, 0x360
    ctx->pc = 0x18dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x18dacc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18daccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18dad0: 0xfe020a98  sd          $v0, 0xA98($s0)
    ctx->pc = 0x18dad0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2712), GPR_U64(ctx, 2));
label_18dad4:
    // 0x18dad4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18dad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dad8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x18dad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18dadc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18dadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18dae0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18DAE0u;
    {
        const bool branch_taken_0x18dae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dae0) {
            ctx->pc = 0x18DB50u;
            goto label_18db50;
        }
    }
    ctx->pc = 0x18DAE8u;
    // 0x18dae8: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18daec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18daecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18daf0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18daf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18daf4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18daf8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18daf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18dafc: 0x3c150130  lui         $s5, 0x130
    ctx->pc = 0x18dafcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)304 << 16));
    // 0x18db00: 0x551825  or          $v1, $v0, $s5
    ctx->pc = 0x18db00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x18db04: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18db08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18db08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18db0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18db10: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x18db10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18db14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18db18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18db1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18db1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db20: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x18db20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18db24: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x18db24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18db28: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x18db28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18db2c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18db2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18db30: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18db30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18db34: 0x828825  or          $s1, $a0, $v0
    ctx->pc = 0x18db34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18db38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18db38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18db3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db40: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x18db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x18db44: 0xfe020aa0  sd          $v0, 0xAA0($s0)
    ctx->pc = 0x18db44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 2));
    // 0x18db48: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18DB48u;
    {
        const bool branch_taken_0x18db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db48) {
            ctx->pc = 0x18DBB0u;
            goto label_18dbb0;
        }
    }
    ctx->pc = 0x18DB50u;
label_18db50:
    // 0x18db50: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18db50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18db54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18db58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18db5c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x18db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x18db60: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x18db60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18db64: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x18db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x18db68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18db68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18db6c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18db70: 0x62b025  or          $s6, $v1, $v0
    ctx->pc = 0x18db70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18db74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18db74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18db78: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x18db78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db7c: 0x2c41825  or          $v1, $s6, $a0
    ctx->pc = 0x18db7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 4));
    // 0x18db80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18db80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18db84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18db84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18db88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18db8c: 0x8e320090  lw          $s2, 0x90($s1)
    ctx->pc = 0x18db8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18db90: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x18db90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x18db94: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x18db94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x18db98: 0x4117c  dsll32      $v0, $a0, 5
    ctx->pc = 0x18db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 5));
    // 0x18db9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18db9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18dba0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18dba4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18dba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dba8: 0x62b825  or          $s7, $v1, $v0
    ctx->pc = 0x18dba8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18dbac: 0xfe170aa0  sd          $s7, 0xAA0($s0)
    ctx->pc = 0x18dbacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 23));
label_18dbb0:
    // 0x18dbb0: 0x92020342  lbu         $v0, 0x342($s0)
    ctx->pc = 0x18dbb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 834)));
    // 0x18dbb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18dbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18dbb8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18dbbc: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x18dbbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x18dbc0: 0x26827290  addiu       $v0, $s4, 0x7290
    ctx->pc = 0x18dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 29328));
    // 0x18dbc4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dbc8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x18dbc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18dbcc: 0xfe020aa8  sd          $v0, 0xAA8($s0)
    ctx->pc = 0x18dbccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2728), GPR_U64(ctx, 2));
    // 0x18dbd0: 0x96030340  lhu         $v1, 0x340($s0)
    ctx->pc = 0x18dbd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18dbd4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x18dbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18dbd8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18dbdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DBDCu;
    {
        const bool branch_taken_0x18dbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbdc) {
            ctx->pc = 0x18DBF8u;
            goto label_18dbf8;
        }
    }
    ctx->pc = 0x18DBE4u;
    // 0x18dbe4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18dbe8: 0x34423011  ori         $v0, $v0, 0x3011
    ctx->pc = 0x18dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12305);
    // 0x18dbec: 0xfe020ab0  sd          $v0, 0xAB0($s0)
    ctx->pc = 0x18dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2736), GPR_U64(ctx, 2));
    // 0x18dbf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18DBF0u;
    {
        const bool branch_taken_0x18dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbf0) {
            ctx->pc = 0x18DC04u;
            goto label_18dc04;
        }
    }
    ctx->pc = 0x18DBF8u;
label_18dbf8:
    // 0x18dbf8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18dbfc: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x18dbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x18dc00: 0xfe020ab0  sd          $v0, 0xAB0($s0)
    ctx->pc = 0x18dc00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2736), GPR_U64(ctx, 2));
label_18dc04:
    // 0x18dc04: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x18dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x18dc08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DC08u;
    {
        const bool branch_taken_0x18dc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dc08) {
            ctx->pc = 0x18DC24u;
            goto label_18dc24;
        }
    }
    ctx->pc = 0x18DC10u;
    // 0x18dc10: 0xae70006c  sw          $s0, 0x6C($s3)
    ctx->pc = 0x18dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 16));
    // 0x18dc14: 0xae700068  sw          $s0, 0x68($s3)
    ctx->pc = 0x18dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 16));
    // 0x18dc18: 0xae000b20  sw          $zero, 0xB20($s0)
    ctx->pc = 0x18dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2848), GPR_U32(ctx, 0));
    // 0x18dc1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18DC1Cu;
    {
        const bool branch_taken_0x18dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dc1c) {
            ctx->pc = 0x18DC38u;
            goto label_18dc38;
        }
    }
    ctx->pc = 0x18DC24u;
label_18dc24:
    // 0x18dc24: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x18dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x18dc28: 0xae020b20  sw          $v0, 0xB20($s0)
    ctx->pc = 0x18dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2848), GPR_U32(ctx, 2));
    // 0x18dc2c: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x18dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x18dc30: 0xac500b24  sw          $s0, 0xB24($v0)
    ctx->pc = 0x18dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2852), GPR_U32(ctx, 16));
    // 0x18dc34: 0xae70006c  sw          $s0, 0x6C($s3)
    ctx->pc = 0x18dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 16));
label_18dc38:
    // 0x18dc38: 0xae000b24  sw          $zero, 0xB24($s0)
    ctx->pc = 0x18dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2852), GPR_U32(ctx, 0));
    // 0x18dc3c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18dc3cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18dc40:
    // 0x18dc40: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x18dc40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18dc44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18dc44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18dc48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18dc48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18dc4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18dc4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18dc50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18dc50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18dc54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18dc54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18dc58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18dc58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dc5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18dc5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dc60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18dc60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dc64: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x18dc64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18dc68: 0x3e00008  jr          $ra
    ctx->pc = 0x18DC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DC70u;
}
