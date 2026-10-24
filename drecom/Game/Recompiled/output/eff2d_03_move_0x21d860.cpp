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

// Function: eff2d_03_move
// Address: 0x21d860 - 0x21dd40
void eff2d_03_move_0x21d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_03_move_0x21d860");
#endif

    switch (ctx->pc) {
        case 0x21d8d0u: goto label_21d8d0;
        case 0x21d8f8u: goto label_21d8f8;
        case 0x21d920u: goto label_21d920;
        case 0x21d97cu: goto label_21d97c;
        case 0x21d9b0u: goto label_21d9b0;
        case 0x21d9d8u: goto label_21d9d8;
        case 0x21da7cu: goto label_21da7c;
        case 0x21dae8u: goto label_21dae8;
        case 0x21db28u: goto label_21db28;
        case 0x21db48u: goto label_21db48;
        case 0x21db74u: goto label_21db74;
        case 0x21dba0u: goto label_21dba0;
        case 0x21dc00u: goto label_21dc00;
        case 0x21dc34u: goto label_21dc34;
        case 0x21dc5cu: goto label_21dc5c;
        case 0x21dd00u: goto label_21dd00;
        default: break;
    }

    ctx->pc = 0x21d860u;

    // 0x21d860: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x21d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21d864: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x21d864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21d868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d86c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d870: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x21d870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x21d874: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21d874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d878: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x21d878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x21d87c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x21d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21d880: 0x108300d2  beq         $a0, $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x21D880u;
    {
        const bool branch_taken_0x21d880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21d880) {
            ctx->pc = 0x21DBCCu;
            goto label_21dbcc;
        }
    }
    ctx->pc = 0x21D888u;
    // 0x21d888: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x21d888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21d88c: 0x108300ac  beq         $a0, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x21D88Cu;
    {
        const bool branch_taken_0x21d88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21d88c) {
            ctx->pc = 0x21DB40u;
            goto label_21db40;
        }
    }
    ctx->pc = 0x21D894u;
    // 0x21d894: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x21d894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21d898: 0x10830123  beq         $a0, $v1, . + 4 + (0x123 << 2)
    ctx->pc = 0x21D898u;
    {
        const bool branch_taken_0x21d898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21d898) {
            ctx->pc = 0x21DD28u;
            goto label_21dd28;
        }
    }
    ctx->pc = 0x21D8A0u;
    // 0x21d8a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21d8a4: 0x10830080  beq         $a0, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x21D8A4u;
    {
        const bool branch_taken_0x21d8a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21d8a4) {
            ctx->pc = 0x21DAA8u;
            goto label_21daa8;
        }
    }
    ctx->pc = 0x21D8ACu;
    // 0x21d8ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d8b0: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x21D8B0u;
    {
        const bool branch_taken_0x21d8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21d8b0) {
            ctx->pc = 0x21D948u;
            goto label_21d948;
        }
    }
    ctx->pc = 0x21D8B8u;
    // 0x21d8b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D8B8u;
    {
        const bool branch_taken_0x21d8b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d8b8) {
            ctx->pc = 0x21D8C8u;
            goto label_21d8c8;
        }
    }
    ctx->pc = 0x21D8C0u;
    // 0x21d8c0: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x21D8C0u;
    {
        const bool branch_taken_0x21d8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d8c0) {
            ctx->pc = 0x21DD28u;
            goto label_21dd28;
        }
    }
    ctx->pc = 0x21D8C8u;
