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

// Function: entry_001593a0
// Address: 0x1593a0 - 0x159434
void entry_001593a0_0x1593a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001593a0_0x1593a0");
#endif

    switch (ctx->pc) {
        case 0x1593bcu: goto label_1593bc;
        case 0x159414u: goto label_159414;
        default: break;
    }

    ctx->pc = 0x1593a0u;

    // 0x1593a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1593a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1593a4: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x1593a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1593a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1593a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1593ac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1593acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1593b0: 0x24455550  addiu       $a1, $v0, 0x5550
    ctx->pc = 0x1593b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
    // 0x1593b4: 0xc040d62  jal         func_103588
    ctx->pc = 0x1593B4u;
    SET_GPR_U32(ctx, 31, 0x1593BCu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1593BCu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1593BCu) { return; }
    ctx->pc = 0x1593BCu;
label_1593bc:
    // 0x1593bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1593bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1593c0: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x1593c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1593c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1593c8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1593c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1593cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1593ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1593d0: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x1593d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1593d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1593d8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1593d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1593dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1593dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1593e0: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x1593e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1593e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1593e8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1593e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1593ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1593ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1593f0: 0x0  nop
    ctx->pc = 0x1593f0u;
    // NOP
    // 0x1593f4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1593f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1593f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1593f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1593fc: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x1593fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x159400: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159404: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x159404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159408: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x159408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15940c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15940Cu;
    SET_GPR_U32(ctx, 31, 0x159414u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159414u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159414u) { return; }
    ctx->pc = 0x159414u;
label_159414:
    // 0x159414: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15941c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159420: 0xe440014c  swc1        $f0, 0x14C($v0)
    ctx->pc = 0x159420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    // 0x159424: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159428: 0xc44001bc  lwc1        $f0, 0x1BC($v0)
    ctx->pc = 0x159428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15942c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x15942cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x159430: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x159430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x159434u;
}
