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

// Function: entry_00163630
// Address: 0x163630 - 0x163710
void entry_00163630_0x163630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163630_0x163630");
#endif

    switch (ctx->pc) {
        case 0x163650u: goto label_163650;
        case 0x163664u: goto label_163664;
        case 0x163688u: goto label_163688;
        case 0x1636a0u: goto label_1636a0;
        case 0x1636b0u: goto label_1636b0;
        case 0x1636dcu: goto label_1636dc;
        default: break;
    }

    ctx->pc = 0x163630u;

    // 0x163630: 0x3c023d00  lui         $v0, 0x3D00
    ctx->pc = 0x163630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15616 << 16));
    // 0x163634: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x163634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x163638: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x163638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16363c: 0xc60c1b50  lwc1        $f12, 0x1B50($s0)
    ctx->pc = 0x16363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163640: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163644: 0xc42d4f40  lwc1        $f13, 0x4F40($at)
    ctx->pc = 0x163644u;
    { uint32_t bits = FAST_READ32(0x3F4F40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x163648: 0xc058f50  jal         func_163D40
    ctx->pc = 0x163648u;
    SET_GPR_U32(ctx, 31, 0x163650u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x163648u, 0x163650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163650u;
label_163650:
    // 0x163650: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163654: 0xe4204f40  swc1        $f0, 0x4F40($at)
    ctx->pc = 0x163654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F40u, _value); } while (0); }
    // 0x163658: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16365c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x16365Cu;
    SET_GPR_U32(ctx, 31, 0x163664u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x163664u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163664u) { return; }
    ctx->pc = 0x163664u;
label_163664:
    // 0x163664: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x163664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x163668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16366c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163670: 0xc4204f40  lwc1        $f0, 0x4F40($at)
    ctx->pc = 0x163670u;
    { uint32_t bits = FAST_READ32(0x3F4F40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163674: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x163674u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163678: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16367c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163680: 0xc040d0e  jal         func_103438
    ctx->pc = 0x163680u;
    SET_GPR_U32(ctx, 31, 0x163688u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x163688u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163688u) { return; }
    ctx->pc = 0x163688u;
label_163688:
    // 0x163688: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16368c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163690: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163694: 0xc42c4f28  lwc1        $f12, 0x4F28($at)
    ctx->pc = 0x163694u;
    { uint32_t bits = FAST_READ32(0x3F4F28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163698: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x163698u;
    SET_GPR_U32(ctx, 31, 0x1636A0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1636A0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1636A0u) { return; }
    ctx->pc = 0x1636A0u;
label_1636a0:
    // 0x1636a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1636a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1636a4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1636a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1636a8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1636A8u;
    SET_GPR_U32(ctx, 31, 0x1636B0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1636B0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1636B0u) { return; }
    ctx->pc = 0x1636B0u;
label_1636b0:
    // 0x1636b0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1636b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1636b4: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1636b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1636b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1636b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1636bc: 0x0  nop
    ctx->pc = 0x1636bcu;
    // NOP
    // 0x1636c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1636c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1636c4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1636c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1636c8: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x1636c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1636cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1636ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1636d0: 0xc42d4f28  lwc1        $f13, 0x4F28($at)
    ctx->pc = 0x1636d0u;
    { uint32_t bits = FAST_READ32(0x3F4F28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1636d4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1636D4u;
    SET_GPR_U32(ctx, 31, 0x1636DCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1636D4u, 0x1636DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636DCu;
label_1636dc:
    // 0x1636dc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1636dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1636e0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1636e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1636e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1636e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1636e8: 0x0  nop
    ctx->pc = 0x1636e8u;
    // NOP
    // 0x1636ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1636ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1636f0: 0x0  nop
    ctx->pc = 0x1636f0u;
    // NOP
    // 0x1636f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1636F4u;
    {
        const bool branch_taken_0x1636f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1636f4) {
            ctx->pc = 0x163710u;
            return;
        }
    }
    ctx->pc = 0x1636FCu;
    // 0x1636fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1636fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x163700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163704: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x163704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163708: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x163708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16370c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x16370cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x163710u;
}
