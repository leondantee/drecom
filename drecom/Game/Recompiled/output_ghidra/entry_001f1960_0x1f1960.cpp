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

// Function: entry_001f1960
// Address: 0x1f1960 - 0x1f19b0
void entry_001f1960_0x1f1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1960_0x1f1960");
#endif

    ctx->pc = 0x1f1960u;

    // 0x1f1960: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1964: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f1964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f1968: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f1968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f196c: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x1f196cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
    // 0x1f1970: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1974: 0x0  nop
    ctx->pc = 0x1f1974u;
    // NOP
    // 0x1f1978: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1f1978u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f197c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1980: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f1980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1984: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f1984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1988: 0x0  nop
    ctx->pc = 0x1f1988u;
    // NOP
    // 0x1f198c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F198Cu;
    {
        const bool branch_taken_0x1f198c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f198c) {
            ctx->pc = 0x1F19B0u;
            return;
        }
    }
    ctx->pc = 0x1F1994u;
    // 0x1f1994: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1998: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f1998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f199c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1f199cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1f19a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f19a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f19a4: 0x0  nop
    ctx->pc = 0x1f19a4u;
    // NOP
    // 0x1f19a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f19a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f19ac: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f19acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1f19b0u;
}
