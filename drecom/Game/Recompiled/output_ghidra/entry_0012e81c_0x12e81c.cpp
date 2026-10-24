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

// Function: entry_0012e81c
// Address: 0x12e81c - 0x12e8ec
void entry_0012e81c_0x12e81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e81c_0x12e81c");
#endif

    switch (ctx->pc) {
        case 0x12e834u: goto label_12e834;
        case 0x12e860u: goto label_12e860;
        case 0x12e878u: goto label_12e878;
        case 0x12e884u: goto label_12e884;
        case 0x12e894u: goto label_12e894;
        case 0x12e8a0u: goto label_12e8a0;
        default: break;
    }

    ctx->pc = 0x12e81cu;

    // 0x12e81c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e820: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12e820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12e824: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12e824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12e828: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12e828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12e82c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12E82Cu;
    SET_GPR_U32(ctx, 31, 0x12E834u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12E82Cu, 0x12E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E834u;
label_12e834:
    // 0x12e834: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e838: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12e838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12e83c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12e840: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12e840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12e844: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12e844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12e848: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e84c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e850: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12e854: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12e858: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12E858u;
    SET_GPR_U32(ctx, 31, 0x12E860u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12E858u, 0x12E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E860u;
label_12e860:
    // 0x12e860: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e864: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12e864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12e868: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e86c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e86cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e870: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12E870u;
    SET_GPR_U32(ctx, 31, 0x12E878u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12E870u, 0x12E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E878u;
label_12e878:
    // 0x12e878: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12e878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e87c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12E87Cu;
    SET_GPR_U32(ctx, 31, 0x12E884u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12E87Cu, 0x12E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E884u;
label_12e884:
    // 0x12e884: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12e884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e888: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e88c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12E88Cu;
    SET_GPR_U32(ctx, 31, 0x12E894u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12E88Cu, 0x12E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E894u;
label_12e894:
    // 0x12e894: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12e894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e898: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12E898u;
    SET_GPR_U32(ctx, 31, 0x12E8A0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12E898u, 0x12E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8A0u;
label_12e8a0:
    // 0x12e8a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e8a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12e8a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12e8a8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12E8A8u;
    {
        const bool branch_taken_0x12e8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e8a8) {
            ctx->pc = 0x12E8ECu;
            return;
        }
    }
    ctx->pc = 0x12E8B0u;
    // 0x12e8b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e8b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12e8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e8bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12e8c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e8c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12e8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e8c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e8cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12e8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e8d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e8d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12e8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e8d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e8dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12e8e0: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12e8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12e8e4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12E8E4u;
    {
        const bool branch_taken_0x12e8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e8e4) {
            ctx->pc = 0x12E8ECu;
            return;
        }
    }
    ctx->pc = 0x12E8ECu;
}
