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

// Function: entry_001a0bd0
// Address: 0x1a0bd0 - 0x1a0be0
void entry_001a0bd0_0x1a0bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0bd0_0x1a0bd0");
#endif

    ctx->pc = 0x1a0bd0u;

    // 0x1a0bd0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1a0bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1a0bd4: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x1a0bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1a0bd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a0bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a0bdc: 0x0  nop
    ctx->pc = 0x1a0bdcu;
    // NOP
    ctx->pc = 0x1a0be0u;
}
