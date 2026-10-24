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

// Function: entry_0032076c
// Address: 0x32076c - 0x3207a8
void entry_0032076c_0x32076c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032076c_0x32076c");
#endif

    ctx->pc = 0x32076cu;

    // 0x32076c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x32076cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320770: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x320770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x320774: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320778: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x320778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32077c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x32077cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x320780: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320788: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x320788u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32078c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32078cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320790: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320794: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320798: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x320798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x32079c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x32079cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3207a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3207a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3207a4: 0x0  nop
    ctx->pc = 0x3207a4u;
    // NOP
    ctx->pc = 0x3207a8u;
}
