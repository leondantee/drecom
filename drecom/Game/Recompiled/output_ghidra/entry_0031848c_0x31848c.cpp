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

// Function: entry_0031848c
// Address: 0x31848c - 0x3185d8
void entry_0031848c_0x31848c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031848c_0x31848c");
#endif

    switch (ctx->pc) {
        case 0x31849cu: goto label_31849c;
        case 0x3184e8u: goto label_3184e8;
        case 0x318504u: goto label_318504;
        case 0x318590u: goto label_318590;
        case 0x31859cu: goto label_31859c;
        default: break;
    }

    ctx->pc = 0x31848cu;

    // 0x31848c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318490: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x318490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x318494: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x318494u;
    SET_GPR_U32(ctx, 31, 0x31849Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x31849Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31849Cu) { return; }
    ctx->pc = 0x31849Cu;
label_31849c:
    // 0x31849c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31849cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3184a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184a4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3184a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3184a8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3184a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3184ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184b0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3184b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3184b4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3184b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3184b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184bc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3184bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3184c0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3184c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3184c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3184c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3184c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184d0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3184d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3184d4: 0x8c8402d0  lw          $a0, 0x2D0($a0)
    ctx->pc = 0x3184d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x3184d8: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x3184d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3184dc: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x3184dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x3184e0: 0xc040d62  jal         func_103588
    ctx->pc = 0x3184E0u;
    SET_GPR_U32(ctx, 31, 0x3184E8u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x3184E8u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3184E8u) { return; }
    ctx->pc = 0x3184E8u;
label_3184e8:
    // 0x3184e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184ec: 0xc44012d0  lwc1        $f0, 0x12D0($v0)
    ctx->pc = 0x3184ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3184f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3184f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184f4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x3184f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x3184f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3184f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3184fc: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x3184FCu;
    SET_GPR_U32(ctx, 31, 0x318504u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x3184FCu, 0x318504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318504u;
label_318504:
    // 0x318504: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318508: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x318508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31850c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31850cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318510: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318514: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x318514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x318518: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x318518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31851c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31851cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x318520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318524: 0x0  nop
    ctx->pc = 0x318524u;
    // NOP
    // 0x318528: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x318528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31852c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31852cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318530: 0x0  nop
    ctx->pc = 0x318530u;
    // NOP
    // 0x318534: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x318534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x318538: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x318538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x31853c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31853cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318540: 0x0  nop
    ctx->pc = 0x318540u;
    // NOP
    // 0x318544: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x318544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x318548: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x318548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31854c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31854cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318550: 0x0  nop
    ctx->pc = 0x318550u;
    // NOP
    // 0x318554: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x318554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x318558: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x318558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x31855c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31855cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x318560: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x318560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x318564: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318568: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x318568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31856c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31856cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x318570: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x318570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x318574: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x318574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x318578: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x318578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31857c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x31857cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x318580: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x318580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318584: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x318584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318588: 0xc086488  jal         func_219220
    ctx->pc = 0x318588u;
    SET_GPR_U32(ctx, 31, 0x318590u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x318588u, 0x318590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318590u;
label_318590:
    // 0x318590: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318594: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x318594u;
    SET_GPR_U32(ctx, 31, 0x31859Cu);
    ctx->pc = 0x31AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AAB0u, 0x318594u, 0x31859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31859Cu;
label_31859c:
    // 0x31859c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31859Cu;
    {
        const bool branch_taken_0x31859c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31859c) {
            ctx->pc = 0x3185D8u;
            return;
        }
    }
    ctx->pc = 0x3185A4u;
    // 0x3185a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3185a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3185a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3185a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3185acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3185b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3185b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185b4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3185b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3185b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3185b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3185bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3185c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3185c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3185c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3185c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3185c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3185ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3185d0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x3185D0u;
    {
        const bool branch_taken_0x3185d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185d0) {
            ctx->pc = 0x3187ACu;
            return;
        }
    }
    ctx->pc = 0x3185D8u;
}
