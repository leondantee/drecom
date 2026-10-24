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

// Function: entry_0025e518
// Address: 0x25e518 - 0x25e578
void entry_0025e518_0x25e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e518_0x25e518");
#endif

    ctx->pc = 0x25e518u;

    // 0x25e518: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x25e518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e51c: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e520: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25e520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e524: 0x0  nop
    ctx->pc = 0x25e524u;
    // NOP
    // 0x25e528: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x25E528u;
    {
        const bool branch_taken_0x25e528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e528) {
            ctx->pc = 0x25E578u;
            return;
        }
    }
    ctx->pc = 0x25E530u;
    // 0x25e530: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x25e530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e534: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e538: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25e538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25e53c: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x25e540: 0xc7a1021c  lwc1        $f1, 0x21C($sp)
    ctx->pc = 0x25e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e544: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x25e544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x25e548: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25e548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e54c: 0x0  nop
    ctx->pc = 0x25e54cu;
    // NOP
    // 0x25e550: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25e550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e554: 0x0  nop
    ctx->pc = 0x25e554u;
    // NOP
    // 0x25e558: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x25E558u;
    {
        const bool branch_taken_0x25e558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e558) {
            ctx->pc = 0x25E584u;
            return;
        }
    }
    ctx->pc = 0x25E560u;
    // 0x25e560: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x25e560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x25e564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e568: 0x0  nop
    ctx->pc = 0x25e568u;
    // NOP
    // 0x25e56c: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x25e570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25E570u;
    {
        const bool branch_taken_0x25e570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e570) {
            ctx->pc = 0x25E584u;
            return;
        }
    }
    ctx->pc = 0x25E578u;
}
