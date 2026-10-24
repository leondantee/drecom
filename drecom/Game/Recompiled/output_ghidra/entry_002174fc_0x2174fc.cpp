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

// Function: entry_002174fc
// Address: 0x2174fc - 0x217510
void entry_002174fc_0x2174fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002174fc_0x2174fc");
#endif

    switch (ctx->pc) {
        case 0x217508u: goto label_217508;
        default: break;
    }

    ctx->pc = 0x2174fcu;

    // 0x2174fc: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x2174fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x217500: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x217500u;
    SET_GPR_U32(ctx, 31, 0x217508u);
    ctx->pc = 0x217504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217500u;
    // 0x217504: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x217508u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217508u) { return; }
    ctx->pc = 0x217508u;
label_217508:
    // 0x217508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217508u;
    {
        const bool branch_taken_0x217508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217508u;
        // 0x21750c: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217508) {
            ctx->pc = 0x217514u;
            return;
        }
    }
    ctx->pc = 0x217510u;
}
