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

// Function: caseD_3
// Address: 0x2e6ec8 - 0x2e6f58
void caseD_3_0x2e6ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2e6ec8");
#endif

    ctx->pc = 0x2e6ec8u;

    // 0x2e6ec8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6ecc: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2e6eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6ed0: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x2e6ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
    // 0x2e6ed4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e6ed4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6ed8: 0x0  nop
    ctx->pc = 0x2e6ed8u;
    // NOP
    // 0x2e6edc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e6ee0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e6ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2e6ee4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6ee8: 0x3c043f73  lui         $a0, 0x3F73
    ctx->pc = 0x2e6ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16243 << 16));
    // 0x2e6eec: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x2e6eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x2e6ef0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e6ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6ef4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2e6ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6ef8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6efc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e6efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2e6f00: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e6f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6f04: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x2e6f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6f08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6f0c: 0x0  nop
    ctx->pc = 0x2e6f0cu;
    // NOP
    // 0x2e6f10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6f10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6f14: 0x0  nop
    ctx->pc = 0x2e6f14u;
    // NOP
    // 0x2e6f18: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E6F18u;
    {
        const bool branch_taken_0x2e6f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6f18) {
            ctx->pc = 0x2E6F58u;
            return;
        }
    }
    ctx->pc = 0x2E6F20u;
    // 0x2e6f20: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6f24: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e6f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6f28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e6f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e6f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6f30: 0x0  nop
    ctx->pc = 0x2e6f30u;
    // NOP
    // 0x2e6f34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6f38: 0x0  nop
    ctx->pc = 0x2e6f38u;
    // NOP
    // 0x2e6f3c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2E6F3Cu;
    {
        const bool branch_taken_0x2e6f3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6f3c) {
            ctx->pc = 0x2E6F88u;
            return;
        }
    }
    ctx->pc = 0x2E6F44u;
    // 0x2e6f44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6f48: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6f4c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e6f50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E6F50u;
    {
        const bool branch_taken_0x2e6f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f50) {
            ctx->pc = 0x2E6F88u;
            return;
        }
    }
    ctx->pc = 0x2E6F58u;
}
