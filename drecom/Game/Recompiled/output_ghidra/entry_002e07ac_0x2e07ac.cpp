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

// Function: entry_002e07ac
// Address: 0x2e07ac - 0x2e07e8
void entry_002e07ac_0x2e07ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e07ac_0x2e07ac");
#endif

    switch (ctx->pc) {
        case 0x2e07ccu: goto label_2e07cc;
        default: break;
    }

    ctx->pc = 0x2e07acu;

    // 0x2e07ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e07acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e07b0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e07b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e07b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e07b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e07b8: 0x24060509  addiu       $a2, $zero, 0x509
    ctx->pc = 0x2e07b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x2e07bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e07bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e07c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e07c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e07c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E07C4u;
    SET_GPR_U32(ctx, 31, 0x2E07CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E07C4u, 0x2E07CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E07CCu;
label_2e07cc:
    // 0x2e07cc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e07d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e07d4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e07d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e07d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e07d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e07dc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e07dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e07e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e07e4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e07e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e07e8u;
}
