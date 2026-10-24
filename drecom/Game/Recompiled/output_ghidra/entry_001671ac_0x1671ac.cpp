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

// Function: entry_001671ac
// Address: 0x1671ac - 0x1671f8
void entry_001671ac_0x1671ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001671ac_0x1671ac");
#endif

    switch (ctx->pc) {
        case 0x1671bcu: goto label_1671bc;
        case 0x1671e0u: goto label_1671e0;
        case 0x1671f4u: goto label_1671f4;
        default: break;
    }

    ctx->pc = 0x1671acu;

    // 0x1671ac: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1671acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1671b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1671b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1671b4: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1671B4u;
    SET_GPR_U32(ctx, 31, 0x1671BCu);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1671BCu;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1671BCu) { return; }
    ctx->pc = 0x1671BCu;
label_1671bc:
    // 0x1671bc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1671bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1671c0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1671c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1671c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1671c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1671c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1671c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1671cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1671ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1671d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1671d4: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1671d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1671d8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1671D8u;
    SET_GPR_U32(ctx, 31, 0x1671E0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1671E0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1671E0u) { return; }
    ctx->pc = 0x1671E0u;
label_1671e0:
    // 0x1671e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1671e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1671e4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1671e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1671e8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1671e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1671ec: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1671ECu;
    SET_GPR_U32(ctx, 31, 0x1671F4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1671F4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1671F4u) { return; }
    ctx->pc = 0x1671F4u;
label_1671f4:
    // 0x1671f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1671f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1671f8u;
}
