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

// Function: entry_001f169c
// Address: 0x1f169c - 0x1f1790
void entry_001f169c_0x1f169c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f169c_0x1f169c");
#endif

    switch (ctx->pc) {
        case 0x1f16e4u: goto label_1f16e4;
        case 0x1f1708u: goto label_1f1708;
        case 0x1f1720u: goto label_1f1720;
        case 0x1f1734u: goto label_1f1734;
        default: break;
    }

    ctx->pc = 0x1f169cu;

    // 0x1f169c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16a0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f16a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f16a4: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1F16A4u;
    {
        const bool branch_taken_0x1f16a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f16a4) {
            ctx->pc = 0x1F1790u;
            return;
        }
    }
    ctx->pc = 0x1F16ACu;
    // 0x1f16ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f16acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f16b0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16b4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f16b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f16b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f16bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16c0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f16c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f16c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16c8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f16c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f16cc: 0x8fb00098  lw          $s0, 0x98($sp)
    ctx->pc = 0x1f16ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16d0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1f16d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f16d4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f16dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F16DCu;
    SET_GPR_U32(ctx, 31, 0x1F16E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F16DCu, 0x1F16E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16E4u;
label_1f16e4:
    // 0x1f16e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f16e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f16e8: 0x3050001f  andi        $s0, $v0, 0x1F
    ctx->pc = 0x1f16e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f16ec: 0x260200b4  addiu       $v0, $s0, 0xB4
    ctx->pc = 0x1f16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x1f16f0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f16f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f16f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f16f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f16f8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16fc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f16fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f1700: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1700u;
    SET_GPR_U32(ctx, 31, 0x1F1708u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1700u, 0x1F1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1708u;
label_1f1708:
    // 0x1f1708: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1f1708u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f170c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1f170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1f1710: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f1710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f1714: 0x245200a0  addiu       $s2, $v0, 0xA0
    ctx->pc = 0x1f1714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1f1718: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1718u;
    SET_GPR_U32(ctx, 31, 0x1F1720u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1718u, 0x1F1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1720u;
label_1f1720:
    // 0x1f1720: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f1720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f1724: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x1f1724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f1728: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1f1728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f172c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F172Cu;
    SET_GPR_U32(ctx, 31, 0x1F1734u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F172Cu, 0x1F1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1734u;
label_1f1734:
    // 0x1f1734: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1f1734u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1738: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1f1738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1f173c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f173cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f1740: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f1740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f1744: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f1744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f1748: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f1748u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f174c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1750: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x1f1750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1754: 0xa604005c  sh          $a0, 0x5C($s0)
    ctx->pc = 0x1f1754u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f1758: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f1758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f175c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f175cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f1760: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f1760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1f1764: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x1f1764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x1f1768: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f1768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f176c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f176cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f1770: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1f1770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1f1774: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1778: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f1778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f177c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f177cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f1780: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x1f1780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x1f1784: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f1784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f1788: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f1788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f178c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f178cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x1f1790u;
}
