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

// Function: entry_0036e948
// Address: 0x36e948 - 0x36e980
void entry_0036e948_0x36e948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e948_0x36e948");
#endif

    switch (ctx->pc) {
        case 0x36e968u: goto label_36e968;
        default: break;
    }

    ctx->pc = 0x36e948u;

    // 0x36e948: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e94c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e950: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e954: 0x24065a0c  addiu       $a2, $zero, 0x5A0C
    ctx->pc = 0x36e954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23052));
    // 0x36e958: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e95c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e95cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e960: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E960u;
    SET_GPR_U32(ctx, 31, 0x36E968u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E960u, 0x36E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E968u;
label_36e968:
    // 0x36e968: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e96c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36e96cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36e970: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e974: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36e974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36e978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e97c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36e97cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36e980u;
}
