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

// Function: entry_00161a58
// Address: 0x161a58 - 0x161a90
void entry_00161a58_0x161a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161a58_0x161a58");
#endif

    ctx->pc = 0x161a58u;

    // 0x161a58: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x161a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161a5c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x161a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x161a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161a64: 0x0  nop
    ctx->pc = 0x161a64u;
    // NOP
    // 0x161a68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161a68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a6c: 0x0  nop
    ctx->pc = 0x161a6cu;
    // NOP
    // 0x161a70: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x161A70u;
    {
        const bool branch_taken_0x161a70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a70) {
            ctx->pc = 0x161A90u;
            return;
        }
    }
    ctx->pc = 0x161A78u;
    // 0x161a78: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x161a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161a7c: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x161a80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x161a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x161a84: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161a88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161A88u;
    {
        const bool branch_taken_0x161a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a88) {
            ctx->pc = 0x161AA0u;
            return;
        }
    }
    ctx->pc = 0x161A90u;
}
