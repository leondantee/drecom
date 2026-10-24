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

// Function: entry_002382ac
// Address: 0x2382ac - 0x2382f0
void entry_002382ac_0x2382ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002382ac_0x2382ac");
#endif

    ctx->pc = 0x2382acu;

    // 0x2382ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2382acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2382b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2382b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2382b4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2382b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2382b8: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2382b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x2382bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2382bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2382c0: 0x0  nop
    ctx->pc = 0x2382c0u;
    // NOP
    // 0x2382c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2382c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2382c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2382c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2382cc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2382ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2382d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2382d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2382d4: 0x0  nop
    ctx->pc = 0x2382d4u;
    // NOP
    // 0x2382d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2382D8u;
    {
        const bool branch_taken_0x2382d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2382d8) {
            ctx->pc = 0x2382F0u;
            return;
        }
    }
    ctx->pc = 0x2382E0u;
    // 0x2382e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2382e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2382e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2382e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2382e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2382e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2382ec: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2382ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x2382f0u;
}
