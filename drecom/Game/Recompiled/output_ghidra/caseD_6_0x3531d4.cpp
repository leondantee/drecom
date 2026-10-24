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

// Function: caseD_6
// Address: 0x3531d4 - 0x353214
void caseD_6_0x3531d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x3531d4");
#endif

    switch (ctx->pc) {
        case 0x3531e4u: goto label_3531e4;
        default: break;
    }

    ctx->pc = 0x3531d4u;

    // 0x3531d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3531d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3531d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3531d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3531dc: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x3531DCu;
    SET_GPR_U32(ctx, 31, 0x3531E4u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x3531DCu, 0x3531E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3531E4u;
label_3531e4:
    // 0x3531e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3531e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3531e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3531e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3531ec: 0x9063002a  lbu         $v1, 0x2A($v1)
    ctx->pc = 0x3531ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x3531f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3531f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3531f4: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3531F4u;
    {
        const bool branch_taken_0x3531f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3531f4) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x3531FCu;
    // 0x3531fc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3531fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353200: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x353200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353204: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353208: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x353208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x35320c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x35320Cu;
    {
        const bool branch_taken_0x35320c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35320c) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x353214u;
}
