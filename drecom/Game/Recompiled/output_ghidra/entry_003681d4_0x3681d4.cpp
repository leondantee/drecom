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

// Function: entry_003681d4
// Address: 0x3681d4 - 0x36821c
void entry_003681d4_0x3681d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003681d4_0x3681d4");
#endif

    ctx->pc = 0x3681d4u;

    // 0x3681d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3681d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3681d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3681d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3681dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3681dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3681e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3681e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3681e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3681e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3681e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3681e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3681ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3681ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3681f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3681f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3681f4: 0x34440606  ori         $a0, $v0, 0x606
    ctx->pc = 0x3681f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1542);
    // 0x3681f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3681f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3681fc: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3681fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x368200: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x368200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x368204: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x368204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368208: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x368208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36820c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x36820cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x368210: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x368210u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x368214: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x368214u;
    SET_GPR_U32(ctx, 31, 0x36821Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x368214u, 0x36821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36821Cu;
}
