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

// Function: entry_0027cd74
// Address: 0x27cd74 - 0x27cdc0
void entry_0027cd74_0x27cd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027cd74_0x27cd74");
#endif

    switch (ctx->pc) {
        case 0x27cd8cu: goto label_27cd8c;
        case 0x27cda4u: goto label_27cda4;
        case 0x27cdbcu: goto label_27cdbc;
        default: break;
    }

    ctx->pc = 0x27cd74u;

    // 0x27cd74: 0x2404040f  addiu       $a0, $zero, 0x40F
    ctx->pc = 0x27cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x27cd78: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cd7c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cd80: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cd80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cd84: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CD84u;
    SET_GPR_U32(ctx, 31, 0x27CD8Cu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CD84u, 0x27CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CD8Cu;
label_27cd8c:
    // 0x27cd8c: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x27cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x27cd90: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cd94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cd98: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cd98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cd9c: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CD9Cu;
    SET_GPR_U32(ctx, 31, 0x27CDA4u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CD9Cu, 0x27CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDA4u;
label_27cda4:
    // 0x27cda4: 0x24040411  addiu       $a0, $zero, 0x411
    ctx->pc = 0x27cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x27cda8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27cdac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27cdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cdb0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27cdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27cdb4: 0xc067c24  jal         func_19F090
    ctx->pc = 0x27CDB4u;
    SET_GPR_U32(ctx, 31, 0x27CDBCu);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x27CDB4u, 0x27CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CDBCu;
label_27cdbc:
    // 0x27cdbc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27cdbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x27cdc0u;
}
