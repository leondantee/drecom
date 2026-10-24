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

// Function: entry_00279c2c
// Address: 0x279c2c - 0x279cdc
void entry_00279c2c_0x279c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279c2c_0x279c2c");
#endif

    switch (ctx->pc) {
        case 0x279c5cu: goto label_279c5c;
        case 0x279c6cu: goto label_279c6c;
        case 0x279c7cu: goto label_279c7c;
        case 0x279c8cu: goto label_279c8c;
        case 0x279c9cu: goto label_279c9c;
        case 0x279cacu: goto label_279cac;
        case 0x279cbcu: goto label_279cbc;
        case 0x279cccu: goto label_279ccc;
        default: break;
    }

    ctx->pc = 0x279c2cu;

    // 0x279c2c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279c30: 0x8c241aa0  lw          $a0, 0x1AA0($at)
    ctx->pc = 0x279c30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621AA0u));
    // 0x279c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c38: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x279C38u;
    {
        const bool branch_taken_0x279c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279c38) {
            ctx->pc = 0x279CDCu;
            return;
        }
    }
    ctx->pc = 0x279C40u;
    // 0x279c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279c48: 0xac221aa0  sw          $v0, 0x1AA0($at)
    ctx->pc = 0x279c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621AA0u, _value); } while (0);
    // 0x279c4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c54: 0xc050018  jal         func_140060
    ctx->pc = 0x279C54u;
    SET_GPR_U32(ctx, 31, 0x279C5Cu);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279C54u, 0x279C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C5Cu;
label_279c5c:
    // 0x279c5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279c60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279c60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279c64: 0xc050018  jal         func_140060
    ctx->pc = 0x279C64u;
    SET_GPR_U32(ctx, 31, 0x279C6Cu);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279C64u, 0x279C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C6Cu;
label_279c6c:
    // 0x279c6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279c70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279c70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279c74: 0xc050018  jal         func_140060
    ctx->pc = 0x279C74u;
    SET_GPR_U32(ctx, 31, 0x279C7Cu);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x279C74u, 0x279C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C7Cu;
label_279c7c:
    // 0x279c7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279c84: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279C84u;
    SET_GPR_U32(ctx, 31, 0x279C8Cu);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279C84u, 0x279C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C8Cu;
label_279c8c:
    // 0x279c8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279c90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279c90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279c94: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279C94u;
    SET_GPR_U32(ctx, 31, 0x279C9Cu);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279C94u, 0x279C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C9Cu;
label_279c9c:
    // 0x279c9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279ca0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279ca4: 0xc09e73c  jal         func_279CF0
    ctx->pc = 0x279CA4u;
    SET_GPR_U32(ctx, 31, 0x279CACu);
    ctx->pc = 0x279CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CF0u, 0x279CA4u, 0x279CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CACu;
label_279cac:
    // 0x279cac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x279cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279cb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279cb4: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279CB4u;
    SET_GPR_U32(ctx, 31, 0x279CBCu);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279CB4u, 0x279CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CBCu;
label_279cbc:
    // 0x279cbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x279cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279cc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279cc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279cc4: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279CC4u;
    SET_GPR_U32(ctx, 31, 0x279CCCu);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279CC4u, 0x279CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CCCu;
label_279ccc:
    // 0x279ccc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x279cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279cd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x279cd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279cd4: 0xc09e788  jal         func_279E20
    ctx->pc = 0x279CD4u;
    SET_GPR_U32(ctx, 31, 0x279CDCu);
    ctx->pc = 0x279E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E20u, 0x279CD4u, 0x279CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CDCu;
}
