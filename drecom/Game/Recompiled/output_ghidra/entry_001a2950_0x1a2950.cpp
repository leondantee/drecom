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

// Function: entry_001a2950
// Address: 0x1a2950 - 0x1a2958
void entry_001a2950_0x1a2950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2950_0x1a2950");
#endif

    ctx->pc = 0x1a2950u;

    // 0x1a2950: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2954: 0x245100b4  addiu       $s1, $v0, 0xB4
    ctx->pc = 0x1a2954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    ctx->pc = 0x1a2958u;
}
