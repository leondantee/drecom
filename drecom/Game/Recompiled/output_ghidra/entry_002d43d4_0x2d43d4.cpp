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

// Function: entry_002d43d4
// Address: 0x2d43d4 - 0x2d43ec
void entry_002d43d4_0x2d43d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d43d4_0x2d43d4");
#endif

    ctx->pc = 0x2d43d4u;

    // 0x2d43d4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2d43d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d43d8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d43d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d43dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d43dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d43e0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d43e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d43e4: 0xc0c6c64  jal         func_31B190
    ctx->pc = 0x2D43E4u;
    SET_GPR_U32(ctx, 31, 0x2D43ECu);
    ctx->pc = 0x31B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B190u, 0x2D43E4u, 0x2D43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D43ECu;
}
