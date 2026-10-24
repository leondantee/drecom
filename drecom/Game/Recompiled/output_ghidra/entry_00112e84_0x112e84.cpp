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

// Function: entry_00112e84
// Address: 0x112e84 - 0x112e8c
void entry_00112e84_0x112e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112e84_0x112e84");
#endif

    ctx->pc = 0x112e84u;

    // 0x112e84: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x112e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x112e88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x112e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x112e8cu;
}
