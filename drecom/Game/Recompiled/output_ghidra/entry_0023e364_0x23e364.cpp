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

// Function: entry_0023e364
// Address: 0x23e364 - 0x23e3b4
void entry_0023e364_0x23e364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e364_0x23e364");
#endif

    switch (ctx->pc) {
        case 0x23e390u: goto label_23e390;
        case 0x23e3acu: goto label_23e3ac;
        default: break;
    }

    ctx->pc = 0x23e364u;

    // 0x23e364: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e368: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23e368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e36c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e370: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x23e370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e374: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23e374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23e378: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23e378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e37c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x23e380: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x23e380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x23e384: 0xc4cd003c  lwc1        $f13, 0x3C($a2)
    ctx->pc = 0x23e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23e388: 0xc05c848  jal         func_172120
    ctx->pc = 0x23E388u;
    SET_GPR_U32(ctx, 31, 0x23E390u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23E388u, 0x23E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E390u;
label_23e390:
    // 0x23e390: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x23e390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x23e394: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e398: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x23e398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e39c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x23e39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e3a0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23e3a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e3a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23E3A4u;
    SET_GPR_U32(ctx, 31, 0x23E3ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23E3A4u, 0x23E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E3ACu;
label_23e3ac:
    // 0x23e3ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e3b0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x23e3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->pc = 0x23e3b4u;
}
