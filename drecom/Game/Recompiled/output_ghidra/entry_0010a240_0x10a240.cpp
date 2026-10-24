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

// Function: entry_0010a240
// Address: 0x10a240 - 0x10a248
void entry_0010a240_0x10a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a240_0x10a240");
#endif

    ctx->pc = 0x10a240u;

    // 0x10a240: 0x8042b4c  j           func_10AD30
    ctx->pc = 0x10A240u;
    ctx->pc = 0x10A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A240u;
    // 0x10a244: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AD30u;
    _sendDataToIPU_0x10ad30(rdram, ctx, runtime); return;
    ctx->pc = 0x10A248u;
}
