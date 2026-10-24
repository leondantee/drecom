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

// Function: entry_001ee858
// Address: 0x1ee858 - 0x1ee88c
void entry_001ee858_0x1ee858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee858_0x1ee858");
#endif

    switch (ctx->pc) {
        case 0x1ee870u: goto label_1ee870;
        case 0x1ee884u: goto label_1ee884;
        default: break;
    }

    ctx->pc = 0x1ee858u;

    // 0x1ee858: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee85c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ee85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee860: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee864: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ee864u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee868: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EE868u;
    SET_GPR_U32(ctx, 31, 0x1EE870u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EE868u, 0x1EE870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE870u;
label_1ee870:
    // 0x1ee870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee874: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ee874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ee878: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee87c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EE87Cu;
    SET_GPR_U32(ctx, 31, 0x1EE884u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EE87Cu, 0x1EE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE884u;
label_1ee884:
    // 0x1ee884: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1EE884u;
    {
        const bool branch_taken_0x1ee884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee884) {
            ctx->pc = 0x1EEBACu;
            return;
        }
    }
    ctx->pc = 0x1EE88Cu;
}
