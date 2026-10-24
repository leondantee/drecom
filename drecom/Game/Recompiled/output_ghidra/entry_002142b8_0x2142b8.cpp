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

// Function: entry_002142b8
// Address: 0x2142b8 - 0x2142c4
void entry_002142b8_0x2142b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002142b8_0x2142b8");
#endif

    ctx->pc = 0x2142b8u;

    // 0x2142b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2142b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2142bc: 0x808506a  j           func_2141A8
    ctx->pc = 0x2142BCu;
    ctx->pc = 0x2142C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142BCu;
    // 0x2142c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2141A8u;
    kputchar_0x2141a8(rdram, ctx, runtime); return;
    ctx->pc = 0x2142C4u;
}
