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

// Function: caseD_3
// Address: 0x13a688 - 0x13a6f8
void caseD_3_0x13a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x13a688");
#endif

    ctx->pc = 0x13a688u;

    // 0x13a688: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a68c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a690: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a694: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13a69c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x13a6a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a6a4: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a6a8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x13a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x13a6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a6b0: 0x0  nop
    ctx->pc = 0x13a6b0u;
    // NOP
    // 0x13a6b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13a6b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13a6b8: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13a6bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a6c0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a6c4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x13a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x13a6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a6cc: 0x0  nop
    ctx->pc = 0x13a6ccu;
    // NOP
    // 0x13a6d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a6d4: 0x0  nop
    ctx->pc = 0x13a6d4u;
    // NOP
    // 0x13a6d8: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x13A6D8u;
    {
        const bool branch_taken_0x13a6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a6d8) {
            ctx->pc = 0x13A75Cu;
            return;
        }
    }
    ctx->pc = 0x13A6E0u;
    // 0x13a6e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a6e4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13a6e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x13a6e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a6ec: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13a6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x13a6f0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13A6F0u;
    {
        const bool branch_taken_0x13a6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6f0) {
            ctx->pc = 0x13A75Cu;
            return;
        }
    }
    ctx->pc = 0x13A6F8u;
}
