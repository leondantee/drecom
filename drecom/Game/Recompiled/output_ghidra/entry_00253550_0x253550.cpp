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

// Function: entry_00253550
// Address: 0x253550 - 0x253564
void entry_00253550_0x253550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253550_0x253550");
#endif

    ctx->pc = 0x253550u;

    // 0x253550: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x253550u;
    {
        const bool branch_taken_0x253550 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x253550) {
            ctx->pc = 0x253564u;
            return;
        }
    }
    ctx->pc = 0x253558u;
    // 0x253558: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x253558u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25355c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25355Cu;
    {
        const bool branch_taken_0x25355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25355c) {
            ctx->pc = 0x253568u;
            return;
        }
    }
    ctx->pc = 0x253564u;
}
