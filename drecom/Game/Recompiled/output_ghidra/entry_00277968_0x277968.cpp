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

// Function: entry_00277968
// Address: 0x277968 - 0x2779d0
void entry_00277968_0x277968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277968_0x277968");
#endif

    switch (ctx->pc) {
        case 0x27798cu: goto label_27798c;
        case 0x277998u: goto label_277998;
        case 0x2779bcu: goto label_2779bc;
        case 0x2779c8u: goto label_2779c8;
        default: break;
    }

    ctx->pc = 0x277968u;

    // 0x277968: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x277968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27796c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27796cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277970: 0x2442de40  addiu       $v0, $v0, -0x21C0
    ctx->pc = 0x277970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958656));
    // 0x277974: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x277974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277978: 0x24045701  addiu       $a0, $zero, 0x5701
    ctx->pc = 0x277978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22273));
    // 0x27797c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27797cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277980: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277980u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277984: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277984u;
    SET_GPR_U32(ctx, 31, 0x27798Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277984u, 0x27798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27798Cu;
label_27798c:
    // 0x27798c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27798cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277990: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277990u;
    SET_GPR_U32(ctx, 31, 0x277998u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277990u, 0x277998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277998u;
label_277998:
    // 0x277998: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x277998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27799c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2779a0: 0x2442de40  addiu       $v0, $v0, -0x21C0
    ctx->pc = 0x2779a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958656));
    // 0x2779a4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2779a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2779a8: 0x24045a01  addiu       $a0, $zero, 0x5A01
    ctx->pc = 0x2779a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x2779ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2779acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2779b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2779b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2779b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2779B4u;
    SET_GPR_U32(ctx, 31, 0x2779BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2779B4u, 0x2779BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779BCu;
label_2779bc:
    // 0x2779bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2779bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2779c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2779C0u;
    SET_GPR_U32(ctx, 31, 0x2779C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2779C0u, 0x2779C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779C8u;
label_2779c8:
    // 0x2779c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2779c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2779cc: 0x0  nop
    ctx->pc = 0x2779ccu;
    // NOP
    ctx->pc = 0x2779d0u;
}
