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

// Function: entry_0026ec44
// Address: 0x26ec44 - 0x26ecb0
void entry_0026ec44_0x26ec44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ec44_0x26ec44");
#endif

    switch (ctx->pc) {
        case 0x26ec50u: goto label_26ec50;
        default: break;
    }

    ctx->pc = 0x26ec44u;

    // 0x26ec44: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26ec44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ec48: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26EC48u;
    SET_GPR_U32(ctx, 31, 0x26EC50u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26EC48u, 0x26EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC50u;
label_26ec50:
    // 0x26ec50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec54: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x26ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x26ec58: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26EC58u;
    {
        const bool branch_taken_0x26ec58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ec58) {
            ctx->pc = 0x26ECB0u;
            return;
        }
    }
    ctx->pc = 0x26EC60u;
    // 0x26ec60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec64: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ec68: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26ec6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26ec6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ec70: 0x0  nop
    ctx->pc = 0x26ec70u;
    // NOP
    // 0x26ec74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ec74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ec78: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26ec78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26ec7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec80: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ec84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ec84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ec88: 0x0  nop
    ctx->pc = 0x26ec88u;
    // NOP
    // 0x26ec8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ec8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ec90: 0x0  nop
    ctx->pc = 0x26ec90u;
    // NOP
    // 0x26ec94: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x26EC94u;
    {
        const bool branch_taken_0x26ec94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ec94) {
            ctx->pc = 0x26ECFCu;
            return;
        }
    }
    ctx->pc = 0x26EC9Cu;
    // 0x26ec9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ec9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eca0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eca4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26eca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x26eca8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26ECA8u;
    {
        const bool branch_taken_0x26eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eca8) {
            ctx->pc = 0x26ECFCu;
            return;
        }
    }
    ctx->pc = 0x26ECB0u;
}
