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

// Function: entry_00105f88
// Address: 0x105f88 - 0x105f94
void entry_00105f88_0x105f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105f88_0x105f88");
#endif

    ctx->pc = 0x105f88u;

    // 0x105f88: 0x26a241f8  addiu       $v0, $s5, 0x41F8
    ctx->pc = 0x105f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16888));
    // 0x105f8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105f90: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x105f90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x105f94u;
}
