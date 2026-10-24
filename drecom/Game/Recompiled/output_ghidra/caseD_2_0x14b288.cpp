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
// Address: 0x14b288 - 0x14b2bc
void caseD_2_0x14b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14b288");
#endif

    switch (ctx->pc) {
        case 0x14b2acu: goto label_14b2ac;
        default: break;
    }

    ctx->pc = 0x14b288u;

    // 0x14b288: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b28c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b290: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14b294: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x14b294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x14b298: 0x34460027  ori         $a2, $v0, 0x27
    ctx->pc = 0x14b298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
    // 0x14b29c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b2a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14b2a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14B2A4u;
    SET_GPR_U32(ctx, 31, 0x14B2ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B2A4u, 0x14B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2ACu;
label_14b2ac:
    // 0x14b2ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b2b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b2b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14b2b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b2b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14b2bcu;
}
