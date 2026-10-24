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

// Function: Srp_bunki_check
// Address: 0x1fd380 - 0x1fd9d8
void Srp_bunki_check_0x1fd380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Srp_bunki_check_0x1fd380");
#endif

    switch (ctx->pc) {
        case 0x1fd40cu: goto label_1fd40c;
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
        case 0x1fd5e8u: goto label_1fd5e8;
        case 0x1fd614u: goto label_1fd614;
        case 0x1fd628u: goto label_1fd628;
        case 0x1fd7b0u: goto label_1fd7b0;
        default: break;
    }

    ctx->pc = 0x1fd380u;

    // 0x1fd380: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1fd380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1fd384: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1fd384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fd388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd38c: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x1fd38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
    // 0x1fd390: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd394: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fd394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fd398: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fd398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd39c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd3a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fd3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd3a4: 0x90630290  lbu         $v1, 0x290($v1)
    ctx->pc = 0x1fd3a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x1fd3a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd3ac: 0x10600185  beqz        $v1, . + 4 + (0x185 << 2)
    ctx->pc = 0x1FD3ACu;
    {
        const bool branch_taken_0x1fd3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd3ac) {
            ctx->pc = 0x1FD9C4u;
            goto label_1fd9c4;
        }
    }
    ctx->pc = 0x1FD3B4u;
    // 0x1fd3b4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd3b8: 0x90640346  lbu         $a0, 0x346($v1)
    ctx->pc = 0x1fd3b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fd3bc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fd3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fd3c0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1fd3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fd3c4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd3c8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1fd3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fd3cc: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1fd3ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd3d0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1fd3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd3d4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1fd3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1fd3d8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd3dc: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x1fd3dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x1fd3e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd3e4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1fd3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fd3e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD3E8u;
    {
        const bool branch_taken_0x1fd3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd3e8) {
            ctx->pc = 0x1FD414u;
            goto label_1fd414;
        }
    }
    ctx->pc = 0x1FD3F0u;
    // 0x1fd3f0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd3f4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd3f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fd3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fd3fc: 0x8c650324  lw          $a1, 0x324($v1)
    ctx->pc = 0x1fd3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 804)));
    // 0x1fd400: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x1fd400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1fd404: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD404u;
    SET_GPR_U32(ctx, 31, 0x1FD40Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD40Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD40Cu) { return; }
    ctx->pc = 0x1FD40Cu;
label_1fd40c:
    // 0x1fd40c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD40Cu;
    {
        const bool branch_taken_0x1fd40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd40c) {
            ctx->pc = 0x1FD428u;
            goto label_1fd428;
        }
    }
    ctx->pc = 0x1FD414u;
label_1fd414:
    // 0x1fd414: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd418: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x1fd418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1fd41c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1fd41cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd420: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1fd420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fd424: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1fd424u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1fd428:
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
            goto label_1fd5e8;
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
label_1fd5e8:
    // 0x1fd5e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd5ec: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fd5ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fd5f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd5f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd5f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD5F8u;
    {
        const bool branch_taken_0x1fd5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5f8) {
            ctx->pc = 0x1FD628u;
            goto label_1fd628;
        }
    }
    ctx->pc = 0x1FD600u;
    // 0x1fd600: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd604: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fd604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd608: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x1fd608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fd60c: 0xc040c44  jal         func_103110
    ctx->pc = 0x1FD60Cu;
    SET_GPR_U32(ctx, 31, 0x1FD614u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1FD614u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD614u) { return; }
    ctx->pc = 0x1FD614u;
label_1fd614:
    // 0x1fd614: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fd614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd618: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fd618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fd61c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1fd61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd620: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD620u;
    SET_GPR_U32(ctx, 31, 0x1FD628u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD628u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD628u) { return; }
    ctx->pc = 0x1FD628u;
