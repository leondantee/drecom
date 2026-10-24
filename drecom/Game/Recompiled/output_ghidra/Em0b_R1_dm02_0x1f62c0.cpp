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

// Function: Em0b_R1_dm02
// Address: 0x1f62c0 - 0x1f6984
void Em0b_R1_dm02_0x1f62c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_dm02_0x1f62c0");
#endif

    switch (ctx->pc) {
        case 0x1f6334u: goto label_1f6334;
        case 0x1f639cu: goto label_1f639c;
        case 0x1f63f0u: goto label_1f63f0;
        case 0x1f643cu: goto label_1f643c;
        case 0x1f644cu: goto label_1f644c;
        case 0x1f64e4u: goto label_1f64e4;
        case 0x1f6518u: goto label_1f6518;
        case 0x1f6544u: goto label_1f6544;
        case 0x1f65e8u: goto label_1f65e8;
        case 0x1f6604u: goto label_1f6604;
        case 0x1f67f0u: goto label_1f67f0;
        case 0x1f6800u: goto label_1f6800;
        case 0x1f680cu: goto label_1f680c;
        case 0x1f6874u: goto label_1f6874;
        case 0x1f6898u: goto label_1f6898;
        case 0x1f68e0u: goto label_1f68e0;
        case 0x1f6914u: goto label_1f6914;
        case 0x1f6960u: goto label_1f6960;
        default: break;
    }

    ctx->pc = 0x1f62c0u;

    // 0x1f62c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f62c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f62c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1f62c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f62c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f62c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f62cc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1f62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1f62d0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f62d4: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x1f62d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1f62d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f62dc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f62dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f62e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f62e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f62e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f62e8: 0x108300b4  beq         $a0, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1F62E8u;
    {
        const bool branch_taken_0x1f62e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f62e8) {
            ctx->pc = 0x1F65BCu;
            goto label_1f65bc;
        }
    }
    ctx->pc = 0x1F62F0u;
    // 0x1f62f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F62F0u;
    {
        const bool branch_taken_0x1f62f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f62f0) {
            ctx->pc = 0x1F6300u;
            goto label_1f6300;
        }
    }
    ctx->pc = 0x1F62F8u;
    // 0x1f62f8: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x1F62F8u;
    {
        const bool branch_taken_0x1f62f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f62f8) {
            ctx->pc = 0x1F6970u;
            goto label_1f6970;
        }
    }
    ctx->pc = 0x1F6300u;
