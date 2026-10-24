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

// Function: entry_00161bb8
// Address: 0x161bb8 - 0x161be8
void entry_00161bb8_0x161bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161bb8_0x161bb8");
#endif

    ctx->pc = 0x161bb8u;

    // 0x161bb8: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x161bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161bbc: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x161bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x161bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161bc4: 0x0  nop
    ctx->pc = 0x161bc4u;
    // NOP
    // 0x161bc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161bc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161bcc: 0x0  nop
    ctx->pc = 0x161bccu;
    // NOP
    // 0x161bd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x161BD0u;
    {
        const bool branch_taken_0x161bd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161bd0) {
            ctx->pc = 0x161BE8u;
            return;
        }
    }
    ctx->pc = 0x161BD8u;
    // 0x161bd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x161bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161bdc: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161be0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161BE0u;
    {
        const bool branch_taken_0x161be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161be0) {
            ctx->pc = 0x161BF0u;
            return;
        }
    }
    ctx->pc = 0x161BE8u;
}
