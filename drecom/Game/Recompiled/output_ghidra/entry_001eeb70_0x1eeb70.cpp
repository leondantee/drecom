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

// Function: entry_001eeb70
// Address: 0x1eeb70 - 0x1eebac
void entry_001eeb70_0x1eeb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eeb70_0x1eeb70");
#endif

    switch (ctx->pc) {
        case 0x1eeb88u: goto label_1eeb88;
        case 0x1eeba0u: goto label_1eeba0;
        default: break;
    }

    ctx->pc = 0x1eeb70u;

    // 0x1eeb70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eeb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb74: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1eeb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeb78: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1eeb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eeb7c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1eeb7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eeb80: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EEB80u;
    SET_GPR_U32(ctx, 31, 0x1EEB88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EEB80u, 0x1EEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB88u;
label_1eeb88:
    // 0x1eeb88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb8c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1eeb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1eeb90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1eeb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1eeb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1eeb98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EEB98u;
    SET_GPR_U32(ctx, 31, 0x1EEBA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EEB98u, 0x1EEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEBA0u;
label_1eeba0:
    // 0x1eeba0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1eeba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeba4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EEBA4u;
    SET_GPR_U32(ctx, 31, 0x1EEBACu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EEBA4u, 0x1EEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEBACu;
}
