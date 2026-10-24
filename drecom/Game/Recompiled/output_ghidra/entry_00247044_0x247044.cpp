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

// Function: entry_00247044
// Address: 0x247044 - 0x247084
void entry_00247044_0x247044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247044_0x247044");
#endif

    ctx->pc = 0x247044u;

    // 0x247044: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247048: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x247048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24704c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x24704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x247050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247054: 0x0  nop
    ctx->pc = 0x247054u;
    // NOP
    // 0x247058: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24705c: 0x0  nop
    ctx->pc = 0x24705cu;
    // NOP
    // 0x247060: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x247060u;
    {
        const bool branch_taken_0x247060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247060) {
            ctx->pc = 0x247084u;
            return;
        }
    }
    ctx->pc = 0x247068u;
    // 0x247068: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x247068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x24706c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24706cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247070: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x247070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247074: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247078: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x24707c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24707Cu;
    {
        const bool branch_taken_0x24707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24707c) {
            ctx->pc = 0x247094u;
            return;
        }
    }
    ctx->pc = 0x247084u;
}
