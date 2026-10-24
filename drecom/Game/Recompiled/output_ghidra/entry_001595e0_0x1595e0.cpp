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

// Function: entry_001595e0
// Address: 0x1595e0 - 0x159668
void entry_001595e0_0x1595e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001595e0_0x1595e0");
#endif

    switch (ctx->pc) {
        case 0x1595fcu: goto label_1595fc;
        case 0x159654u: goto label_159654;
        default: break;
    }

    ctx->pc = 0x1595e0u;

    // 0x1595e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1595e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1595e4: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x1595e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1595e8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1595e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1595ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1595ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1595f0: 0x24455550  addiu       $a1, $v0, 0x5550
    ctx->pc = 0x1595f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
    // 0x1595f4: 0xc040d62  jal         func_103588
    ctx->pc = 0x1595F4u;
    SET_GPR_U32(ctx, 31, 0x1595FCu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1595FCu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1595FCu) { return; }
    ctx->pc = 0x1595FCu;
label_1595fc:
    // 0x1595fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1595fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159600: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x159600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159604: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159604u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x159608: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x159608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15960c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159610: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x159610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159614: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159614u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x159618: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x159618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15961c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159620: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x159620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159624: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159624u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x159628: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x159628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15962c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15962cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159630: 0x0  nop
    ctx->pc = 0x159630u;
    // NOP
    // 0x159634: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x159634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x159638: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15963c: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x15963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x159640: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159644: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x159644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159648: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x159648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15964c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15964Cu;
    SET_GPR_U32(ctx, 31, 0x159654u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159654u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159654u) { return; }
    ctx->pc = 0x159654u;
label_159654:
    // 0x159654: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15965c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159660: 0xe440014c  swc1        $f0, 0x14C($v0)
    ctx->pc = 0x159660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    // 0x159664: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x159664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x159668u;
}
