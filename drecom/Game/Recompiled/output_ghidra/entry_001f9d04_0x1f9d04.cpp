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

// Function: entry_001f9d04
// Address: 0x1f9d04 - 0x1f9d78
void entry_001f9d04_0x1f9d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9d04_0x1f9d04");
#endif

    ctx->pc = 0x1f9d04u;

    // 0x1f9d04: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d08: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f9d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f9d0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f9d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f9d10: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f9d10u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9d14: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1f9d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1f9d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9d1c: 0x0  nop
    ctx->pc = 0x1f9d1cu;
    // NOP
    // 0x1f9d20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f9d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f9d24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f9d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9d28: 0x0  nop
    ctx->pc = 0x1f9d28u;
    // NOP
    // 0x1f9d2c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1F9D2Cu;
    {
        const bool branch_taken_0x1f9d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9d2c) {
            ctx->pc = 0x1F9DB4u;
            return;
        }
    }
    ctx->pc = 0x1F9D34u;
    // 0x1f9d34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9d3c: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x1f9d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9d40: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d44: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9d48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9d4c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f9d50: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d54: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9d58: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x1f9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x1f9d5c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f9d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f9d60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9d64: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9d68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9d6c: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x1f9d70: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9D70u;
    {
        const bool branch_taken_0x1f9d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d70) {
            ctx->pc = 0x1F9DB4u;
            return;
        }
    }
    ctx->pc = 0x1F9D78u;
}
