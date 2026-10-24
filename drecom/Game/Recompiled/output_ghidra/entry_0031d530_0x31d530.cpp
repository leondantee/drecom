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

// Function: entry_0031d530
// Address: 0x31d530 - 0x31d59c
void entry_0031d530_0x31d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d530_0x31d530");
#endif

    ctx->pc = 0x31d530u;

    // 0x31d530: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d534: 0x8c6212b8  lw          $v0, 0x12B8($v1)
    ctx->pc = 0x31d534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4792)));
    // 0x31d538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d53c: 0xac6212b8  sw          $v0, 0x12B8($v1)
    ctx->pc = 0x31d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4792), GPR_U32(ctx, 2));
    // 0x31d540: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d544: 0xc46112e0  lwc1        $f1, 0x12E0($v1)
    ctx->pc = 0x31d544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d548: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31d548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31d54c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31d550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d554: 0x0  nop
    ctx->pc = 0x31d554u;
    // NOP
    // 0x31d558: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31d558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31d55c: 0xe46012e0  swc1        $f0, 0x12E0($v1)
    ctx->pc = 0x31d55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4832), bits); }
    // 0x31d560: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d564: 0xc44112e0  lwc1        $f1, 0x12E0($v0)
    ctx->pc = 0x31d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d56c: 0x0  nop
    ctx->pc = 0x31d56cu;
    // NOP
    // 0x31d570: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31d570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d574: 0x0  nop
    ctx->pc = 0x31d574u;
    // NOP
    // 0x31d578: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31D578u;
    {
        const bool branch_taken_0x31d578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d578) {
            ctx->pc = 0x31D59Cu;
            return;
        }
    }
    ctx->pc = 0x31D580u;
    // 0x31d580: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d584: 0xac4012b4  sw          $zero, 0x12B4($v0)
    ctx->pc = 0x31d584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4788), GPR_U32(ctx, 0));
    // 0x31d588: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d58c: 0xac6012b8  sw          $zero, 0x12B8($v1)
    ctx->pc = 0x31d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4792), GPR_U32(ctx, 0));
    // 0x31d590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d594: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d598: 0xe44012e0  swc1        $f0, 0x12E0($v0)
    ctx->pc = 0x31d598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4832), bits); }
    ctx->pc = 0x31d59cu;
}
