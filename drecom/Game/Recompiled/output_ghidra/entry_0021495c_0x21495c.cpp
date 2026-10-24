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

// Function: entry_0021495c
// Address: 0x21495c - 0x214968
void entry_0021495c_0x21495c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021495c_0x21495c");
#endif

    ctx->pc = 0x21495cu;

    // 0x21495c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21495cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x214960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214964: 0x0  nop
    ctx->pc = 0x214964u;
    // NOP
    ctx->pc = 0x214968u;
}
