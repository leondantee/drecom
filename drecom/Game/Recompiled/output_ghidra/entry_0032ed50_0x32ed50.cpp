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

// Function: entry_0032ed50
// Address: 0x32ed50 - 0x32ed70
void entry_0032ed50_0x32ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ed50_0x32ed50");
#endif

    ctx->pc = 0x32ed50u;

    // 0x32ed50: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x32ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x32ed54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32ed58: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x32ed58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ed5c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x32ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32ed60: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32ed64: 0x245e9510  addiu       $fp, $v0, -0x6AF0
    ctx->pc = 0x32ed64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939920));
    // 0x32ed68: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x32ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x32ed6c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x32ed6cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x32ed70u;
}
