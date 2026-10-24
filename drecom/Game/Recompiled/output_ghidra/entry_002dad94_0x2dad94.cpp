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

// Function: entry_002dad94
// Address: 0x2dad94 - 0x2dae2c
void entry_002dad94_0x2dad94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dad94_0x2dad94");
#endif

    switch (ctx->pc) {
        case 0x2dad9cu: goto label_2dad9c;
        case 0x2dadbcu: goto label_2dadbc;
        default: break;
    }

    ctx->pc = 0x2dad94u;

    // 0x2dad94: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DAD94u;
    SET_GPR_U32(ctx, 31, 0x2DAD9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DAD94u, 0x2DAD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD9Cu;
label_2dad9c:
    // 0x2dad9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dad9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dada0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2dada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2dada4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2dada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2dada8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dadac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dadacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dadb0: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x2dadb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dadb4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DADB4u;
    SET_GPR_U32(ctx, 31, 0x2DADBCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DADB4u, 0x2DADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADBCu;
label_2dadbc:
    // 0x2dadbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dadbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dadc0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2dadc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dadc4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2dadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2dadc8: 0x24428b20  addiu       $v0, $v0, -0x74E0
    ctx->pc = 0x2dadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937376));
    // 0x2dadcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dadccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dadd0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2dadd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dadd4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2dadd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dadd8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2dadd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2daddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2daddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dade0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2dade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dade4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2dade4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2dade8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2dade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2dadec: 0x3444000a  ori         $a0, $v0, 0xA
    ctx->pc = 0x2dadecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x2dadf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dadf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2dadf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dadf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2dadf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2dadfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2dadfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2dae00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2dae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2dae04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dae04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dae08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2dae08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2dae0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2dae0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dae10: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2dae10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2dae14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dae14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dae18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2dae18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dae1c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2dae1cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dae20: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2dae20u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dae24: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2DAE24u;
    SET_GPR_U32(ctx, 31, 0x2DAE2Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2DAE24u, 0x2DAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE2Cu;
}
