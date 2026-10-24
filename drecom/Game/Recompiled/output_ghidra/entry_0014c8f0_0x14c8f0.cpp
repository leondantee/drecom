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

// Function: entry_0014c8f0
// Address: 0x14c8f0 - 0x14c930
void entry_0014c8f0_0x14c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c8f0_0x14c8f0");
#endif

    switch (ctx->pc) {
        case 0x14c900u: goto label_14c900;
        case 0x14c914u: goto label_14c914;
        default: break;
    }

    ctx->pc = 0x14c8f0u;

    // 0x14c8f0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x14c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x14c8f4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x14c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x14c8f8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14C8F8u;
    SET_GPR_U32(ctx, 31, 0x14C900u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14C8F8u, 0x14C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C900u;
label_14c900:
    // 0x14c900: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x14c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x14c904: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x14c904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x14c908: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x14c908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x14c90c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14C90Cu;
    SET_GPR_U32(ctx, 31, 0x14C914u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14C90Cu, 0x14C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C914u;
label_14c914:
    // 0x14c914: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14c914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14c918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c91c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14c91cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c920: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c924: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c92c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c92cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14c930u;
}
