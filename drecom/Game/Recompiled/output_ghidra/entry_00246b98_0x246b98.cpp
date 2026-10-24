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

// Function: entry_00246b98
// Address: 0x246b98 - 0x246bf0
void entry_00246b98_0x246b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246b98_0x246b98");
#endif

    ctx->pc = 0x246b98u;

    // 0x246b98: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b9c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x246b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246ba0: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x246ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x246ba4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x246ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x246ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246bac: 0x0  nop
    ctx->pc = 0x246bacu;
    // NOP
    // 0x246bb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x246bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246bb4: 0x0  nop
    ctx->pc = 0x246bb4u;
    // NOP
    // 0x246bb8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x246BB8u;
    {
        const bool branch_taken_0x246bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246bb8) {
            ctx->pc = 0x246BF0u;
            return;
        }
    }
    ctx->pc = 0x246BC0u;
    // 0x246bc0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x246bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x246bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246bc8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246bcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x246bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246bd0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x246bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x246bd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x246bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x246bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246bdc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246be0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x246be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246be4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x246be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x246be8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x246BE8u;
    {
        const bool branch_taken_0x246be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246be8) {
            ctx->pc = 0x246C58u;
            return;
        }
    }
    ctx->pc = 0x246BF0u;
}
