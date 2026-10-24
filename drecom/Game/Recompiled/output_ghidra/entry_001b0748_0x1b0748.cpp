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

// Function: entry_001b0748
// Address: 0x1b0748 - 0x1b07a0
void entry_001b0748_0x1b0748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0748_0x1b0748");
#endif

    ctx->pc = 0x1b0748u;

    // 0x1b0748: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b0748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b074c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b0754: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0758: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b0758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b075c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b0760: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B0760u;
    {
        const bool branch_taken_0x1b0760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0760) {
            ctx->pc = 0x1B07A0u;
            return;
        }
    }
    ctx->pc = 0x1B0768u;
    // 0x1b0768: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b0768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b076c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0774: 0x0  nop
    ctx->pc = 0x1b0774u;
    // NOP
    // 0x1b0778: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b077c: 0x0  nop
    ctx->pc = 0x1b077cu;
    // NOP
    // 0x1b0780: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1B0780u;
    {
        const bool branch_taken_0x1b0780 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0780) {
            ctx->pc = 0x1B07C4u;
            return;
        }
    }
    ctx->pc = 0x1B0788u;
    // 0x1b0788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b078c: 0x0  nop
    ctx->pc = 0x1b078cu;
    // NOP
    // 0x1b0790: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0794: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b0794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0798: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B0798u;
    {
        const bool branch_taken_0x1b0798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0798) {
            ctx->pc = 0x1B07C4u;
            return;
        }
    }
    ctx->pc = 0x1B07A0u;
}
