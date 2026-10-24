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

// Function: entry_00267f6c
// Address: 0x267f6c - 0x268140
void entry_00267f6c_0x267f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267f6c_0x267f6c");
#endif

    switch (ctx->pc) {
        case 0x267f94u: goto label_267f94;
        case 0x267fc0u: goto label_267fc0;
        case 0x267fecu: goto label_267fec;
        case 0x268024u: goto label_268024;
        case 0x26805cu: goto label_26805c;
        case 0x268094u: goto label_268094;
        case 0x2680f4u: goto label_2680f4;
        case 0x268104u: goto label_268104;
        case 0x26811cu: goto label_26811c;
        case 0x268130u: goto label_268130;
        default: break;
    }

    ctx->pc = 0x267f6cu;

    // 0x267f6c: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x267F6Cu;
    {
        const bool branch_taken_0x267f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267f6c) {
            ctx->pc = 0x268140u;
            return;
        }
    }
    ctx->pc = 0x267F74u;
    // 0x267f74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x267f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x267f78: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x267f78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x267f7c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x267f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x267f80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x267f80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267f84: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x267f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x267f88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x267f88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x267f8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x267F8Cu;
    SET_GPR_U32(ctx, 31, 0x267F94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x267F8Cu, 0x267F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F94u;
label_267f94:
    // 0x267f94: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x267f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x267f98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x267f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267f9c: 0x0  nop
    ctx->pc = 0x267f9cu;
    // NOP
    // 0x267fa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x267fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267fa4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x267fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x267fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267fac: 0x0  nop
    ctx->pc = 0x267facu;
    // NOP
    // 0x267fb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x267fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x267fb4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x267fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x267fb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x267FB8u;
    SET_GPR_U32(ctx, 31, 0x267FC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x267FB8u, 0x267FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FC0u;
label_267fc0:
    // 0x267fc0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x267fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x267fc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x267fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267fc8: 0x0  nop
    ctx->pc = 0x267fc8u;
    // NOP
    // 0x267fcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x267fccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267fd0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x267fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x267fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267fd8: 0x0  nop
    ctx->pc = 0x267fd8u;
    // NOP
    // 0x267fdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x267fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x267fe0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x267fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x267fe4: 0xc067648  jal         func_19D920
    ctx->pc = 0x267FE4u;
    SET_GPR_U32(ctx, 31, 0x267FECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x267FE4u, 0x267FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FECu;
label_267fec:
    // 0x267fec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x267fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x267ff0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x267ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267ff4: 0x0  nop
    ctx->pc = 0x267ff4u;
    // NOP
    // 0x267ff8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x267ff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267ffc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x267ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x268000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268004: 0x0  nop
    ctx->pc = 0x268004u;
    // NOP
    // 0x268008: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x268008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26800c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26800cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x268010: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x268010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268014: 0x0  nop
    ctx->pc = 0x268014u;
    // NOP
    // 0x268018: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x268018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x26801c: 0xc067648  jal         func_19D920
    ctx->pc = 0x26801Cu;
    SET_GPR_U32(ctx, 31, 0x268024u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x26801Cu, 0x268024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268024u;
label_268024:
    // 0x268024: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x268024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x268028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26802c: 0x0  nop
    ctx->pc = 0x26802cu;
    // NOP
    // 0x268030: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x268030u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x268034: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x268034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x268038: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26803c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268040: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x268040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x268044: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x268044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x268048: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x268048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26804c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26804cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x268050: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x268050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x268054: 0xc067648  jal         func_19D920
    ctx->pc = 0x268054u;
    SET_GPR_U32(ctx, 31, 0x26805Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x268054u, 0x26805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26805Cu;
label_26805c:
    // 0x26805c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x26805cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x268060: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268064: 0x0  nop
    ctx->pc = 0x268064u;
    // NOP
    // 0x268068: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x268068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26806c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x26806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x268070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268074: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x268074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268078: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x268078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26807c: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x26807cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x268080: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x268080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x268084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x268088: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x268088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26808c: 0xc067648  jal         func_19D920
    ctx->pc = 0x26808Cu;
    SET_GPR_U32(ctx, 31, 0x268094u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x26808Cu, 0x268094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268094u;
label_268094:
    // 0x268094: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x268094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x268098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26809c: 0x0  nop
    ctx->pc = 0x26809cu;
    // NOP
    // 0x2680a0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2680a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2680a4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2680a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2680a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2680a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2680ac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2680acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2680b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2680b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2680b4: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x2680b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2680b8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2680b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2680bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2680bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2680c0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2680c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2680c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2680c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2680c8: 0x0  nop
    ctx->pc = 0x2680c8u;
    // NOP
    // 0x2680cc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2680ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2680d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2680d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2680d4: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x2680d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x2680d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2680d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2680dc: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x2680dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x2680e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2680e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2680e4: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x2680e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x2680e8: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x2680e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2680ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x2680ECu;
    SET_GPR_U32(ctx, 31, 0x2680F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2680F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2680F4u) { return; }
    ctx->pc = 0x2680F4u;
label_2680f4:
    // 0x2680f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2680f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2680f8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2680f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2680fc: 0xc040c24  jal         func_103090
    ctx->pc = 0x2680FCu;
    SET_GPR_U32(ctx, 31, 0x268104u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x268104u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x268104u) { return; }
    ctx->pc = 0x268104u;
label_268104:
    // 0x268104: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x268104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x268108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x268108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26810c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268110: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x268110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268114: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x268114u;
    SET_GPR_U32(ctx, 31, 0x26811Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x26811Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26811Cu) { return; }
    ctx->pc = 0x26811Cu;
label_26811c:
    // 0x26811c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x268120: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x268120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x268124: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x268124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268128: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x268128u;
    SET_GPR_U32(ctx, 31, 0x268130u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x268130u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x268130u) { return; }
    ctx->pc = 0x268130u;
label_268130:
    // 0x268130: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x268130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x268134: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x268134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x268138: 0xc099d88  jal         func_267620
    ctx->pc = 0x268138u;
    SET_GPR_U32(ctx, 31, 0x268140u);
    ctx->pc = 0x267620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267620u, 0x268138u, 0x268140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268140u;
}
