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

// Function: entry_0028d828
// Address: 0x28d828 - 0x28d890
void entry_0028d828_0x28d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d828_0x28d828");
#endif

    ctx->pc = 0x28d828u;

    // 0x28d828: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d82c: 0xc42120c8  lwc1        $f1, 0x20C8($at)
    ctx->pc = 0x28d82cu;
    { uint32_t bits = FAST_READ32(0x6220C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d830: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d834: 0xc42021f4  lwc1        $f0, 0x21F4($at)
    ctx->pc = 0x28d834u;
    { uint32_t bits = FAST_READ32(0x6221F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d838: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28d83c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d840: 0xe42020c8  swc1        $f0, 0x20C8($at)
    ctx->pc = 0x28d840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6220C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220C8u, _value); } while (0); }
    // 0x28d844: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d848: 0xc42020c8  lwc1        $f0, 0x20C8($at)
    ctx->pc = 0x28d848u;
    { uint32_t bits = FAST_READ32(0x6220C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d84c: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28d84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28d850: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x28d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d854: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28d854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28d858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d85c: 0x0  nop
    ctx->pc = 0x28d85cu;
    // NOP
    // 0x28d860: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28d860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d864: 0x0  nop
    ctx->pc = 0x28d864u;
    // NOP
    // 0x28d868: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x28D868u;
    {
        const bool branch_taken_0x28d868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28d868) {
            ctx->pc = 0x28D8B8u;
            return;
        }
    }
    ctx->pc = 0x28D870u;
    // 0x28d870: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28d870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28d874: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x28d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x28d878: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x28d878u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28d87c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d880: 0x0  nop
    ctx->pc = 0x28d880u;
    // NOP
    // 0x28d884: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28d884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28d888: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28D888u;
    {
        const bool branch_taken_0x28d888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d888) {
            ctx->pc = 0x28D8B8u;
            return;
        }
    }
    ctx->pc = 0x28D890u;
}
