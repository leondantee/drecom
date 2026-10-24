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

// Function: entry_00294848
// Address: 0x294848 - 0x294850
void entry_00294848_0x294848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294848_0x294848");
#endif

    ctx->pc = 0x294848u;

    // 0x294848: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x294848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29484c: 0xac205b90  sw          $zero, 0x5B90($at)
    ctx->pc = 0x29484cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x625B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x625B90u, _value); } while (0);
    ctx->pc = 0x294850u;
}
