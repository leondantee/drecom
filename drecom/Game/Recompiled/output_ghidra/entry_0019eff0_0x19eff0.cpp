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

// Function: entry_0019eff0
// Address: 0x19eff0 - 0x19f044
void entry_0019eff0_0x19eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eff0_0x19eff0");
#endif

    switch (ctx->pc) {
        case 0x19f01cu: goto label_19f01c;
        case 0x19f03cu: goto label_19f03c;
        default: break;
    }

    ctx->pc = 0x19eff0u;

    // 0x19eff0: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x19eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x19eff4: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x19eff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19eff8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19eff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19effc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x19effcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19f000: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x19f000u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f004: 0x13c0000f  beqz        $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x19F004u;
    {
        const bool branch_taken_0x19f004 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f004) {
            ctx->pc = 0x19F044u;
            return;
        }
    }
    ctx->pc = 0x19F00Cu;
    // 0x19f00c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f010: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x19f010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x19f014: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19F014u;
    SET_GPR_U32(ctx, 31, 0x19F01Cu);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19F014u, 0x19F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F01Cu;
label_19f01c:
    // 0x19f01c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19F01Cu;
    {
        const bool branch_taken_0x19f01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f01c) {
            ctx->pc = 0x19F05Cu;
            return;
        }
    }
    ctx->pc = 0x19F024u;
    // 0x19f024: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x19f024u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x19f028: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x19f028u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19f02c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x19f02cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19f030: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x19f030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f034: 0xc0ce394  jal         func_338E50
    ctx->pc = 0x19F034u;
    SET_GPR_U32(ctx, 31, 0x19F03Cu);
    ctx->pc = 0x338E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338E50u, 0x19F034u, 0x19F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F03Cu;
label_19f03c:
    // 0x19f03c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19F03Cu;
    {
        const bool branch_taken_0x19f03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f03c) {
            ctx->pc = 0x19F05Cu;
            return;
        }
    }
    ctx->pc = 0x19F044u;
}
