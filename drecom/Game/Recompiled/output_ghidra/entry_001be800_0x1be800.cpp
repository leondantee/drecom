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

// Function: entry_001be800
// Address: 0x1be800 - 0x1be848
void entry_001be800_0x1be800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be800_0x1be800");
#endif

    switch (ctx->pc) {
        case 0x1be840u: goto label_1be840;
        default: break;
    }

    ctx->pc = 0x1be800u;

    // 0x1be800: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be804: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1be804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be80c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1be80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1be810: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1be810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1be814: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1be814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1be818: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE818u;
    {
        const bool branch_taken_0x1be818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be818) {
            ctx->pc = 0x1BE848u;
            return;
        }
    }
    ctx->pc = 0x1BE820u;
    // 0x1be820: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1be824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be828: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1be828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1be82c: 0x24061402  addiu       $a2, $zero, 0x1402
    ctx->pc = 0x1be82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5122));
    // 0x1be830: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1be830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be834: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1be834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1be838: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BE838u;
    SET_GPR_U32(ctx, 31, 0x1BE840u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BE838u, 0x1BE840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE840u;
label_1be840:
    // 0x1be840: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE840u;
    {
        const bool branch_taken_0x1be840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be840) {
            ctx->pc = 0x1BE868u;
            return;
        }
    }
    ctx->pc = 0x1BE848u;
}
