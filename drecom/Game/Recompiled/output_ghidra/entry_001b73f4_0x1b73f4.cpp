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

// Function: entry_001b73f4
// Address: 0x1b73f4 - 0x1b7498
void entry_001b73f4_0x1b73f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b73f4_0x1b73f4");
#endif

    ctx->pc = 0x1b73f4u;

    // 0x1b73f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b73f8: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1b73f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b73fc: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1b7400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7404: 0x0  nop
    ctx->pc = 0x1b7404u;
    // NOP
    // 0x1b7408: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7408u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b740c: 0x0  nop
    ctx->pc = 0x1b740cu;
    // NOP
    // 0x1b7410: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B7410u;
    {
        const bool branch_taken_0x1b7410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7410) {
            ctx->pc = 0x1B74F4u;
            return;
        }
    }
    ctx->pc = 0x1B7418u;
    // 0x1b7418: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b7418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b741c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b741cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b7420: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b7420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b7424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7428: 0x0  nop
    ctx->pc = 0x1b7428u;
    // NOP
    // 0x1b742c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b742cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7430: 0x0  nop
    ctx->pc = 0x1b7430u;
    // NOP
    // 0x1b7434: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7434u;
    {
        const bool branch_taken_0x1b7434 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7434) {
            ctx->pc = 0x1B7498u;
            return;
        }
    }
    ctx->pc = 0x1B743Cu;
    // 0x1b743c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7440: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b7440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7444: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b7444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1b7448: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b7448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b744c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b744cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7450: 0x0  nop
    ctx->pc = 0x1b7450u;
    // NOP
    // 0x1b7454: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b7454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7458: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b7458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b745c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7460: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b7460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7464: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1b7464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1b7468: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7468u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b746c: 0x0  nop
    ctx->pc = 0x1b746cu;
    // NOP
    // 0x1b7470: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7474: 0x0  nop
    ctx->pc = 0x1b7474u;
    // NOP
    // 0x1b7478: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1B7478u;
    {
        const bool branch_taken_0x1b7478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7478) {
            ctx->pc = 0x1B74F4u;
            return;
        }
    }
    ctx->pc = 0x1B7480u;
    // 0x1b7480: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b7480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b7484: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7488: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b748c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b748cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1b7490: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7490u;
    {
        const bool branch_taken_0x1b7490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7490) {
            ctx->pc = 0x1B74F4u;
            return;
        }
    }
    ctx->pc = 0x1B7498u;
}
