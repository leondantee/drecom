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

// Function: entry_001884e4
// Address: 0x1884e4 - 0x1884ec
void entry_001884e4_0x1884e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001884e4_0x1884e4");
#endif

    ctx->pc = 0x1884e4u;

    // 0x1884e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1884e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1884e8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1884e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x1884ecu;
}
