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

// Function: entry_0014fd80
// Address: 0x14fd80 - 0x14fdec
void entry_0014fd80_0x14fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fd80_0x14fd80");
#endif

    ctx->pc = 0x14fd80u;

    // 0x14fd80: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x14fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd84: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x14fd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fd88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14fd88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14fd8c: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x14fd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x14fd90: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x14fd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14fd94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd98: 0x0  nop
    ctx->pc = 0x14fd98u;
    // NOP
    // 0x14fd9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fd9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fda0: 0x0  nop
    ctx->pc = 0x14fda0u;
    // NOP
    // 0x14fda4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x14FDA4u;
    {
        const bool branch_taken_0x14fda4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fda4) {
            ctx->pc = 0x14FDECu;
            return;
        }
    }
    ctx->pc = 0x14FDACu;
    // 0x14fdac: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x14fdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fdb0: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x14fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
    // 0x14fdb4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14fdb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fdb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fdbc: 0x0  nop
    ctx->pc = 0x14fdbcu;
    // NOP
    // 0x14fdc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fdc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fdc4: 0x0  nop
    ctx->pc = 0x14fdc4u;
    // NOP
    // 0x14fdc8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x14FDC8u;
    {
        const bool branch_taken_0x14fdc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fdc8) {
            ctx->pc = 0x14FE28u;
            return;
        }
    }
    ctx->pc = 0x14FDD0u;
    // 0x14fdd0: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x14fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
    // 0x14fdd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14fdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14fdd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fdd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fddc: 0x0  nop
    ctx->pc = 0x14fddcu;
    // NOP
    // 0x14fde0: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x14fde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x14fde4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14FDE4u;
    {
        const bool branch_taken_0x14fde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fde4) {
            ctx->pc = 0x14FE28u;
            return;
        }
    }
    ctx->pc = 0x14FDECu;
}
