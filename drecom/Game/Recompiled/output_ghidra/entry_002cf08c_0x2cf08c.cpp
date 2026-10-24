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

// Function: entry_002cf08c
// Address: 0x2cf08c - 0x2cf0d8
void entry_002cf08c_0x2cf08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf08c_0x2cf08c");
#endif

    ctx->pc = 0x2cf08cu;

    // 0x2cf08c: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x2cf08cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf090: 0x2506134c  addiu       $a2, $t0, 0x134C
    ctx->pc = 0x2cf090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4940));
    // 0x2cf094: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x2cf094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf098: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x2cf098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2cf09c: 0x448c0  sll         $t1, $a0, 3
    ctx->pc = 0x2cf09cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2cf0a0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2cf0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf0a4: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x2cf0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2cf0a8: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x2cf0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf0ac: 0x24e5134c  addiu       $a1, $a3, 0x134C
    ctx->pc = 0x2cf0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4940));
    // 0x2cf0b0: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x2cf0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf0b4: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x2cf0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2cf0b8: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x2cf0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cf0bc: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2cf0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf0c0: 0x1275021  addu        $t2, $t1, $a3
    ctx->pc = 0x2cf0c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2cf0c4: 0x8d570000  lw          $s7, 0x0($t2)
    ctx->pc = 0x2cf0c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2cf0c8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2cf0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cf0cc: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x2cf0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2cf0d0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x2cf0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x2cf0d4: 0x0  nop
    ctx->pc = 0x2cf0d4u;
    // NOP
    ctx->pc = 0x2cf0d8u;
}
