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
// Address: 0x26bb44 - 0x26bbb8
void caseD_5_0x26bb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x26bb44");
#endif

    ctx->pc = 0x26bb44u;

    // 0x26bb44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bb48: 0xc4611b54  lwc1        $f1, 0x1B54($v1)
    ctx->pc = 0x26bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bb4c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26bb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26bb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bb54: 0x0  nop
    ctx->pc = 0x26bb54u;
    // NOP
    // 0x26bb58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26bb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26bb5c: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x26bb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x26bb60: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bb64: 0x8ca61b64  lw          $a2, 0x1B64($a1)
    ctx->pc = 0x26bb64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7012)));
    // 0x26bb68: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x26BB68u;
    {
        const bool branch_taken_0x26bb68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bb68) {
            ctx->pc = 0x26BBF8u;
            return;
        }
    }
    ctx->pc = 0x26BB70u;
    // 0x26bb70: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26bb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bb74: 0xc4e11b58  lwc1        $f1, 0x1B58($a3)
    ctx->pc = 0x26bb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bb78: 0x3c084080  lui         $t0, 0x4080
    ctx->pc = 0x26bb78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16512 << 16));
    // 0x26bb7c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x26bb7cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bb80: 0x0  nop
    ctx->pc = 0x26bb80u;
    // NOP
    // 0x26bb84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26bb84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26bb88: 0xe4e01b58  swc1        $f0, 0x1B58($a3)
    ctx->pc = 0x26bb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 7000), bits); }
    // 0x26bb8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bb90: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x26bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bb94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bb98: 0x0  nop
    ctx->pc = 0x26bb98u;
    // NOP
    // 0x26bb9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26bb9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bba0: 0x0  nop
    ctx->pc = 0x26bba0u;
    // NOP
    // 0x26bba4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26BBA4u;
    {
        const bool branch_taken_0x26bba4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bba4) {
            ctx->pc = 0x26BBB8u;
            return;
        }
    }
    ctx->pc = 0x26BBACu;
    // 0x26bbac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26bbacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bbb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bbb4: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26bbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    ctx->pc = 0x26bbb8u;
}
