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

// Function: entry_002971b0
// Address: 0x2971b0 - 0x2971bc
void entry_002971b0_0x2971b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002971b0_0x2971b0");
#endif

    ctx->pc = 0x2971b0u;

    // 0x2971b0: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x2971b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x2971b4: 0x26561a14  addiu       $s6, $s2, 0x1A14
    ctx->pc = 0x2971b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 6676));
    // 0x2971b8: 0xafb600ac  sw          $s6, 0xAC($sp)
    ctx->pc = 0x2971b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 22));
    ctx->pc = 0x2971bcu;
}
