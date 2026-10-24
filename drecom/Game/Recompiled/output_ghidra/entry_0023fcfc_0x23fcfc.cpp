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

// Function: entry_0023fcfc
// Address: 0x23fcfc - 0x23fd4c
void entry_0023fcfc_0x23fcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fcfc_0x23fcfc");
#endif

    ctx->pc = 0x23fcfcu;

    // 0x23fcfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fd00: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x23fd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23fd04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23fd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23fd08: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23fd08u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fd0c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x23fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x23fd10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fd10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fd14: 0x0  nop
    ctx->pc = 0x23fd14u;
    // NOP
    // 0x23fd18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23fd18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23fd1c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23fd1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23fd20: 0x0  nop
    ctx->pc = 0x23fd20u;
    // NOP
    // 0x23fd24: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x23FD24u;
    {
        const bool branch_taken_0x23fd24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fd24) {
            ctx->pc = 0x23FD94u;
            return;
        }
    }
    ctx->pc = 0x23FD2Cu;
    // 0x23fd2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23fd30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fd34: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x23fd34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x23fd38: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x23fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x23fd3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fd40: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x23fd40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x23fd44: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23FD44u;
    {
        const bool branch_taken_0x23fd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fd44) {
            ctx->pc = 0x23FD94u;
            return;
        }
    }
    ctx->pc = 0x23FD4Cu;
}
