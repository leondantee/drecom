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

// Function: entry_001b21a0
// Address: 0x1b21a0 - 0x1b21b4
void entry_001b21a0_0x1b21a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b21a0_0x1b21a0");
#endif

    ctx->pc = 0x1b21a0u;

    // 0x1b21a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b21a4: 0x2453b8d0  addiu       $s3, $v0, -0x4730
    ctx->pc = 0x1b21a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b21a8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b21a8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b21ac: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B21ACu;
    {
        const bool branch_taken_0x1b21ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21ac) {
            ctx->pc = 0x1B2270u;
            return;
        }
    }
    ctx->pc = 0x1B21B4u;
}
