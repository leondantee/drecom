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

// Function: entry_0037caf4
// Address: 0x37caf4 - 0x37cb04
void entry_0037caf4_0x37caf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037caf4_0x37caf4");
#endif

    ctx->pc = 0x37caf4u;

    // 0x37caf4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x37caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x37caf8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x37caf8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37cafc: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x37cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x37cb00: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x37cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x37cb04u;
}
