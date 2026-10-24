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

// Function: entry_0025d69c
// Address: 0x25d69c - 0x25d708
void entry_0025d69c_0x25d69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d69c_0x25d69c");
#endif

    ctx->pc = 0x25d69cu;

    // 0x25d69c: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x25d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25d6a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25d6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25d6a4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x25D6A4u;
    {
        const bool branch_taken_0x25d6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d6a4) {
            ctx->pc = 0x25D7B4u;
            return;
        }
    }
    ctx->pc = 0x25D6ACu;
    // 0x25d6ac: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x25d6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d6b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25d6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d6b4: 0x0  nop
    ctx->pc = 0x25d6b4u;
    // NOP
    // 0x25d6b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25d6b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d6bc: 0x0  nop
    ctx->pc = 0x25d6bcu;
    // NOP
    // 0x25d6c0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x25D6C0u;
    {
        const bool branch_taken_0x25d6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d6c0) {
            ctx->pc = 0x25D708u;
            return;
        }
    }
    ctx->pc = 0x25D6C8u;
    // 0x25d6c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d6cc: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x25d6ccu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d6d0: 0x3c023fb7  lui         $v0, 0x3FB7
    ctx->pc = 0x25d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16311 << 16));
    // 0x25d6d4: 0x344258b3  ori         $v0, $v0, 0x58B3
    ctx->pc = 0x25d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22707);
    // 0x25d6d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25d6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d6dc: 0xc6001564  lwc1        $f0, 0x1564($s0)
    ctx->pc = 0x25d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25d6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25d6e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25d6e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25d6e8: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x25d6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x25d6ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25d6f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25d6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d6f4: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x25d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25d6f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25d6fc: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x25d6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x25d700: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25D700u;
    {
        const bool branch_taken_0x25d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d700) {
            ctx->pc = 0x25D738u;
            return;
        }
    }
    ctx->pc = 0x25D708u;
}