label_21d8c8:
    // 0x21d8c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D8C8u;
    SET_GPR_U32(ctx, 31, 0x21D8D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D8C8u, 0x21D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8D0u;
label_21d8d0:
    // 0x21d8d0: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x21d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x21d8d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d8d8: 0x0  nop
    ctx->pc = 0x21d8d8u;
    // NOP
    // 0x21d8dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d8dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d8e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d8e4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x21d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d8e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d8ec: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x21d8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x21d8f0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D8F0u;
    SET_GPR_U32(ctx, 31, 0x21D8F8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D8F0u, 0x21D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8F8u;
label_21d8f8:
    // 0x21d8f8: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x21d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x21d8fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d900: 0x0  nop
    ctx->pc = 0x21d900u;
    // NOP
    // 0x21d904: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d908: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d90c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x21d90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d910: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d914: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x21d914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x21d918: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D918u;
    SET_GPR_U32(ctx, 31, 0x21D920u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D918u, 0x21D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D920u;
label_21d920:
    // 0x21d920: 0x3c034228  lui         $v1, 0x4228
    ctx->pc = 0x21d920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16936 << 16));
    // 0x21d924: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21d924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d928: 0x0  nop
    ctx->pc = 0x21d928u;
    // NOP
    // 0x21d92c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d92cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d930: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d934: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x21d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d93c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x21d93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x21d940: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x21D940u;
    {
        const bool branch_taken_0x21d940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d940) {
            ctx->pc = 0x21DD28u;
            goto label_21dd28;
        }
    }
    ctx->pc = 0x21D948u;
label_21d948:
    // 0x21d948: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x21d948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x21d94c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21d94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21d950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21d950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d954: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d958: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x21d958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x21d95c: 0x8fb10098  lw          $s1, 0x98($sp)
    ctx->pc = 0x21d95cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d960: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21d960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21d964: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d968: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x21d968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21d96c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x21D96Cu;
    {
        const bool branch_taken_0x21d96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d96c) {
            ctx->pc = 0x21DA48u;
            goto label_21da48;
        }
    }
    ctx->pc = 0x21D974u;
    // 0x21d974: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D974u;
    SET_GPR_U32(ctx, 31, 0x21D97Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D974u, 0x21D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D97Cu;
label_21d97c:
    // 0x21d97c: 0x3c024048  lui         $v0, 0x4048
    ctx->pc = 0x21d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16456 << 16));
    // 0x21d980: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x21d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x21d984: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d988: 0x0  nop
    ctx->pc = 0x21d988u;
    // NOP
    // 0x21d98c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21d98cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d990: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x21d990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21d994: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x21d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x21d998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21d998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d99c: 0x0  nop
    ctx->pc = 0x21d99cu;
    // NOP
    // 0x21d9a0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x21d9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x21d9a4: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x21d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21d9a8: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21D9A8u;
    SET_GPR_U32(ctx, 31, 0x21D9B0u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21D9A8u, 0x21D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9B0u;
label_21d9b0:
    // 0x21d9b0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x21d9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d9b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21d9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d9b8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d9bc: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x21d9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x21d9c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21d9c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d9c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d9c8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x21d9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x21d9cc: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x21d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21d9d0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21D9D0u;
    SET_GPR_U32(ctx, 31, 0x21D9D8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21D9D0u, 0x21D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9D8u;
label_21d9d8:
    // 0x21d9d8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x21d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d9dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21d9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d9e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d9e4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x21d9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x21d9e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d9ec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d9f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d9f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d9f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d9fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21da00: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21da00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21da04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21da04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21da08: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21da08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21da0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21da0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21da10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21da10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21da14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21da18: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21da18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21da1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21da20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21da24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21da24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21da28: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21da28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21da2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21da2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21da30: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x21da30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x21da34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21da38: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x21da38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21da3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21da3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21da40: 0x0  nop
    ctx->pc = 0x21da40u;
    // NOP
    // 0x21da44: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x21da44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_21da48:
    // 0x21da48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21da48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21da4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21da50: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x21da50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21da54: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x21da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21da58: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21da58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21da5c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21da60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21da60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21da64: 0x0  nop
    ctx->pc = 0x21da64u;
    // NOP
    // 0x21da68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21da68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21da6c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x21da6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x21da70: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x21da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21da74: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21DA74u;
    SET_GPR_U32(ctx, 31, 0x21DA7Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21DA74u, 0x21DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA7Cu;
label_21da7c:
    // 0x21da7c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x21da7cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x21da80: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x21da80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x21da84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21da84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21da88: 0x0  nop
    ctx->pc = 0x21da88u;
    // NOP
    // 0x21da8c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21da8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21da90: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21da90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21da94: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x21da94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21da98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21da98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21da9c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x21da9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x21daa0: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x21DAA0u;
    {
        const bool branch_taken_0x21daa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21daa0) {
            ctx->pc = 0x21DD28u;
            goto label_21dd28;
        }
    }
    ctx->pc = 0x21DAA8u;
label_21daa8:
    // 0x21daa8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21daac: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x21daacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x21dab0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x21dab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21dab4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21dab8: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x21DAB8u;
    {
        const bool branch_taken_0x21dab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21dab8) {
            ctx->pc = 0x21DB28u;
            goto label_21db28;
        }
    }
    ctx->pc = 0x21DAC0u;
    // 0x21dac0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dac4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x21dac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21dac8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21dac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21dacc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x21DACCu;
    {
        const bool branch_taken_0x21dacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dacc) {
            ctx->pc = 0x21DB28u;
            goto label_21db28;
        }
    }
    ctx->pc = 0x21DAD4u;
    // 0x21dad4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dad8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21dadc: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x21dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21dae0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x21DAE0u;
    SET_GPR_U32(ctx, 31, 0x21DAE8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x21DAE8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21DAE8u) { return; }
    ctx->pc = 0x21DAE8u;
