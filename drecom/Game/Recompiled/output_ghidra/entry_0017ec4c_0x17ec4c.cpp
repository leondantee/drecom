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

// Function: entry_0017ec4c
// Address: 0x17ec4c - 0x17ec60
void entry_0017ec4c_0x17ec4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ec4c_0x17ec4c");
#endif

    ctx->pc = 0x17ec4cu;

    // 0x17ec4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17ec4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17ec50: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17ec54: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x17ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17ec58: 0xc056680  jal         func_159A00
    ctx->pc = 0x17EC58u;
    SET_GPR_U32(ctx, 31, 0x17EC60u);
    ctx->pc = 0x159A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A00u, 0x17EC58u, 0x17EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC60u;
}
