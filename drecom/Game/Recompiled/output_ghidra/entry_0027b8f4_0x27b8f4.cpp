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

// Function: entry_0027b8f4
// Address: 0x27b8f4 - 0x27b8fc
void entry_0027b8f4_0x27b8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b8f4_0x27b8f4");
#endif

    ctx->pc = 0x27b8f4u;

    // 0x27b8f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27b8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27b8f8: 0xac201b30  sw          $zero, 0x1B30($at)
    ctx->pc = 0x27b8f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621B30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B30u, _value); } while (0);
    ctx->pc = 0x27b8fcu;
}
