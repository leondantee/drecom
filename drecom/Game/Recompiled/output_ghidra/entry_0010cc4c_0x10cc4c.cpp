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

// Function: entry_0010cc4c
// Address: 0x10cc4c - 0x10cc58
void entry_0010cc4c_0x10cc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cc4c_0x10cc4c");
#endif

    ctx->pc = 0x10cc4cu;

    // 0x10cc4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10cc50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10cc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10cc54: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x10cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x10cc58u;
}
