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

// Function: entry_0026ea70
// Address: 0x26ea70 - 0x26eadc
void entry_0026ea70_0x26ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ea70_0x26ea70");
#endif

    switch (ctx->pc) {
        case 0x26ea7cu: goto label_26ea7c;
        default: break;
    }

    ctx->pc = 0x26ea70u;

    // 0x26ea70: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26ea70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ea74: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26EA74u;
    SET_GPR_U32(ctx, 31, 0x26EA7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26EA74u, 0x26EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA7Cu;
label_26ea7c:
    // 0x26ea7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea80: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x26ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x26ea84: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26EA84u;
    {
        const bool branch_taken_0x26ea84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea84) {
            ctx->pc = 0x26EADCu;
            return;
        }
    }
    ctx->pc = 0x26EA8Cu;
    // 0x26ea8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea90: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ea94: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26ea98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26ea98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ea9c: 0x0  nop
    ctx->pc = 0x26ea9cu;
    // NOP
    // 0x26eaa0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26eaa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26eaa4: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26eaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26eaa8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eaac: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26eab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eab4: 0x0  nop
    ctx->pc = 0x26eab4u;
    // NOP
    // 0x26eab8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26eab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26eabc: 0x0  nop
    ctx->pc = 0x26eabcu;
    // NOP
    // 0x26eac0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x26EAC0u;
    {
        const bool branch_taken_0x26eac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26eac0) {
            ctx->pc = 0x26EB28u;
            return;
        }
    }
    ctx->pc = 0x26EAC8u;
    // 0x26eac8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eacc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ead0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26ead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x26ead4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26EAD4u;
    {
        const bool branch_taken_0x26ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ead4) {
            ctx->pc = 0x26EB28u;
            return;
        }
    }
    ctx->pc = 0x26EADCu;
}
