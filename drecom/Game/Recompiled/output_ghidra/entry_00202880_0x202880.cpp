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

// Function: entry_00202880
// Address: 0x202880 - 0x2028c8
void entry_00202880_0x202880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202880_0x202880");
#endif

    ctx->pc = 0x202880u;

    // 0x202880: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202884: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x202884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB0u));
    // 0x202888: 0x24430013  addiu       $v1, $v0, 0x13
    ctx->pc = 0x202888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x20288c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x20288cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202890: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x202890u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x202894: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x202894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x202898: 0x34a30808  ori         $v1, $a1, 0x808
    ctx->pc = 0x202898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2056);
    // 0x20289c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x20289cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2028a0: 0x3c031d07  lui         $v1, 0x1D07
    ctx->pc = 0x2028a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7431 << 16));
    // 0x2028a4: 0x34632800  ori         $v1, $v1, 0x2800
    ctx->pc = 0x2028a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10240);
    // 0x2028a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2028a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2028ac: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2028acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2028b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2028b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2028b4: 0x24450da0  addiu       $a1, $v0, 0xDA0
    ctx->pc = 0x2028b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x2028b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2028b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2028bc: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x2028bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2028c0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2028C0u;
    SET_GPR_U32(ctx, 31, 0x2028C8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2028C0u, 0x2028C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028C8u;
}
