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

// Function: entry_00109108
// Address: 0x109108 - 0x109114
void entry_00109108_0x109108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109108_0x109108");
#endif

    ctx->pc = 0x109108u;

    // 0x109108: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x109108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10910c: 0x80423e4  j           func_108F90
    ctx->pc = 0x10910Cu;
    ctx->pc = 0x109110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10910Cu;
    // 0x109110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F90u;
    _sysbitFlush_0x108f90(rdram, ctx, runtime); return;
    ctx->pc = 0x109114u;
}
