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

// Function: entry_0026efcc
// Address: 0x26efcc - 0x26f038
void entry_0026efcc_0x26efcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026efcc_0x26efcc");
#endif

    switch (ctx->pc) {
        case 0x26efd8u: goto label_26efd8;
        default: break;
    }

    ctx->pc = 0x26efccu;

    // 0x26efcc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26efccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26efd0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26EFD0u;
    SET_GPR_U32(ctx, 31, 0x26EFD8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26EFD0u, 0x26EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFD8u;
label_26efd8:
    // 0x26efd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26efdc: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x26efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x26efe0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26EFE0u;
    {
        const bool branch_taken_0x26efe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26efe0) {
            ctx->pc = 0x26F038u;
            return;
        }
    }
    ctx->pc = 0x26EFE8u;
    // 0x26efe8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26efec: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26efecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26eff0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26eff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26eff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eff8: 0x0  nop
    ctx->pc = 0x26eff8u;
    // NOP
    // 0x26effc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26effcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f000: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26f000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26f004: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f008: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26f008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f00c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f00cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f010: 0x0  nop
    ctx->pc = 0x26f010u;
    // NOP
    // 0x26f014: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26f014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f018: 0x0  nop
    ctx->pc = 0x26f018u;
    // NOP
    // 0x26f01c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x26F01Cu;
    {
        const bool branch_taken_0x26f01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f01c) {
            ctx->pc = 0x26F080u;
            return;
        }
    }
    ctx->pc = 0x26F024u;
    // 0x26f024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f028: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f02c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26f02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x26f030: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26F030u;
    {
        const bool branch_taken_0x26f030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f030) {
            ctx->pc = 0x26F080u;
            return;
        }
    }
    ctx->pc = 0x26F038u;
}
