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

// Function: entry_00173784
// Address: 0x173784 - 0x1737d8
void entry_00173784_0x173784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173784_0x173784");
#endif

    ctx->pc = 0x173784u;

    // 0x173784: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x173784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x173788: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x173788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17378c: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x17378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x173790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173794: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x173798: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x173798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x17379c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1737a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1737a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1737a4: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1737A4u;
    {
        const bool branch_taken_0x1737a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1737a4) {
            ctx->pc = 0x1737D8u;
            return;
        }
    }
    ctx->pc = 0x1737ACu;
    // 0x1737ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1737acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1737b0: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1737B0u;
    {
        const bool branch_taken_0x1737b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1737b0) {
            ctx->pc = 0x1737D8u;
            return;
        }
    }
    ctx->pc = 0x1737B8u;
    // 0x1737b8: 0xc6011288  lwc1        $f1, 0x1288($s0)
    ctx->pc = 0x1737b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1737bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1737bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1737c0: 0xc4401288  lwc1        $f0, 0x1288($v0)
    ctx->pc = 0x1737c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1737c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1737c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1737c8: 0x0  nop
    ctx->pc = 0x1737c8u;
    // NOP
    // 0x1737cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1737CCu;
    {
        const bool branch_taken_0x1737cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1737cc) {
            ctx->pc = 0x1737D8u;
            return;
        }
    }
    ctx->pc = 0x1737D4u;
    // 0x1737d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1737d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1737d8u;
}
