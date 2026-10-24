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

// Function: entry_001101ec
// Address: 0x1101ec - 0x1101f4
void entry_001101ec_0x1101ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001101ec_0x1101ec");
#endif

    ctx->pc = 0x1101ecu;

    // 0x1101ec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1101ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1101f0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1101f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x1101f4u;
}
