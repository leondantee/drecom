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

// Function: entry_0035d4b0
// Address: 0x35d4b0 - 0x35d4d0
void entry_0035d4b0_0x35d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d4b0_0x35d4b0");
#endif

    ctx->pc = 0x35d4b0u;

    // 0x35d4b0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x35d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x35d4b4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x35d4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x35d4b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x35d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x35d4bc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x35d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35d4c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35d4c4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x35d4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x35d4c8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x35D4C8u;
    {
        const bool branch_taken_0x35d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d4c8) {
            ctx->pc = 0x35D448u;
            return;
        }
    }
    ctx->pc = 0x35D4D0u;
}
