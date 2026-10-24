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

// Function: entry_0014d32c
// Address: 0x14d32c - 0x14d368
void entry_0014d32c_0x14d32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d32c_0x14d32c");
#endif

    switch (ctx->pc) {
        case 0x14d34cu: goto label_14d34c;
        default: break;
    }

    ctx->pc = 0x14d32cu;

    // 0x14d32c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d330: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d334: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14d334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14d338: 0x2406005f  addiu       $a2, $zero, 0x5F
    ctx->pc = 0x14d338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x14d33c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d340: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d344: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14D344u;
    SET_GPR_U32(ctx, 31, 0x14D34Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D344u, 0x14D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D34Cu;
label_14d34c:
    // 0x14d34c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14d350: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d354: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14d354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14d358: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d35c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d364: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d368u;
}
