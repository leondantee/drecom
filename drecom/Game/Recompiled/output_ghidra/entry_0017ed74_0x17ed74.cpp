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

// Function: entry_0017ed74
// Address: 0x17ed74 - 0x17edb8
void entry_0017ed74_0x17ed74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ed74_0x17ed74");
#endif

    switch (ctx->pc) {
        case 0x17ed94u: goto label_17ed94;
        default: break;
    }

    ctx->pc = 0x17ed74u;

    // 0x17ed74: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed78: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x17ed78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed80: 0x8c4400bc  lw          $a0, 0xBC($v0)
    ctx->pc = 0x17ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x17ed84: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x17ed88: 0x8c6600b8  lw          $a2, 0xB8($v1)
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x17ed8c: 0xc05fb7c  jal         func_17EDF0
    ctx->pc = 0x17ED8Cu;
    SET_GPR_U32(ctx, 31, 0x17ED94u);
    ctx->pc = 0x17EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EDF0u, 0x17ED8Cu, 0x17ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED94u;
label_17ed94:
    // 0x17ed94: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ed94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ed98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed9c: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x17ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17eda0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17eda4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x17eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eda8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17eda8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17edac: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x17edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17edb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17edb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17edb4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17edb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x17edb8u;
}
