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

// Function: entry_0010fc30
// Address: 0x10fc30 - 0x10fc3c
void entry_0010fc30_0x10fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc30_0x10fc30");
#endif

    ctx->pc = 0x10fc30u;

    // 0x10fc30: 0x25084600  addiu       $t0, $t0, 0x4600
    ctx->pc = 0x10fc30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17920));
    // 0x10fc34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10fc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10fc38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10fc3cu;
}