label_1fd628:
    // 0x1fd628: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd62c: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x1fd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x1fd630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd634: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd638: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fd638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fd63c: 0x34431400  ori         $v1, $v0, 0x1400
    ctx->pc = 0x1fd63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1fd640: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd644: 0x9042036a  lbu         $v0, 0x36A($v0)
    ctx->pc = 0x1fd644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 874)));
    // 0x1fd648: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd64c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1fd64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1fd650: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd654: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd654u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd658: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fd658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fd65c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fd65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fd660: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd664: 0x90420342  lbu         $v0, 0x342($v0)
    ctx->pc = 0x1fd664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 834)));
    // 0x1fd668: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd66c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1fd66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1fd670: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd674: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd678: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1fd678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1fd67c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1fd67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fd680: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd684: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fd684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fd688: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd68c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1fd68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1fd690: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd694: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd694u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd698: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1fd698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1fd69c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1fd69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fd6a0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd6a4: 0x90420347  lbu         $v0, 0x347($v0)
    ctx->pc = 0x1fd6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 839)));
    // 0x1fd6a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd6ac: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1fd6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1fd6b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd6b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fd6b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fd6b8: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1fd6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1fd6bc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1fd6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fd6c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd6c4: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fd6c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fd6c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fd6cc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1fd6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd6d0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd6d4: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fd6d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fd6d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fd6dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fd6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fd6e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fd6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fd6e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fd6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fd6e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd6ec: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fd6ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fd6f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fd6f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fd6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fd6f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd6fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fd6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fd700: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fd704: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd708: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fd708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fd70c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fd70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd710: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1fd710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1fd714: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1fd714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd718: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1fd718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd71c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fd71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fd720: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fd720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fd724: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fd724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fd728: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fd72c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fd72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fd730: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1fd730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd734: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1fd734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd738: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1fd738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd73c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fd73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fd740: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fd740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fd744: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fd744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fd748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fd74c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fd74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fd750: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1fd750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1fd754: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd758: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x1fd758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fd75c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1fd75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd760: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fd760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fd764: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fd764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fd768: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fd768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fd76c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fd770: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fd770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fd774: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1fd774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd778: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd77c: 0x8c420324  lw          $v0, 0x324($v0)
    ctx->pc = 0x1fd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fd780: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1fd780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fd784: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fd784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fd788: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fd788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fd78c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fd78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fd790: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fd794: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fd794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fd798: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1fd798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1fd79c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1fd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd7a0: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd7a4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1fd7a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd7a8: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x1FD7A8u;
    SET_GPR_U32(ctx, 31, 0x1FD7B0u);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x1FD7A8u, 0x1FD7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7B0u;
label_1fd7b0:
    // 0x1fd7b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1fd7b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fd7b4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1fd7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1fd7b8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x1fd7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x1fd7bc: 0x12030081  beq         $s0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1FD7BCu;
    {
        const bool branch_taken_0x1fd7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fd7bc) {
            ctx->pc = 0x1FD9C4u;
            goto label_1fd9c4;
        }
    }
    ctx->pc = 0x1FD7C4u;
    // 0x1fd7c4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd7c8: 0x8c630328  lw          $v1, 0x328($v1)
    ctx->pc = 0x1fd7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 808)));
    // 0x1fd7cc: 0xae030328  sw          $v1, 0x328($s0)
    ctx->pc = 0x1fd7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 3));
    // 0x1fd7d0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd7d4: 0x8c63032c  lw          $v1, 0x32C($v1)
    ctx->pc = 0x1fd7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
    // 0x1fd7d8: 0xae03032c  sw          $v1, 0x32C($s0)
    ctx->pc = 0x1fd7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 3));
    // 0x1fd7dc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd7e0: 0x906302aa  lbu         $v1, 0x2AA($v1)
    ctx->pc = 0x1fd7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 682)));
    // 0x1fd7e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd7e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fd7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fd7ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd7f0: 0xa20302aa  sb          $v1, 0x2AA($s0)
    ctx->pc = 0x1fd7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 682), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fd7f4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd7f8: 0x906302a8  lbu         $v1, 0x2A8($v1)
    ctx->pc = 0x1fd7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 680)));
    // 0x1fd7fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd800: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fd800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fd804: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd808: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x1fd808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fd80c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd810: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1fd810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1fd814: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1fd814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1fd818: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd81c: 0xc48002d0  lwc1        $f0, 0x2D0($a0)
    ctx->pc = 0x1fd81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd820: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd824: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1fd824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x1fd828: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd82c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1fd82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1fd830: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1fd830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1fd834: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd838: 0xc48002d4  lwc1        $f0, 0x2D4($a0)
    ctx->pc = 0x1fd838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd83c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd83cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd840: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x1fd840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x1fd844: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd848: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1fd848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1fd84c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1fd84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1fd850: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd854: 0xc48002d8  lwc1        $f0, 0x2D8($a0)
    ctx->pc = 0x1fd854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd858: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd85c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x1fd85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x1fd860: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd864: 0xc46002dc  lwc1        $f0, 0x2DC($v1)
    ctx->pc = 0x1fd864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd868: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x1fd868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x1fd86c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd870: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fd870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd874: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1fd874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1fd878: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1fd878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1fd87c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd880: 0x0  nop
    ctx->pc = 0x1fd880u;
    // NOP
    // 0x1fd884: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1fd884u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fd888: 0x0  nop
    ctx->pc = 0x1fd888u;
    // NOP
    // 0x1fd88c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD88Cu;
    {
        const bool branch_taken_0x1fd88c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fd88c) {
            ctx->pc = 0x1FD8D8u;
            goto label_1fd8d8;
        }
    }
    ctx->pc = 0x1FD894u;
    // 0x1fd894: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd898: 0xc4610338  lwc1        $f1, 0x338($v1)
    ctx->pc = 0x1fd898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd89c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd8a0: 0xc460033c  lwc1        $f0, 0x33C($v1)
    ctx->pc = 0x1fd8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd8a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1fd8a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fd8a8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1fd8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1fd8ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd8acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd8b0: 0x0  nop
    ctx->pc = 0x1fd8b0u;
    // NOP
    // 0x1fd8b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1fd8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fd8b8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1fd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1fd8bc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1fd8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1fd8c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd8c4: 0x0  nop
    ctx->pc = 0x1fd8c4u;
    // NOP
    // 0x1fd8c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fd8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fd8cc: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x1fd8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x1fd8d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD8D0u;
    {
        const bool branch_taken_0x1fd8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd8d0) {
            ctx->pc = 0x1FD8F4u;
            goto label_1fd8f4;
        }
    }
    ctx->pc = 0x1FD8D8u;
