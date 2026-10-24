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

// Function: entry_0035d4f8
// Address: 0x35d4f8 - 0x35d52c
void entry_0035d4f8_0x35d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d4f8_0x35d4f8");
#endif

    ctx->pc = 0x35d4f8u;

    // 0x35d4f8: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x35d4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35d4fc: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x35D4FCu;
    {
        const bool branch_taken_0x35d4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d4fc) {
            ctx->pc = 0x35D3DCu;
            return;
        }
    }
    ctx->pc = 0x35D504u;
    // 0x35d504: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x35d504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x35d508: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x35d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35d50c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35d510: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d514: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x35d514u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35d518: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35d518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d51c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x35d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x35d520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d524: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x35D524u;
    {
        const bool branch_taken_0x35d524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d524) {
            ctx->pc = 0x35D52Cu;
            return;
        }
    }
    ctx->pc = 0x35D52Cu;
}
