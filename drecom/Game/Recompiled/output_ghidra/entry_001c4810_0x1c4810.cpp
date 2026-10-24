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

// Function: entry_001c4810
// Address: 0x1c4810 - 0x1c4858
void entry_001c4810_0x1c4810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4810_0x1c4810");
#endif

    switch (ctx->pc) {
        case 0x1c4850u: goto label_1c4850;
        default: break;
    }

    ctx->pc = 0x1c4810u;

    // 0x1c4810: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4814: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4818: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c481c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c481cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c4820: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c4824: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c4824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c4828: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4828u;
    {
        const bool branch_taken_0x1c4828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4828) {
            ctx->pc = 0x1C4858u;
            return;
        }
    }
    ctx->pc = 0x1C4830u;
    // 0x1c4830: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4838: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c483c: 0x24061402  addiu       $a2, $zero, 0x1402
    ctx->pc = 0x1c483cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5122));
    // 0x1c4840: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4844: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4848: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C4848u;
    SET_GPR_U32(ctx, 31, 0x1C4850u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C4848u, 0x1C4850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4850u;
label_1c4850:
    // 0x1c4850: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4850u;
    {
        const bool branch_taken_0x1c4850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4850) {
            ctx->pc = 0x1C4878u;
            return;
        }
    }
    ctx->pc = 0x1C4858u;
}
