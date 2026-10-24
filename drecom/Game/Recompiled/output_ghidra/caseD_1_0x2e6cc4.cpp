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

// Function: caseD_1
// Address: 0x2e6cc4 - 0x2e6d54
void caseD_1_0x2e6cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2e6cc4");
#endif

    ctx->pc = 0x2e6cc4u;

    // 0x2e6cc4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6cc8: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2e6cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6ccc: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x2e6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x2e6cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e6cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6cd4: 0x0  nop
    ctx->pc = 0x2e6cd4u;
    // NOP
    // 0x2e6cd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e6cdc: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2e6cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2e6ce0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6ce4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e6ce8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e6ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e6cec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6cf0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6cf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6cf8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e6cfc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6d00: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x2e6d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6d04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6d08: 0x0  nop
    ctx->pc = 0x2e6d08u;
    // NOP
    // 0x2e6d0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6d10: 0x0  nop
    ctx->pc = 0x2e6d10u;
    // NOP
    // 0x2e6d14: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E6D14u;
    {
        const bool branch_taken_0x2e6d14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6d14) {
            ctx->pc = 0x2E6D54u;
            return;
        }
    }
    ctx->pc = 0x2E6D1Cu;
    // 0x2e6d1c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e6d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6d20: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x2e6d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6d24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e6d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6d2c: 0x0  nop
    ctx->pc = 0x2e6d2cu;
    // NOP
    // 0x2e6d30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6d34: 0x0  nop
    ctx->pc = 0x2e6d34u;
    // NOP
    // 0x2e6d38: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2E6D38u;
    {
        const bool branch_taken_0x2e6d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6d38) {
            ctx->pc = 0x2E6D84u;
            return;
        }
    }
    ctx->pc = 0x2E6D40u;
    // 0x2e6d40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6d44: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6d48: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e6d4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E6D4Cu;
    {
        const bool branch_taken_0x2e6d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6d4c) {
            ctx->pc = 0x2E6D84u;
            return;
        }
    }
    ctx->pc = 0x2E6D54u;
}
