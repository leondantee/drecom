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

// Function: entry_00295c4c
// Address: 0x295c4c - 0x295c54
void entry_00295c4c_0x295c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295c4c_0x295c4c");
#endif

    ctx->pc = 0x295c4cu;

    // 0x295c4c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x295c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x295c50: 0xac20ca00  sw          $zero, -0x3600($at)
    ctx->pc = 0x295c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80CA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80CA00u, _value); } while (0);
    ctx->pc = 0x295c54u;
}
