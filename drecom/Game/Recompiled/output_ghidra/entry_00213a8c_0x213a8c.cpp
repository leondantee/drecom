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

// Function: entry_00213a8c
// Address: 0x213a8c - 0x213a94
void entry_00213a8c_0x213a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213a8c_0x213a8c");
#endif

    ctx->pc = 0x213a8cu;

    // 0x213a8c: 0xaca29ce0  sw          $v0, -0x6320($a1)
    ctx->pc = 0x213a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941920), GPR_U32(ctx, 2));
    // 0x213a90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x213a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213a94u;
}
