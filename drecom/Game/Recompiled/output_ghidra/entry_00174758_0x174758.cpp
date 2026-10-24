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

// Function: entry_00174758
// Address: 0x174758 - 0x17478c
void entry_00174758_0x174758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174758_0x174758");
#endif

    switch (ctx->pc) {
        case 0x17476cu: goto label_17476c;
        case 0x174788u: goto label_174788;
        default: break;
    }

    ctx->pc = 0x174758u;

    // 0x174758: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17475c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x17475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x174760: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x174760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x174764: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x174764u;
    SET_GPR_U32(ctx, 31, 0x17476Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x174764u, 0x17476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17476Cu;
label_17476c:
    // 0x17476c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17476cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x174770: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174774: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x174774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174778: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x174778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17477c: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x17477cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174780: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x174780u;
    SET_GPR_U32(ctx, 31, 0x174788u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x174780u, 0x174788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174788u;
label_174788:
    // 0x174788: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x174788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x17478cu;
}
