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

// Function: entry_00213494
// Address: 0x213494 - 0x21349c
void entry_00213494_0x213494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213494_0x213494");
#endif

    ctx->pc = 0x213494u;

    // 0x213494: 0x8084cda  j           func_213368
    ctx->pc = 0x213494u;
    ctx->pc = 0x213498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213494u;
    // 0x213498: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213368u;
    _sceIDC_0x213368(rdram, ctx, runtime); return;
    ctx->pc = 0x21349Cu;
}
