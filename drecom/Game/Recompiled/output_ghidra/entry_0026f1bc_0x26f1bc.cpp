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

// Function: entry_0026f1bc
// Address: 0x26f1bc - 0x26f228
void entry_0026f1bc_0x26f1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f1bc_0x26f1bc");
#endif

    switch (ctx->pc) {
        case 0x26f1c8u: goto label_26f1c8;
        default: break;
    }

    ctx->pc = 0x26f1bcu;

    // 0x26f1bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f1bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f1c0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26F1C0u;
    SET_GPR_U32(ctx, 31, 0x26F1C8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26F1C0u, 0x26F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1C8u;
label_26f1c8:
    // 0x26f1c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f1cc: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x26f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x26f1d0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26F1D0u;
    {
        const bool branch_taken_0x26f1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f1d0) {
            ctx->pc = 0x26F228u;
            return;
        }
    }
    ctx->pc = 0x26F1D8u;
    // 0x26f1d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f1dc: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f1e0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26f1e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f1e8: 0x0  nop
    ctx->pc = 0x26f1e8u;
    // NOP
    // 0x26f1ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26f1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f1f0: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26f1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26f1f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f1f8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26f1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f1fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f1fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f200: 0x0  nop
    ctx->pc = 0x26f200u;
    // NOP
    // 0x26f204: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26f204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f208: 0x0  nop
    ctx->pc = 0x26f208u;
    // NOP
    // 0x26f20c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x26F20Cu;
    {
        const bool branch_taken_0x26f20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f20c) {
            ctx->pc = 0x26F270u;
            return;
        }
    }
    ctx->pc = 0x26F214u;
    // 0x26f214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f218: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f21c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26f21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x26f220: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26F220u;
    {
        const bool branch_taken_0x26f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f220) {
            ctx->pc = 0x26F270u;
            return;
        }
    }
    ctx->pc = 0x26F228u;
}
