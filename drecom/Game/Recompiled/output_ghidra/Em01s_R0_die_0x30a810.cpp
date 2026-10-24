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

// Function: Em01s_R0_die
// Address: 0x30a810 - 0x30a94c
void Em01s_R0_die_0x30a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R0_die_0x30a810");
#endif

    switch (ctx->pc) {
        case 0x30a864u: goto label_30a864;
        case 0x30a898u: goto label_30a898;
        case 0x30a8b8u: goto label_30a8b8;
        case 0x30a8c4u: goto label_30a8c4;
        case 0x30a8d4u: goto label_30a8d4;
        case 0x30a8e0u: goto label_30a8e0;
        case 0x30a93cu: goto label_30a93c;
        default: break;
    }

    ctx->pc = 0x30a810u;

    // 0x30a810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30a814: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30a814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x30a818: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30a818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30a81c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a820: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30a820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30a824: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30a824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a828: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30a82c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x30A82Cu;
    {
        const bool branch_taken_0x30a82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30a82c) {
            ctx->pc = 0x30A918u;
            goto label_30a918;
        }
    }
    ctx->pc = 0x30A834u;
    // 0x30a834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30a834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a838: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x30A838u;
    {
        const bool branch_taken_0x30a838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30a838) {
            ctx->pc = 0x30A8A8u;
            goto label_30a8a8;
        }
    }
    ctx->pc = 0x30A840u;
    // 0x30a840: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A840u;
    {
        const bool branch_taken_0x30a840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a840) {
            ctx->pc = 0x30A850u;
            goto label_30a850;
        }
    }
    ctx->pc = 0x30A848u;
    // 0x30a848: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x30A848u;
    {
        const bool branch_taken_0x30a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a848) {
            ctx->pc = 0x30A93Cu;
            goto label_30a93c;
        }
    }
    ctx->pc = 0x30A850u;
label_30a850:
    // 0x30a850: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a854: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x30a854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x30a858: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30a858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a85c: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x30A85Cu;
    SET_GPR_U32(ctx, 31, 0x30A864u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x30A85Cu, 0x30A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A864u;
label_30a864:
    // 0x30a864: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a868: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x30a868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x30a86c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x30a870: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30a870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30a874: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x30a874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x30a878: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a87c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a880: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30a880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30a884: 0x24065a3b  addiu       $a2, $zero, 0x5A3B
    ctx->pc = 0x30a884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23099));
    // 0x30a888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30a888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a88c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30a88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30a890: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30A890u;
    SET_GPR_U32(ctx, 31, 0x30A898u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30A890u, 0x30A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A898u;
label_30a898:
    // 0x30a898: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a89c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30a89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30a8a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30a8a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30a8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30a8a8:
    // 0x30a8a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30a8acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a8b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30A8B0u;
    SET_GPR_U32(ctx, 31, 0x30A8B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30A8B0u, 0x30A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8B8u;
label_30a8b8:
    // 0x30a8b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8bc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30A8BCu;
    SET_GPR_U32(ctx, 31, 0x30A8C4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30A8BCu, 0x30A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8C4u;
label_30a8c4:
    // 0x30a8c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a8cc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30A8CCu;
    SET_GPR_U32(ctx, 31, 0x30A8D4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30A8CCu, 0x30A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8D4u;
label_30a8d4:
    // 0x30a8d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8d8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30A8D8u;
    SET_GPR_U32(ctx, 31, 0x30A8E0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30A8D8u, 0x30A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8E0u;
label_30a8e0:
    // 0x30a8e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30a8e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30a8e8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30A8E8u;
    {
        const bool branch_taken_0x30a8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a8e8) {
            ctx->pc = 0x30A93Cu;
            goto label_30a93c;
        }
    }
    ctx->pc = 0x30A8F0u;
    // 0x30a8f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x30a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x30a8f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a8f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8fc: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x30a8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x30a900: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a904: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30a904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30a908: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30a90c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x30a90cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x30a910: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30A910u;
    {
        const bool branch_taken_0x30a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a910) {
            ctx->pc = 0x30A93Cu;
            goto label_30a93c;
        }
    }
    ctx->pc = 0x30A918u;
label_30a918:
    // 0x30a918: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a91c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x30a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a920: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a924: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x30a924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a928: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30a928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a92c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x30a92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x30a930: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a934: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x30A934u;
    SET_GPR_U32(ctx, 31, 0x30A93Cu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x30A934u, 0x30A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A93Cu;
label_30a93c:
    // 0x30a93c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30a93cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a940: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30a944: 0x3e00008  jr          $ra
    ctx->pc = 0x30A944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A94Cu;
}
