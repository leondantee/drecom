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

// Function: entry_0020034c
// Address: 0x20034c - 0x200388
void entry_0020034c_0x20034c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020034c_0x20034c");
#endif

    ctx->pc = 0x20034cu;

    // 0x20034c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x200350: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x200350u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200354: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200358: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20035c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200360: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x200360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x200364: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x200364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x200368: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x200368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20036c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x20036cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200370: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x200370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x200374: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x200378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20037c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x20037cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x200380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x200380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x200384: 0x0  nop
    ctx->pc = 0x200384u;
    // NOP
    ctx->pc = 0x200388u;
}
