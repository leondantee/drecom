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

// Function: caseD_2
// Address: 0x353010 - 0x353050
void caseD_2_0x353010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x353010");
#endif

    switch (ctx->pc) {
        case 0x353020u: goto label_353020;
        default: break;
    }

    ctx->pc = 0x353010u;

    // 0x353010: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x353010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353014: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x353014u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x353018: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x353018u;
    SET_GPR_U32(ctx, 31, 0x353020u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x353018u, 0x353020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353020u;
label_353020:
    // 0x353020: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x353020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353024: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353028: 0x9063002a  lbu         $v1, 0x2A($v1)
    ctx->pc = 0x353028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x35302c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35302cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353030: 0x146000bd  bnez        $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x353030u;
    {
        const bool branch_taken_0x353030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353030) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x353038u;
    // 0x353038: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35303c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35303cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353040: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353044: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x353044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x353048: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x353048u;
    {
        const bool branch_taken_0x353048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353048) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x353050u;
}