label_21dae8:
    // 0x21dae8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x21dae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21daec: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x21daecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x21daf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21daf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21daf4: 0x0  nop
    ctx->pc = 0x21daf4u;
    // NOP
    // 0x21daf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21daf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21dafc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x21dafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x21db00: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db04: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21db04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21db08: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21db08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21db0c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x21db10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x21db14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21db1c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x21db1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21db20: 0xc086158  jal         func_218560
    ctx->pc = 0x21DB20u;
    SET_GPR_U32(ctx, 31, 0x21DB28u);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x21DB20u, 0x21DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB28u;
label_21db28:
    // 0x21db28: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x21db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db2c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x21db2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x21db30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21db34: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x21db34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x21db38: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x21DB38u;
    {
        const bool branch_taken_0x21db38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21db38) {
            ctx->pc = 0x21DD28u;
            goto label_21dd28;
        }
    }
    ctx->pc = 0x21DB40u;
label_21db40:
    // 0x21db40: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21DB40u;
    SET_GPR_U32(ctx, 31, 0x21DB48u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21DB40u, 0x21DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB48u;
label_21db48:
    // 0x21db48: 0x3c024103  lui         $v0, 0x4103
    ctx->pc = 0x21db48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16643 << 16));
    // 0x21db4c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x21db4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x21db50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21db50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21db54: 0x0  nop
    ctx->pc = 0x21db54u;
    // NOP
    // 0x21db58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21db58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21db5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db60: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x21db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21db64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21db64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21db68: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x21db68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x21db6c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21DB6Cu;
    SET_GPR_U32(ctx, 31, 0x21DB74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21DB6Cu, 0x21DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB74u;
label_21db74:
    // 0x21db74: 0x3c0240f3  lui         $v0, 0x40F3
    ctx->pc = 0x21db74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16627 << 16));
    // 0x21db78: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x21db78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x21db7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21db7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21db80: 0x0  nop
    ctx->pc = 0x21db80u;
    // NOP
    // 0x21db84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21db84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21db88: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db8c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x21db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21db90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21db90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21db94: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x21db94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x21db98: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21DB98u;
    SET_GPR_U32(ctx, 31, 0x21DBA0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21DB98u, 0x21DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DBA0u;
label_21dba0:
    // 0x21dba0: 0x3c034103  lui         $v1, 0x4103
    ctx->pc = 0x21dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16643 << 16));
    // 0x21dba4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x21dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x21dba8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21dba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21dbac: 0x0  nop
    ctx->pc = 0x21dbacu;
    // NOP
    // 0x21dbb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21dbb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dbb4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dbb8: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x21dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dbbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21dbbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21dbc0: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x21dbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x21dbc4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x21DBC4u;
    {
        const bool branch_taken_0x21dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dbc4) {
            ctx->pc = 0x21DD28u;
            goto label_21dd28;
        }
    }
    ctx->pc = 0x21DBCCu;
