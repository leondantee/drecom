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

// Function: entry_002e7dd8
// Address: 0x2e7dd8 - 0x2e7dfc
void entry_002e7dd8_0x2e7dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7dd8_0x2e7dd8");
#endif

    switch (ctx->pc) {
        case 0x2e7df4u: goto label_2e7df4;
        default: break;
    }

    ctx->pc = 0x2e7dd8u;

    // 0x2e7dd8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2e7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2e7ddc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7de0: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7de4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7de4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7de8: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7dec: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7DECu;
    SET_GPR_U32(ctx, 31, 0x2E7DF4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7DECu, 0x2E7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DF4u;
label_2e7df4:
    // 0x2e7df4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E7DF4u;
    {
        const bool branch_taken_0x2e7df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7df4) {
            ctx->pc = 0x2E7E3Cu;
            return;
        }
    }
    ctx->pc = 0x2E7DFCu;
}
