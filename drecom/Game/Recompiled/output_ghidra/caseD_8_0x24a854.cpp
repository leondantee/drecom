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

// Function: caseD_8
// Address: 0x24a854 - 0x24ab68
void caseD_8_0x24a854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x24a854");
#endif

    switch (ctx->pc) {
        case 0x24a888u: goto label_24a888;
        case 0x24a8acu: goto label_24a8ac;
        case 0x24a8d0u: goto label_24a8d0;
        case 0x24a904u: goto label_24a904;
        case 0x24a920u: goto label_24a920;
        case 0x24a94cu: goto label_24a94c;
        case 0x24a974u: goto label_24a974;
        case 0x24a994u: goto label_24a994;
        case 0x24a9b8u: goto label_24a9b8;
        case 0x24aa04u: goto label_24aa04;
        case 0x24aa48u: goto label_24aa48;
        case 0x24aa68u: goto label_24aa68;
        case 0x24aa90u: goto label_24aa90;
        case 0x24aad0u: goto label_24aad0;
        case 0x24ab10u: goto label_24ab10;
        case 0x24ab60u: goto label_24ab60;
        default: break;
    }

    ctx->pc = 0x24a854u;

    // 0x24a854: 0x3c053d49  lui         $a1, 0x3D49
    ctx->pc = 0x24a854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15689 << 16));
    // 0x24a858: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x24a858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x24a85c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a85cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a860: 0x0  nop
    ctx->pc = 0x24a860u;
    // NOP
    // 0x24a864: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x24a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x24a868: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x24a868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x24a86c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x24a86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x24a870: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24a870u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a874: 0x0  nop
    ctx->pc = 0x24a874u;
    // NOP
    // 0x24a878: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x24a878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x24a87c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a880: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24A880u;
    SET_GPR_U32(ctx, 31, 0x24A888u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24A888u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A888u) { return; }
    ctx->pc = 0x24A888u;
