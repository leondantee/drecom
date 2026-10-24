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

// Function: entry_002e28c8
// Address: 0x2e28c8 - 0x2e28e4
void entry_002e28c8_0x2e28c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e28c8_0x2e28c8");
#endif

    ctx->pc = 0x2e28c8u;

    // 0x2e28c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e28cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e28ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e28d0: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e28d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e28d4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e28d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e28d8: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e28d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e28dc: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E28DCu;
    SET_GPR_U32(ctx, 31, 0x2E28E4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E28DCu, 0x2E28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E28E4u;
}
