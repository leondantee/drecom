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

// Function: entry_001085bc
// Address: 0x1085bc - 0x1085c4
void entry_001085bc_0x1085bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001085bc_0x1085bc");
#endif

    ctx->pc = 0x1085bcu;

    // 0x1085bc: 0x24ad0001  addiu       $t5, $a1, 0x1
    ctx->pc = 0x1085bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1085c0: 0x8f0200e4  lw          $v0, 0xE4($t8)
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 228)));
    ctx->pc = 0x1085c4u;
}
