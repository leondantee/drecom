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

// Function: entry_0022e90c
// Address: 0x22e90c - 0x22e9b4
void entry_0022e90c_0x22e90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e90c_0x22e90c");
#endif

    switch (ctx->pc) {
        case 0x22e91cu: goto label_22e91c;
        case 0x22e928u: goto label_22e928;
        case 0x22e970u: goto label_22e970;
        case 0x22e994u: goto label_22e994;
        default: break;
    }

    ctx->pc = 0x22e90cu;

    // 0x22e90c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e910: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22e910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22e914: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22E914u;
    SET_GPR_U32(ctx, 31, 0x22E91Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22E914u, 0x22E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E91Cu;
label_22e91c:
    // 0x22e91c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e920: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22E920u;
    SET_GPR_U32(ctx, 31, 0x22E928u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22E920u, 0x22E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E928u;
label_22e928:
    // 0x22e928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e92c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22e92cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22e930: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22E930u;
    {
        const bool branch_taken_0x22e930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e930) {
            ctx->pc = 0x22E9B4u;
            return;
        }
    }
    ctx->pc = 0x22E938u;
    // 0x22e938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e93c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e940: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22e940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e944: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22e944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e948: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e94c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22e94cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e950: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e954: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22e954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e958: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e95c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22e95cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e964: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22e964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22e968: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E968u;
    SET_GPR_U32(ctx, 31, 0x22E970u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E968u, 0x22E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E970u;
label_22e970:
    // 0x22e970: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e974: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22e974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22e978: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x22e97c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22e980: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22e980u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22e984: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e988: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22e988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e98c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E98Cu;
    SET_GPR_U32(ctx, 31, 0x22E994u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E98Cu, 0x22E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E994u;
label_22e994:
    // 0x22e994: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22e994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e998: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22e998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22e99c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22e9a0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22e9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22e9a4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22e9a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22e9a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e9ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22e9b0: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22e9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x22e9b4u;
}
