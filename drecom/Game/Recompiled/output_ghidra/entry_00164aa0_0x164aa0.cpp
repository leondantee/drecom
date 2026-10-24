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

// Function: entry_00164aa0
// Address: 0x164aa0 - 0x164af0
void entry_00164aa0_0x164aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164aa0_0x164aa0");
#endif

    switch (ctx->pc) {
        case 0x164ad8u: goto label_164ad8;
        case 0x164aecu: goto label_164aec;
        default: break;
    }

    ctx->pc = 0x164aa0u;

    // 0x164aa0: 0x92020055  lbu         $v0, 0x55($s0)
    ctx->pc = 0x164aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
    // 0x164aa4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164aa8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x164aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x164aac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x164aacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x164ab0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x164ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x164ab4: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x164ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x164ab8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x164ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x164abc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x164abcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x164ac0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x164ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x164ac4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164ac8: 0x24445460  addiu       $a0, $v0, 0x5460
    ctx->pc = 0x164ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x164acc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x164accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x164ad0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x164AD0u;
    SET_GPR_U32(ctx, 31, 0x164AD8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x164AD0u, 0x164AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AD8u;
label_164ad8:
    // 0x164ad8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164adc: 0x24445460  addiu       $a0, $v0, 0x5460
    ctx->pc = 0x164adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x164ae0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x164ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x164ae4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x164AE4u;
    SET_GPR_U32(ctx, 31, 0x164AECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x164AE4u, 0x164AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164AECu;
label_164aec:
    // 0x164aec: 0x0  nop
    ctx->pc = 0x164aecu;
    // NOP
    ctx->pc = 0x164af0u;
}
