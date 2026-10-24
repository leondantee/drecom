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

// Function: entry_0031038c
// Address: 0x31038c - 0x3103f0
void entry_0031038c_0x31038c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031038c_0x31038c");
#endif

    ctx->pc = 0x31038cu;

    // 0x31038c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310390: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x310390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x310394: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x310394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310398: 0xc4610104  lwc1        $f1, 0x104($v1)
    ctx->pc = 0x310398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31039c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31039cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3103a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3103a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3103a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3103a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3103a8: 0x0  nop
    ctx->pc = 0x3103a8u;
    // NOP
    // 0x3103ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3103acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3103b0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x3103b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x3103b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3103b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3103b8: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x3103b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x3103bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3103bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3103c0: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x3103c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3103c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3103c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3103c8: 0x0  nop
    ctx->pc = 0x3103c8u;
    // NOP
    // 0x3103cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3103ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3103d0: 0x0  nop
    ctx->pc = 0x3103d0u;
    // NOP
    // 0x3103d4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3103D4u;
    {
        const bool branch_taken_0x3103d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3103d4) {
            ctx->pc = 0x3103F0u;
            return;
        }
    }
    ctx->pc = 0x3103DCu;
    // 0x3103dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3103dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3103e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3103e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3103e4: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x3103e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x3103e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3103e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3103ec: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x3103ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    ctx->pc = 0x3103f0u;
}
