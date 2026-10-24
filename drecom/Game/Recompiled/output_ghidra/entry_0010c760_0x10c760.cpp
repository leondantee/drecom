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

// Function: entry_0010c760
// Address: 0x10c760 - 0x10c76c
void entry_0010c760_0x10c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c760_0x10c760");
#endif

    ctx->pc = 0x10c760u;

    // 0x10c760: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10c760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10c764: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10c768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x10c76cu;
}
