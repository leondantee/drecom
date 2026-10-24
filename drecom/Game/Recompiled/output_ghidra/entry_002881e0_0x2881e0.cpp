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

// Function: entry_002881e0
// Address: 0x2881e0 - 0x288380
void entry_002881e0_0x2881e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002881e0_0x2881e0");
#endif

    switch (ctx->pc) {
        case 0x28825cu: goto label_28825c;
        case 0x2882c4u: goto label_2882c4;
        case 0x288344u: goto label_288344;
        default: break;
    }

    ctx->pc = 0x2881e0u;

    // 0x2881e0: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2881e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2881e4: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x2881e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x2881e8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2881e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2881ec: 0x1e20c0  sll         $a0, $fp, 3
    ctx->pc = 0x2881ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x2881f0: 0x24837900  addiu       $v1, $a0, 0x7900
    ctx->pc = 0x2881f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x2881f4: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x2881f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2881f8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2881f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2881fc: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2881fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x288200: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x288200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x288204: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x288204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x288208: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x288208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x28820c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x28820cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x288210: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x288210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x288214: 0x24447000  addiu       $a0, $v0, 0x7000
    ctx->pc = 0x288214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x288218: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x288218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x28821c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x28821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x288220: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x288220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x288224: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x288224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x288228: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x288228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x28822c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x28822cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x288230: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x288230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x288234: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x288234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x288238: 0x3409fff9  ori         $t1, $zero, 0xFFF9
    ctx->pc = 0x288238u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28823c: 0x26080028  addiu       $t0, $s0, 0x28
    ctx->pc = 0x28823cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x288240: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x288240u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x288244: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x288244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x288248: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x288248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x28824c: 0x24e5e668  addiu       $a1, $a3, -0x1998
    ctx->pc = 0x28824cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960744));
    // 0x288250: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x288250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x288254: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x288254u;
    SET_GPR_U32(ctx, 31, 0x28825Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28825Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28825Cu) { return; }
    ctx->pc = 0x28825Cu;
label_28825c:
    // 0x28825c: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x28825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x288260: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x288260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x288264: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x288264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x288268: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x288268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x28826c: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x28826cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x288270: 0xdce60018  ld          $a2, 0x18($a3)
    ctx->pc = 0x288270u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x288274: 0x61378  dsll        $v0, $a2, 13
    ctx->pc = 0x288274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 13);
    // 0x288278: 0x25cbe  dsrl32      $t3, $v0, 18
    ctx->pc = 0x288278u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x28827c: 0x16a282d  daddu       $a1, $t3, $t2
    ctx->pc = 0x28827cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
    // 0x288280: 0xdce90018  ld          $t1, 0x18($a3)
    ctx->pc = 0x288280u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x288284: 0x30a63fff  andi        $a2, $a1, 0x3FFF
    ctx->pc = 0x288284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x288288: 0x6217c  dsll32      $a0, $a2, 5
    ctx->pc = 0x288288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 5));
    // 0x28828c: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x28828cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x288290: 0x34c2001f  ori         $v0, $a2, 0x1F
    ctx->pc = 0x288290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x288294: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x288294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288298: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x288298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28829c: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x28829cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2882a0: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2882a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2882a4: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x2882a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2882a8: 0x1281824  and         $v1, $t1, $t0
    ctx->pc = 0x2882a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x2882ac: 0x644825  or          $t1, $v1, $a0
    ctx->pc = 0x2882acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2882b0: 0xfce90018  sd          $t1, 0x18($a3)
    ctx->pc = 0x2882b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 9));
    // 0x2882b4: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x2882b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2882b8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2882b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2882bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2882BCu;
    SET_GPR_U32(ctx, 31, 0x2882C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2882BCu, 0x2882C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882C4u;
label_2882c4:
    // 0x2882c4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2882c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2882c8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2882c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2882cc: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x2882ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x2882d0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2882d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2882d4: 0x34671009  ori         $a3, $v1, 0x1009
    ctx->pc = 0x2882d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x2882d8: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x2882d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x2882dc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2882dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2882e0: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x2882e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2882e4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2882e4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2882e8: 0x81938  dsll        $v1, $t0, 4
    ctx->pc = 0x2882e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 4);
    // 0x2882ec: 0x3467000a  ori         $a3, $v1, 0xA
    ctx->pc = 0x2882ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x2882f0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2882f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2882f4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2882f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2882f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2882f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2882fc: 0x233b8  dsll        $a2, $v0, 14
    ctx->pc = 0x2882fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 14);
    // 0x288300: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x288300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x288304: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x288304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x288308: 0x3583c  dsll32      $t3, $v1, 0
    ctx->pc = 0x288308u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28830c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x28830cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x288310: 0xb5638  dsll        $t2, $t3, 24
    ctx->pc = 0x288310u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) << 24);
    // 0x288314: 0x1423025  or          $a2, $t2, $v0
    ctx->pc = 0x288314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x288318: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x288318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28831c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x28831cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288320: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x288320u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x288324: 0x740bc  dsll32      $t0, $a3, 2
    ctx->pc = 0x288324u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 2));
    // 0x288328: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x288328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x28832c: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x28832cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
    // 0x288330: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x288330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x288334: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x288334u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x288338: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x288338u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28833c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28833Cu;
    SET_GPR_U32(ctx, 31, 0x288344u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28833Cu, 0x288344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288344u;
label_288344:
    // 0x288344: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x288344u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x288348: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x288348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28834c: 0x7100a628  paddub      $s4, $t0, $zero
    ctx->pc = 0x28834cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x288350: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x288350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x288354: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x288354u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x288358: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x288358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x28835c: 0x24c30028  addiu       $v1, $a2, 0x28
    ctx->pc = 0x28835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x288360: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x288360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
    // 0x288364: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x288364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x288368: 0x71008e28  paddub      $s1, $t0, $zero
    ctx->pc = 0x288368u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28836c: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x28836cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x288370: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x288370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x288374: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x288374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x288378: 0x26e80001  addiu       $t0, $s7, 0x1
    ctx->pc = 0x288378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28837c: 0x7100be28  paddub      $s7, $t0, $zero
    ctx->pc = 0x28837cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    ctx->pc = 0x288380u;
}
