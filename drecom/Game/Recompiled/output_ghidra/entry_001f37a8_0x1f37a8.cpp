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

// Function: entry_001f37a8
// Address: 0x1f37a8 - 0x1f37f4
void entry_001f37a8_0x1f37a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f37a8_0x1f37a8");
#endif

    switch (ctx->pc) {
        case 0x1f37d0u: goto label_1f37d0;
        case 0x1f37ecu: goto label_1f37ec;
        default: break;
    }

    ctx->pc = 0x1f37a8u;

    // 0x1f37a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f37a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f37ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f37acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f37b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f37b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f37b8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f37b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f37bc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1f37bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f37c0: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x1f37c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f37c4: 0xc44e003c  lwc1        $f14, 0x3C($v0)
    ctx->pc = 0x1f37c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f37c8: 0xc05c8f8  jal         func_1723E0
    ctx->pc = 0x1F37C8u;
    SET_GPR_U32(ctx, 31, 0x1F37D0u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x1F37C8u, 0x1F37D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37D0u;
label_1f37d0:
    // 0x1f37d0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1f37d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f37d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f37d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f37d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f37dc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1f37dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f37e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f37e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f37e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F37E4u;
    SET_GPR_U32(ctx, 31, 0x1F37ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F37E4u, 0x1F37ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37ECu;
label_1f37ec:
    // 0x1f37ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f37f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f37f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1f37f4u;
}
