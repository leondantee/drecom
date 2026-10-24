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

// Function: entry_002fabd4
// Address: 0x2fabd4 - 0x2fac40
void entry_002fabd4_0x2fabd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fabd4_0x2fabd4");
#endif

    switch (ctx->pc) {
        case 0x2fac34u: goto label_2fac34;
        default: break;
    }

    ctx->pc = 0x2fabd4u;

    // 0x2fabd4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fabd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fabd8: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2fabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2fabdc: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x2fabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x2fabe0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2fabe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fabe4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fabe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fabe8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2fabe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fabec: 0x34e20300  ori         $v0, $a3, 0x300
    ctx->pc = 0x2fabecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)768);
    // 0x2fabf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fabf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fabf4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fabf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fabf8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2fabf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fabfc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fabfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fac00: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fac00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fac04: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x2fac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2fac08: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2fac08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fac0c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2fac0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2fac10: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fac10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fac14: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x2fac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x2fac18: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2fac18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fac1c: 0xa33824  and         $a3, $a1, $v1
    ctx->pc = 0x2fac1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fac20: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fac20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fac24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fac24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fac28: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fac28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fac2c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FAC2Cu;
    SET_GPR_U32(ctx, 31, 0x2FAC34u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FAC2Cu, 0x2FAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC34u;
label_2fac34:
    // 0x2fac34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fac34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fac38: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FAC38u;
    SET_GPR_U32(ctx, 31, 0x2FAC40u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FAC38u, 0x2FAC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC40u;
}
