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
// Address: 0x14b9b8 - 0x14b9ec
void caseD_2_0x14b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14b9b8");
#endif

    switch (ctx->pc) {
        case 0x14b9dcu: goto label_14b9dc;
        default: break;
    }

    ctx->pc = 0x14b9b8u;

    // 0x14b9b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b9bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b9c0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14b9c4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14b9c8: 0x34460028  ori         $a2, $v0, 0x28
    ctx->pc = 0x14b9c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
    // 0x14b9cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14b9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b9d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14b9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14b9d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14B9D4u;
    SET_GPR_U32(ctx, 31, 0x14B9DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14B9D4u, 0x14B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9DCu;
label_14b9dc:
    // 0x14b9dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b9e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14b9e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14b9e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b9e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14b9ecu;
}
