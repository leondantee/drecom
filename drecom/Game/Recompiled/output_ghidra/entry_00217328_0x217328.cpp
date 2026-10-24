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

// Function: entry_00217328
// Address: 0x217328 - 0x217334
void entry_00217328_0x217328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217328_0x217328");
#endif

    switch (ctx->pc) {
        case 0x217330u: goto label_217330;
        default: break;
    }

    ctx->pc = 0x217328u;

    // 0x217328: 0xc046280  jal         func_118A00
    ctx->pc = 0x217328u;
    SET_GPR_U32(ctx, 31, 0x217330u);
    ctx->pc = 0x21732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217328u;
    // 0x21732c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A00u;
    {
        ctx->pc = 0x217330u;
        ps2_stubs::memcmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217330u) { return; }
    ctx->pc = 0x217330u;
label_217330:
    // 0x217330: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x217330u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x217334u;
}
