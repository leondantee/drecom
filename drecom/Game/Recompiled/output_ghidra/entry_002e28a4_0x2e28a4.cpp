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

// Function: entry_002e28a4
// Address: 0x2e28a4 - 0x2e28c8
void entry_002e28a4_0x2e28a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e28a4_0x2e28a4");
#endif

    switch (ctx->pc) {
        case 0x2e28c0u: goto label_2e28c0;
        default: break;
    }

    ctx->pc = 0x2e28a4u;

    // 0x2e28a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e28a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e28a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e28a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e28ac: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x2e28acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e28b0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e28b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e28b4: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e28b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e28b8: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E28B8u;
    SET_GPR_U32(ctx, 31, 0x2E28C0u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E28B8u, 0x2E28C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E28C0u;
label_2e28c0:
    // 0x2e28c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E28C0u;
    {
        const bool branch_taken_0x2e28c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e28c0) {
            ctx->pc = 0x2E28E4u;
            return;
        }
    }
    ctx->pc = 0x2E28C8u;
}