label_1f6300:
    // 0x1f6300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f6300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6304: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1f6304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f6308: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f630c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1f630cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6310: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f6310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6314: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f6314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f6318: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f6318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f631c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f631cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6320: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1f6320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1f6324: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f6324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f6328: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f6328u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f632c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F632Cu;
    SET_GPR_U32(ctx, 31, 0x1F6334u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F632Cu, 0x1F6334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6334u;
label_1f6334:
    // 0x1f6334: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1f6334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f6338: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f633c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f633cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f6340: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6344: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1f6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6348: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f6348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f634c: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x1f634cu;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6350: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6354: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f6354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f6358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f635c: 0x0  nop
    ctx->pc = 0x1f635cu;
    // NOP
    // 0x1f6360: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1f6360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f6364: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6368: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1f6368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f636c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f636cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f6370: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x1f6370u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6374: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6378: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f6378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f637c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f637cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6384: 0x0  nop
    ctx->pc = 0x1f6384u;
    // NOP
    // 0x1f6388: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f6388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f638c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6390: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f6390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1f6394: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F6394u;
    SET_GPR_U32(ctx, 31, 0x1F639Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F6394u, 0x1F639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F639Cu;
label_1f639c:
    // 0x1f639c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f639cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f63a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f63a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f63a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F63A4u;
    {
        const bool branch_taken_0x1f63a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f63a4) {
            ctx->pc = 0x1F63F8u;
            goto label_1f63f8;
        }
    }
    ctx->pc = 0x1F63ACu;
    // 0x1f63ac: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1f63acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f63b0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1f63b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f63b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f63b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f63b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f63b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f63bc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1f63bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f63c0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f63c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f63c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f63c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f63c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f63c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f63cc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f63ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f63d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f63d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f63d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f63d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f63dc: 0x24060a0b  addiu       $a2, $zero, 0xA0B
    ctx->pc = 0x1f63dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x1f63e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f63e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f63e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f63e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f63e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F63E8u;
    SET_GPR_U32(ctx, 31, 0x1F63F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F63E8u, 0x1F63F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63F0u;
label_1f63f0:
    // 0x1f63f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F63F0u;
    {
        const bool branch_taken_0x1f63f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f63f0) {
            ctx->pc = 0x1F643Cu;
            goto label_1f643c;
        }
    }
    ctx->pc = 0x1F63F8u;
label_1f63f8:
    // 0x1f63f8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1f63f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f63fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1f63fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6400: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f6400u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f6404: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f6404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f6408: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f6408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f640c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1f640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6410: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f6410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6414: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f6414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f6418: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f6418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f641c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6420: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f6420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6424: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f6424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f6428: 0x24060a09  addiu       $a2, $zero, 0xA09
    ctx->pc = 0x1f6428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2569));
    // 0x1f642c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f642cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6430: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f6430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f6434: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F6434u;
    SET_GPR_U32(ctx, 31, 0x1F643Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F6434u, 0x1F643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F643Cu;
label_1f643c:
    // 0x1f643c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f643cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f6440: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f6440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f6444: 0xc040c24  jal         func_103090
    ctx->pc = 0x1F6444u;
    SET_GPR_U32(ctx, 31, 0x1F644Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1F644Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F644Cu) { return; }
    ctx->pc = 0x1F644Cu;
label_1f644c:
    // 0x1f644c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1f644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1f6450: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6454: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f6454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6458: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f6458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f645c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6460: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6464: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f6464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f6468: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1f6468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1f646c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f646cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6470: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1f6470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f6474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6478: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f647c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6480: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x1f6480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x1f6484: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6488: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f6488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f648c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f6490: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f6490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f6494: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6498: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f6498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f649c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f64a0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f64a4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f64a8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1f64a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1f64ac: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f64acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f64b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f64b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f64b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f64b8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f64b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f64bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f64c0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f64c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f64c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f64c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f64c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f64c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f64cc: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x1f64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x1f64d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f64d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f64d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f64d8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f64d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f64dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F64DCu;
    SET_GPR_U32(ctx, 31, 0x1F64E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F64DCu, 0x1F64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64E4u;
label_1f64e4:
    // 0x1f64e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f64e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f64e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f64e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f64ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F64ECu;
    {
        const bool branch_taken_0x1f64ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f64ec) {
            ctx->pc = 0x1F6520u;
            goto label_1f6520;
        }
    }
    ctx->pc = 0x1F64F4u;
    // 0x1f64f4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f64f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f64f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f64fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f64fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6500: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6504: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1f6504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x1f6508: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f6508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f650c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f650cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6510: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F6510u;
    SET_GPR_U32(ctx, 31, 0x1F6518u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F6510u, 0x1F6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6518u;
label_1f6518:
    // 0x1f6518: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F6518u;
    {
        const bool branch_taken_0x1f6518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6518) {
            ctx->pc = 0x1F6544u;
            goto label_1f6544;
        }
    }
    ctx->pc = 0x1F6520u;
label_1f6520:
    // 0x1f6520: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f6520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6524: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f6524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f6528: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f6528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f652c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f652cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6530: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x1f6530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x1f6534: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f6534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f6538: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f6538u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f653c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F653Cu;
    SET_GPR_U32(ctx, 31, 0x1F6544u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F653Cu, 0x1F6544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6544u;
label_1f6544:
    // 0x1f6544: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6548: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f6548u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f654c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f654cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6550: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1f6550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1f6554: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f6554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f6558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f655c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6560: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6564: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f6568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f656c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1f656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1f6570: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f6570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f6574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6578: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f657c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f657cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6580: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f6584: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6588: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f658c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f6590: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f6590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f6594: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6598: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6598u;
    {
        const bool branch_taken_0x1f6598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6598) {
            ctx->pc = 0x1F65BCu;
            goto label_1f65bc;
        }
    }
    ctx->pc = 0x1F65A0u;
    // 0x1f65a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f65a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f65a4: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f65a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f65ac: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1f65acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1f65b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f65b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f65b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f65b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f65b8: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f65b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_1f65bc:
    // 0x1f65bc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1f65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1f65c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f65c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f65c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f65c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f65c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f65c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f65cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f65d0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1f65d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f65d4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1f65d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f65d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f65d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f65dc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f65dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f65e0: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F65E0u;
    SET_GPR_U32(ctx, 31, 0x1F65E8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F65E0u, 0x1F65E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65E8u;
label_1f65e8:
    // 0x1f65e8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1f65e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f65ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f65f0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f65f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f65f4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1f65f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f65f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f65f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f65fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F65FCu;
    SET_GPR_U32(ctx, 31, 0x1F6604u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F65FCu, 0x1F6604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6604u;
label_1f6604:
    // 0x1f6604: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6608: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f6608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f660c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6610: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6614: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f6614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6618: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f661c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1f661cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6620: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6624: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1f6624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1f6628: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f662c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6630: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x1f6630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6634: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6638: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1f6638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f663c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f663cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6640: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1f6640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1f6644: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6648: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f664c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6650: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6654: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f6654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6658: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x1f6658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f665c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f665cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6660: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f6660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f6664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6668: 0x0  nop
    ctx->pc = 0x1f6668u;
    // NOP
    // 0x1f666c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f666cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6670: 0x0  nop
    ctx->pc = 0x1f6670u;
    // NOP
    // 0x1f6674: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1F6674u;
    {
        const bool branch_taken_0x1f6674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6674) {
            ctx->pc = 0x1F66A4u;
            goto label_1f66a4;
        }
    }
    ctx->pc = 0x1F667Cu;
    // 0x1f667c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6680: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6684: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1f6684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1f6688: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f6688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f668c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f668cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6690: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f6690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6694: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6698: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f6698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1f669c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F669Cu;
    {
        const bool branch_taken_0x1f669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f669c) {
            ctx->pc = 0x1F66C4u;
            goto label_1f66c4;
        }
    }
    ctx->pc = 0x1F66A4u;
label_1f66a4:
    // 0x1f66a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f66a8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f66ac: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f66acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f66b0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f66b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f66b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f66b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f66b8: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f66b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f66bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f66bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f66c0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f66c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_1f66c4:
    // 0x1f66c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f66c8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f66cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f66d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f66d4: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1f66d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f66d8: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x1f66d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f66dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f66dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f66e0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f66e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f66e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f66e8: 0x0  nop
    ctx->pc = 0x1f66e8u;
    // NOP
    // 0x1f66ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f66ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f66f0: 0x0  nop
    ctx->pc = 0x1f66f0u;
    // NOP
    // 0x1f66f4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1F66F4u;
    {
        const bool branch_taken_0x1f66f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f66f4) {
            ctx->pc = 0x1F6724u;
            goto label_1f6724;
        }
    }
    ctx->pc = 0x1F66FCu;
    // 0x1f66fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6700: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6704: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1f6704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1f6708: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f6708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f670c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f670cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6710: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f6710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6714: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6718: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f6718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x1f671c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F671Cu;
    {
        const bool branch_taken_0x1f671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f671c) {
            ctx->pc = 0x1F6744u;
            goto label_1f6744;
        }
    }
    ctx->pc = 0x1F6724u;
