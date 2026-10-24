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

// Function: entry_0023a7f8
// Address: 0x23a7f8 - 0x23a918
void entry_0023a7f8_0x23a7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a7f8_0x23a7f8");
#endif

    switch (ctx->pc) {
        case 0x23a824u: goto label_23a824;
        case 0x23a840u: goto label_23a840;
        case 0x23a858u: goto label_23a858;
        case 0x23a864u: goto label_23a864;
        case 0x23a8d0u: goto label_23a8d0;
        default: break;
    }

    ctx->pc = 0x23a7f8u;

    // 0x23a7f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a7fc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x23a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a800: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a804: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23a804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a808: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23a808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23a80c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23a810: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23a814: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23a814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23a818: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x23a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23a81c: 0xc05c848  jal         func_172120
    ctx->pc = 0x23A81Cu;
    SET_GPR_U32(ctx, 31, 0x23A824u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23A81Cu, 0x23A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A824u;
label_23a824:
    // 0x23a824: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x23a824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x23a828: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a82c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a830: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x23a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a834: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23a834u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23a838: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23A838u;
    SET_GPR_U32(ctx, 31, 0x23A840u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23A838u, 0x23A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A840u;
label_23a840:
    // 0x23a840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a844: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23a844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23a848: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a84c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23a850: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23A850u;
    SET_GPR_U32(ctx, 31, 0x23A858u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23A850u, 0x23A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A858u;
label_23a858:
    // 0x23a858: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a85c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23A85Cu;
    SET_GPR_U32(ctx, 31, 0x23A864u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23A85Cu, 0x23A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A864u;
label_23a864:
    // 0x23a864: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a868: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x23a868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x23a86c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x23a86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23a870: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x23a870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x23a874: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x23A874u;
    {
        const bool branch_taken_0x23a874 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a874) {
            ctx->pc = 0x23A918u;
            return;
        }
    }
    ctx->pc = 0x23A87Cu;
    // 0x23a87c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a880: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x23a880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a884: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x23a884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x23a888: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x23a888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x23a88c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a88cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a890: 0x0  nop
    ctx->pc = 0x23a890u;
    // NOP
    // 0x23a894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a898: 0x0  nop
    ctx->pc = 0x23a898u;
    // NOP
    // 0x23a89c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x23A89Cu;
    {
        const bool branch_taken_0x23a89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a89c) {
            ctx->pc = 0x23A918u;
            return;
        }
    }
    ctx->pc = 0x23A8A4u;
    // 0x23a8a4: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x23a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x23a8a8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x23a8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x23a8ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23a8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23a8b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a8b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a8b8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23a8bc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23a8c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23a8c4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23a8c8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23A8C8u;
    SET_GPR_U32(ctx, 31, 0x23A8D0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23A8C8u, 0x23A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A8D0u;
label_23a8d0:
    // 0x23a8d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23A8D0u;
    {
        const bool branch_taken_0x23a8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a8d0) {
            ctx->pc = 0x23A918u;
            return;
        }
    }
    ctx->pc = 0x23A8D8u;
    // 0x23a8d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a8dc: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x23a8dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x23a8e0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x23A8E0u;
    {
        const bool branch_taken_0x23a8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a8e0) {
            ctx->pc = 0x23A918u;
            return;
        }
    }
    ctx->pc = 0x23A8E8u;
    // 0x23a8e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a8ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a8f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23a8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23a8f4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x23a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23a8f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a8fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23a8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23a900: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a904: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23a904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a908: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a90c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23a90cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a910: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a914: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23a914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23a918u;
}
