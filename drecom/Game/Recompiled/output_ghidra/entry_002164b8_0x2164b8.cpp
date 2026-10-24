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

// Function: entry_002164b8
// Address: 0x2164b8 - 0x2164c4
void entry_002164b8_0x2164b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002164b8_0x2164b8");
#endif

    switch (ctx->pc) {
        case 0x2164c0u: goto label_2164c0;
        default: break;
    }

    ctx->pc = 0x2164b8u;

    // 0x2164b8: 0xc046280  jal         func_118A00
    ctx->pc = 0x2164B8u;
    SET_GPR_U32(ctx, 31, 0x2164C0u);
    ctx->pc = 0x2164BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164B8u;
    // 0x2164bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A00u;
    {
        ctx->pc = 0x2164C0u;
        ps2_stubs::memcmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2164C0u) { return; }
    ctx->pc = 0x2164C0u;
label_2164c0:
    // 0x2164c0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2164c0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x2164c4u;
}
