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

// Function: entry_0021e358
// Address: 0x21e358 - 0x21e3b4
void entry_0021e358_0x21e358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e358_0x21e358");
#endif

    ctx->pc = 0x21e358u;

    // 0x21e358: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e35c: 0x8c64012c  lw          $a0, 0x12C($v1)
    ctx->pc = 0x21e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e360: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e364: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E364u;
    {
        const bool branch_taken_0x21e364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e364) {
            ctx->pc = 0x21E3B4u;
            return;
        }
    }
    ctx->pc = 0x21E36Cu;
    // 0x21e36c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e370: 0xc46200b4  lwc1        $f2, 0xB4($v1)
    ctx->pc = 0x21e370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e374: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x21e374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x21e378: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x21e378u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e37c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x21e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x21e380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e384: 0x0  nop
    ctx->pc = 0x21e384u;
    // NOP
    // 0x21e388: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21e388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e38c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x21e38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e390: 0x0  nop
    ctx->pc = 0x21e390u;
    // NOP
    // 0x21e394: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x21E394u;
    {
        const bool branch_taken_0x21e394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e394) {
            ctx->pc = 0x21E4ACu;
            return;
        }
    }
    ctx->pc = 0x21E39Cu;
    // 0x21e39c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e3a0: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x21e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x21e3a4: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x21e3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x21e3a8: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x21e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x21e3ac: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x21E3ACu;
    {
        const bool branch_taken_0x21e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e3ac) {
            ctx->pc = 0x21E4ACu;
            return;
        }
    }
    ctx->pc = 0x21E3B4u;
}
