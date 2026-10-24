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

// Function: entry_001d878c
// Address: 0x1d878c - 0x1d8798
void entry_001d878c_0x1d878c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d878c_0x1d878c");
#endif

    ctx->pc = 0x1d878cu;

    // 0x1d878c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d878cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1d8790: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1d8790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d8794: 0x0  nop
    ctx->pc = 0x1d8794u;
    // NOP
    ctx->pc = 0x1d8798u;
}
