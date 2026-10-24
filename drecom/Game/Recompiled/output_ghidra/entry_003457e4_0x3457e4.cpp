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

// Function: entry_003457e4
// Address: 0x3457e4 - 0x3458d4
void entry_003457e4_0x3457e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003457e4_0x3457e4");
#endif

    switch (ctx->pc) {
        case 0x345810u: goto label_345810;
        case 0x34582cu: goto label_34582c;
        case 0x345844u: goto label_345844;
        case 0x345850u: goto label_345850;
        case 0x345860u: goto label_345860;
        case 0x34586cu: goto label_34586c;
        default: break;
    }

    ctx->pc = 0x3457e4u;

    // 0x3457e4: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x3457e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x3457e8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x3457e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x3457ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3457ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3457f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3457f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3457f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457f8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3457f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3457fc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3457fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x345800: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x345800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x345804: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x345804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x345808: 0xc05c848  jal         func_172120
    ctx->pc = 0x345808u;
    SET_GPR_U32(ctx, 31, 0x345810u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x345808u, 0x345810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345810u;
label_345810:
    // 0x345810: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x345810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x345814: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345818: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x345818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34581c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x34581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345820: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x345820u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345824: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x345824u;
    SET_GPR_U32(ctx, 31, 0x34582Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x345824u, 0x34582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34582Cu;
label_34582c:
    // 0x34582c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x34582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345830: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x345830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x345834: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x345834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345838: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34583c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34583Cu;
    SET_GPR_U32(ctx, 31, 0x345844u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34583Cu, 0x345844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345844u;
label_345844:
    // 0x345844: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x345844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345848: 0xc05cd10  jal         func_173440
    ctx->pc = 0x345848u;
    SET_GPR_U32(ctx, 31, 0x345850u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x345848u, 0x345850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345850u;
label_345850:
    // 0x345850: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x345850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345854: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345854u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345858: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x345858u;
    SET_GPR_U32(ctx, 31, 0x345860u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x345858u, 0x345860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345860u;
label_345860:
    // 0x345860: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x345860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345864: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x345864u;
    SET_GPR_U32(ctx, 31, 0x34586Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x345864u, 0x34586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34586Cu;
label_34586c:
    // 0x34586c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345870: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x345870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x345874: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x345874u;
    {
        const bool branch_taken_0x345874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345874) {
            ctx->pc = 0x3458D4u;
            return;
        }
    }
    ctx->pc = 0x34587Cu;
    // 0x34587c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345880: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x345880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345884: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x345884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x345888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34588c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345890: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x345890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x345894: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x345894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345898: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x345898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34589c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3458a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3458a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3458a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3458a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3458a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3458a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3458ac: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x3458acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3458b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3458b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3458b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3458b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3458b8: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x3458b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x3458bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3458bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3458c0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3458c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3458c4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3458c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3458c8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3458c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3458cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3458ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3458d0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3458d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x3458d4u;
}
