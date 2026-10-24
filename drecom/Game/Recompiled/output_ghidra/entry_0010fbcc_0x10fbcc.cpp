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

// Function: entry_0010fbcc
// Address: 0x10fbcc - 0x10fbd0
void entry_0010fbcc_0x10fbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbcc_0x10fbcc");
#endif

    ctx->pc = 0x10fbccu;

    // 0x10fbcc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x10fbccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10fbd0u;
}
