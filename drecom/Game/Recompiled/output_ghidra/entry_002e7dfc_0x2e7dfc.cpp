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

// Function: entry_002e7dfc
// Address: 0x2e7dfc - 0x2e7e20
void entry_002e7dfc_0x2e7dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7dfc_0x2e7dfc");
#endif

    switch (ctx->pc) {
        case 0x2e7e18u: goto label_2e7e18;
        default: break;
    }

    ctx->pc = 0x2e7dfcu;

    // 0x2e7dfc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e7e00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7e04: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7e08: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7e08u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7e0c: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7e10: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7E10u;
    SET_GPR_U32(ctx, 31, 0x2E7E18u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7E10u, 0x2E7E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E18u;
label_2e7e18:
    // 0x2e7e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7E18u;
    {
        const bool branch_taken_0x2e7e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e18) {
            ctx->pc = 0x2E7E3Cu;
            return;
        }
    }
    ctx->pc = 0x2E7E20u;
}
