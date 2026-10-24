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

// Function: entry_001f0288
// Address: 0x1f0288 - 0x1f02c8
void entry_001f0288_0x1f0288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0288_0x1f0288");
#endif

    ctx->pc = 0x1f0288u;

    // 0x1f0288: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f028c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1f028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0290: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x1f0290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x1f0294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0298: 0x0  nop
    ctx->pc = 0x1f0298u;
    // NOP
    // 0x1f029c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f029cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f02a0: 0x0  nop
    ctx->pc = 0x1f02a0u;
    // NOP
    // 0x1f02a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F02A4u;
    {
        const bool branch_taken_0x1f02a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f02a4) {
            ctx->pc = 0x1F02C8u;
            return;
        }
    }
    ctx->pc = 0x1F02ACu;
    // 0x1f02ac: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x1f02acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x1f02b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f02b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f02b4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f02b8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f02bc: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1f02bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1f02c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F02C0u;
    {
        const bool branch_taken_0x1f02c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02c0) {
            ctx->pc = 0x1F02D8u;
            return;
        }
    }
    ctx->pc = 0x1F02C8u;
}
