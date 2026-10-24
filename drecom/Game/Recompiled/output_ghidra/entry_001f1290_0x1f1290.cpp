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

// Function: entry_001f1290
// Address: 0x1f1290 - 0x1f12e0
void entry_001f1290_0x1f1290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1290_0x1f1290");
#endif

    ctx->pc = 0x1f1290u;

    // 0x1f1290: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1294: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1f1294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1298: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1f1298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1f129c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f129cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f12a0: 0x0  nop
    ctx->pc = 0x1f12a0u;
    // NOP
    // 0x1f12a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f12a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f12a8: 0x0  nop
    ctx->pc = 0x1f12a8u;
    // NOP
    // 0x1f12ac: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1F12ACu;
    {
        const bool branch_taken_0x1f12ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f12ac) {
            ctx->pc = 0x1F12E0u;
            return;
        }
    }
    ctx->pc = 0x1F12B4u;
    // 0x1f12b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f12b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f12b8: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f12bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f12c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f12c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f12c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F12C4u;
    {
        const bool branch_taken_0x1f12c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f12c4) {
            ctx->pc = 0x1F12E0u;
            return;
        }
    }
    ctx->pc = 0x1F12CCu;
    // 0x1f12cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f12d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f12d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f12d4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f12d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f12dc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f12dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x1f12e0u;
}
