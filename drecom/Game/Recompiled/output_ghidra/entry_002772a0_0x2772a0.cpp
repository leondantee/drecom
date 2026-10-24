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

// Function: entry_002772a0
// Address: 0x2772a0 - 0x2772ac
void entry_002772a0_0x2772a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002772a0_0x2772a0");
#endif

    ctx->pc = 0x2772a0u;

    // 0x2772a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2772a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2772a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2772a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2772a8: 0xa022d911  sb          $v0, -0x26EF($at)
    ctx->pc = 0x2772a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    ctx->pc = 0x2772acu;
}
