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

// Function: Rebound_vec
// Address: 0x325c80 - 0x325de4
void Rebound_vec_0x325c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rebound_vec_0x325c80");
#endif

    ctx->pc = 0x325c80u;

    // 0x325c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x325c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x325c88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x325c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x325c8c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x325c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x325c90: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x325c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x325c94: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x325c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x325c98: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x325c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325c9c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x325c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325ca0: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x325ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x325ca4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x325ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x325ca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325cac: 0x0  nop
    ctx->pc = 0x325cacu;
    // NOP
    // 0x325cb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x325cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325cb4: 0x0  nop
    ctx->pc = 0x325cb4u;
    // NOP
    // 0x325cb8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x325CB8u;
    {
        const bool branch_taken_0x325cb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325cb8) {
            ctx->pc = 0x325CE4u;
            goto label_325ce4;
        }
    }
    ctx->pc = 0x325CC0u;
    // 0x325cc0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x325cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325cc4: 0x3c03bf19  lui         $v1, 0xBF19
    ctx->pc = 0x325cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48921 << 16));
    // 0x325cc8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x325cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x325ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325cd0: 0x0  nop
    ctx->pc = 0x325cd0u;
    // NOP
    // 0x325cd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x325cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325cd8: 0x0  nop
    ctx->pc = 0x325cd8u;
    // NOP
    // 0x325cdc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x325CDCu;
    {
        const bool branch_taken_0x325cdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325cdc) {
            ctx->pc = 0x325D04u;
            goto label_325d04;
        }
    }
    ctx->pc = 0x325CE4u;
label_325ce4:
    // 0x325ce4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x325ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325ce8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x325ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325cec: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x325cecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x325cf0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x325cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325cf4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x325cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325cf8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325cf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325cfc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x325cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325d00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x325d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_325d04:
    // 0x325d04: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x325d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325d08: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x325d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x325d0c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x325d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x325d10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325d14: 0x0  nop
    ctx->pc = 0x325d14u;
    // NOP
    // 0x325d18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x325d18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325d1c: 0x0  nop
    ctx->pc = 0x325d1cu;
    // NOP
    // 0x325d20: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x325D20u;
    {
        const bool branch_taken_0x325d20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325d20) {
            ctx->pc = 0x325D4Cu;
            goto label_325d4c;
        }
    }
    ctx->pc = 0x325D28u;
    // 0x325d28: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x325d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325d2c: 0x3c03bf19  lui         $v1, 0xBF19
    ctx->pc = 0x325d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48921 << 16));
    // 0x325d30: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x325d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x325d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325d38: 0x0  nop
    ctx->pc = 0x325d38u;
    // NOP
    // 0x325d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x325d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325d40: 0x0  nop
    ctx->pc = 0x325d40u;
    // NOP
    // 0x325d44: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x325D44u;
    {
        const bool branch_taken_0x325d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325d44) {
            ctx->pc = 0x325D6Cu;
            goto label_325d6c;
        }
    }
    ctx->pc = 0x325D4Cu;
label_325d4c:
    // 0x325d4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x325d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325d50: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x325d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325d54: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x325d54u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x325d58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x325d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325d5c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x325d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325d64: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x325d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325d68: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x325d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_325d6c:
    // 0x325d6c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x325d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325d70: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x325d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x325d74: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x325d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x325d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325d7c: 0x0  nop
    ctx->pc = 0x325d7cu;
    // NOP
    // 0x325d80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x325d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325d84: 0x0  nop
    ctx->pc = 0x325d84u;
    // NOP
    // 0x325d88: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x325D88u;
    {
        const bool branch_taken_0x325d88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325d88) {
            ctx->pc = 0x325DB4u;
            goto label_325db4;
        }
    }
    ctx->pc = 0x325D90u;
    // 0x325d90: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x325d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325d94: 0x3c03bf19  lui         $v1, 0xBF19
    ctx->pc = 0x325d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48921 << 16));
    // 0x325d98: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x325d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x325d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325da0: 0x0  nop
    ctx->pc = 0x325da0u;
    // NOP
    // 0x325da4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x325da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325da8: 0x0  nop
    ctx->pc = 0x325da8u;
    // NOP
    // 0x325dac: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x325DACu;
    {
        const bool branch_taken_0x325dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325dac) {
            ctx->pc = 0x325DD4u;
            goto label_325dd4;
        }
    }
    ctx->pc = 0x325DB4u;
label_325db4:
    // 0x325db4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x325db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325db8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x325db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325dbc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x325dbcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x325dc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x325dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325dc4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x325dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325dc8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325dcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x325dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325dd0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x325dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_325dd4:
    // 0x325dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x325dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325dd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x325dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x325ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x325DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325DE4u;
}
