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

// Function: entry_00286d00
// Address: 0x286d00 - 0x28710c
void entry_00286d00_0x286d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286d00_0x286d00");
#endif

    switch (ctx->pc) {
        case 0x286df8u: goto label_286df8;
        case 0x286e80u: goto label_286e80;
        case 0x286ed4u: goto label_286ed4;
        case 0x286ff8u: goto label_286ff8;
        case 0x287038u: goto label_287038;
        case 0x287064u: goto label_287064;
        case 0x287094u: goto label_287094;
        default: break;
    }

    ctx->pc = 0x286d00u;

    // 0x286d00: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286d04: 0x35900  sll         $t3, $v1, 4
    ctx->pc = 0x286d04u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x286d08: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x286d08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x286d0c: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x286d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x286d10: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x286d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x286d14: 0x1633825  or          $a3, $t3, $v1
    ctx->pc = 0x286d14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x286d18: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x286d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x286d1c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x286d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x286d20: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x286d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x286d24: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x286d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x286d28: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x286d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x286d2c: 0x64100  sll         $t0, $a2, 4
    ctx->pc = 0x286d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x286d30: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x286d30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x286d34: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x286d34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x286d38: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x286d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x286d3c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x286d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x286d40: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x286d40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x286d44: 0x25077000  addiu       $a3, $t0, 0x7000
    ctx->pc = 0x286d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x286d48: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x286d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x286d4c: 0x1e40c0  sll         $t0, $fp, 3
    ctx->pc = 0x286d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x286d50: 0x25037900  addiu       $v1, $t0, 0x7900
    ctx->pc = 0x286d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 30976));
    // 0x286d54: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x286d54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x286d58: 0xc83825  or          $a3, $a2, $t0
    ctx->pc = 0x286d58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x286d5c: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x286d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x286d60: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x286d60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x286d64: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x286d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x286d68: 0x2613001c  addiu       $s3, $s0, 0x1C
    ctx->pc = 0x286d68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x286d6c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x286d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x286d70: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x286d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x286d74: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x286d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x286d78: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x286d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x286d7c: 0x245e7000  addiu       $fp, $v0, 0x7000
    ctx->pc = 0x286d7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x286d80: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x286d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x286d84: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x286d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x286d88: 0x8fb50130  lw          $s5, 0x130($sp)
    ctx->pc = 0x286d88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x286d8c: 0x1530c0  sll         $a2, $s5, 3
    ctx->pc = 0x286d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x286d90: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x286d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x286d94: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x286d94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x286d98: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x286d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x286d9c: 0x46b025  or          $s6, $v0, $a2
    ctx->pc = 0x286d9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x286da0: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x286da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x286da4: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x286da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x286da8: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x286da8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x286dac: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x286dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x286db0: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x286db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x286db4: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x286db4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x286db8: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x286db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x286dbc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x286dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x286dc0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x286dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x286dc4: 0x244600a6  addiu       $a2, $v0, 0xA6
    ctx->pc = 0x286dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 166));
    // 0x286dc8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x286dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x286dcc: 0x66b021  addu        $s6, $v1, $a2
    ctx->pc = 0x286dccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x286dd0: 0x1638c0  sll         $a3, $s6, 3
    ctx->pc = 0x286dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x286dd4: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x286dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x286dd8: 0x24c3cca0  addiu       $v1, $a2, -0x3360
    ctx->pc = 0x286dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x286ddc: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x286ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x286de0: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x286de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x286de4: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x286de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x286de8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x286de8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286dec: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x286decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x286df0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x286DF0u;
    SET_GPR_U32(ctx, 31, 0x286DF8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x286DF0u, 0x286DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DF8u;
label_286df8:
    // 0x286df8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x286df8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286dfc: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x286dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x286e00: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x286e00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286e04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x286e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x286e08: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x286e08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x286e0c: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x286e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x286e10: 0x34c71009  ori         $a3, $a2, 0x1009
    ctx->pc = 0x286e10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x286e14: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x286e14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x286e18: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286e1c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x286e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286e20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x286e20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x286e24: 0x23138  dsll        $a2, $v0, 4
    ctx->pc = 0x286e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 4);
    // 0x286e28: 0x34c6000a  ori         $a2, $a2, 0xA
    ctx->pc = 0x286e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x286e2c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x286e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x286e30: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x286e30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286e34: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x286e34u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x286e38: 0x83bb8  dsll        $a3, $t0, 14
    ctx->pc = 0x286e38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 14);
    // 0x286e3c: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x286e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x286e40: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x286e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x286e44: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x286e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286e48: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x286e48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x286e4c: 0x61e38  dsll        $v1, $a2, 24
    ctx->pc = 0x286e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 24);
    // 0x286e50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x286e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286e54: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x286e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x286e58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x286e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x286e5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x286e5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x286e60: 0x340bc  dsll32      $t0, $v1, 2
    ctx->pc = 0x286e60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 2));
    // 0x286e64: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x286e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x286e68: 0xfe870008  sd          $a3, 0x8($s4)
    ctx->pc = 0x286e68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 7));
    // 0x286e6c: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x286e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x286e70: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x286e70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286e74: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x286e74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x286e78: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x286E78u;
    SET_GPR_U32(ctx, 31, 0x286E80u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x286E78u, 0x286E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E80u;
label_286e80:
    // 0x286e80: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x286e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x286e84: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x286e84u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286e88: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x286e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x286e8c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x286e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x286e90: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x286e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x286e94: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x286e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x286e98: 0x34c71043  ori         $a3, $a2, 0x1043
    ctx->pc = 0x286e98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4163);
    // 0x286e9c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x286e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x286ea0: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x286ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x286ea4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x286ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x286ea8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x286ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x286eac: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x286eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x286eb0: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x286eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x286eb4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x286eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x286eb8: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x286eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x286ebc: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x286ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x286ec0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x286ec0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286ec4: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x286ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x286ec8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x286ec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286ecc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x286ECCu;
    SET_GPR_U32(ctx, 31, 0x286ED4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x286ECCu, 0x286ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286ED4u;
label_286ed4:
    // 0x286ed4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x286ed4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286ed8: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x286ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x286edc: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x286edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x286ee0: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x286ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x286ee4: 0x82425de9  lb          $v0, 0x5DE9($s2)
    ctx->pc = 0x286ee4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24041)));
    // 0x286ee8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x286ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x286eec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x286eecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x286ef0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x286ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x286ef4: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x286ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286ef8: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x286ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x286efc: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x286efcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x286f00: 0x24c35fe0  addiu       $v1, $a2, 0x5FE0
    ctx->pc = 0x286f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24544));
    // 0x286f04: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x286f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x286f08: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x286f08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286f0c: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x286f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x286f10: 0x250361a8  addiu       $v1, $t0, 0x61A8
    ctx->pc = 0x286f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 25000));
    // 0x286f14: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x286f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x286f18: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x286f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x286f1c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x286f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286f20: 0xc93823  subu        $a3, $a2, $t1
    ctx->pc = 0x286f20u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x286f24: 0xafa70140  sw          $a3, 0x140($sp)
    ctx->pc = 0x286f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 7));
    // 0x286f28: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x286f28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x286f2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x286f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x286f30: 0x1031023  subu        $v0, $t0, $v1
    ctx->pc = 0x286f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x286f34: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x286f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x286f38: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x286f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x286f3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x286f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x286f40: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x286f40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286f44: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x286f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x286f48: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x286f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x286f4c: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x286f4cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286f50: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x286f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x286f54: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x286f54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286f58: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x286f58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x286f5c: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x286f5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286f60: 0x70e04e28  paddub      $t1, $a3, $zero
    ctx->pc = 0x286f60u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x286f64: 0x2693021  addu        $a2, $s3, $t1
    ctx->pc = 0x286f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x286f68: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x286f68u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286f6c: 0x8fa9013c  lw          $t1, 0x13C($sp)
    ctx->pc = 0x286f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x286f70: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x286f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286f74: 0x94043  sra         $t0, $t1, 1
    ctx->pc = 0x286f74u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 1));
    // 0x286f78: 0x71001e28  paddub      $v1, $t0, $zero
    ctx->pc = 0x286f78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286f7c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x286f7cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286f80: 0x3c64021  addu        $t0, $fp, $a2
    ctx->pc = 0x286f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x286f84: 0xafa80130  sw          $t0, 0x130($sp)
    ctx->pc = 0x286f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 8));
    // 0x286f88: 0x8fa90140  lw          $t1, 0x140($sp)
    ctx->pc = 0x286f88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x286f8c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x286f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286f90: 0x94043  sra         $t0, $t1, 1
    ctx->pc = 0x286f90u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 1));
    // 0x286f94: 0x71001e28  paddub      $v1, $t0, $zero
    ctx->pc = 0x286f94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286f98: 0x70604e28  paddub      $t1, $v1, $zero
    ctx->pc = 0x286f98u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286f9c: 0x2694023  subu        $t0, $s3, $t1
    ctx->pc = 0x286f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x286fa0: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x286fa0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x286fa4: 0x8faa013c  lw          $t2, 0x13C($sp)
    ctx->pc = 0x286fa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x286fa8: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x286fa8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286fac: 0xa1843  sra         $v1, $t2, 1
    ctx->pc = 0x286facu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 1));
    // 0x286fb0: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x286fb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286fb4: 0x70c03e28  paddub      $a3, $a2, $zero
    ctx->pc = 0x286fb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x286fb8: 0x3c71823  subu        $v1, $fp, $a3
    ctx->pc = 0x286fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 7)));
    // 0x286fbc: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x286fbcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x286fc0: 0x3c0b4120  lui         $t3, 0x4120
    ctx->pc = 0x286fc0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16672 << 16));
    // 0x286fc4: 0x448b6000  mtc1        $t3, $f12
    ctx->pc = 0x286fc4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286fc8: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x286fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286fcc: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x286fccu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x286fd0: 0x3c064420  lui         $a2, 0x4420
    ctx->pc = 0x286fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17440 << 16));
    // 0x286fd4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x286fd4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286fd8: 0x0  nop
    ctx->pc = 0x286fd8u;
    // NOP
    // 0x286fdc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x286fdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286fe0: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x286fe0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286fe4: 0x0  nop
    ctx->pc = 0x286fe4u;
    // NOP
    // 0x286fe8: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x286fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286fec: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x286fecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x286ff0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286FF0u;
    SET_GPR_U32(ctx, 31, 0x286FF8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286FF0u, 0x286FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FF8u;
label_286ff8:
    // 0x286ff8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x286ff8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286ffc: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x286ffcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x287000: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x287000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x287004: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x287004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287008: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x287008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28700c: 0x460c0043  div.s       $f1, $f0, $f12
    ctx->pc = 0x28700cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x287010: 0x3c0a4420  lui         $t2, 0x4420
    ctx->pc = 0x287010u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17440 << 16));
    // 0x287014: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x287014u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287018: 0x0  nop
    ctx->pc = 0x287018u;
    // NOP
    // 0x28701c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28701cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x287020: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x287020u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287024: 0x0  nop
    ctx->pc = 0x287024u;
    // NOP
    // 0x287028: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x287028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28702c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x28702cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x287030: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x287030u;
    SET_GPR_U32(ctx, 31, 0x287038u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x287030u, 0x287038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287038u;
label_287038:
    // 0x287038: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x287038u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28703c: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x28703cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287040: 0x0  nop
    ctx->pc = 0x287040u;
    // NOP
    // 0x287044: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x287044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x287048: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x287048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x28704c: 0x3469cccd  ori         $t1, $v1, 0xCCCD
    ctx->pc = 0x28704cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x287050: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x287050u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287054: 0x0  nop
    ctx->pc = 0x287054u;
    // NOP
    // 0x287058: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x287058u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28705c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28705Cu;
    SET_GPR_U32(ctx, 31, 0x287064u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28705Cu, 0x287064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287064u;
label_287064:
    // 0x287064: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x287064u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287068: 0x70e09e28  paddub      $s3, $a3, $zero
    ctx->pc = 0x287068u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28706c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28706cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287070: 0x0  nop
    ctx->pc = 0x287070u;
    // NOP
    // 0x287074: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x287074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x287078: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x287078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x28707c: 0x3449cccd  ori         $t1, $v0, 0xCCCD
    ctx->pc = 0x28707cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x287080: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x287080u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287084: 0x0  nop
    ctx->pc = 0x287084u;
    // NOP
    // 0x287088: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x287088u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28708c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28708Cu;
    SET_GPR_U32(ctx, 31, 0x287094u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28708Cu, 0x287094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287094u;
label_287094:
    // 0x287094: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x287094u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x287098: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x287098u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28709c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x28709cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2870a0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x2870a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x2870a4: 0x3c086400  lui         $t0, 0x6400
    ctx->pc = 0x2870a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)25600 << 16));
    // 0x2870a8: 0x35062b16  ori         $a2, $t0, 0x2B16
    ctx->pc = 0x2870a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)11030);
    // 0x2870ac: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x2870acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x2870b0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2870b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2870b4: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2870b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2870b8: 0x34e90040  ori         $t1, $a3, 0x40
    ctx->pc = 0x2870b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x2870bc: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x2870bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x2870c0: 0x82465dea  lb          $a2, 0x5DEA($s2)
    ctx->pc = 0x2870c0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x2870c4: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x2870c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2870c8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2870c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2870cc: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2870CCu;
    {
        const bool branch_taken_0x2870cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2870cc) {
            ctx->pc = 0x28710Cu;
            return;
        }
    }
    ctx->pc = 0x2870D4u;
    // 0x2870d4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2870d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2870d8: 0x25400  sll         $t2, $v0, 16
    ctx->pc = 0x2870d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2870dc: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x2870dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2870e0: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x2870e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2870e4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x2870e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2870e8: 0x1033825  or          $a3, $t0, $v1
    ctx->pc = 0x2870e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2870ec: 0x1475825  or          $t3, $t2, $a3
    ctx->pc = 0x2870ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x2870f0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2870f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2870f4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2870f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2870f8: 0x6b3025  or          $a2, $v1, $t3
    ctx->pc = 0x2870f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x2870fc: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x2870fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287100: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x287100u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x287104: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x287104u;
    {
        const bool branch_taken_0x287104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287104) {
            ctx->pc = 0x28719Cu;
            return;
        }
    }
    ctx->pc = 0x28710Cu;
}
