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

// Function: caseD_0
// Address: 0x231424 - 0x23161c
void caseD_0_0x231424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x231424");
#endif

    switch (ctx->pc) {
        case 0x231444u: goto label_231444;
        case 0x2314b8u: goto label_2314b8;
        case 0x231570u: goto label_231570;
        case 0x231588u: goto label_231588;
        case 0x2315a8u: goto label_2315a8;
        default: break;
    }

    ctx->pc = 0x231424u;

    // 0x231424: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x231424u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x231428: 0x348300a4  ori         $v1, $a0, 0xA4
    ctx->pc = 0x231428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)164);
    // 0x23142c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x23142cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x231430: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x231430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x231434: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x231434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x231438: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x231438u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x23143c: 0xc040c00  jal         func_103000
    ctx->pc = 0x23143Cu;
    SET_GPR_U32(ctx, 31, 0x231444u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x231444u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231444u) { return; }
    ctx->pc = 0x231444u;
label_231444:
    // 0x231444: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231444u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231448: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23144c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23144cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231450: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x231450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x231454: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x231454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x231458: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x231458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x23145c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23145cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231460: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231464: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x231464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x231468: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23146c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x23146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x231470: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x231470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231474: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x231474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23147c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231480: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x231480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x231484: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231488: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x231488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x23148c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x23148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231490: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x231490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x231494: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x231494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231498: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x231498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x23149c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x23149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2314a0: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2314a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2314a4: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x2314a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2314a8: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x2314a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2314ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2314acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2314b0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2314B0u;
    SET_GPR_U32(ctx, 31, 0x2314B8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2314B8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2314B8u) { return; }
    ctx->pc = 0x2314B8u;
label_2314b8:
    // 0x2314b8: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2314b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2314bc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2314bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2314c0: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2314c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2314c4: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2314c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2314c8: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2314c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2314cc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2314ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2314d0: 0xc7ac011c  lwc1        $f12, 0x11C($sp)
    ctx->pc = 0x2314d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2314d4: 0xe60c003c  swc1        $f12, 0x3C($s0)
    ctx->pc = 0x2314d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2314d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2314d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2314dc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2314dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2314e0: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x2314e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2314e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2314e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2314e8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2314e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2314ec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2314ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2314f0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2314f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2314f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2314f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2314f8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2314f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2314fc: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2314fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x231500: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231504: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231508: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x231508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x23150c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23150cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x231510: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231514: 0xa4a40030  sh          $a0, 0x30($a1)
    ctx->pc = 0x231514u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x231518: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x231518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x23151c: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x23151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x231520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231524: 0x0  nop
    ctx->pc = 0x231524u;
    // NOP
    // 0x231528: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x231528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x23152c: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x23152cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x231530: 0x34a40fdb  ori         $a0, $a1, 0xFDB
    ctx->pc = 0x231530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x231534: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231534u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231538: 0x0  nop
    ctx->pc = 0x231538u;
    // NOP
    // 0x23153c: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x23153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x231540: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231544: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231548: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x231548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x23154c: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x23154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231550: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x231550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x231554: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x231554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x231558: 0xc7ae01c0  lwc1        $f14, 0x1C0($sp)
    ctx->pc = 0x231558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x23155c: 0xc7af01c0  lwc1        $f15, 0x1C0($sp)
    ctx->pc = 0x23155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x231560: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x231560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x231564: 0x27a701bc  addiu       $a3, $sp, 0x1BC
    ctx->pc = 0x231564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x231568: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x231568u;
    SET_GPR_U32(ctx, 31, 0x231570u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x231568u, 0x231570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231570u;
label_231570:
    // 0x231570: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x231570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231574: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x231574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231578: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x231578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23157c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23157cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231580: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x231580u;
    SET_GPR_U32(ctx, 31, 0x231588u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231580u, 0x231588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231588u;
label_231588:
    // 0x231588: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x231588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23158c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x23158cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x231590: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231594: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x231594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231598: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x231598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23159c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23159cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2315a0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2315A0u;
    SET_GPR_U32(ctx, 31, 0x2315A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2315A0u, 0x2315A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315A8u;
label_2315a8:
    // 0x2315a8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2315a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2315ac: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2315acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2315b0: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x2315b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2315b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2315b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2315b8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2315b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2315bc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2315bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2315c0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x2315c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2315c4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x2315c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x2315c8: 0x2492ac90  addiu       $s2, $a0, -0x5370
    ctx->pc = 0x2315c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945936));
    // 0x2315cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2315ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2315d0: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x2315d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x38AC91u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x38AC91u, _value); } while (0);
    // 0x2315d4: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x2315d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x2315d8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2315d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2315dc: 0x0  nop
    ctx->pc = 0x2315dcu;
    // NOP
    // 0x2315e0: 0xe64c000c  swc1        $f12, 0xC($s2)
    ctx->pc = 0x2315e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38AC9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38AC9Cu, _value); } while (0); }
    // 0x2315e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2315e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2315e8: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x2315e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2315ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2315ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2315f0: 0x34827fff  ori         $v0, $a0, 0x7FFF
    ctx->pc = 0x2315f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x2315f4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2315f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2315f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2315f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2315fc: 0xac251a58  sw          $a1, 0x1A58($at)
    ctx->pc = 0x2315fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x231600: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x231600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231604: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x231604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x231608: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x231608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23160c: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x23160cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x231610: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x231610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x231614: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x231614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x231618: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x231618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x23161cu;
}
