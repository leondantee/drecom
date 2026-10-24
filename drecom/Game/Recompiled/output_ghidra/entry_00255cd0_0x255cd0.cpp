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

// Function: entry_00255cd0
// Address: 0x255cd0 - 0x255e28
void entry_00255cd0_0x255cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255cd0_0x255cd0");
#endif

    ctx->pc = 0x255cd0u;

    // 0x255cd0: 0x8fb500f8  lw          $s5, 0xF8($sp)
    ctx->pc = 0x255cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255cd4: 0x26a20040  addiu       $v0, $s5, 0x40
    ctx->pc = 0x255cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x255cd8: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255cdc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x255cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x255ce0: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x255ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x255ce4: 0xfea40000  sd          $a0, 0x0($s5)
    ctx->pc = 0x255ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 4));
    // 0x255ce8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x255ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x255cec: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x255cecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x255cf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x255cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x255cf4: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x255cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x255cf8: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x255cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    // 0x255cfc: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x255cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x255d00: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x255d00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x255d04: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255d08: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x255d08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
    // 0x255d0c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255d10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255d14: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x255d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255d18: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x255d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x255d1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x255d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255d20: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x255d20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
    // 0x255d24: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255d28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255d2c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255d30: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x255d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x255d34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x255d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x255d38: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x255d38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
    // 0x255d3c: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x255d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255d40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x255d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x255d44: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255d48: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x255d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x255d4c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x255d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x255d50: 0xaea20028  sw          $v0, 0x28($s5)
    ctx->pc = 0x255d50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
    // 0x255d54: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255d58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255d5c: 0x262b021  addu        $s6, $s3, $v0
    ctx->pc = 0x255d5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255d60: 0x8ed70058  lw          $s7, 0x58($s6)
    ctx->pc = 0x255d60u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x255d64: 0x8efe000c  lw          $fp, 0xC($s7)
    ctx->pc = 0x255d64u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x255d68: 0xaebe002c  sw          $fp, 0x2C($s5)
    ctx->pc = 0x255d68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 30));
    // 0x255d6c: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x255d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x255d70: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255d74: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x255d74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255d78: 0x2728021  addu        $s0, $s3, $s2
    ctx->pc = 0x255d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x255d7c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x255d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x255d80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x255d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255d84: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x255d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255d88: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x255d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x255d8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255d90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255d94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255d98: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255d9c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x255d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x255da0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x255da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255da4: 0xfea20030  sd          $v0, 0x30($s5)
    ctx->pc = 0x255da4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 2));
    // 0x255da8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x255da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x255dac: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x255dacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x255db0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x255db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x255db4: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x255db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x255db8: 0xaea4003c  sw          $a0, 0x3C($s5)
    ctx->pc = 0x255db8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 4));
    // 0x255dbc: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x255dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255dc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x255dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x255dc4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255dc8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x255dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x255dcc: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x255dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x255dd0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255dd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255dd8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255ddc: 0x8c560030  lw          $s6, 0x30($v0)
    ctx->pc = 0x255ddcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x255de0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255de4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255de8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255dec: 0x8c570038  lw          $s7, 0x38($v0)
    ctx->pc = 0x255decu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x255df0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255df4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x255df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255df8: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x255df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x255dfc: 0x8c5e0040  lw          $fp, 0x40($v0)
    ctx->pc = 0x255dfcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x255e00: 0x329500ff  andi        $s5, $s4, 0xFF
    ctx->pc = 0x255e00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255e04: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x255e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x255e08: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x255e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255e0c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x255e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x255e10: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x255e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x255e14: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x255e14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255e18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x255e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x255e1c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x255e1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255e20: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x255e20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x255e24: 0x0  nop
    ctx->pc = 0x255e24u;
    // NOP
    ctx->pc = 0x255e28u;
}
