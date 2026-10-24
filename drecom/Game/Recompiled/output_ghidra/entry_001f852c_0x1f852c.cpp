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

// Function: entry_001f852c
// Address: 0x1f852c - 0x1f860c
void entry_001f852c_0x1f852c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f852c_0x1f852c");
#endif

    switch (ctx->pc) {
        case 0x1f8564u: goto label_1f8564;
        case 0x1f8588u: goto label_1f8588;
        case 0x1f85c0u: goto label_1f85c0;
        default: break;
    }

    ctx->pc = 0x1f852cu;

    // 0x1f852c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8530: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8534: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f8534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8538: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f853c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8540: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f8540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8544: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8548: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f8548u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f854c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8550: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f8550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8558: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f8558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f855c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F855Cu;
    SET_GPR_U32(ctx, 31, 0x1F8564u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F855Cu, 0x1F8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8564u;
label_1f8564:
    // 0x1f8564: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f8564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8568: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f8568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f856c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f8570: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f8570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8574: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8574u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8578: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f857c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f857cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8580: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8580u;
    SET_GPR_U32(ctx, 31, 0x1F8588u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8580u, 0x1F8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8588u;
label_1f8588:
    // 0x1f8588: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f8588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f858c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f8590: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f8590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f8594: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f8594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8598: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8598u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f859c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f85a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f85a4: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f85a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f85a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f85ac: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x1f85acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1f85b0: 0x3042f8ff  andi        $v0, $v0, 0xF8FF
    ctx->pc = 0x1f85b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63743);
    // 0x1f85b4: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x1f85b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f85b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F85B8u;
    SET_GPR_U32(ctx, 31, 0x1F85C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F85B8u, 0x1F85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F85C0u;
label_1f85c0:
    // 0x1f85c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f85c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f85c4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1f85c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1f85c8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1f85c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f85cc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f85d0: 0x24639c20  addiu       $v1, $v1, -0x63E0
    ctx->pc = 0x1f85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x1f85d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f85d8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1f85d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f85dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f85e0: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1f85e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f85e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f85e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f85e8: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f85e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f85ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f85ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f85f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f85f4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F85F4u;
    {
        const bool branch_taken_0x1f85f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f85f4) {
            ctx->pc = 0x1F860Cu;
            return;
        }
    }
    ctx->pc = 0x1F85FCu;
    // 0x1f85fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f85fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8600: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8604: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f8604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f8608: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8608u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f860cu;
}
