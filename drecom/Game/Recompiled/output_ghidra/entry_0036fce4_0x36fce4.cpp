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

// Function: entry_0036fce4
// Address: 0x36fce4 - 0x36fd20
void entry_0036fce4_0x36fce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036fce4_0x36fce4");
#endif

    switch (ctx->pc) {
        case 0x36fd10u: goto label_36fd10;
        default: break;
    }

    ctx->pc = 0x36fce4u;

    // 0x36fce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fce8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fcec: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x36fcecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x36fcf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fcf4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fcf8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36fcfc: 0x3406b40f  ori         $a2, $zero, 0xB40F
    ctx->pc = 0x36fcfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46095);
    // 0x36fd00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36fd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fd04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36fd04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36fd08: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36FD08u;
    SET_GPR_U32(ctx, 31, 0x36FD10u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36FD08u, 0x36FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD10u;
label_36fd10:
    // 0x36fd10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fd14: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x36fd18: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x36fd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x36fd1c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x36fd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x36fd20u;
}
