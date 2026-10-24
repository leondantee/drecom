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

// Function: entry_0021729c
// Address: 0x21729c - 0x2172a8
void entry_0021729c_0x21729c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021729c_0x21729c");
#endif

    ctx->pc = 0x21729cu;

    // 0x21729c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x21729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2172a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2172a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2172a4: 0x0  nop
    ctx->pc = 0x2172a4u;
    // NOP
    ctx->pc = 0x2172a8u;
}
