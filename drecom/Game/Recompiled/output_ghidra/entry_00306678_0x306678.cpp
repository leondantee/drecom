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

// Function: entry_00306678
// Address: 0x306678 - 0x3067a0
void entry_00306678_0x306678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306678_0x306678");
#endif

    switch (ctx->pc) {
        case 0x306688u: goto label_306688;
        case 0x306694u: goto label_306694;
        case 0x3066a4u: goto label_3066a4;
        case 0x3066b0u: goto label_3066b0;
        case 0x306768u: goto label_306768;
        default: break;
    }

    ctx->pc = 0x306678u;

    // 0x306678: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30667c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30667cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306680: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306680u;
    SET_GPR_U32(ctx, 31, 0x306688u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306680u, 0x306688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306688u;
label_306688:
    // 0x306688: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30668c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30668Cu;
    SET_GPR_U32(ctx, 31, 0x306694u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30668Cu, 0x306694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306694u;
label_306694:
    // 0x306694: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306698: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x306698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30669c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30669Cu;
    SET_GPR_U32(ctx, 31, 0x3066A4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30669Cu, 0x3066A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066A4u;
label_3066a4:
    // 0x3066a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3066a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066a8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3066A8u;
    SET_GPR_U32(ctx, 31, 0x3066B0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3066A8u, 0x3066B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066B0u;
label_3066b0:
    // 0x3066b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3066b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066b4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3066b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3066b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3066b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3066bc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3066bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3066c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3066c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3066c8: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3066C8u;
    {
        const bool branch_taken_0x3066c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3066c8) {
            ctx->pc = 0x30695Cu;
            return;
        }
    }
    ctx->pc = 0x3066D0u;
    // 0x3066d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3066d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3066d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3066d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3066dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3066dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3066e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3066e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3066e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3066ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3066f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3066f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3066f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3066f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3066fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3066fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x306700: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306704: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x306704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x306708: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x306708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x30670c: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x30670Cu;
    {
        const bool branch_taken_0x30670c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30670c) {
            ctx->pc = 0x3068E4u;
            return;
        }
    }
    ctx->pc = 0x306714u;
    // 0x306714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306718: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x306718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30671c: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x30671cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x306720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306724: 0x0  nop
    ctx->pc = 0x306724u;
    // NOP
    // 0x306728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x306728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30672c: 0x0  nop
    ctx->pc = 0x30672cu;
    // NOP
    // 0x306730: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x306730u;
    {
        const bool branch_taken_0x306730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306730) {
            ctx->pc = 0x3067A0u;
            return;
        }
    }
    ctx->pc = 0x306738u;
    // 0x306738: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30673c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30673cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x306740: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306744: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x306744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x306748: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x306748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30674c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30674cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x306750: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x306750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x306754: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x306754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x306758: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x306758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30675c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30675cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x306760: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x306760u;
    SET_GPR_U32(ctx, 31, 0x306768u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x306760u, 0x306768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306768u;
label_306768:
    // 0x306768: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x306768u;
    {
        const bool branch_taken_0x306768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306768) {
            ctx->pc = 0x3067A0u;
            return;
        }
    }
    ctx->pc = 0x306770u;
    // 0x306770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306774: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306778: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x306778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30677c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x30677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x306780: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306784: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x306788: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30678c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30678cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x306790: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306794: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x306798: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30679c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30679cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3067a0u;
}
