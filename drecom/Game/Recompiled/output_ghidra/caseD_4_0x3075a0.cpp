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

// Function: caseD_4
// Address: 0x3075a0 - 0x3075f4
void caseD_4_0x3075a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x3075a0");
#endif

    switch (ctx->pc) {
        case 0x3075d4u: goto label_3075d4;
        default: break;
    }

    ctx->pc = 0x3075a0u;

    // 0x3075a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3075a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3075a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3075a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3075a8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3075a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x3075ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3075acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3075b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3075b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3075b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3075b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3075b8: 0x34465a00  ori         $a2, $v0, 0x5A00
    ctx->pc = 0x3075b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23040);
    // 0x3075bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3075bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3075c0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3075c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3075c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3075c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3075c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3075c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3075cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3075CCu;
    SET_GPR_U32(ctx, 31, 0x3075D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3075CCu, 0x3075D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075D4u;
label_3075d4:
    // 0x3075d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3075d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3075d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3075d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3075dc: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x3075dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x3075e0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3075e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3075e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3075e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3075e8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3075e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3075ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3075ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3075f0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3075f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3075f4u;
}
