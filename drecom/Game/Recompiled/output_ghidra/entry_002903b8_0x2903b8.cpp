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

// Function: entry_002903b8
// Address: 0x2903b8 - 0x290454
void entry_002903b8_0x2903b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002903b8_0x2903b8");
#endif

    switch (ctx->pc) {
        case 0x2903c8u: goto label_2903c8;
        case 0x29044cu: goto label_29044c;
        default: break;
    }

    ctx->pc = 0x2903b8u;

    // 0x2903b8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2903b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2903bc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2903bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2903c0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2903C0u;
    SET_GPR_U32(ctx, 31, 0x2903C8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2903C0u, 0x2903C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903C8u;
label_2903c8:
    // 0x2903c8: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x2903c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x2903cc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2903ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2903d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2903d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2903d4: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2903d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x2903d8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2903d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2903dc: 0x34621009  ori         $v0, $v1, 0x1009
    ctx->pc = 0x2903dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x2903e0: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x2903e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x2903e4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2903e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2903e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2903e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2903ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2903ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2903f0: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x2903f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x2903f4: 0x3444000a  ori         $a0, $v0, 0xA
    ctx->pc = 0x2903f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x2903f8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2903f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2903fc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2903fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x290400: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x290400u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x290404: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x290404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x290408: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x290408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x29040c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x29040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x290410: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290414: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x290414u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x290418: 0x21e38  dsll        $v1, $v0, 24
    ctx->pc = 0x290418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 24);
    // 0x29041c: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x29041cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x290420: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x290420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x290424: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x290424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290428: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x290428u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29042c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x29042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x290430: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x290430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x290434: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x290434u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    // 0x290438: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x290438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x29043c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29043cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290440: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x290440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x290444: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x290444u;
    SET_GPR_U32(ctx, 31, 0x29044Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x290444u, 0x29044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29044Cu;
label_29044c:
    // 0x29044c: 0x26d10010  addiu       $s1, $s6, 0x10
    ctx->pc = 0x29044cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x290450: 0x7220b628  paddub      $s6, $s1, $zero
    ctx->pc = 0x290450u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x290454u;
}
