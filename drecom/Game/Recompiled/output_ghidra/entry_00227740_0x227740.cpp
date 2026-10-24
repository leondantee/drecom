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

// Function: entry_00227740
// Address: 0x227740 - 0x227840
void entry_00227740_0x227740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227740_0x227740");
#endif

    switch (ctx->pc) {
        case 0x227788u: goto label_227788;
        case 0x2277c4u: goto label_2277c4;
        case 0x2277ccu: goto label_2277cc;
        default: break;
    }

    ctx->pc = 0x227740u;

    // 0x227740: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227744: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x227744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x227748: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x227748u;
    {
        const bool branch_taken_0x227748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x227748) {
            ctx->pc = 0x227840u;
            return;
        }
    }
    ctx->pc = 0x227750u;
    // 0x227750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227754: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227758: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x227758u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22775c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227760: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227764: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x227764u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x227768: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22776c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22776cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x227770: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227774: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x227774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x227778: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22777c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22777cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x227780: 0xc067694  jal         func_19DA50
    ctx->pc = 0x227780u;
    SET_GPR_U32(ctx, 31, 0x227788u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x227780u, 0x227788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227788u;
label_227788:
    // 0x227788: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x227788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22778c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x227790: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x227790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x227794: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x227794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x227798: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x227798u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22779c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x22779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2277a0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2277a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2277a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2277a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2277a8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2277a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2277ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2277acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2277b0: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x2277b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x2277b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2277b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2277b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2277b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2277bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2277BCu;
    SET_GPR_U32(ctx, 31, 0x2277C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2277BCu, 0x2277C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277C4u;
label_2277c4:
    // 0x2277c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2277C4u;
    SET_GPR_U32(ctx, 31, 0x2277CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2277C4u, 0x2277CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277CCu;
label_2277cc:
    // 0x2277cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2277ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2277d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2277d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2277d4: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x2277d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2277d8: 0x2483000a  addiu       $v1, $a0, 0xA
    ctx->pc = 0x2277d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x2277dc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2277dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2277e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2277e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2277e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2277e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2277e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2277e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2277ec: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x2277ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x2277f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2277f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2277f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2277f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2277f8: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2277f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2277fc: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x2277fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x227800: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x227800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x227804: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x227804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    // 0x227808: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22780c: 0x8c271a58  lw          $a3, 0x1A58($at)
    ctx->pc = 0x22780cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x227810: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x227810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x227814: 0x34687fff  ori         $t0, $v1, 0x7FFF
    ctx->pc = 0x227814u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x227818: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x227818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x22781c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22781cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227820: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x227820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x227824: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227828: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x227828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22782c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x227830: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x227830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x227834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x227834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x227838: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x227838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22783c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22783cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x227840u;
}
