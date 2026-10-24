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

// Function: entry_0022c838
// Address: 0x22c838 - 0x22c878
void entry_0022c838_0x22c838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c838_0x22c838");
#endif

    ctx->pc = 0x22c838u;

    // 0x22c838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c83c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c840: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x22c840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x22c844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c848: 0x0  nop
    ctx->pc = 0x22c848u;
    // NOP
    // 0x22c84c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c84cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c850: 0x0  nop
    ctx->pc = 0x22c850u;
    // NOP
    // 0x22c854: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22C854u;
    {
        const bool branch_taken_0x22c854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c854) {
            ctx->pc = 0x22C878u;
            return;
        }
    }
    ctx->pc = 0x22C85Cu;
    // 0x22c85c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x22c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x22c860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c864: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c868: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c86c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22c870: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22C870u;
    {
        const bool branch_taken_0x22c870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c870) {
            ctx->pc = 0x22C8D0u;
            return;
        }
    }
    ctx->pc = 0x22C878u;
}
