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

// Function: Pl_r1_damage_small
// Address: 0x14c7d0 - 0x14ca38
void Pl_r1_damage_small_0x14c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_damage_small_0x14c7d0");
#endif

    switch (ctx->pc) {
        case 0x14c81cu: goto label_14c81c;
        case 0x14c88cu: goto label_14c88c;
        case 0x14c8c4u: goto label_14c8c4;
        case 0x14c8e8u: goto label_14c8e8;
        case 0x14c900u: goto label_14c900;
        case 0x14c914u: goto label_14c914;
        case 0x14c954u: goto label_14c954;
        case 0x14c96cu: goto label_14c96c;
        case 0x14c980u: goto label_14c980;
        case 0x14c994u: goto label_14c994;
        case 0x14c9a0u: goto label_14c9a0;
        case 0x14c9c0u: goto label_14c9c0;
        default: break;
    }

    ctx->pc = 0x14c7d0u;

    // 0x14c7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c7d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14c7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x14c7d8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x14c7dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c7e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14c7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c7e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14c7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14c7e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c7ec: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x14C7ECu;
    {
        const bool branch_taken_0x14c7ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c7ec) {
            ctx->pc = 0x14C930u;
            goto label_14c930;
        }
    }
    ctx->pc = 0x14C7F4u;
    // 0x14c7f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C7F4u;
    {
        const bool branch_taken_0x14c7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7f4) {
            ctx->pc = 0x14C804u;
            goto label_14c804;
        }
    }
    ctx->pc = 0x14C7FCu;
    // 0x14c7fc: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x14C7FCu;
    {
        const bool branch_taken_0x14c7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7fc) {
            ctx->pc = 0x14CA28u;
            goto label_14ca28;
        }
    }
    ctx->pc = 0x14C804u;
label_14c804:
    // 0x14c804: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c808: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c80c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x14c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c810: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x14c810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14c814: 0xc058f20  jal         func_163C80
    ctx->pc = 0x14C814u;
    SET_GPR_U32(ctx, 31, 0x14C81Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14C814u, 0x14C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C81Cu;
label_14c81c:
    // 0x14c81c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14c81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14c820: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14c820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c824: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c828: 0x0  nop
    ctx->pc = 0x14c828u;
    // NOP
    // 0x14c82c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14c82cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c830: 0x0  nop
    ctx->pc = 0x14c830u;
    // NOP
    // 0x14c834: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14C834u;
    {
        const bool branch_taken_0x14c834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c834) {
            ctx->pc = 0x14C848u;
            goto label_14c848;
        }
    }
    ctx->pc = 0x14C83Cu;
    // 0x14c83c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x14c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c840: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14c840u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14c844: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14c844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_14c848:
    // 0x14c848: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c84c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x14c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x14c850: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14c854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c858: 0x0  nop
    ctx->pc = 0x14c858u;
    // NOP
    // 0x14c85c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14c85cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14c860: 0x0  nop
    ctx->pc = 0x14c860u;
    // NOP
    // 0x14c864: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x14C864u;
    {
        const bool branch_taken_0x14c864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c864) {
            ctx->pc = 0x14C8A4u;
            goto label_14c8a4;
        }
    }
    ctx->pc = 0x14C86Cu;
    // 0x14c86c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c874: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14c874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14c878: 0x24060057  addiu       $a2, $zero, 0x57
    ctx->pc = 0x14c878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x14c87c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c880: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c884: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14C884u;
    SET_GPR_U32(ctx, 31, 0x14C88Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C884u, 0x14C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C88Cu;
label_14c88c:
    // 0x14c88c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c890: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x14c890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c898: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14c898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x14c89c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14C89Cu;
    {
        const bool branch_taken_0x14c89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c89c) {
            ctx->pc = 0x14C8F0u;
            goto label_14c8f0;
        }
    }
    ctx->pc = 0x14C8A4u;
