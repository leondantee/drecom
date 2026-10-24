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

// Function: caseD_9
// Address: 0x3532f0 - 0x353328
void caseD_9_0x3532f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x3532f0");
#endif

    switch (ctx->pc) {
        case 0x353300u: goto label_353300;
        default: break;
    }

    ctx->pc = 0x3532f0u;

    // 0x3532f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3532f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3532f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3532f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3532f8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x3532F8u;
    SET_GPR_U32(ctx, 31, 0x353300u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x3532F8u, 0x353300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353300u;
label_353300:
    // 0x353300: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x353300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353304: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353308: 0x9063002a  lbu         $v1, 0x2A($v1)
    ctx->pc = 0x353308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x35330c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353310: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x353310u;
    {
        const bool branch_taken_0x353310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353310) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x353318u;
    // 0x353318: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35331c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35331cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353320: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353324: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x353324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x353328u;
}
