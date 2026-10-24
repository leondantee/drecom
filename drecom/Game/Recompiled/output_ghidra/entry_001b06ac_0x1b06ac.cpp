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

// Function: entry_001b06ac
// Address: 0x1b06ac - 0x1b0714
void entry_001b06ac_0x1b06ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b06ac_0x1b06ac");
#endif

    ctx->pc = 0x1b06acu;

    // 0x1b06ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b06acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b06b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b06b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1b06b4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B06B4u;
    {
        const bool branch_taken_0x1b06b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06b4) {
            ctx->pc = 0x1B0748u;
            return;
        }
    }
    ctx->pc = 0x1B06BCu;
    // 0x1b06bc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b06bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b06c0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b06c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b06c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b06c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b06c8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b06c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b06cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b06d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b06d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b06d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B06D4u;
    {
        const bool branch_taken_0x1b06d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06d4) {
            ctx->pc = 0x1B0714u;
            return;
        }
    }
    ctx->pc = 0x1B06DCu;
    // 0x1b06dc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b06dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b06e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b06e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b06e4: 0x0  nop
    ctx->pc = 0x1b06e4u;
    // NOP
    // 0x1b06e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b06e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b06ec: 0x0  nop
    ctx->pc = 0x1b06ecu;
    // NOP
    // 0x1b06f0: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x1B06F0u;
    {
        const bool branch_taken_0x1b06f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b06f0) {
            ctx->pc = 0x1B07C4u;
            return;
        }
    }
    ctx->pc = 0x1B06F8u;
    // 0x1b06f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b06fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b06fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0700: 0x0  nop
    ctx->pc = 0x1b0700u;
    // NOP
    // 0x1b0704: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0708: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b0708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b070c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1B070Cu;
    {
        const bool branch_taken_0x1b070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b070c) {
            ctx->pc = 0x1B07C4u;
            return;
        }
    }
    ctx->pc = 0x1B0714u;
}
