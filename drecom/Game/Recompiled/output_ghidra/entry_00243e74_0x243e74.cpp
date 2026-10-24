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

// Function: entry_00243e74
// Address: 0x243e74 - 0x243ee0
void entry_00243e74_0x243e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243e74_0x243e74");
#endif

    switch (ctx->pc) {
        case 0x243e7cu: goto label_243e7c;
        case 0x243ec4u: goto label_243ec4;
        default: break;
    }

    ctx->pc = 0x243e74u;

    // 0x243e74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243E74u;
    SET_GPR_U32(ctx, 31, 0x243E7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243E74u, 0x243E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E7Cu;
label_243e7c:
    // 0x243e7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243e80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x243e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x243e84: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x243E84u;
    {
        const bool branch_taken_0x243e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e84) {
            ctx->pc = 0x243EE0u;
            return;
        }
    }
    ctx->pc = 0x243E8Cu;
    // 0x243e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243e90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e94: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243e94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243e98: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x243e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x243e9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ea0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243ea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ea8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243eac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243eb0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243eb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243eb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243ebc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243EBCu;
    SET_GPR_U32(ctx, 31, 0x243EC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243EBCu, 0x243EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EC4u;
label_243ec4:
    // 0x243ec4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243ec8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x243ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x243ecc: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x243eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x243ed0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x243ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x243ed4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x243ed4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x243ed8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243edc: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x243edcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x243ee0u;
}
