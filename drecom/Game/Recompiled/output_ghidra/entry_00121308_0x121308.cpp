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

// Function: entry_00121308
// Address: 0x121308 - 0x121318
void entry_00121308_0x121308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121308_0x121308");
#endif

    ctx->pc = 0x121308u;

    // 0x121308: 0x32640020  andi        $a0, $s3, 0x20
    ctx->pc = 0x121308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
    // 0x12130c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12130Cu;
    {
        const bool branch_taken_0x12130c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12130c) {
            ctx->pc = 0x121318u;
            return;
        }
    }
    ctx->pc = 0x121314u;
    // 0x121314: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x121314u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x121318u;
}
