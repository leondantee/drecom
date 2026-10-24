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

// Function: entry_00245014
// Address: 0x245014 - 0x245080
void entry_00245014_0x245014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245014_0x245014");
#endif

    switch (ctx->pc) {
        case 0x24501cu: goto label_24501c;
        case 0x245064u: goto label_245064;
        default: break;
    }

    ctx->pc = 0x245014u;

    // 0x245014: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245014u;
    SET_GPR_U32(ctx, 31, 0x24501Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245014u, 0x24501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24501Cu;
label_24501c:
    // 0x24501c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24501cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245020: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x245020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x245024: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x245024u;
    {
        const bool branch_taken_0x245024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x245024) {
            ctx->pc = 0x245080u;
            return;
        }
    }
    ctx->pc = 0x24502Cu;
    // 0x24502c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245030: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x245030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245034: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x245034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x245038: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x245038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24503c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245040: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x245040u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x245044: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x245044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245048: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x245048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24504c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245050: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x245050u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x245054: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x245054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245058: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x245058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x24505c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24505Cu;
    SET_GPR_U32(ctx, 31, 0x245064u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24505Cu, 0x245064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245064u;
label_245064:
    // 0x245064: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x245064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245068: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x245068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x24506c: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x24506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x245070: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x245070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x245074: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245074u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x245078: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x245078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24507c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x24507cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x245080u;
}
