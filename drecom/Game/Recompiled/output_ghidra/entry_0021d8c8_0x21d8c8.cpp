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

// Function: entry_0021d8c8
// Address: 0x21d8c8 - 0x21d948
void entry_0021d8c8_0x21d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d8c8_0x21d8c8");
#endif

    switch (ctx->pc) {
        case 0x21d8d0u: goto label_21d8d0;
        case 0x21d8f8u: goto label_21d8f8;
        case 0x21d920u: goto label_21d920;
        default: break;
    }

    ctx->pc = 0x21d8c8u;

    // 0x21d8c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D8C8u;
    SET_GPR_U32(ctx, 31, 0x21D8D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D8C8u, 0x21D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8D0u;
label_21d8d0:
    // 0x21d8d0: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x21d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x21d8d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d8d8: 0x0  nop
    ctx->pc = 0x21d8d8u;
    // NOP
    // 0x21d8dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d8dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d8e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d8e4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x21d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d8e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d8ec: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x21d8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x21d8f0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D8F0u;
    SET_GPR_U32(ctx, 31, 0x21D8F8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D8F0u, 0x21D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8F8u;
label_21d8f8:
    // 0x21d8f8: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x21d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x21d8fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d900: 0x0  nop
    ctx->pc = 0x21d900u;
    // NOP
    // 0x21d904: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d908: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d90c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x21d90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d910: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d914: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x21d914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x21d918: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D918u;
    SET_GPR_U32(ctx, 31, 0x21D920u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D918u, 0x21D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D920u;
label_21d920:
    // 0x21d920: 0x3c034228  lui         $v1, 0x4228
    ctx->pc = 0x21d920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16936 << 16));
    // 0x21d924: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21d924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d928: 0x0  nop
    ctx->pc = 0x21d928u;
    // NOP
    // 0x21d92c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d92cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d930: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d934: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x21d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d93c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x21d93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x21d940: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x21D940u;
    {
        const bool branch_taken_0x21d940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d940) {
            ctx->pc = 0x21DD28u;
            return;
        }
    }
    ctx->pc = 0x21D948u;
}
