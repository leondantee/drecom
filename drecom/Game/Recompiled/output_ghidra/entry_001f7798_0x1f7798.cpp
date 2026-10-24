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

// Function: entry_001f7798
// Address: 0x1f7798 - 0x1f77ec
void entry_001f7798_0x1f7798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7798_0x1f7798");
#endif

    ctx->pc = 0x1f7798u;

    // 0x1f7798: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f779c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f77a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f77a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f77a4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f77a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f77a8: 0x3c05459c  lui         $a1, 0x459C
    ctx->pc = 0x1f77a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17820 << 16));
    // 0x1f77ac: 0x34a34000  ori         $v1, $a1, 0x4000
    ctx->pc = 0x1f77acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1f77b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f77b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f77b4: 0x0  nop
    ctx->pc = 0x1f77b4u;
    // NOP
    // 0x1f77b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f77b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f77bc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f77bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f77c0: 0x0  nop
    ctx->pc = 0x1f77c0u;
    // NOP
    // 0x1f77c4: 0x45000225  bc1f        . + 4 + (0x225 << 2)
    ctx->pc = 0x1F77C4u;
    {
        const bool branch_taken_0x1f77c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f77c4) {
            ctx->pc = 0x1F805Cu;
            return;
        }
    }
    ctx->pc = 0x1F77CCu;
    // 0x1f77cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f77ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f77d0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f77d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f77d4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f77d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f77d8: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x1f77d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1f77dc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f77e0: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f77e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f77e4: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x1F77E4u;
    {
        const bool branch_taken_0x1f77e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f77e4) {
            ctx->pc = 0x1F805Cu;
            return;
        }
    }
    ctx->pc = 0x1F77ECu;
}
