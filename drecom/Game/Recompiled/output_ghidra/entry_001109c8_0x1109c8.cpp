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

// Function: entry_001109c8
// Address: 0x1109c8 - 0x1109d0
void entry_001109c8_0x1109c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001109c8_0x1109c8");
#endif

    ctx->pc = 0x1109c8u;

    // 0x1109c8: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x1109c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x1109cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1109ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x1109d0u;
}
