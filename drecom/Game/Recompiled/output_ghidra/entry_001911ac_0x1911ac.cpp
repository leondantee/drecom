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

// Function: entry_001911ac
// Address: 0x1911ac - 0x1911b4
void entry_001911ac_0x1911ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001911ac_0x1911ac");
#endif

    ctx->pc = 0x1911acu;

    // 0x1911ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1911acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1911b0: 0x2455e550  addiu       $s5, $v0, -0x1AB0
    ctx->pc = 0x1911b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    ctx->pc = 0x1911b4u;
}
