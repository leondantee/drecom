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

// Function: caseD_5
// Address: 0x318020 - 0x318080
void caseD_5_0x318020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x318020");
#endif

    switch (ctx->pc) {
        case 0x318030u: goto label_318030;
        default: break;
    }

    ctx->pc = 0x318020u;

    // 0x318020: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x318020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318024: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x318024u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x318028: 0xc0c6af0  jal         func_31ABC0
    ctx->pc = 0x318028u;
    SET_GPR_U32(ctx, 31, 0x318030u);
    ctx->pc = 0x31ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ABC0u, 0x318028u, 0x318030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318030u;
label_318030:
    // 0x318030: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318034: 0xc46012d0  lwc1        $f0, 0x12D0($v1)
    ctx->pc = 0x318034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318038: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31803c: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x31803cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x318040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318044: 0xc46112d0  lwc1        $f1, 0x12D0($v1)
    ctx->pc = 0x318044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318048: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x318048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x31804c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31804cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318050: 0x0  nop
    ctx->pc = 0x318050u;
    // NOP
    // 0x318054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x318054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318058: 0x0  nop
    ctx->pc = 0x318058u;
    // NOP
    // 0x31805c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31805Cu;
    {
        const bool branch_taken_0x31805c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31805c) {
            ctx->pc = 0x318080u;
            return;
        }
    }
    ctx->pc = 0x318064u;
    // 0x318064: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318068: 0xc46112d0  lwc1        $f1, 0x12D0($v1)
    ctx->pc = 0x318068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31806c: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x31806cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x318070: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x318070u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318074: 0x0  nop
    ctx->pc = 0x318074u;
    // NOP
    // 0x318078: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31807c: 0xe46012d0  swc1        $f0, 0x12D0($v1)
    ctx->pc = 0x31807cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4816), bits); }
    ctx->pc = 0x318080u;
}
