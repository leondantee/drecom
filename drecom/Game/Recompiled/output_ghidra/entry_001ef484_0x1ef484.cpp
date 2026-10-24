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

// Function: entry_001ef484
// Address: 0x1ef484 - 0x1ef4c0
void entry_001ef484_0x1ef484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef484_0x1ef484");
#endif

    switch (ctx->pc) {
        case 0x1ef49cu: goto label_1ef49c;
        case 0x1ef4b4u: goto label_1ef4b4;
        default: break;
    }

    ctx->pc = 0x1ef484u;

    // 0x1ef484: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef488: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef48c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ef48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef490: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ef490u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef494: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EF494u;
    SET_GPR_U32(ctx, 31, 0x1EF49Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EF494u, 0x1EF49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF49Cu;
label_1ef49c:
    // 0x1ef49c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ef4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ef4a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ef4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ef4ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EF4ACu;
    SET_GPR_U32(ctx, 31, 0x1EF4B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EF4ACu, 0x1EF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4B4u;
label_1ef4b4:
    // 0x1ef4b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4b8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EF4B8u;
    SET_GPR_U32(ctx, 31, 0x1EF4C0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EF4B8u, 0x1EF4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4C0u;
}
