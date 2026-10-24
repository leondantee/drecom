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

// Function: entry_001d84d8
// Address: 0x1d84d8 - 0x1d854c
void entry_001d84d8_0x1d84d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d84d8_0x1d84d8");
#endif

    ctx->pc = 0x1d84d8u;

    // 0x1d84d8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d84d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d84dc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d84dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d84e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d84e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d84e4: 0x0  nop
    ctx->pc = 0x1d84e4u;
    // NOP
    // 0x1d84e8: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x1D84E8u;
    {
        const bool branch_taken_0x1d84e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d84e8) {
            ctx->pc = 0x1D8588u;
            return;
        }
    }
    ctx->pc = 0x1D84F0u;
    // 0x1d84f0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d84f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d84f4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d84f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d84f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d84f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d84fc: 0x0  nop
    ctx->pc = 0x1d84fcu;
    // NOP
    // 0x1d8500: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8500u;
    {
        const bool branch_taken_0x1d8500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8500) {
            ctx->pc = 0x1D854Cu;
            return;
        }
    }
    ctx->pc = 0x1D8508u;
    // 0x1d8508: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d850c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1d850cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1d8510: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1d8510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1d8514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d8514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8518: 0x0  nop
    ctx->pc = 0x1d8518u;
    // NOP
    // 0x1d851c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d851cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d8520: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d8520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d8524: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8528: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d8528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d852c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d852cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8530: 0x0  nop
    ctx->pc = 0x1d8530u;
    // NOP
    // 0x1d8534: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1D8534u;
    {
        const bool branch_taken_0x1d8534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8534) {
            ctx->pc = 0x1D8588u;
            return;
        }
    }
    ctx->pc = 0x1D853Cu;
    // 0x1d853c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8540: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d8540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d8544: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8544u;
    {
        const bool branch_taken_0x1d8544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8544) {
            ctx->pc = 0x1D8588u;
            return;
        }
    }
    ctx->pc = 0x1D854Cu;
}
