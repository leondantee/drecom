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

// Function: entry_0014cb60
// Address: 0x14cb60 - 0x14cba0
void entry_0014cb60_0x14cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb60_0x14cb60");
#endif

    switch (ctx->pc) {
        case 0x14cb70u: goto label_14cb70;
        case 0x14cb84u: goto label_14cb84;
        default: break;
    }

    ctx->pc = 0x14cb60u;

    // 0x14cb60: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x14cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x14cb64: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x14cb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x14cb68: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14CB68u;
    SET_GPR_U32(ctx, 31, 0x14CB70u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CB68u, 0x14CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB70u;
label_14cb70:
    // 0x14cb70: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x14cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x14cb74: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x14cb74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x14cb78: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x14cb78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x14cb7c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14CB7Cu;
    SET_GPR_U32(ctx, 31, 0x14CB84u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CB7Cu, 0x14CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB84u;
label_14cb84:
    // 0x14cb84: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14cb88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb8c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14cb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14cb90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb94: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14cb94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14cb98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14cb9c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14cb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14cba0u;
}
