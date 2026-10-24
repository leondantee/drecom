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

// Function: entry_002434ec
// Address: 0x2434ec - 0x243530
void entry_002434ec_0x2434ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002434ec_0x2434ec");
#endif

    ctx->pc = 0x2434ecu;

    // 0x2434ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2434ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2434f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2434f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2434f4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2434f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2434f8: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2434f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x2434fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2434fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243500: 0x0  nop
    ctx->pc = 0x243500u;
    // NOP
    // 0x243504: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x243504u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x243508: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24350c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x24350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243510: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243514: 0x0  nop
    ctx->pc = 0x243514u;
    // NOP
    // 0x243518: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x243518u;
    {
        const bool branch_taken_0x243518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243518) {
            ctx->pc = 0x243530u;
            return;
        }
    }
    ctx->pc = 0x243520u;
    // 0x243520: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x243520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x243524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243528: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24352c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x24352cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x243530u;
}
