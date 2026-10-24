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

// Function: entry_00287cb0
// Address: 0x287cb0 - 0x287dd8
void entry_00287cb0_0x287cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287cb0_0x287cb0");
#endif

    switch (ctx->pc) {
        case 0x287d30u: goto label_287d30;
        case 0x287dacu: goto label_287dac;
        default: break;
    }

    ctx->pc = 0x287cb0u;

    // 0x287cb0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x287cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x287cb4: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x287cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x287cb8: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x287cb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x287cbc: 0x1e28c0  sll         $a1, $fp, 3
    ctx->pc = 0x287cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x287cc0: 0x24a67900  addiu       $a2, $a1, 0x7900
    ctx->pc = 0x287cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x287cc4: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x287cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x287cc8: 0xe44825  or          $t1, $a3, $a0
    ctx->pc = 0x287cc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x287ccc: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x287cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x287cd0: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x287cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x287cd4: 0x3404fff9  ori         $a0, $zero, 0xFFF9
    ctx->pc = 0x287cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x287cd8: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x287cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x287cdc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x287cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x287ce0: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x287ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x287ce4: 0x24a67000  addiu       $a2, $a1, 0x7000
    ctx->pc = 0x287ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x287ce8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x287ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x287cec: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x287cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x287cf0: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x287cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x287cf4: 0x24e37900  addiu       $v1, $a3, 0x7900
    ctx->pc = 0x287cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x287cf8: 0x35400  sll         $t2, $v1, 16
    ctx->pc = 0x287cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x287cfc: 0x4a3025  or          $a2, $v0, $t2
    ctx->pc = 0x287cfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x287d00: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x287d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x287d04: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x287d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x287d08: 0x340bfff9  ori         $t3, $zero, 0xFFF9
    ctx->pc = 0x287d08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x287d0c: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x287d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x287d10: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x287d10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x287d14: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x287d14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x287d18: 0x2526e640  addiu       $a2, $t1, -0x19C0
    ctx->pc = 0x287d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960704));
    // 0x287d1c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x287d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x287d20: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x287d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x287d24: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x287d24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x287d28: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x287D28u;
    SET_GPR_U32(ctx, 31, 0x287D30u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x287D28u, 0x287D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D30u;
label_287d30:
    // 0x287d30: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x287d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x287d34: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x287d34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x287d38: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x287d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x287d3c: 0x34681009  ori         $t0, $v1, 0x1009
    ctx->pc = 0x287d3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x287d40: 0xae880004  sw          $t0, 0x4($s4)
    ctx->pc = 0x287d40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 8));
    // 0x287d44: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x287d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x287d48: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x287d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x287d4c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x287d4cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x287d50: 0x64138  dsll        $t0, $a2, 4
    ctx->pc = 0x287d50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << 4);
    // 0x287d54: 0x3503000a  ori         $v1, $t0, 0xA
    ctx->pc = 0x287d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
    // 0x287d58: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x287d58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x287d5c: 0x9203c  dsll32      $a0, $t1, 0
    ctx->pc = 0x287d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 0));
    // 0x287d60: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x287d60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x287d64: 0x433b8  dsll        $a2, $a0, 14
    ctx->pc = 0x287d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 14);
    // 0x287d68: 0x662825  or          $a1, $v1, $a2
    ctx->pc = 0x287d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x287d6c: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x287d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287d70: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x287d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x287d74: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x287d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x287d78: 0x32638  dsll        $a0, $v1, 24
    ctx->pc = 0x287d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
    // 0x287d7c: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x287d7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x287d80: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x287d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x287d84: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x287d84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x287d88: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x287d88u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x287d8c: 0x718bc  dsll32      $v1, $a3, 2
    ctx->pc = 0x287d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 2));
    // 0x287d90: 0x681025  or          $v0, $v1, $t0
    ctx->pc = 0x287d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x287d94: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x287d94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x287d98: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x287d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x287d9c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x287d9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x287da0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x287da0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x287da4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x287DA4u;
    SET_GPR_U32(ctx, 31, 0x287DACu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x287DA4u, 0x287DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DACu;
label_287dac:
    // 0x287dac: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x287dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x287db0: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x287db0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x287db4: 0x260b002c  addiu       $t3, $s0, 0x2C
    ctx->pc = 0x287db4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x287db8: 0x71608628  paddub      $s0, $t3, $zero
    ctx->pc = 0x287db8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x287dbc: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x287dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x287dc0: 0x71408e28  paddub      $s1, $t2, $zero
    ctx->pc = 0x287dc0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x287dc4: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x287dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x287dc8: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x287dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x287dcc: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x287dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x287dd0: 0x26e70001  addiu       $a3, $s7, 0x1
    ctx->pc = 0x287dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x287dd4: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x287dd4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x287dd8u;
}