label_1fd8d8:
    // 0x1fd8d8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd8dc: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1fd8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1fd8e0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1fd8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1fd8e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd8e8: 0xc4800338  lwc1        $f0, 0x338($a0)
    ctx->pc = 0x1fd8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd8ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd8f0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x1fd8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_1fd8f4:
    // 0x1fd8f4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd8f8: 0xc460033c  lwc1        $f0, 0x33C($v1)
    ctx->pc = 0x1fd8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd8fc: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x1fd8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x1fd900: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd904: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1fd904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1fd908: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fd908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fd90c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd90cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd910: 0xc4800270  lwc1        $f0, 0x270($a0)
    ctx->pc = 0x1fd910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd914: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd918: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x1fd918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x1fd91c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd920: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1fd920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1fd924: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fd924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fd928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd92c: 0xc4800270  lwc1        $f0, 0x270($a0)
    ctx->pc = 0x1fd92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd930: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd934: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x1fd934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x1fd938: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd93c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1fd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1fd940: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fd940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fd944: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fd944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd948: 0xc4800270  lwc1        $f0, 0x270($a0)
    ctx->pc = 0x1fd948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd94c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd94cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd950: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x1fd950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x1fd954: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd958: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x1fd958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd95c: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x1fd95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x1fd960: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd964: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x1fd964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd968: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x1fd968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x1fd96c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd970: 0xc4800280  lwc1        $f0, 0x280($a0)
    ctx->pc = 0x1fd970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd974: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x1fd974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x1fd978: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd97c: 0xc46002a4  lwc1        $f0, 0x2A4($v1)
    ctx->pc = 0x1fd97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd980: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x1fd980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x1fd984: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd988: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x1fd988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1fd98c: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x1fd98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fd990: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd994: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fd994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fd998: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fd998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd99c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fd99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd9a0: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1fd9a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1fd9a4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1fd9a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fd9a8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1fd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd9ac: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x1fd9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x1fd9b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fd9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fd9b4: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x1fd9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x1fd9b8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1fd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1fd9bc: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1fd9bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fd9c0: 0xa6030340  sh          $v1, 0x340($s0)
    ctx->pc = 0x1fd9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 3));
label_1fd9c4:
    // 0x1fd9c4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1fd9c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd9c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fd9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd9cc: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x1fd9ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1fd9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD9D8u;
}
