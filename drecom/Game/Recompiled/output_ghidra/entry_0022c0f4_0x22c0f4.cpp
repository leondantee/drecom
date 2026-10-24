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

// Function: entry_0022c0f4
// Address: 0x22c0f4 - 0x22c12c
void entry_0022c0f4_0x22c0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c0f4_0x22c0f4");
#endif

    ctx->pc = 0x22c0f4u;

    // 0x22c0f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c0f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c0fc: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22c100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22c104: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22c104u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c108: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c10c: 0x0  nop
    ctx->pc = 0x22c10cu;
    // NOP
    // 0x22c110: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22C110u;
    {
        const bool branch_taken_0x22c110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c110) {
            ctx->pc = 0x22C12Cu;
            return;
        }
    }
    ctx->pc = 0x22C118u;
    // 0x22c118: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22c118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22c11c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22c11cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c120: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c124: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c128: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22c128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x22c12cu;
}