label_24a888:
    // 0x24a888: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a88c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x24a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a890: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x24a890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x24a894: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24a894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24a898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24a898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a89c: 0x0  nop
    ctx->pc = 0x24a89cu;
    // NOP
    // 0x24a8a0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x24a8a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24a8a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24A8A4u;
    SET_GPR_U32(ctx, 31, 0x24A8ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A8A4u, 0x24A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A8ACu;
label_24a8ac:
    // 0x24a8ac: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a8b0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24a8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24a8b4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a8b8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a8bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a8bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a8c0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x24a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a8c4: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x24a8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a8c8: 0xc040ce4  jal         func_103390
    ctx->pc = 0x24A8C8u;
    SET_GPR_U32(ctx, 31, 0x24A8D0u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x24A8D0u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A8D0u) { return; }
    ctx->pc = 0x24A8D0u;
label_24a8d0:
    // 0x24a8d0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a8d4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a8d8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x24a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24a8dc: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x24a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a8e0: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x24a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24a8e4: 0x26a20030  addiu       $v0, $s5, 0x30
    ctx->pc = 0x24a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x24a8e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a8e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a8ec: 0xc7ae01b4  lwc1        $f14, 0x1B4($sp)
    ctx->pc = 0x24a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24a8f0: 0xc7af01b4  lwc1        $f15, 0x1B4($sp)
    ctx->pc = 0x24a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24a8f4: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x24a8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x24a8f8: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x24a8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x24a8fc: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x24A8FCu;
    SET_GPR_U32(ctx, 31, 0x24A904u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x24A8FCu, 0x24A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A904u;
label_24a904:
    // 0x24a904: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a904u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a908: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a90c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x24a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a910: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x24a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a914: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24a914u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24a918: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24A918u;
    SET_GPR_U32(ctx, 31, 0x24A920u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A918u, 0x24A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A920u;
label_24a920:
    // 0x24a920: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a924: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x24a924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24a928: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x24a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a92c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a930: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x24a930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x24a934: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a938: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x24a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a93c: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x24a93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a940: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24a940u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24a944: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24A944u;
    SET_GPR_U32(ctx, 31, 0x24A94Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A944u, 0x24A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A94Cu;
label_24a94c:
    // 0x24a94c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a950: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x24a950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24a954: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x24a954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
    // 0x24a958: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x24a958u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a95c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a960: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x24a960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x24a964: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x24a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a968: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a968u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a96c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24A96Cu;
    SET_GPR_U32(ctx, 31, 0x24A974u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24A974u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A974u) { return; }
    ctx->pc = 0x24A974u;
label_24a974:
    // 0x24a974: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a978: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a97c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x24a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a980: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a980u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a984: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a988: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x24a988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a98c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x24A98Cu;
    SET_GPR_U32(ctx, 31, 0x24A994u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x24A994u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A994u) { return; }
    ctx->pc = 0x24A994u;
label_24a994:
    // 0x24a994: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a994u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a998: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a99c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a9a0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24a9a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x24a9a4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x24a9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a9a8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x24a9a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24a9ac: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x24a9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a9b0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24A9B0u;
    SET_GPR_U32(ctx, 31, 0x24A9B8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24A9B8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A9B8u) { return; }
    ctx->pc = 0x24A9B8u;
label_24a9b8:
    // 0x24a9b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a9bc: 0x0  nop
    ctx->pc = 0x24a9bcu;
    // NOP
    // 0x24a9c0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x24a9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24a9c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a9c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a9c8: 0x0  nop
    ctx->pc = 0x24a9c8u;
    // NOP
    // 0x24a9cc: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24a9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24a9d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a9d4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x24a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a9d8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x24a9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24a9dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x24a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x24a9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a9e4: 0x0  nop
    ctx->pc = 0x24a9e4u;
    // NOP
    // 0x24a9e8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x24a9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24a9ec: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x24a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x24a9f0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24a9f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24a9f4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a9f8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x24a9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x24a9fc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x24A9FCu;
    SET_GPR_U32(ctx, 31, 0x24AA04u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x24AA04u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AA04u) { return; }
    ctx->pc = 0x24AA04u;
label_24aa04:
    // 0x24aa04: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24aa04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24aa08: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x24aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aa0c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x24aa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aa10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24aa10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24aa14: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x24aa14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x24aa18: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x24aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aa1c: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x24aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aa20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24aa20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24aa24: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x24aa24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x24aa28: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x24aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aa2c: 0xc7ac0138  lwc1        $f12, 0x138($sp)
    ctx->pc = 0x24aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24aa30: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x24aa30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x24aa34: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x24aa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x24aa38: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x24aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24aa3c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24aa3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24aa40: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24AA40u;
    SET_GPR_U32(ctx, 31, 0x24AA48u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24AA48u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AA48u) { return; }
    ctx->pc = 0x24AA48u;
label_24aa48:
    // 0x24aa48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24aa48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24aa4c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aa50: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x24aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24aa54: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aa58: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x24aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aa5c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x24aa5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x24aa60: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24AA60u;
    SET_GPR_U32(ctx, 31, 0x24AA68u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24AA60u, 0x24AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA68u;
label_24aa68:
    // 0x24aa68: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x24aa68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x24aa6c: 0xe7ad01ac  swc1        $f13, 0x1AC($sp)
    ctx->pc = 0x24aa6cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x24aa70: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24aa74: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24aa74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x24aa78: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x24aa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24aa7c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x24aa7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24aa80: 0xc7ae01ac  lwc1        $f14, 0x1AC($sp)
    ctx->pc = 0x24aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24aa84: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x24aa84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x24aa88: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24AA88u;
    SET_GPR_U32(ctx, 31, 0x24AA90u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24AA90u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AA90u) { return; }
    ctx->pc = 0x24AA90u;
label_24aa90:
    // 0x24aa90: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x24aa90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24aa94: 0xc60f0030  lwc1        $f15, 0x30($s0)
    ctx->pc = 0x24aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24aa98: 0xe7af0130  swc1        $f15, 0x130($sp)
    ctx->pc = 0x24aa98u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24aa9c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aaa0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24aaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24aaa4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x24aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aaa8: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x24aaa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24aaac: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x24aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aab0: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x24aab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24aab4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x24aab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24aab8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x24aab8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24aabc: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x24aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24aac0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x24aac0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24aac4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24aac4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24aac8: 0xc040c00  jal         func_103000
    ctx->pc = 0x24AAC8u;
    SET_GPR_U32(ctx, 31, 0x24AAD0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24AAD0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AAD0u) { return; }
    ctx->pc = 0x24AAD0u;
label_24aad0:
    // 0x24aad0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24aad0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24aad4: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x24aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aad8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x24aad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x24aadc: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x24aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aae0: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x24aae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x24aae4: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x24aae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aae8: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x24aae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x24aaec: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x24aaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aaf0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x24aaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x24aaf4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24aaf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x24aaf8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x24aaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24aafc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x24aafcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24ab00: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x24ab00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24ab04: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x24ab04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x24ab08: 0xc040c00  jal         func_103000
    ctx->pc = 0x24AB08u;
    SET_GPR_U32(ctx, 31, 0x24AB10u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24AB10u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AB10u) { return; }
    ctx->pc = 0x24AB10u;
label_24ab10:
    // 0x24ab10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ab10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ab14: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ab18: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x24ab18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24ab1c: 0x2496ffff  addiu       $s6, $a0, -0x1
    ctx->pc = 0x24ab1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24ab20: 0xa4760030  sh          $s6, 0x30($v1)
    ctx->pc = 0x24ab20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 22));
    // 0x24ab24: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24AB24u;
    {
        const bool branch_taken_0x24ab24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab24) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x24AB2Cu;
    // 0x24ab2c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x24ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x24ab30: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ab34: 0xa4830030  sh          $v1, 0x30($a0)
    ctx->pc = 0x24ab34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x24ab38: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24ab3c: 0x3c05461c  lui         $a1, 0x461C
    ctx->pc = 0x24ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17948 << 16));
    // 0x24ab40: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x24ab40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x24ab44: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24ab44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24ab48: 0x24050507  addiu       $a1, $zero, 0x507
    ctx->pc = 0x24ab48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x24ab4c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24ab4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x24ab50: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x24ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x24ab54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24ab54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24ab58: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24AB58u;
    SET_GPR_U32(ctx, 31, 0x24AB60u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24AB58u, 0x24AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AB60u;
label_24ab60:
    // 0x24ab60: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24ab60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ab64: 0x0  nop
    ctx->pc = 0x24ab64u;
    // NOP
    ctx->pc = 0x24ab68u;
}
