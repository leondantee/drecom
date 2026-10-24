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

// Function: entry_0010749c
// Address: 0x10749c - 0x1074a4
void entry_0010749c_0x10749c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010749c_0x10749c");
#endif

    ctx->pc = 0x10749cu;

    // 0x10749c: 0xac4044c0  sw          $zero, 0x44C0($v0)
    ctx->pc = 0x10749cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17600), GPR_U32(ctx, 0));
    // 0x1074a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1074a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1074a4u;
}
