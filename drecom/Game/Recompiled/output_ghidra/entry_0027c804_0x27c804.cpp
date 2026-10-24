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

// Function: entry_0027c804
// Address: 0x27c804 - 0x27c86c
void entry_0027c804_0x27c804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c804_0x27c804");
#endif

    ctx->pc = 0x27c804u;

    // 0x27c804: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x27c804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c808: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27c808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x27c80c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c810: 0x0  nop
    ctx->pc = 0x27c810u;
    // NOP
    // 0x27c814: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27c818: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27c81c: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c820: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c828: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c82c: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c830: 0x3c02c692  lui         $v0, 0xC692
    ctx->pc = 0x27c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50834 << 16));
    // 0x27c834: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x27c834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x27c838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c83c: 0x0  nop
    ctx->pc = 0x27c83cu;
    // NOP
    // 0x27c840: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c844: 0x0  nop
    ctx->pc = 0x27c844u;
    // NOP
    // 0x27c848: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x27C848u;
    {
        const bool branch_taken_0x27c848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c848) {
            ctx->pc = 0x27C86Cu;
            return;
        }
    }
    ctx->pc = 0x27C850u;
    // 0x27c850: 0x3c02c692  lui         $v0, 0xC692
    ctx->pc = 0x27c850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50834 << 16));
    // 0x27c854: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x27c854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x27c858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c85c: 0x0  nop
    ctx->pc = 0x27c85cu;
    // NOP
    // 0x27c860: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c864: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27C864u;
    {
        const bool branch_taken_0x27c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c864) {
            ctx->pc = 0x27C880u;
            return;
        }
    }
    ctx->pc = 0x27C86Cu;
}
