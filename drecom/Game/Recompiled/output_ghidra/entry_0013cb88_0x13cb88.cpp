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

// Function: entry_0013cb88
// Address: 0x13cb88 - 0x13cc84
void entry_0013cb88_0x13cb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cb88_0x13cb88");
#endif

    ctx->pc = 0x13cb88u;

    // 0x13cb88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13cb8c: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x13cb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x13cb90: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x13cb90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x13cb94: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13cb98: 0x34620404  ori         $v0, $v1, 0x404
    ctx->pc = 0x13cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x13cb9c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x13cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x13cba0: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x13cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x13cba4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x13cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x13cba8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13cbac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13cbb0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13cbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cbb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cbb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13cbbc: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x13cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x13cbc0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x13cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13cbc4: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x13cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x13cbc8: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x13cbc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13cbcc: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x13cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x13cbd0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x13cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13cbd4: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x13cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x13cbd8: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x13cbd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13cbdc: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x13cbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x13cbe0: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x13cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x13cbe4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13cbe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13cbe8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x13cbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13cbec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13cbf0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x13cbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13cbf4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13cbf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13cbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13cbfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13cbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13cc00: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x13cc00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x13cc04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13cc08: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x13cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13cc0c: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x13cc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13cc10: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x13cc10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x13cc14: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x13cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13cc18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13cc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13cc1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13cc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13cc20: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x13cc20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x13cc24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cc28: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x13cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13cc2c: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x13cc2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13cc30: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x13cc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13cc34: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13cc38: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x13cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x13cc3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13cc40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13cc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13cc44: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x13cc44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x13cc48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13cc4c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x13cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13cc50: 0x90a40009  lbu         $a0, 0x9($a1)
    ctx->pc = 0x13cc50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x13cc54: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x13cc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x13cc58: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x13cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13cc5c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13cc60: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x13cc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13cc64: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x13cc64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x13cc68: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x13cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x13cc6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13CC6Cu;
    {
        const bool branch_taken_0x13cc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc6c) {
            ctx->pc = 0x13CC84u;
            return;
        }
    }
    ctx->pc = 0x13CC74u;
    // 0x13cc74: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x13cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13cc78: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x13cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x13cc7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13CC7Cu;
    {
        const bool branch_taken_0x13cc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc7c) {
            ctx->pc = 0x13CCA8u;
            return;
        }
    }
    ctx->pc = 0x13CC84u;
}
