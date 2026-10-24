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

// Function: entry_002877c0
// Address: 0x2877c0 - 0x287950
void entry_002877c0_0x2877c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002877c0_0x2877c0");
#endif

    switch (ctx->pc) {
        case 0x2878b4u: goto label_2878b4;
        case 0x287944u: goto label_287944;
        default: break;
    }

    ctx->pc = 0x2877c0u;

    // 0x2877c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2877c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2877c4: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2877c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2877c8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2877c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2877cc: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x2877ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2877d0: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x2877d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2877d4: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x2877d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2877d8: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x2877d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2877dc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x2877dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x2877e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2877e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2877e4: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2877e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2877e8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2877e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2877ec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2877ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2877f0: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x2877f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2877f4: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x2877f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2877f8: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2877f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2877fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2877fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x287800: 0x135900  sll         $t3, $s3, 4
    ctx->pc = 0x287800u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x287804: 0x256a7000  addiu       $t2, $t3, 0x7000
    ctx->pc = 0x287804u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 28672));
    // 0x287808: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x287808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x28780c: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x28780cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x287810: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x287810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x287814: 0x74400  sll         $t0, $a3, 16
    ctx->pc = 0x287814u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x287818: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x287818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x28781c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x28781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x287820: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x287820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x287824: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x287824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x287828: 0x2608001c  addiu       $t0, $s0, 0x1C
    ctx->pc = 0x287828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x28782c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x28782cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x287830: 0x153900  sll         $a3, $s5, 4
    ctx->pc = 0x287830u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x287834: 0x24e67000  addiu       $a2, $a3, 0x7000
    ctx->pc = 0x287834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 28672));
    // 0x287838: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x287838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28783c: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x28783cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x287840: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x287840u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x287844: 0x24e67900  addiu       $a2, $a3, 0x7900
    ctx->pc = 0x287844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x287848: 0x64400  sll         $t0, $a2, 16
    ctx->pc = 0x287848u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28784c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x28784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x287850: 0x26080024  addiu       $t0, $s0, 0x24
    ctx->pc = 0x287850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x287854: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x287854u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x287858: 0x3407fffa  ori         $a3, $zero, 0xFFFA
    ctx->pc = 0x287858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x28785c: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x28785cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x287860: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x287860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x287864: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x287864u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x287868: 0x30d3ffff  andi        $s3, $a2, 0xFFFF
    ctx->pc = 0x287868u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28786c: 0x266200a6  addiu       $v0, $s3, 0xA6
    ctx->pc = 0x28786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 166));
    // 0x287870: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x287870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x287874: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x287874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x287878: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x287878u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28787c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28787cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x287880: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x287880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x287884: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x287884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x287888: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x287888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28788c: 0x2a8c0  sll         $s5, $v0, 3
    ctx->pc = 0x28788cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x287890: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x287890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x287894: 0x24c3cca0  addiu       $v1, $a2, -0x3360
    ctx->pc = 0x287894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x287898: 0x753021  addu        $a2, $v1, $s5
    ctx->pc = 0x287898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x28789c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x28789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x2878a0: 0x2656001c  addiu       $s6, $s2, 0x1C
    ctx->pc = 0x2878a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2878a4: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x2878a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2878a8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2878a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2878ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2878ACu;
    SET_GPR_U32(ctx, 31, 0x2878B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2878ACu, 0x2878B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878B4u;
label_2878b4:
    // 0x2878b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2878b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2878b8: 0x2608002c  addiu       $t0, $s0, 0x2C
    ctx->pc = 0x2878b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2878bc: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x2878bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2878c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2878c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2878c4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2878c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2878c8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2878c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2878cc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2878ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2878d0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2878d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2878d4: 0x34471009  ori         $a3, $v0, 0x1009
    ctx->pc = 0x2878d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x2878d8: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x2878d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x2878dc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2878dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2878e0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2878e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2878e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2878e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2878e8: 0x3b138  dsll        $s6, $v1, 4
    ctx->pc = 0x2878e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << 4);
    // 0x2878ec: 0x36c7000a  ori         $a3, $s6, 0xA
    ctx->pc = 0x2878ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)10);
    // 0x2878f0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x2878f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2878f4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2878f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2878f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2878f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2878fc: 0x333b8  dsll        $a2, $v1, 14
    ctx->pc = 0x2878fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 14);
    // 0x287900: 0xe6a825  or          $s5, $a3, $a2
    ctx->pc = 0x287900u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x287904: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x287904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287908: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x287908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28790c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x28790cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x287910: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x287910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x287914: 0x952825  or          $a1, $a0, $s5
    ctx->pc = 0x287914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x287918: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x287918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28791c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x28791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x287920: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x287920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x287924: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x287924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x287928: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x287928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x28792c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x28792cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x287930: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x287930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x287934: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x287934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287938: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x287938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28793c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28793Cu;
    SET_GPR_U32(ctx, 31, 0x287944u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28793Cu, 0x287944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287944u;
label_287944:
    // 0x287944: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x287944u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287948: 0x26870010  addiu       $a3, $s4, 0x10
    ctx->pc = 0x287948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28794c: 0x70e0a628  paddub      $s4, $a3, $zero
    ctx->pc = 0x28794cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x287950u;
}
