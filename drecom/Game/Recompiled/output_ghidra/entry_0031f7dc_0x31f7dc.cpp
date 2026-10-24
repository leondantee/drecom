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

// Function: entry_0031f7dc
// Address: 0x31f7dc - 0x31f878
void entry_0031f7dc_0x31f7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f7dc_0x31f7dc");
#endif

    ctx->pc = 0x31f7dcu;

    // 0x31f7dc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x31f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f7e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f7e4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x31f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31f7e8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x31f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f7ec: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x31f7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f7f0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x31f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x31f7f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f7f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31f7fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x31f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f800: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f800u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f804: 0x0  nop
    ctx->pc = 0x31f804u;
    // NOP
    // 0x31f808: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x31F808u;
    {
        const bool branch_taken_0x31f808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f808) {
            ctx->pc = 0x31F878u;
            return;
        }
    }
    ctx->pc = 0x31F810u;
    // 0x31f810: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f814: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f818: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x31f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f81c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x31f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f820: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x31f820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f824: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x31f824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31f828: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f82c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x31f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31f830: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x31f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f834: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f838: 0x0  nop
    ctx->pc = 0x31f838u;
    // NOP
    // 0x31f83c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x31F83Cu;
    {
        const bool branch_taken_0x31f83c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f83c) {
            ctx->pc = 0x31F878u;
            return;
        }
    }
    ctx->pc = 0x31F844u;
    // 0x31f844: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f848: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f84c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x31f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f850: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x31f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f854: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31f854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f858: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31f858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31f85c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f860: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x31f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f864: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x31f864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f868: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31f868u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f86c: 0x0  nop
    ctx->pc = 0x31f86cu;
    // NOP
    // 0x31f870: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x31F870u;
    {
        const bool branch_taken_0x31f870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f870) {
            ctx->pc = 0x31F918u;
            return;
        }
    }
    ctx->pc = 0x31F878u;
}
