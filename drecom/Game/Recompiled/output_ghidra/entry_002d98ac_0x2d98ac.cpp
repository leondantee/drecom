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

// Function: entry_002d98ac
// Address: 0x2d98ac - 0x2d9910
void entry_002d98ac_0x2d98ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d98ac_0x2d98ac");
#endif

    switch (ctx->pc) {
        case 0x2d98d8u: goto label_2d98d8;
        case 0x2d9904u: goto label_2d9904;
        default: break;
    }

    ctx->pc = 0x2d98acu;

    // 0x2d98ac: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x2d98acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2d98b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d98b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d98b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d98b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d98bc: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2d98bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2d98c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d98c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d98c4: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2d98c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d98c8: 0x24640244  addiu       $a0, $v1, 0x244
    ctx->pc = 0x2d98c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 580));
    // 0x2d98cc: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2d98ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2d98d0: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2D98D0u;
    SET_GPR_U32(ctx, 31, 0x2D98D8u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2D98D0u, 0x2D98D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98D8u;
label_2d98d8:
    // 0x2d98d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2d98d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d98dc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2d98dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2d98e0: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x2d98e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2d98e4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d98e8: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2d98e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2d98ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d98ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d98f0: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2d98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2d98f4: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x2d98f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x2d98f8: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x2d98f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d98fc: 0xc0759c4  jal         func_1D6710
    ctx->pc = 0x2D98FCu;
    SET_GPR_U32(ctx, 31, 0x2D9904u);
    ctx->pc = 0x1D6710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6710u, 0x2D98FCu, 0x2D9904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9904u;
label_2d9904:
    // 0x2d9904: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d9904u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d9908: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d9908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d990c: 0x0  nop
    ctx->pc = 0x2d990cu;
    // NOP
    ctx->pc = 0x2d9910u;
}
