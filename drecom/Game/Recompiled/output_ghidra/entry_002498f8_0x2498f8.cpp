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

// Function: entry_002498f8
// Address: 0x2498f8 - 0x249aa0
void entry_002498f8_0x2498f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002498f8_0x2498f8");
#endif

    switch (ctx->pc) {
        case 0x249904u: goto label_249904;
        case 0x24991cu: goto label_24991c;
        case 0x249938u: goto label_249938;
        case 0x249984u: goto label_249984;
        case 0x2499c0u: goto label_2499c0;
        case 0x2499e0u: goto label_2499e0;
        case 0x2499fcu: goto label_2499fc;
        case 0x249a38u: goto label_249a38;
        case 0x249a70u: goto label_249a70;
        default: break;
    }

    ctx->pc = 0x2498f8u;

    // 0x2498f8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2498f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2498fc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2498FCu;
    SET_GPR_U32(ctx, 31, 0x249904u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x249904u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249904u) { return; }
    ctx->pc = 0x249904u;
label_249904:
    // 0x249904: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249908: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24990c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24990cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249910: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x249910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249914: 0xc040d0e  jal         func_103438
    ctx->pc = 0x249914u;
    SET_GPR_U32(ctx, 31, 0x24991Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x24991Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24991Cu) { return; }
    ctx->pc = 0x24991Cu;
label_24991c:
    // 0x24991c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249920: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249924: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x249924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249928: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x249928u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24992c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x24992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249930: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x249930u;
    SET_GPR_U32(ctx, 31, 0x249938u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x249938u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249938u) { return; }
    ctx->pc = 0x249938u;
label_249938:
    // 0x249938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24993c: 0x0  nop
    ctx->pc = 0x24993cu;
    // NOP
    // 0x249940: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x249940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x249944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249948: 0x0  nop
    ctx->pc = 0x249948u;
    // NOP
    // 0x24994c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24994cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x249950: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249954: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x249954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249958: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x249958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24995c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x24995cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x249960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249964: 0x0  nop
    ctx->pc = 0x249964u;
    // NOP
    // 0x249968: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x249968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24996c: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x24996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x249970: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x249970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x249974: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x249974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249978: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x249978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x24997c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x24997Cu;
    SET_GPR_U32(ctx, 31, 0x249984u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x249984u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249984u) { return; }
    ctx->pc = 0x249984u;
label_249984:
    // 0x249984: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x249984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249988: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x249988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24998c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24998cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249990: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x249990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x249994: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x249994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249998: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x249998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24999c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24999cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2499a0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2499a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2499a4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2499a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2499a8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2499a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2499ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2499acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2499b0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2499b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2499b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2499b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2499b8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2499B8u;
    SET_GPR_U32(ctx, 31, 0x2499C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2499C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2499C0u) { return; }
    ctx->pc = 0x2499C0u;
label_2499c0:
    // 0x2499c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2499c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2499c4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2499c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2499c8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2499c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2499cc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2499ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2499d0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2499d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2499d4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2499d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2499d8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2499D8u;
    SET_GPR_U32(ctx, 31, 0x2499E0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2499D8u, 0x2499E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499E0u;
label_2499e0:
    // 0x2499e0: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x2499e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x2499e4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2499e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2499e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2499e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2499ec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2499ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2499f0: 0xc7ac01ac  lwc1        $f12, 0x1AC($sp)
    ctx->pc = 0x2499f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2499f4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x2499F4u;
    SET_GPR_U32(ctx, 31, 0x2499FCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2499FCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2499FCu) { return; }
    ctx->pc = 0x2499FCu;
label_2499fc:
    // 0x2499fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2499fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249a00: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x249a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249a04: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x249a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x249a08: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x249a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249a0c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x249a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x249a10: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x249a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249a14: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x249a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x249a18: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x249a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249a1c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x249a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x249a20: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249a24: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x249a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249a28: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x249a28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x249a2c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x249a2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x249a30: 0xc040c00  jal         func_103000
    ctx->pc = 0x249A30u;
    SET_GPR_U32(ctx, 31, 0x249A38u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x249A38u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249A38u) { return; }
    ctx->pc = 0x249A38u;
label_249a38:
    // 0x249a38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x249a38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249a3c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x249a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249a40: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x249a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x249a44: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x249a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249a48: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x249a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x249a4c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x249a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249a50: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x249a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x249a54: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x249a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249a58: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x249a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x249a5c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x249a5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x249a60: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x249a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249a64: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x249a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x249a68: 0xc040c00  jal         func_103000
    ctx->pc = 0x249A68u;
    SET_GPR_U32(ctx, 31, 0x249A70u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x249A70u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249A70u) { return; }
    ctx->pc = 0x249A70u;
label_249a70:
    // 0x249a70: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x249a70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249a74: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x249a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249a78: 0x84c3002a  lh          $v1, 0x2A($a2)
    ctx->pc = 0x249a78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x249a7c: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x249a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x249a80: 0xa4c5002a  sh          $a1, 0x2A($a2)
    ctx->pc = 0x249a80u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 5));
    // 0x249a84: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x249a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249a88: 0x84c7002a  lh          $a3, 0x2A($a2)
    ctx->pc = 0x249a88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x249a8c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x249A8Cu;
    {
        const bool branch_taken_0x249a8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x249a8c) {
            ctx->pc = 0x249AA0u;
            return;
        }
    }
    ctx->pc = 0x249A94u;
    // 0x249a94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x249a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249a98: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249a9c: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x249a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x249aa0u;
}
