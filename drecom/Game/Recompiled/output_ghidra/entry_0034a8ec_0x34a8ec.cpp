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

// Function: entry_0034a8ec
// Address: 0x34a8ec - 0x34a978
void entry_0034a8ec_0x34a8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a8ec_0x34a8ec");
#endif

    switch (ctx->pc) {
        case 0x34a944u: goto label_34a944;
        default: break;
    }

    ctx->pc = 0x34a8ecu;

    // 0x34a8ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a8f4: 0x846300c2  lh          $v1, 0xC2($v1)
    ctx->pc = 0x34a8f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
    // 0x34a8f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x34a8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34a8fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34a8fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34a900: 0x2861005b  slti        $at, $v1, 0x5B
    ctx->pc = 0x34a900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x34a904: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x34A904u;
    {
        const bool branch_taken_0x34a904 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a904) {
            ctx->pc = 0x34A988u;
            return;
        }
    }
    ctx->pc = 0x34A90Cu;
    // 0x34a90c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a910: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a914: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34a914u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a918: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34a91c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a920: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34a920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a924: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a928: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34a928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a92c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a930: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34a930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a934: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a938: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34a938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34a93c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34A93Cu;
    SET_GPR_U32(ctx, 31, 0x34A944u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34A93Cu, 0x34A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A944u;
label_34a944:
    // 0x34a944: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34a944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a948: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x34a948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x34a94c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a950: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34A950u;
    {
        const bool branch_taken_0x34a950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a950) {
            ctx->pc = 0x34A988u;
            return;
        }
    }
    ctx->pc = 0x34A958u;
    // 0x34a958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a95c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a960: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a964: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x34a964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x34a968: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a96c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a96cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a970: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a974: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x34a978u;
}
