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

// Function: entry_002e7ca4
// Address: 0x2e7ca4 - 0x2e7cc8
void entry_002e7ca4_0x2e7ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7ca4_0x2e7ca4");
#endif

    switch (ctx->pc) {
        case 0x2e7cc0u: goto label_2e7cc0;
        default: break;
    }

    ctx->pc = 0x2e7ca4u;

    // 0x2e7ca4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e7ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7cac: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7cb0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7cb0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7cb4: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7cb8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7CB8u;
    SET_GPR_U32(ctx, 31, 0x2E7CC0u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7CB8u, 0x2E7CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7CC0u;
label_2e7cc0:
    // 0x2e7cc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7CC0u;
    {
        const bool branch_taken_0x2e7cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7cc0) {
            ctx->pc = 0x2E7CE4u;
            return;
        }
    }
    ctx->pc = 0x2E7CC8u;
}
