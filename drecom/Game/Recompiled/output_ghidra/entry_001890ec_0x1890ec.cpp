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

// Function: entry_001890ec
// Address: 0x1890ec - 0x1890f8
void entry_001890ec_0x1890ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001890ec_0x1890ec");
#endif

    ctx->pc = 0x1890ecu;

    // 0x1890ec: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x1890ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1890f0: 0xc06216c  jal         func_1885B0
    ctx->pc = 0x1890F0u;
    SET_GPR_U32(ctx, 31, 0x1890F8u);
    ctx->pc = 0x1885B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1885B0u, 0x1890F0u, 0x1890F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890F8u;
}
