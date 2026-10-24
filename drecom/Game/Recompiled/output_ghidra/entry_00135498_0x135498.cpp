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

// Function: entry_00135498
// Address: 0x135498 - 0x1354e0
void entry_00135498_0x135498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135498_0x135498");
#endif

    switch (ctx->pc) {
        case 0x1354b0u: goto label_1354b0;
        case 0x1354bcu: goto label_1354bc;
        default: break;
    }

    ctx->pc = 0x135498u;

    // 0x135498: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13549c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1354a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1354a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1354a4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1354a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1354a8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1354A8u;
    SET_GPR_U32(ctx, 31, 0x1354B0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1354B0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1354B0u) { return; }
    ctx->pc = 0x1354B0u;
label_1354b0:
    // 0x1354b0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1354b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1354b4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1354B4u;
    SET_GPR_U32(ctx, 31, 0x1354BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1354B4u, 0x1354BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354BCu;
label_1354bc:
    // 0x1354bc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1354bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1354c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1354c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1354c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1354c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1354c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1354c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1354cc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1354ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1354d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1354d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1354d4: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1354d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1354d8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1354D8u;
    SET_GPR_U32(ctx, 31, 0x1354E0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1354E0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1354E0u) { return; }
    ctx->pc = 0x1354E0u;
}
