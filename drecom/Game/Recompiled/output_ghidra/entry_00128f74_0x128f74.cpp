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

// Function: entry_00128f74
// Address: 0x128f74 - 0x129020
void entry_00128f74_0x128f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128f74_0x128f74");
#endif

    switch (ctx->pc) {
        case 0x128f84u: goto label_128f84;
        default: break;
    }

    ctx->pc = 0x128f74u;

    // 0x128f74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128f78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128f7c: 0xc05d25c  jal         func_174970
    ctx->pc = 0x128F7Cu;
    SET_GPR_U32(ctx, 31, 0x128F84u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128F7Cu, 0x128F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F84u;
label_128f84:
    // 0x128f84: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x128F84u;
    {
        const bool branch_taken_0x128f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f84) {
            ctx->pc = 0x129020u;
            return;
        }
    }
    ctx->pc = 0x128F8Cu;
    // 0x128f8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128f90: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128f94: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x128f98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128f9c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x128fa0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x128fa0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128fa4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x128fa8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x128fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128fac: 0x0  nop
    ctx->pc = 0x128facu;
    // NOP
    // 0x128fb0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x128FB0u;
    {
        const bool branch_taken_0x128fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128fb0) {
            ctx->pc = 0x129020u;
            return;
        }
    }
    ctx->pc = 0x128FB8u;
    // 0x128fb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128fbc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128fc0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x128fc4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x128fc4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128fc8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x128fcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128fd0: 0x0  nop
    ctx->pc = 0x128fd0u;
    // NOP
    // 0x128fd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128fd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128fd8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x128fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128fdc: 0x0  nop
    ctx->pc = 0x128fdcu;
    // NOP
    // 0x128fe0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x128FE0u;
    {
        const bool branch_taken_0x128fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128fe0) {
            ctx->pc = 0x129020u;
            return;
        }
    }
    ctx->pc = 0x128FE8u;
    // 0x128fe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128fec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ff0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128ff4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x128ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x128ff8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128ffc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129000: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129004: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129008: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12900c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12900cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129010: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129014: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x129018: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x129018u;
    {
        const bool branch_taken_0x129018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129018) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x129020u;
}
