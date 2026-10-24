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

// Function: entry_001dbcb0
// Address: 0x1dbcb0 - 0x1dbd84
void entry_001dbcb0_0x1dbcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbcb0_0x1dbcb0");
#endif

    ctx->pc = 0x1dbcb0u;

    // 0x1dbcb0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1dbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1dbcb4: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1dbcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1dbcb8: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1dbcb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dbcbc: 0x223fc  dsll32      $a0, $v0, 15
    ctx->pc = 0x1dbcbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1dbcc0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1dbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1dbcc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbcc8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1dbcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dbccc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dbcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbcd0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1dbcd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dbcd4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1dbcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbcd8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1dbcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dbcdc: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1dbcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dbce0: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x1dbce0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x1dbce4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbce8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dbce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbcec: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x1dbcecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1dbcf0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1dbcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1dbcf4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1dbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1dbcf8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1dbcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1dbcfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbd00: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x1dbd00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbd08: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dbd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbd0c: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x1dbd0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1dbd10: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1dbd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1dbd14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dbd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dbd18: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x1dbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1dbd1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1dbd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1dbd20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbd24: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x1dbd24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbd28: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dbd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dbd2c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dbd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbd30: 0x90a20009  lbu         $v0, 0x9($a1)
    ctx->pc = 0x1dbd30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x1dbd34: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x1dbd34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1dbd38: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1dbd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1dbd3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1dbd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1dbd40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1dbd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1dbd44: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x1dbd44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbd48: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x1dbd48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dbd4c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DBD4Cu;
    {
        const bool branch_taken_0x1dbd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd4c) {
            ctx->pc = 0x1DBD84u;
            return;
        }
    }
    ctx->pc = 0x1DBD54u;
    // 0x1dbd54: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1dbd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1dbd58: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dbd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dbd5c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1dbd5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dbd60: 0x30447fff  andi        $a0, $v0, 0x7FFF
    ctx->pc = 0x1dbd60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1dbd64: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1dbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1dbd68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1dbd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dbd6c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1dbd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dbd70: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1dbd70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dbd74: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1dbd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1dbd78: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1dbd78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dbd7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DBD7Cu;
    {
        const bool branch_taken_0x1dbd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd7c) {
            ctx->pc = 0x1DBDB0u;
            return;
        }
    }
    ctx->pc = 0x1DBD84u;
}
