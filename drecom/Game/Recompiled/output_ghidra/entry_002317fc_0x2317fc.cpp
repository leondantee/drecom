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

// Function: entry_002317fc
// Address: 0x2317fc - 0x23190c
void entry_002317fc_0x2317fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002317fc_0x2317fc");
#endif

    switch (ctx->pc) {
        case 0x23181cu: goto label_23181c;
        case 0x231834u: goto label_231834;
        case 0x23184cu: goto label_23184c;
        case 0x231894u: goto label_231894;
        case 0x2318d4u: goto label_2318d4;
        default: break;
    }

    ctx->pc = 0x2317fcu;

    // 0x2317fc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2317fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x231800: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x231800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x231804: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x231804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x231808: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x231808u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x23180c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x23180cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x231810: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x231810u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x231814: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x231814u;
    SET_GPR_U32(ctx, 31, 0x23181Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x23181Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23181Cu) { return; }
    ctx->pc = 0x23181Cu;
label_23181c:
    // 0x23181c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x23181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231820: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x231820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x231824: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x231824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x231828: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x231828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23182c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x23182Cu;
    SET_GPR_U32(ctx, 31, 0x231834u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x231834u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231834u) { return; }
    ctx->pc = 0x231834u;
label_231834:
    // 0x231834: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231838: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x231838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x23183c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x23183cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x231840: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x231840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231844: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x231844u;
    SET_GPR_U32(ctx, 31, 0x23184Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x23184Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23184Cu) { return; }
    ctx->pc = 0x23184Cu;
label_23184c:
    // 0x23184c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23184cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231850: 0x0  nop
    ctx->pc = 0x231850u;
    // NOP
    // 0x231854: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x231854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x231858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23185c: 0x0  nop
    ctx->pc = 0x23185cu;
    // NOP
    // 0x231860: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x231860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x231864: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231868: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x231868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23186c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x23186cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x231870: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231878: 0x0  nop
    ctx->pc = 0x231878u;
    // NOP
    // 0x23187c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x23187cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x231880: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x231880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x231884: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x231884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x231888: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x231888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x23188c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x23188Cu;
    SET_GPR_U32(ctx, 31, 0x231894u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x231894u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231894u) { return; }
    ctx->pc = 0x231894u;
label_231894:
    // 0x231894: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231894u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231898: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x231898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23189c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x23189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2318a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2318a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2318a4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2318a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2318a8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2318a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2318ac: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2318acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2318b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2318b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2318b4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2318b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2318b8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2318b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2318bc: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x2318bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2318c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2318c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2318c4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2318c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2318c8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2318c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2318cc: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x2318CCu;
    SET_GPR_U32(ctx, 31, 0x2318D4u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x2318CCu, 0x2318D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318D4u;
label_2318d4:
    // 0x2318d4: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2318d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2318d8: 0x3c0643fa  lui         $a2, 0x43FA
    ctx->pc = 0x2318d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17402 << 16));
    // 0x2318dc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2318dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2318e0: 0x0  nop
    ctx->pc = 0x2318e0u;
    // NOP
    // 0x2318e4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2318e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2318e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2318e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2318ec: 0x0  nop
    ctx->pc = 0x2318ecu;
    // NOP
    // 0x2318f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2318F0u;
    {
        const bool branch_taken_0x2318f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2318f0) {
            ctx->pc = 0x23190Cu;
            return;
        }
    }
    ctx->pc = 0x2318F8u;
    // 0x2318f8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2318f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2318fc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2318fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231900: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x231900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231904: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231908: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x231908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->pc = 0x23190cu;
}