label_14c8a4:
    // 0x14c8a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c8a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c8ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14c8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14c8b0: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x14c8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x14c8b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c8b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c8bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14C8BCu;
    SET_GPR_U32(ctx, 31, 0x14C8C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C8BCu, 0x14C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8C4u;
label_14c8c4:
    // 0x14c8c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c8c8: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x14c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c8cc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14c8d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14c8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c8d8: 0x0  nop
    ctx->pc = 0x14c8d8u;
    // NOP
    // 0x14c8dc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x14c8dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14c8e0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x14C8E0u;
    SET_GPR_U32(ctx, 31, 0x14C8E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x14C8E0u, 0x14C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8E8u;
label_14c8e8:
    // 0x14c8e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c8ec: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14c8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_14c8f0:
    // 0x14c8f0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x14c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x14c8f4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x14c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x14c8f8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14C8F8u;
    SET_GPR_U32(ctx, 31, 0x14C900u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14C8F8u, 0x14C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C900u;
label_14c900:
    // 0x14c900: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x14c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x14c904: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x14c904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x14c908: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x14c908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x14c90c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14C90Cu;
    SET_GPR_U32(ctx, 31, 0x14C914u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14C90Cu, 0x14C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C914u;
label_14c914:
    // 0x14c914: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14c914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14c918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c91c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14c91cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c920: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c924: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c92c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c92cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14c930:
    // 0x14c930: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x14c930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x14c934: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14c938: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14c938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14c93c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c944: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c948: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14c94c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14C94Cu;
    SET_GPR_U32(ctx, 31, 0x14C954u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14C94Cu, 0x14C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C954u;
label_14c954:
    // 0x14c954: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c958: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14c958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14c95c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c960: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c964: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C964u;
    SET_GPR_U32(ctx, 31, 0x14C96Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C964u, 0x14C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C96Cu;
label_14c96c:
    // 0x14c96c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c970: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c974: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c978: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14C978u;
    SET_GPR_U32(ctx, 31, 0x14C980u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14C978u, 0x14C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C980u;
label_14c980:
    // 0x14c980: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c984: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14c984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c988: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c988u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c98c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C98Cu;
    SET_GPR_U32(ctx, 31, 0x14C994u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C98Cu, 0x14C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C994u;
label_14c994:
    // 0x14c994: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c994u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c998: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14C998u;
    SET_GPR_U32(ctx, 31, 0x14C9A0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C998u, 0x14C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9A0u;
label_14c9a0:
    // 0x14c9a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c9a4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14c9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x14c9a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14c9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14c9ac: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14c9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14c9b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14C9B0u;
    {
        const bool branch_taken_0x14c9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9b0) {
            ctx->pc = 0x14C9D8u;
            goto label_14c9d8;
        }
    }
    ctx->pc = 0x14C9B8u;
    // 0x14c9b8: 0xc0585dc  jal         func_161770
    ctx->pc = 0x14C9B8u;
    SET_GPR_U32(ctx, 31, 0x14C9C0u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14C9B8u, 0x14C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9C0u;
label_14c9c0:
    // 0x14c9c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C9C0u;
    {
        const bool branch_taken_0x14c9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9c0) {
            ctx->pc = 0x14C9D8u;
            goto label_14c9d8;
        }
    }
    ctx->pc = 0x14C9C8u;
    // 0x14c9c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c9cc: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14c9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c9d0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14C9D0u;
    {
        const bool branch_taken_0x14c9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9d0) {
            ctx->pc = 0x14CA28u;
            goto label_14ca28;
        }
    }
    ctx->pc = 0x14C9D8u;
label_14c9d8:
    // 0x14c9d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c9dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14c9dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14c9e0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14C9E0u;
    {
        const bool branch_taken_0x14c9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9e0) {
            ctx->pc = 0x14CA28u;
            goto label_14ca28;
        }
    }
    ctx->pc = 0x14C9E8u;
    // 0x14c9e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c9ec: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14c9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c9f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c9f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c9f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14c9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14c9fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca00: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14ca00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ca04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14ca08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ca0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14ca10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ca14: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14ca18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ca1c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14ca20: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14CA20u;
    {
        const bool branch_taken_0x14ca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca20) {
            ctx->pc = 0x14CA28u;
            goto label_14ca28;
        }
    }
    ctx->pc = 0x14CA28u;
label_14ca28:
    // 0x14ca28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14ca28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ca2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14ca2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14ca30: 0x3e00008  jr          $ra
    ctx->pc = 0x14CA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CA38u;
}
