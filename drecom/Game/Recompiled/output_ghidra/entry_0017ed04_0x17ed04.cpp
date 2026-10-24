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

// Function: entry_0017ed04
// Address: 0x17ed04 - 0x17ed18
void entry_0017ed04_0x17ed04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ed04_0x17ed04");
#endif

    ctx->pc = 0x17ed04u;

    // 0x17ed04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17ed04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17ed08: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17ed0c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x17ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ed10: 0xc0566cc  jal         func_159B30
    ctx->pc = 0x17ED10u;
    SET_GPR_U32(ctx, 31, 0x17ED18u);
    ctx->pc = 0x159B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159B30u, 0x17ED10u, 0x17ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED18u;
}
