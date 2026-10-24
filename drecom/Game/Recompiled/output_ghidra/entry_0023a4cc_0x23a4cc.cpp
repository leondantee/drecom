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

// Function: entry_0023a4cc
// Address: 0x23a4cc - 0x23a560
void entry_0023a4cc_0x23a4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a4cc_0x23a4cc");
#endif

    switch (ctx->pc) {
        case 0x23a51cu: goto label_23a51c;
        case 0x23a540u: goto label_23a540;
        default: break;
    }

    ctx->pc = 0x23a4ccu;

    // 0x23a4cc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x23a4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a4d0: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x23a4d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x23a4d4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x23a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23a4d8: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x23a4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a4dc: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23A4DCu;
    {
        const bool branch_taken_0x23a4dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a4dc) {
            ctx->pc = 0x23A560u;
            return;
        }
    }
    ctx->pc = 0x23A4E4u;
    // 0x23a4e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a4e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a4ec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a4f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23a4f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a4f8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23a4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23a4fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a500: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23a500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a504: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a508: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23a508u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a50c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a510: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23a510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23a514: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A514u;
    SET_GPR_U32(ctx, 31, 0x23A51Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A514u, 0x23A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A51Cu;
label_23a51c:
    // 0x23a51c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a520: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23a520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23a524: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x23a524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x23a528: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23a52c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23a52cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23a530: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a534: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23a534u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a538: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23A538u;
    SET_GPR_U32(ctx, 31, 0x23A540u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23A538u, 0x23A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A540u;
label_23a540:
    // 0x23a540: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23a540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23a544: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23a544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23a548: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x23a548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x23a54c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23a54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23a550: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23a550u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23a554: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a558: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a55c: 0xa4640074  sh          $a0, 0x74($v1)
    ctx->pc = 0x23a55cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 116), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x23a560u;
}
