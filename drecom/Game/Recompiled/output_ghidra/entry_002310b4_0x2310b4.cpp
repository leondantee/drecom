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

// Function: entry_002310b4
// Address: 0x2310b4 - 0x231154
void entry_002310b4_0x2310b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002310b4_0x2310b4");
#endif

    switch (ctx->pc) {
        case 0x2310ecu: goto label_2310ec;
        case 0x231110u: goto label_231110;
        default: break;
    }

    ctx->pc = 0x2310b4u;

    // 0x2310b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2310b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2310b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2310b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310bc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2310bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2310c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2310c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2310c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2310c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310c8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2310c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2310cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2310ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310d0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2310d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2310d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2310d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310d8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2310d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2310dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2310dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2310e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2310e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2310E4u;
    SET_GPR_U32(ctx, 31, 0x2310ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2310E4u, 0x2310ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310ECu;
label_2310ec:
    // 0x2310ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2310ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2310f0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2310f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2310f4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x2310f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2310f8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2310f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2310fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2310fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x231100: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x231100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231104: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x231104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x231108: 0xc067694  jal         func_19DA50
    ctx->pc = 0x231108u;
    SET_GPR_U32(ctx, 31, 0x231110u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x231108u, 0x231110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231110u;
label_231110:
    // 0x231110: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x231110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x231114: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x231114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x231118: 0x24630104  addiu       $v1, $v1, 0x104
    ctx->pc = 0x231118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x23111c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23111cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x231120: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x231120u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x231124: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x231124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231128: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x231128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23112c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x23112cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x231130: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x231130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231134: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x231134u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x231138: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x231138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x23113c: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x23113cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x231140: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x231140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231144: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x231144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x231148: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x231148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x23114c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231150: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x231150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x231154u;
}
