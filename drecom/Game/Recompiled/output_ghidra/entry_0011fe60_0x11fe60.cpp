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

// Function: entry_0011fe60
// Address: 0x11fe60 - 0x11fe78
void entry_0011fe60_0x11fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fe60_0x11fe60");
#endif

    ctx->pc = 0x11fe60u;

    // 0x11fe60: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x11fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11fe64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11fe68: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11fe6c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x11fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x11fe70: 0x22023  negu        $a0, $v0
    ctx->pc = 0x11fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11fe74: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x11fe74u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    ctx->pc = 0x11fe78u;
}
