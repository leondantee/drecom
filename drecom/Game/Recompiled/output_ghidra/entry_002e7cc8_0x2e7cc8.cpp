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

// Function: entry_002e7cc8
// Address: 0x2e7cc8 - 0x2e7ce4
void entry_002e7cc8_0x2e7cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7cc8_0x2e7cc8");
#endif

    ctx->pc = 0x2e7cc8u;

    // 0x2e7cc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e7ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7cd0: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7cd4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7cd4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7cd8: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7cdc: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7CDCu;
    SET_GPR_U32(ctx, 31, 0x2E7CE4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7CDCu, 0x2E7CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CE4u;
}
