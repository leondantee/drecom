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

// Function: entry_0014471c
// Address: 0x14471c - 0x144768
void entry_0014471c_0x14471c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014471c_0x14471c");
#endif

    ctx->pc = 0x14471cu;

    // 0x14471c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14471cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x144720: 0x8e03137c  lw          $v1, 0x137C($s0)
    ctx->pc = 0x144720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4988)));
    // 0x144724: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x144724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144728: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x144728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14472c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x14472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x144730: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x144730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x144734: 0x8e03138c  lw          $v1, 0x138C($s0)
    ctx->pc = 0x144734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5004)));
    // 0x144738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x144738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14473c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x14473cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x144740: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x144740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x144744: 0x8e03137c  lw          $v1, 0x137C($s0)
    ctx->pc = 0x144744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4988)));
    // 0x144748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x144748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14474c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144750: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x144750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x144754: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x144754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x144758: 0x8e031390  lw          $v1, 0x1390($s0)
    ctx->pc = 0x144758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5008)));
    // 0x14475c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144760: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x144760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x144764: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x144764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x144768u;
}
