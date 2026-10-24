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

// Function: entry_0034b3e4
// Address: 0x34b3e4 - 0x34b44c
void entry_0034b3e4_0x34b3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034b3e4_0x34b3e4");
#endif

    switch (ctx->pc) {
        case 0x34b410u: goto label_34b410;
        default: break;
    }

    ctx->pc = 0x34b3e4u;

    // 0x34b3e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b3e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b3ec: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b3f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b3f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b3f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b3fc: 0x24060f1e  addiu       $a2, $zero, 0xF1E
    ctx->pc = 0x34b3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3870));
    // 0x34b400: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b404: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b408: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B408u;
    SET_GPR_U32(ctx, 31, 0x34B410u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B408u, 0x34B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B410u;
label_34b410:
    // 0x34b410: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b414: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b418: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34b41c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34b41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34b420: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34b420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34b424: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34b424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34b428: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b42c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34b42cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b430: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b434: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34b438: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34b438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34b43c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34b440: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34b440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b444: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34b444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34b448: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34b448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x34b44cu;
}
