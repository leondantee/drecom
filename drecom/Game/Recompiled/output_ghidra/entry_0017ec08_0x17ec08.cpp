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

// Function: entry_0017ec08
// Address: 0x17ec08 - 0x17ec4c
void entry_0017ec08_0x17ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ec08_0x17ec08");
#endif

    switch (ctx->pc) {
        case 0x17ec28u: goto label_17ec28;
        default: break;
    }

    ctx->pc = 0x17ec08u;

    // 0x17ec08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec14: 0x8c8400a4  lw          $a0, 0xA4($a0)
    ctx->pc = 0x17ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x17ec18: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x17ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x17ec1c: 0x8c4600a0  lw          $a2, 0xA0($v0)
    ctx->pc = 0x17ec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x17ec20: 0xc05fb7c  jal         func_17EDF0
    ctx->pc = 0x17EC20u;
    SET_GPR_U32(ctx, 31, 0x17EC28u);
    ctx->pc = 0x17EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EDF0u, 0x17EC20u, 0x17EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC28u;
label_17ec28:
    // 0x17ec28: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ec28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ec2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec30: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x17ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ec34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ec38: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x17ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ec3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17ec3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17ec40: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x17ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ec44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17ec44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17ec48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ec48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x17ec4cu;
}