label_21dbcc:
    // 0x21dbcc: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x21dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x21dbd0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21dbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21dbd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21dbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dbd8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dbdc: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x21dbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x21dbe0: 0x8fb10098  lw          $s1, 0x98($sp)
    ctx->pc = 0x21dbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dbe4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21dbe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21dbe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dbec: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x21dbecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21dbf0: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x21DBF0u;
    {
        const bool branch_taken_0x21dbf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dbf0) {
            ctx->pc = 0x21DCCCu;
            goto label_21dccc;
        }
    }
    ctx->pc = 0x21DBF8u;
    // 0x21dbf8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21DBF8u;
    SET_GPR_U32(ctx, 31, 0x21DC00u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21DBF8u, 0x21DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC00u;
label_21dc00:
    // 0x21dc00: 0x3c024048  lui         $v0, 0x4048
    ctx->pc = 0x21dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16456 << 16));
    // 0x21dc04: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x21dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x21dc08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21dc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21dc0c: 0x0  nop
    ctx->pc = 0x21dc0cu;
    // NOP
    // 0x21dc10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21dc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dc14: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x21dc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x21dc18: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x21dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x21dc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21dc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dc20: 0x0  nop
    ctx->pc = 0x21dc20u;
    // NOP
    // 0x21dc24: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x21dc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x21dc28: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x21dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21dc2c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21DC2Cu;
    SET_GPR_U32(ctx, 31, 0x21DC34u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21DC2Cu, 0x21DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC34u;
label_21dc34:
    // 0x21dc34: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x21dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dc38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21dc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dc3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dc40: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x21dc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x21dc44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21dc44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dc48: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dc4c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x21dc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x21dc50: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x21dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21dc54: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21DC54u;
    SET_GPR_U32(ctx, 31, 0x21DC5Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21DC54u, 0x21DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC5Cu;
label_21dc5c:
    // 0x21dc5c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x21dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dc60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21dc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dc64: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dc68: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x21dc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x21dc6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21dc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21dc70: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21dc74: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21dc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21dc78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21dc7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21dc80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dc84: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21dc88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21dc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21dc8c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21dc90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21dc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21dc94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21dc98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21dc9c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21dc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21dca0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21dca4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21dca8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21dca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21dcac: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21dcacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21dcb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dcb4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x21dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x21dcb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dcbc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x21dcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21dcc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21dcc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dcc4: 0x0  nop
    ctx->pc = 0x21dcc4u;
    // NOP
    // 0x21dcc8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x21dcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_21dccc:
    // 0x21dccc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21dcccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21dcd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21dcd4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x21dcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21dcd8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x21dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dcdc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x21dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x21dce0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21dce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21dce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dce8: 0x0  nop
    ctx->pc = 0x21dce8u;
    // NOP
    // 0x21dcec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21dcecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21dcf0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x21dcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x21dcf4: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x21dcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21dcf8: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21DCF8u;
    SET_GPR_U32(ctx, 31, 0x21DD00u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21DCF8u, 0x21DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD00u;
label_21dd00:
    // 0x21dd00: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x21dd00u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x21dd04: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x21dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x21dd08: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x21dd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21dd0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21dd0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dd10: 0x0  nop
    ctx->pc = 0x21dd10u;
    // NOP
    // 0x21dd14: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21dd14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21dd18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dd1c: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x21dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21dd20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21dd24: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x21dd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
label_21dd28:
    // 0x21dd28: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21dd28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21dd2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21dd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21dd30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21dd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dd34: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x21dd34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21dd38: 0x3e00008  jr          $ra
    ctx->pc = 0x21DD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DD40u;
}
