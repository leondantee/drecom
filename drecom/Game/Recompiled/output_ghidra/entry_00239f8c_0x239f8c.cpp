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

// Function: entry_00239f8c
// Address: 0x239f8c - 0x239fdc
void entry_00239f8c_0x239f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239f8c_0x239f8c");
#endif

    switch (ctx->pc) {
        case 0x239fb8u: goto label_239fb8;
        case 0x239fd4u: goto label_239fd4;
        default: break;
    }

    ctx->pc = 0x239f8cu;

    // 0x239f8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f90: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x239f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239f98: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x239f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239f9c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x239f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x239fa0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x239fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239fa4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x239fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x239fa8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x239fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x239fac: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x239facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x239fb0: 0xc05c848  jal         func_172120
    ctx->pc = 0x239FB0u;
    SET_GPR_U32(ctx, 31, 0x239FB8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x239FB0u, 0x239FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FB8u;
label_239fb8:
    // 0x239fb8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x239fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x239fbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239fc0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x239fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239fc4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x239fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239fc8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x239fc8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239fcc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x239FCCu;
    SET_GPR_U32(ctx, 31, 0x239FD4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x239FCCu, 0x239FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FD4u;
label_239fd4:
    // 0x239fd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239fd8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x239fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->pc = 0x239fdcu;
}
