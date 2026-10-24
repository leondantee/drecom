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

// Function: entry_001420d0
// Address: 0x1420d0 - 0x1420f8
void entry_001420d0_0x1420d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001420d0_0x1420d0");
#endif

    switch (ctx->pc) {
        case 0x1420d8u: goto label_1420d8;
        default: break;
    }

    ctx->pc = 0x1420d0u;

    // 0x1420d0: 0xc06ac88  jal         func_1AB220
    ctx->pc = 0x1420D0u;
    SET_GPR_U32(ctx, 31, 0x1420D8u);
    ctx->pc = 0x1AB220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB220u, 0x1420D0u, 0x1420D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420D8u;
label_1420d8:
    // 0x1420d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1420d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1420dc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1420DCu;
    {
        const bool branch_taken_0x1420dc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1420dc) {
            ctx->pc = 0x1420F8u;
            return;
        }
    }
    ctx->pc = 0x1420E4u;
    // 0x1420e4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1420e4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1420e8: 0x0  nop
    ctx->pc = 0x1420e8u;
    // NOP
    // 0x1420ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1420ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1420f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1420F0u;
    {
        const bool branch_taken_0x1420f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1420f0) {
            ctx->pc = 0x142114u;
            return;
        }
    }
    ctx->pc = 0x1420F8u;
}
