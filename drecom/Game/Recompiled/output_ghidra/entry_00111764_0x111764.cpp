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

// Function: entry_00111764
// Address: 0x111764 - 0x111774
void entry_00111764_0x111764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111764_0x111764");
#endif

    ctx->pc = 0x111764u;

    // 0x111764: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x111764u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x111768: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x111768u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x11176c: 0x2298821  addu        $s1, $s1, $t1
    ctx->pc = 0x11176cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x111770: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x111770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    ctx->pc = 0x111774u;
}
