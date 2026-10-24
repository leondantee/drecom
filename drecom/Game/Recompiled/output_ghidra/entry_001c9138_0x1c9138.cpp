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

// Function: entry_001c9138
// Address: 0x1c9138 - 0x1c91a4
void entry_001c9138_0x1c9138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9138_0x1c9138");
#endif

    ctx->pc = 0x1c9138u;

    // 0x1c9138: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1c9138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1c913c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c913cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9140: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9144: 0xe4a01280  swc1        $f0, 0x1280($a1)
    ctx->pc = 0x1c9144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4736), bits); }
    // 0x1c9148: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c914c: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1c914cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1c9150: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9154: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1c9154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
    // 0x1c9158: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c915c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9160: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1c9160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1c9164: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9168: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c916c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1c916cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1c9170: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9174: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1c9174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9178: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c9178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1c917c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c917cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9180: 0x0  nop
    ctx->pc = 0x1c9180u;
    // NOP
    // 0x1c9184: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9188: 0x0  nop
    ctx->pc = 0x1c9188u;
    // NOP
    // 0x1c918c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C918Cu;
    {
        const bool branch_taken_0x1c918c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c918c) {
            ctx->pc = 0x1C91A4u;
            return;
        }
    }
    ctx->pc = 0x1C9194u;
    // 0x1c9194: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c9194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1c9198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c919c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c91a0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1c91a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x1c91a4u;
}