label_1f6724:
    // 0x1f6724: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6728: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f672c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f6730: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f6730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f6734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6738: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f6738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f673c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f673cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6740: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f6740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_1f6744:
    // 0x1f6744: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6748: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f674c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6754: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6758: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x1f6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f675c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f675cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6760: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1f6760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1f6764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6768: 0x0  nop
    ctx->pc = 0x1f6768u;
    // NOP
    // 0x1f676c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f676cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6770: 0x0  nop
    ctx->pc = 0x1f6770u;
    // NOP
    // 0x1f6774: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1F6774u;
    {
        const bool branch_taken_0x1f6774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6774) {
            ctx->pc = 0x1F67F0u;
            goto label_1f67f0;
        }
    }
    ctx->pc = 0x1F677Cu;
    // 0x1f677c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6780: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6784: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6788: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f678c: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1f678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6790: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x1f6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6794: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f6794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6798: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1f6798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1f679c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f679cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f67a0: 0x0  nop
    ctx->pc = 0x1f67a0u;
    // NOP
    // 0x1f67a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f67a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f67a8: 0x0  nop
    ctx->pc = 0x1f67a8u;
    // NOP
    // 0x1f67ac: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1F67ACu;
    {
        const bool branch_taken_0x1f67ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f67ac) {
            ctx->pc = 0x1F67F0u;
            goto label_1f67f0;
        }
    }
    ctx->pc = 0x1F67B4u;
    // 0x1f67b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f67b8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f67b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f67bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F67BCu;
    {
        const bool branch_taken_0x1f67bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f67bc) {
            ctx->pc = 0x1F67F0u;
            goto label_1f67f0;
        }
    }
    ctx->pc = 0x1F67C4u;
    // 0x1f67c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f67c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f67cc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1f67ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f67d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f67d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f67d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f67d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f67dc: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1f67dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1f67e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f67e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f67e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f67e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f67e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F67E8u;
    SET_GPR_U32(ctx, 31, 0x1F67F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F67E8u, 0x1F67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67F0u;
label_1f67f0:
    // 0x1f67f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f67f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f67f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f67f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F67F8u;
    SET_GPR_U32(ctx, 31, 0x1F6800u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F67F8u, 0x1F6800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6800u;
label_1f6800:
    // 0x1f6800: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f6800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6804: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F6804u;
    SET_GPR_U32(ctx, 31, 0x1F680Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F6804u, 0x1F680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F680Cu;
label_1f680c:
    // 0x1f680c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1f680cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6810: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1f6810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1f6814: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f6814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f6818: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1f6818u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f681c: 0x14800054  bnez        $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1F681Cu;
    {
        const bool branch_taken_0x1f681c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f681c) {
            ctx->pc = 0x1F6970u;
            goto label_1f6970;
        }
    }
    ctx->pc = 0x1F6824u;
    // 0x1f6824: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6828: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f6828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f682c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f682cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f6830: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1f6830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1f6834: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6838: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f6838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f683c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6840: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6844: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f6844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6848: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f6848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f684c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6850: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f6850u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6854: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6858: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f6858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f685c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6860: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f6860u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6864: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6868: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f6868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f686c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F686Cu;
    SET_GPR_U32(ctx, 31, 0x1F6874u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F686Cu, 0x1F6874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6874u;
label_1f6874:
    // 0x1f6874: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f6874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f6878: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f6878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f687c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f6880: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f6880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f6884: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f6884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f6888: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f688c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f688cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f6890: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F6890u;
    SET_GPR_U32(ctx, 31, 0x1F6898u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F6890u, 0x1F6898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6898u;
label_1f6898:
    // 0x1f6898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f6898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f689c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f689cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f68a0: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x1f68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x1f68a4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f68a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f68a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f68a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f68ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f68acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f68b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f68b4: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f68b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f68b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f68b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f68bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f68c0: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x1f68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x1f68c4: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1f68c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1f68c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f68c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f68cc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f68ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f68d0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1f68d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f68d4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1f68d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1f68d8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1F68D8u;
    SET_GPR_U32(ctx, 31, 0x1F68E0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1F68D8u, 0x1F68E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68E0u;
label_1f68e0:
    // 0x1f68e0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F68E0u;
    {
        const bool branch_taken_0x1f68e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f68e0) {
            ctx->pc = 0x1F6970u;
            goto label_1f6970;
        }
    }
    ctx->pc = 0x1F68E8u;
    // 0x1f68e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f68ec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f68ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f68f0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1f68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1f68f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f68f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f68f8: 0x0  nop
    ctx->pc = 0x1f68f8u;
    // NOP
    // 0x1f68fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f68fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6900: 0x0  nop
    ctx->pc = 0x1f6900u;
    // NOP
    // 0x1f6904: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1F6904u;
    {
        const bool branch_taken_0x1f6904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6904) {
            ctx->pc = 0x1F6970u;
            goto label_1f6970;
        }
    }
    ctx->pc = 0x1F690Cu;
    // 0x1f690c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F690Cu;
    SET_GPR_U32(ctx, 31, 0x1F6914u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F690Cu, 0x1F6914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6914u;
label_1f6914:
    // 0x1f6914: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f6914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f6918: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1f6918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f691c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6920: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F6920u;
    {
        const bool branch_taken_0x1f6920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f6920) {
            ctx->pc = 0x1F6970u;
            goto label_1f6970;
        }
    }
    ctx->pc = 0x1F6928u;
    // 0x1f6928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f692c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6930: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f6930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6934: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1f6934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f6938: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f693c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f693cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6940: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6944: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f6944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6948: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f694c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f694cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6950: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6954: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f6954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f6958: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F6958u;
    SET_GPR_U32(ctx, 31, 0x1F6960u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F6958u, 0x1F6960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6960u;
label_1f6960:
    // 0x1f6960: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f6960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f6964: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f6964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f6968: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1f6968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1f696c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1f696cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f6970:
    // 0x1f6970: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1f6970u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6978: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f6978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f697c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F697Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F697Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6984u;
}
