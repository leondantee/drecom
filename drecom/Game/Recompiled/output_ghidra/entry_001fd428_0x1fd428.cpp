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

// Function: entry_001fd428
// Address: 0x1fd428 - 0x1fd5e8
void entry_001fd428_0x1fd428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd428_0x1fd428");
#endif

    switch (ctx->pc) {
        case 0x1fd43cu: goto label_1fd43c;
        case 0x1fd44cu: goto label_1fd44c;
        case 0x1fd474u: goto label_1fd474;
        case 0x1fd488u: goto label_1fd488;
        case 0x1fd4a0u: goto label_1fd4a0;
        case 0x1fd4b4u: goto label_1fd4b4;
        case 0x1fd4ccu: goto label_1fd4cc;
        case 0x1fd4d8u: goto label_1fd4d8;
        case 0x1fd518u: goto label_1fd518;
        case 0x1fd534u: goto label_1fd534;
        case 0x1fd53cu: goto label_1fd53c;
        case 0x1fd560u: goto label_1fd560;
        case 0x1fd574u: goto label_1fd574;
        case 0x1fd598u: goto label_1fd598;
        case 0x1fd5d4u: goto label_1fd5d4;
        default: break;
    }

    ctx->pc = 0x1fd428u;

    // 0x1fd428: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fd428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd42c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fd42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fd430: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1fd430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd434: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FD434u;
    SET_GPR_U32(ctx, 31, 0x1FD43Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FD434u, 0x1FD43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD43Cu;
label_1fd43c:
    // 0x1fd43c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1fd43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fd440: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1fd440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fd444: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1FD444u;
    SET_GPR_U32(ctx, 31, 0x1FD44Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1FD444u, 0x1FD44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD44Cu;
label_1fd44c:
    // 0x1fd44c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1fd44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1fd450: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1fd450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd454: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1fd454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd458: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1fd458u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd45c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1fd45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd460: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1fd460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd464: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd468: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1fd468u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fd46c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1FD46Cu;
    SET_GPR_U32(ctx, 31, 0x1FD474u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1FD46Cu, 0x1FD474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD474u;
label_1fd474:
    // 0x1fd474: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1fd474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1fd478: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1fd478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fd47c: 0xc7ad012c  lwc1        $f13, 0x12C($sp)
    ctx->pc = 0x1fd47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fd480: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1FD480u;
    SET_GPR_U32(ctx, 31, 0x1FD488u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1FD480u, 0x1FD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD488u;
label_1fd488:
    // 0x1fd488: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fd488u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fd48c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1fd48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1fd490: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fd490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd494: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1fd494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fd498: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x1FD498u;
    SET_GPR_U32(ctx, 31, 0x1FD4A0u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x1FD498u, 0x1FD4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4A0u;
label_1fd4a0:
    // 0x1fd4a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fd4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd4a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fd4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd4a8: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1fd4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fd4ac: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1FD4ACu;
    SET_GPR_U32(ctx, 31, 0x1FD4B4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1FD4B4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD4B4u) { return; }
    ctx->pc = 0x1FD4B4u;
label_1fd4b4:
    // 0x1fd4b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fd4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1fd4b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fd4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fd4bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fd4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd4c0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fd4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd4c4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1FD4C4u;
    SET_GPR_U32(ctx, 31, 0x1FD4CCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1FD4CCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD4CCu) { return; }
    ctx->pc = 0x1FD4CCu;
label_1fd4cc:
    // 0x1fd4cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fd4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd4d0: 0xc067588  jal         func_19D620
    ctx->pc = 0x1FD4D0u;
    SET_GPR_U32(ctx, 31, 0x1FD4D8u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1FD4D0u, 0x1FD4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4D8u;
label_1fd4d8:
    // 0x1fd4d8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1fd4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1fd4dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fd4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd4e0: 0x0  nop
    ctx->pc = 0x1fd4e0u;
    // NOP
    // 0x1fd4e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1fd4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1fd4e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fd4e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd4ec: 0x0  nop
    ctx->pc = 0x1fd4ecu;
    // NOP
    // 0x1fd4f0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1fd4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1fd4f4: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x1fd4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd4f8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1fd4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1fd4fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd504: 0x0  nop
    ctx->pc = 0x1fd504u;
    // NOP
    // 0x1fd508: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fd508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1fd50c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1fd50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1fd510: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1FD510u;
    SET_GPR_U32(ctx, 31, 0x1FD518u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1FD518u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD518u) { return; }
    ctx->pc = 0x1FD518u;
label_1fd518:
    // 0x1fd518: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x1fd518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x1fd51c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1fd51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1fd520: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fd520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fd524: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1fd524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1fd528: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1fd528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1fd52c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1FD52Cu;
    SET_GPR_U32(ctx, 31, 0x1FD534u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x1FD534u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD534u) { return; }
    ctx->pc = 0x1FD534u;
label_1fd534:
    // 0x1fd534: 0xc06765c  jal         func_19D970
    ctx->pc = 0x1FD534u;
    SET_GPR_U32(ctx, 31, 0x1FD53Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x1FD534u, 0x1FD53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD53Cu;
label_1fd53c:
    // 0x1fd53c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fd53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1fd540: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1fd540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1fd544: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fd544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd548: 0x0  nop
    ctx->pc = 0x1fd548u;
    // NOP
    // 0x1fd54c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1fd54cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd550: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1fd550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1fd554: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1fd554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1fd558: 0xc040ce4  jal         func_103390
    ctx->pc = 0x1FD558u;
    SET_GPR_U32(ctx, 31, 0x1FD560u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x1FD560u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD560u) { return; }
    ctx->pc = 0x1FD560u;
label_1fd560:
    // 0x1fd560: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fd560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fd564: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fd564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd568: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1fd568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1fd56c: 0xc040c00  jal         func_103000
    ctx->pc = 0x1FD56Cu;
    SET_GPR_U32(ctx, 31, 0x1FD574u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1FD574u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD574u) { return; }
    ctx->pc = 0x1FD574u;
label_1fd574:
    // 0x1fd574: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1fd574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd578: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1fd578u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd57c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1fd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1fd580: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1fd580u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1fd584: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fd584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd588: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fd588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fd58c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1fd58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd590: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD590u;
    SET_GPR_U32(ctx, 31, 0x1FD598u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD598u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD598u) { return; }
    ctx->pc = 0x1FD598u;
label_1fd598:
    // 0x1fd598: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fd598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd59c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd59cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd5a0: 0x0  nop
    ctx->pc = 0x1fd5a0u;
    // NOP
    // 0x1fd5a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fd5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1fd5a8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd5ac: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fd5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fd5b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd5b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fd5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fd5b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD5B8u;
    {
        const bool branch_taken_0x1fd5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5b8) {
            ctx->pc = 0x1FD5E8u;
            return;
        }
    }
    ctx->pc = 0x1FD5C0u;
    // 0x1fd5c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd5c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fd5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd5c8: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fd5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fd5cc: 0xc040c44  jal         func_103110
    ctx->pc = 0x1FD5CCu;
    SET_GPR_U32(ctx, 31, 0x1FD5D4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1FD5D4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD5D4u) { return; }
    ctx->pc = 0x1FD5D4u;
label_1fd5d4:
    // 0x1fd5d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1fd5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd5d8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fd5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd5dc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1fd5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd5e0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD5E0u;
    SET_GPR_U32(ctx, 31, 0x1FD5E8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD5E8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD5E8u) { return; }
    ctx->pc = 0x1FD5E8u;
}
