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

// Function: entry_00160fbc
// Address: 0x160fbc - 0x161008
void entry_00160fbc_0x160fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160fbc_0x160fbc");
#endif

    ctx->pc = 0x160fbcu;

    // 0x160fbc: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x160fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160fc0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x160fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x160fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160fc8: 0x0  nop
    ctx->pc = 0x160fc8u;
    // NOP
    // 0x160fcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160fd0: 0x0  nop
    ctx->pc = 0x160fd0u;
    // NOP
    // 0x160fd4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x160FD4u;
    {
        const bool branch_taken_0x160fd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160fd4) {
            ctx->pc = 0x161008u;
            return;
        }
    }
    ctx->pc = 0x160FDCu;
    // 0x160fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160fe0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160fe4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x160fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x160fe8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160fec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ff0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ff4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160ff8: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x160ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160ffc: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x161000: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x161000u;
    {
        const bool branch_taken_0x161000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161000) {
            ctx->pc = 0x161024u;
            return;
        }
    }
    ctx->pc = 0x161008u;
}
