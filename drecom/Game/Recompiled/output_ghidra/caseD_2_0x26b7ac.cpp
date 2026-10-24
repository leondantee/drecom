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
// Address: 0x26b7ac - 0x26b804
void caseD_2_0x26b7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x26b7ac");
#endif

    switch (ctx->pc) {
        case 0x26b7ccu: goto label_26b7cc;
        default: break;
    }

    ctx->pc = 0x26b7acu;

    // 0x26b7ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b7b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b7b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26b7b8: 0x2406056a  addiu       $a2, $zero, 0x56A
    ctx->pc = 0x26b7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
    // 0x26b7bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b7c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26b7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26b7c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26B7C4u;
    SET_GPR_U32(ctx, 31, 0x26B7CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26B7C4u, 0x26B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7CCu;
label_26b7cc:
    // 0x26b7cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b7d0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x26b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26b7d4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x26b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x26b7d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x26b7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26b7dc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x26b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x26b7e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b7e4: 0xa46013c0  sh          $zero, 0x13C0($v1)
    ctx->pc = 0x26b7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5056), (uint16_t)GPR_U32(ctx, 0));
    // 0x26b7e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b7ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b7f0: 0xa46413c2  sh          $a0, 0x13C2($v1)
    ctx->pc = 0x26b7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5058), (uint16_t)GPR_U32(ctx, 4));
    // 0x26b7f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b7f8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26b7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26b7fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26b800: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26b800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x26b804u;
}
