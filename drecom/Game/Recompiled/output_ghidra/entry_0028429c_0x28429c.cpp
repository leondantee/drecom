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

// Function: entry_0028429c
// Address: 0x28429c - 0x2842b0
void entry_0028429c_0x28429c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028429c_0x28429c");
#endif

    ctx->pc = 0x28429cu;

    // 0x28429c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28429cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2842a0: 0x2463b700  addiu       $v1, $v1, -0x4900
    ctx->pc = 0x2842a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948608));
    // 0x2842a4: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x2842a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    // 0x2842a8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2842A8u;
    {
        const bool branch_taken_0x2842a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2842a8) {
            ctx->pc = 0x284458u;
            return;
        }
    }
    ctx->pc = 0x2842B0u;
}
