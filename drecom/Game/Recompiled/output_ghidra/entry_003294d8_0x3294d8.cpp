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

// Function: entry_003294d8
// Address: 0x3294d8 - 0x329658
void entry_003294d8_0x3294d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003294d8_0x3294d8");
#endif

    switch (ctx->pc) {
        case 0x3295b0u: goto label_3295b0;
        case 0x329634u: goto label_329634;
        default: break;
    }

    ctx->pc = 0x3294d8u;

    // 0x3294d8: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x3294d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x3294dc: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3294dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3294e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3294e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3294e4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x3294e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3294e8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3294e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3294ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3294ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3294f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3294f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3294f4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x3294f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3294f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3294f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3294fc: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x3294fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x329500: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x329500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x329504: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x329504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x329508: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x329508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32950c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32950cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x329510: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x329510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x329514: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x329514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x329518: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x329518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x32951c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x329520: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x329520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x329524: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x329524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329528: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x329528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x32952c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32952cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x329530: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x329530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x329534: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x329534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x329538: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x329538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32953c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x329540: 0x2442e898  addiu       $v0, $v0, -0x1768
    ctx->pc = 0x329540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961304));
    // 0x329544: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x329544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x329548: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x329548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32954c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x32954cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x329550: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x329550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x329554: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x329554u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x329558: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x329558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x32955c: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x32955cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x329560: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x329560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x329564: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x329564u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x329568: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x329568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x32956c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x32956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x329570: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x329570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
    // 0x329574: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x329574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    // 0x329578: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x329578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x32957c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x32957cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x329580: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x329580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x329584: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x329584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x329588: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x329588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x32958c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x32958cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x329590: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x329590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329594: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x329594u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x329598: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x329598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x32959c: 0x24631a14  addiu       $v1, $v1, 0x1A14
    ctx->pc = 0x32959cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6676));
    // 0x3295a0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3295a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3295a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3295a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3295a8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3295A8u;
    SET_GPR_U32(ctx, 31, 0x3295B0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3295A8u, 0x3295B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295B0u;
label_3295b0:
    // 0x3295b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3295b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3295b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3295b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3295b8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3295b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x3295bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3295bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3295c0: 0x34631009  ori         $v1, $v1, 0x1009
    ctx->pc = 0x3295c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x3295c4: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x3295c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x3295c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3295c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3295cc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3295ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3295d0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3295d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3295d4: 0x61938  dsll        $v1, $a2, 4
    ctx->pc = 0x3295d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 4);
    // 0x3295d8: 0x3467000a  ori         $a3, $v1, 0xA
    ctx->pc = 0x3295d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x3295dc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3295dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3295e0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x3295e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3295e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3295e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3295e8: 0x333b8  dsll        $a2, $v1, 14
    ctx->pc = 0x3295e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 14);
    // 0x3295ec: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x3295ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x3295f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3295f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3295f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3295f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3295f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3295f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3295fc: 0x33638  dsll        $a2, $v1, 24
    ctx->pc = 0x3295fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 24);
    // 0x329600: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x329600u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x329604: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x329604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x329608: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x329608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32960c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32960cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x329610: 0x330bc  dsll32      $a2, $v1, 2
    ctx->pc = 0x329610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 2));
    // 0x329614: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x329614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x329618: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x329618u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x32961c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x32961cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x329620: 0x24631a14  addiu       $v1, $v1, 0x1A14
    ctx->pc = 0x329620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6676));
    // 0x329624: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x329624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x329628: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x329628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x32962c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32962Cu;
    SET_GPR_U32(ctx, 31, 0x329634u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32962Cu, 0x329634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329634u;
label_329634:
    // 0x329634: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x329634u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x329638: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x329638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x32963c: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x32963cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x329640: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x329640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x329644: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x329644u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x329648: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x329648u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x32964c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x32964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x329650: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329654: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x329654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    ctx->pc = 0x329658u;
}
