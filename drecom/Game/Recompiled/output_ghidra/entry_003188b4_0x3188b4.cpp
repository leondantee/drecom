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

// Function: entry_003188b4
// Address: 0x3188b4 - 0x318a5c
void entry_003188b4_0x3188b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003188b4_0x3188b4");
#endif

    switch (ctx->pc) {
        case 0x3188c4u: goto label_3188c4;
        case 0x318910u: goto label_318910;
        case 0x31892cu: goto label_31892c;
        case 0x318944u: goto label_318944;
        case 0x31896cu: goto label_31896c;
        case 0x318988u: goto label_318988;
        case 0x318a14u: goto label_318a14;
        case 0x318a20u: goto label_318a20;
        default: break;
    }

    ctx->pc = 0x3188b4u;

    // 0x3188b4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188b8: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x3188b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188bc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3188BCu;
    SET_GPR_U32(ctx, 31, 0x3188C4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3188C4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3188C4u) { return; }
    ctx->pc = 0x3188C4u;
label_3188c4:
    // 0x3188c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3188c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3188c8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188cc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3188ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188d0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3188d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3188d4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188d8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3188d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188dc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3188dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3188e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188e4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3188e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188e8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3188e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x3188ec: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3188ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3188f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188f4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188f8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3188f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188fc: 0x8c8402d0  lw          $a0, 0x2D0($a0)
    ctx->pc = 0x3188fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x318900: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x318900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x318904: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x318904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x318908: 0xc040d62  jal         func_103588
    ctx->pc = 0x318908u;
    SET_GPR_U32(ctx, 31, 0x318910u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x318910u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x318910u) { return; }
    ctx->pc = 0x318910u;
label_318910:
    // 0x318910: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318914: 0xc44012d0  lwc1        $f0, 0x12D0($v0)
    ctx->pc = 0x318914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318918: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x31891c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x31891cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x318920: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x318920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x318924: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x318924u;
    SET_GPR_U32(ctx, 31, 0x31892Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x31892Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31892Cu) { return; }
    ctx->pc = 0x31892Cu;
label_31892c:
    // 0x31892c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x31892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318930: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x318930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x318934: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x318934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x318938: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x318938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x31893c: 0xc040d62  jal         func_103588
    ctx->pc = 0x31893Cu;
    SET_GPR_U32(ctx, 31, 0x318944u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x318944u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x318944u) { return; }
    ctx->pc = 0x318944u;
label_318944:
    // 0x318944: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318948: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x318948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x31894c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31894cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318950: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x318950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x318954: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x318954u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x318958: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x318958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31895c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x31895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x318960: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x318960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x318964: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x318964u;
    SET_GPR_U32(ctx, 31, 0x31896Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31896Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31896Cu) { return; }
    ctx->pc = 0x31896Cu;
label_31896c:
    // 0x31896c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x31896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318970: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318974: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x318974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x318978: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x318978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31897c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x31897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x318980: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x318980u;
    SET_GPR_U32(ctx, 31, 0x318988u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x318980u, 0x318988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318988u;
label_318988:
    // 0x318988: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x31898c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31898cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x318990: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x318990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318994: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318998: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x318998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31899c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x31899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3189a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3189a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3189a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3189a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3189a8: 0x0  nop
    ctx->pc = 0x3189a8u;
    // NOP
    // 0x3189ac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3189acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3189b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3189b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3189b4: 0x0  nop
    ctx->pc = 0x3189b4u;
    // NOP
    // 0x3189b8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3189b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3189bc: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x3189bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x3189c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3189c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3189c4: 0x0  nop
    ctx->pc = 0x3189c4u;
    // NOP
    // 0x3189c8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3189c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3189cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3189ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3189d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3189d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3189d4: 0x0  nop
    ctx->pc = 0x3189d4u;
    // NOP
    // 0x3189d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3189d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3189dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3189dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3189e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3189e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3189e4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x3189e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x3189e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3189e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3189ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3189ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3189f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3189f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3189f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3189f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3189f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3189f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3189fc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3189fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x318a00: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x318a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x318a04: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x318a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318a08: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x318a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318a0c: 0xc086488  jal         func_219220
    ctx->pc = 0x318A0Cu;
    SET_GPR_U32(ctx, 31, 0x318A14u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x318A0Cu, 0x318A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A14u;
label_318a14:
    // 0x318a14: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a18: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x318A18u;
    SET_GPR_U32(ctx, 31, 0x318A20u);
    ctx->pc = 0x31AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AAB0u, 0x318A18u, 0x318A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A20u;
label_318a20:
    // 0x318a20: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x318A20u;
    {
        const bool branch_taken_0x318a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a20) {
            ctx->pc = 0x318A5Cu;
            return;
        }
    }
    ctx->pc = 0x318A28u;
    // 0x318a28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x318a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318a2c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x318a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x318a34: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a38: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x318a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318a3c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x318a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x318a44: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a48: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x318a48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x318a4c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318a50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x318a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x318a54: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x318A54u;
    {
        const bool branch_taken_0x318a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a54) {
            ctx->pc = 0x318BE0u;
            return;
        }
    }
    ctx->pc = 0x318A5Cu;
}
