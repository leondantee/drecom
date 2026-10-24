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

// Function: entry_0010ebf4
// Address: 0x10ebf4 - 0x10ec00
void entry_0010ebf4_0x10ebf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ebf4_0x10ebf4");
#endif

    ctx->pc = 0x10ebf4u;

    // 0x10ebf4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x10ebf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ebfc: 0x0  nop
    ctx->pc = 0x10ebfcu;
    // NOP
    ctx->pc = 0x10ec00u;
}
