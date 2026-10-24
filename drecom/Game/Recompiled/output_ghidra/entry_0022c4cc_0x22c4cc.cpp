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

// Function: entry_0022c4cc
// Address: 0x22c4cc - 0x22c58c
void entry_0022c4cc_0x22c4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c4cc_0x22c4cc");
#endif

    switch (ctx->pc) {
        case 0x22c4dcu: goto label_22c4dc;
        case 0x22c4e8u: goto label_22c4e8;
        case 0x22c530u: goto label_22c530;
        case 0x22c554u: goto label_22c554;
        default: break;
    }

    ctx->pc = 0x22c4ccu;

    // 0x22c4cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22c4d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22C4D4u;
    SET_GPR_U32(ctx, 31, 0x22C4DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22C4D4u, 0x22C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4DCu;
label_22c4dc:
    // 0x22c4dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4e0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22C4E0u;
    SET_GPR_U32(ctx, 31, 0x22C4E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22C4E0u, 0x22C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4E8u;
label_22c4e8:
    // 0x22c4e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4ec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22c4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22c4f0: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x22C4F0u;
    {
        const bool branch_taken_0x22c4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c4f0) {
            ctx->pc = 0x22C58Cu;
            return;
        }
    }
    ctx->pc = 0x22C4F8u;
    // 0x22c4f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c4fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c500: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22c500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c508: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c50c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22c50cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c514: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22c514u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c518: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c51c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22c51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c520: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c524: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22c524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22c528: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22C528u;
    SET_GPR_U32(ctx, 31, 0x22C530u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22C528u, 0x22C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C530u;
label_22c530:
    // 0x22c530: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22c530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22c534: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22c534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22c538: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x22c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x22c53c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c540: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22c540u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22c544: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c548: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22c548u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c54c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22C54Cu;
    SET_GPR_U32(ctx, 31, 0x22C554u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22C54Cu, 0x22C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C554u;
label_22c554:
    // 0x22c554: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22c554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22c558: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x22c558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22c55c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x22c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x22c560: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22c560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22c564: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22c564u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22c568: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c56c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c570: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22c570u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x22c574: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c578: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22c578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c57c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22c580: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x22c580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x22c584: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22c584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22c588: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22c588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x22c58cu;
}
