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

// Function: entry_002073d0
// Address: 0x2073d0 - 0x207430
void entry_002073d0_0x2073d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002073d0_0x2073d0");
#endif

    ctx->pc = 0x2073d0u;

    // 0x2073d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2073d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2073d4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2073d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2073d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2073d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2073dc: 0x0  nop
    ctx->pc = 0x2073dcu;
    // NOP
    // 0x2073e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2073e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2073e4: 0x0  nop
    ctx->pc = 0x2073e4u;
    // NOP
    // 0x2073e8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2073E8u;
    {
        const bool branch_taken_0x2073e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2073e8) {
            ctx->pc = 0x207430u;
            return;
        }
    }
    ctx->pc = 0x2073F0u;
    // 0x2073f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2073f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2073f4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2073f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2073f8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x2073f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x2073fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2073fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207400: 0x0  nop
    ctx->pc = 0x207400u;
    // NOP
    // 0x207404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207408: 0x0  nop
    ctx->pc = 0x207408u;
    // NOP
    // 0x20740c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x20740Cu;
    {
        const bool branch_taken_0x20740c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20740c) {
            ctx->pc = 0x207430u;
            return;
        }
    }
    ctx->pc = 0x207414u;
    // 0x207414: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207418: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x207418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20741c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20741cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x207420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207424: 0x0  nop
    ctx->pc = 0x207424u;
    // NOP
    // 0x207428: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20742c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x20742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x207430u;
}
