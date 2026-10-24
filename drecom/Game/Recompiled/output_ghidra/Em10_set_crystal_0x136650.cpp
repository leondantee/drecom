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

// Function: Em10_set_crystal
// Address: 0x136650 - 0x1368ec
void Em10_set_crystal_0x136650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_set_crystal_0x136650");
#endif

    switch (ctx->pc) {
        case 0x136688u: goto label_136688;
        case 0x136698u: goto label_136698;
        case 0x1366e0u: goto label_1366e0;
        case 0x136728u: goto label_136728;
        case 0x136758u: goto label_136758;
        case 0x1367bcu: goto label_1367bc;
        case 0x136804u: goto label_136804;
        case 0x13684cu: goto label_13684c;
        case 0x136868u: goto label_136868;
        case 0x136878u: goto label_136878;
        case 0x1368dcu: goto label_1368dc;
        default: break;
    }

    ctx->pc = 0x136650u;

    // 0x136650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136654: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x136654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x136658: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x136658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x13665c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x13665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136660: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x136660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x136664: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x136664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x136668: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x136668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13666c: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x13666Cu;
    {
        const bool branch_taken_0x13666c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13666c) {
            ctx->pc = 0x136854u;
            goto label_136854;
        }
    }
    ctx->pc = 0x136674u;
    // 0x136674: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136678: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x136678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13667c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x13667cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x136680: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136680u;
    SET_GPR_U32(ctx, 31, 0x136688u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136688u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136688u) { return; }
    ctx->pc = 0x136688u;
label_136688:
    // 0x136688: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x136688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13668c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x13668cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136690: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x136690u;
    SET_GPR_U32(ctx, 31, 0x136698u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x136690u, 0x136698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136698u;
label_136698:
    // 0x136698: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13669c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x13669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1366a0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1366a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1366a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1366a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1366a8: 0x0  nop
    ctx->pc = 0x1366a8u;
    // NOP
    // 0x1366ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1366acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1366b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1366b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1366b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1366b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1366b8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1366b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1366bc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1366bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1366c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1366c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1366c4: 0x0  nop
    ctx->pc = 0x1366c4u;
    // NOP
    // 0x1366c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1366c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1366cc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1366ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1366d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1366d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1366d4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1366d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1366d8: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x1366D8u;
    SET_GPR_U32(ctx, 31, 0x1366E0u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x1366D8u, 0x1366E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366E0u;
label_1366e0:
    // 0x1366e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1366e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1366e4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1366e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1366e8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1366e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1366ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1366ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1366f0: 0x0  nop
    ctx->pc = 0x1366f0u;
    // NOP
    // 0x1366f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1366f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1366f8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1366f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1366fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1366fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136700: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x136700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136704: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x136704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x136708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13670c: 0x0  nop
    ctx->pc = 0x13670cu;
    // NOP
    // 0x136710: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136714: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x136714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x136718: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x136718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13671c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x13671cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136720: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x136720u;
    SET_GPR_U32(ctx, 31, 0x136728u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x136720u, 0x136728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136728u;
label_136728:
    // 0x136728: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x136728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13672c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x13672cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x136730: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x136730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x136734: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x136734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x136738: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x136738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13673c: 0x14830067  bne         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x13673Cu;
    {
        const bool branch_taken_0x13673c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13673c) {
            ctx->pc = 0x1368DCu;
            goto label_1368dc;
        }
    }
    ctx->pc = 0x136744u;
    // 0x136744: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136748: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x136748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13674c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x13674cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x136750: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136750u;
    SET_GPR_U32(ctx, 31, 0x136758u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136758u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136758u) { return; }
    ctx->pc = 0x136758u;
label_136758:
    // 0x136758: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13675c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x13675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136760: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x136760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x136764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136768: 0x0  nop
    ctx->pc = 0x136768u;
    // NOP
    // 0x13676c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13676cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136770: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x136770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x136774: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136778: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x136778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13677c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x13677cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x136780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136784: 0x0  nop
    ctx->pc = 0x136784u;
    // NOP
    // 0x136788: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13678c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x13678cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x136790: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136794: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x136794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136798: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x136798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x13679c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13679cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1367a0: 0x0  nop
    ctx->pc = 0x1367a0u;
    // NOP
    // 0x1367a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1367a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1367a8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1367a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1367ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1367acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1367b0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1367b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1367b4: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x1367B4u;
    SET_GPR_U32(ctx, 31, 0x1367BCu);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x1367B4u, 0x1367BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1367BCu;
label_1367bc:
    // 0x1367bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1367bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1367c0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1367c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1367c4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1367c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1367c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1367c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1367cc: 0x0  nop
    ctx->pc = 0x1367ccu;
    // NOP
    // 0x1367d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1367d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1367d4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1367d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1367d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1367d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1367dc: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1367dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1367e0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1367e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1367e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1367e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1367e8: 0x0  nop
    ctx->pc = 0x1367e8u;
    // NOP
    // 0x1367ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1367ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1367f0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1367f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1367f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1367f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1367f8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1367f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1367fc: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x1367FCu;
    SET_GPR_U32(ctx, 31, 0x136804u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x1367FCu, 0x136804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136804u;
label_136804:
    // 0x136804: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136808: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x136808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13680c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x13680cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x136810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136814: 0x0  nop
    ctx->pc = 0x136814u;
    // NOP
    // 0x136818: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13681c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x13681cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x136820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136824: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x136824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136828: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x136828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x13682c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13682cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136830: 0x0  nop
    ctx->pc = 0x136830u;
    // NOP
    // 0x136834: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136838: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x136838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13683c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13683cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x136840: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x136840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136844: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x136844u;
    SET_GPR_U32(ctx, 31, 0x13684Cu);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x136844u, 0x13684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13684Cu;
label_13684c:
    // 0x13684c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13684Cu;
    {
        const bool branch_taken_0x13684c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13684c) {
            ctx->pc = 0x1368DCu;
            goto label_1368dc;
        }
    }
    ctx->pc = 0x136854u;
label_136854:
    // 0x136854: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136858: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x136858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13685c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x13685cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x136860: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136860u;
    SET_GPR_U32(ctx, 31, 0x136868u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136868u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136868u) { return; }
    ctx->pc = 0x136868u;
label_136868:
    // 0x136868: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x136868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13686c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x13686cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136870: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x136870u;
    SET_GPR_U32(ctx, 31, 0x136878u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x136870u, 0x136878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136878u;
label_136878:
    // 0x136878: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x136878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13687c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x13687cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x136880: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x136880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x136884: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x136884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x136888: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x136888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13688c: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13688Cu;
    {
        const bool branch_taken_0x13688c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13688c) {
            ctx->pc = 0x1368DCu;
            goto label_1368dc;
        }
    }
    ctx->pc = 0x136894u;
    // 0x136894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136898: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x136898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13689c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x13689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1368a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1368a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1368a4: 0x0  nop
    ctx->pc = 0x1368a4u;
    // NOP
    // 0x1368a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1368a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1368ac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1368acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1368b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1368b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1368b4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1368b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1368b8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1368b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1368bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1368bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1368c0: 0x0  nop
    ctx->pc = 0x1368c0u;
    // NOP
    // 0x1368c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1368c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1368c8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1368c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1368cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1368ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1368d0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1368d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1368d4: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x1368D4u;
    SET_GPR_U32(ctx, 31, 0x1368DCu);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x1368D4u, 0x1368DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368DCu;
label_1368dc:
    // 0x1368dc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1368dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1368e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1368e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1368e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1368E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1368E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1368ECu;
}
