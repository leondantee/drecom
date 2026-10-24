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

// Function: entry_001cb404
// Address: 0x1cb404 - 0x1cb484
void entry_001cb404_0x1cb404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb404_0x1cb404");
#endif

    ctx->pc = 0x1cb404u;

    // 0x1cb404: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb408: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x1cb408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x1cb40c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1CB40Cu;
    {
        const bool branch_taken_0x1cb40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb40c) {
            ctx->pc = 0x1CB4F4u;
            return;
        }
    }
    ctx->pc = 0x1CB414u;
    // 0x1cb414: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb418: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb41c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb41cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb420: 0x0  nop
    ctx->pc = 0x1cb420u;
    // NOP
    // 0x1cb424: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb428: 0x0  nop
    ctx->pc = 0x1cb428u;
    // NOP
    // 0x1cb42c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1CB42Cu;
    {
        const bool branch_taken_0x1cb42c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb42c) {
            ctx->pc = 0x1CB498u;
            return;
        }
    }
    ctx->pc = 0x1CB434u;
    // 0x1cb434: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb438: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb43c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1cb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x1cb440: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cb440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1cb444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb448: 0x0  nop
    ctx->pc = 0x1cb448u;
    // NOP
    // 0x1cb44c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb44cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb450: 0x0  nop
    ctx->pc = 0x1cb450u;
    // NOP
    // 0x1cb454: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1CB454u;
    {
        const bool branch_taken_0x1cb454 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb454) {
            ctx->pc = 0x1CB484u;
            return;
        }
    }
    ctx->pc = 0x1CB45Cu;
    // 0x1cb45c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb460: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1cb460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb464: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1cb464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x1cb468: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cb468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1cb46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb470: 0x0  nop
    ctx->pc = 0x1cb470u;
    // NOP
    // 0x1cb474: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cb478: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1cb478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1cb47c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CB47Cu;
    {
        const bool branch_taken_0x1cb47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb47c) {
            ctx->pc = 0x1CB4F4u;
            return;
        }
    }
    ctx->pc = 0x1CB484u;
}
