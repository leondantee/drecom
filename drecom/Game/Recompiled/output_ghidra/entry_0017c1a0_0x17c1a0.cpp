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

// Function: entry_0017c1a0
// Address: 0x17c1a0 - 0x17c1e8
void entry_0017c1a0_0x17c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c1a0_0x17c1a0");
#endif

    switch (ctx->pc) {
        case 0x17c1acu: goto label_17c1ac;
        case 0x17c1ccu: goto label_17c1cc;
        case 0x17c1e0u: goto label_17c1e0;
        default: break;
    }

    ctx->pc = 0x17c1a0u;

    // 0x17c1a0: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x17c1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c1a4: 0xc0454c4  jal         func_115310
    ctx->pc = 0x17C1A4u;
    SET_GPR_U32(ctx, 31, 0x17C1ACu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x17C1A4u, 0x17C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C1ACu;
label_17c1ac:
    // 0x17c1ac: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x17c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c1b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c1b4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c1b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c1bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17c1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17c1c0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x17c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c1c4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x17C1C4u;
    SET_GPR_U32(ctx, 31, 0x17C1CCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x17C1CCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C1CCu) { return; }
    ctx->pc = 0x17C1CCu;
label_17c1cc:
    // 0x17c1cc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c1d0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c1d4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c1d8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17C1D8u;
    SET_GPR_U32(ctx, 31, 0x17C1E0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17C1E0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C1E0u) { return; }
    ctx->pc = 0x17C1E0u;
label_17c1e0:
    // 0x17c1e0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x17c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c1e4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->pc = 0x17c1e8u;
}
