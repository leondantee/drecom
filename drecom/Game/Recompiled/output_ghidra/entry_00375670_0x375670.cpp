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

// Function: entry_00375670
// Address: 0x375670 - 0x3756b8
void entry_00375670_0x375670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375670_0x375670");
#endif

    switch (ctx->pc) {
        case 0x37569cu: goto label_37569c;
        default: break;
    }

    ctx->pc = 0x375670u;

    // 0x375670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375674: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375678: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375678u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37567c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375680: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375684: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x375684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x375688: 0x24063c07  addiu       $a2, $zero, 0x3C07
    ctx->pc = 0x375688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15367));
    // 0x37568c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37568cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375690: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x375690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x375694: 0xc0965d0  jal         func_259740
    ctx->pc = 0x375694u;
    SET_GPR_U32(ctx, 31, 0x37569Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x375694u, 0x37569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37569Cu;
label_37569c:
    // 0x37569c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3756a0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3756a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3756a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3756a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3756a8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3756a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3756ac: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x3756acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3756b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3756b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3756b4: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x3756b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x3756b8u;
}
