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

// Function: entry_002482f4
// Address: 0x2482f4 - 0x2483c8
void entry_002482f4_0x2482f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002482f4_0x2482f4");
#endif

    switch (ctx->pc) {
        case 0x24833cu: goto label_24833c;
        case 0x248360u: goto label_248360;
        case 0x248388u: goto label_248388;
        default: break;
    }

    ctx->pc = 0x2482f4u;

    // 0x2482f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2482f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2482f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2482f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2482fc: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2482FCu;
    {
        const bool branch_taken_0x2482fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2482fc) {
            ctx->pc = 0x24842Cu;
            return;
        }
    }
    ctx->pc = 0x248304u;
    // 0x248304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248308: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24830c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x24830cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x248310: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248314: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248318: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x248318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x24831c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248320: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x248320u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x248324: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248328: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x248328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x24832c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248330: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x248330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x248334: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248334u;
    SET_GPR_U32(ctx, 31, 0x24833Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248334u, 0x24833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24833Cu;
label_24833c:
    // 0x24833c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24833cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248340: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x248340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x248344: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x248344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x248348: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x248348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x24834c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x24834cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248350: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248354: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x248354u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x248358: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248358u;
    SET_GPR_U32(ctx, 31, 0x248360u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248358u, 0x248360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248360u;
label_248360:
    // 0x248360: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x248360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248364: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x248364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x248368: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x248368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x24836c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x24836cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x248370: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x248370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248374: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248378: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x248378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24837c: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x24837cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x248380: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248380u;
    SET_GPR_U32(ctx, 31, 0x248388u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248380u, 0x248388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248388u;
label_248388:
    // 0x248388: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x248388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24838c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x248390: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x248390u;
    {
        const bool branch_taken_0x248390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248390) {
            ctx->pc = 0x2483C8u;
            return;
        }
    }
    ctx->pc = 0x248398u;
    // 0x248398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24839c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483a0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2483a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2483a4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2483a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2483a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2483a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483ac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2483acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2483b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2483b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483b4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2483b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2483b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2483b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483bc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2483bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2483c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2483c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2483c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2483c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2483c8u;
}
