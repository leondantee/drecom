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

// Function: entry_00175858
// Address: 0x175858 - 0x1758f8
void entry_00175858_0x175858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175858_0x175858");
#endif

    ctx->pc = 0x175858u;

    // 0x175858: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x175858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x17585c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17585cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175860: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x175860u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x175864: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x175864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175868: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17586c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17586cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175870: 0x0  nop
    ctx->pc = 0x175870u;
    // NOP
    // 0x175874: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x175874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175878: 0x0  nop
    ctx->pc = 0x175878u;
    // NOP
    // 0x17587c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x17587Cu;
    {
        const bool branch_taken_0x17587c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17587c) {
            ctx->pc = 0x1758F8u;
            return;
        }
    }
    ctx->pc = 0x175884u;
    // 0x175884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175888: 0x0  nop
    ctx->pc = 0x175888u;
    // NOP
    // 0x17588c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x17588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x175890: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x175890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x175894: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x175894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x175898: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x175898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17589c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17589cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758a0: 0x0  nop
    ctx->pc = 0x1758a0u;
    // NOP
    // 0x1758a4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1758a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1758a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1758a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1758ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1758acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758b0: 0x0  nop
    ctx->pc = 0x1758b0u;
    // NOP
    // 0x1758b4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1758b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1758b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1758b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1758bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1758bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758c0: 0x0  nop
    ctx->pc = 0x1758c0u;
    // NOP
    // 0x1758c4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1758c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1758c8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1758c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1758cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1758ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758d0: 0x0  nop
    ctx->pc = 0x1758d0u;
    // NOP
    // 0x1758d4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1758d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1758d8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1758d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1758dc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1758dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1758e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1758e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1758e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1758e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1758e8: 0x0  nop
    ctx->pc = 0x1758e8u;
    // NOP
    // 0x1758ec: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1758ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1758f0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1758f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1758f4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1758f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->pc = 0x1758f8u;
}
