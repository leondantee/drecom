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

// Function: entry_0015af40
// Address: 0x15af40 - 0x15afac
void entry_0015af40_0x15af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015af40_0x15af40");
#endif

    switch (ctx->pc) {
        case 0x15af58u: goto label_15af58;
        case 0x15af64u: goto label_15af64;
        case 0x15afa4u: goto label_15afa4;
        default: break;
    }

    ctx->pc = 0x15af40u;

    // 0x15af40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15af40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15af44: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15af44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15af48: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x15af48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15af4c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x15af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x15af50: 0xc095c94  jal         func_257250
    ctx->pc = 0x15AF50u;
    SET_GPR_U32(ctx, 31, 0x15AF58u);
    ctx->pc = 0x257250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257250u, 0x15AF50u, 0x15AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF58u;
label_15af58:
    // 0x15af58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15af58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15af5c: 0xc07932c  jal         func_1E4CB0
    ctx->pc = 0x15AF5Cu;
    SET_GPR_U32(ctx, 31, 0x15AF64u);
    ctx->pc = 0x1E4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4CB0u, 0x15AF5Cu, 0x15AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF64u;
label_15af64:
    // 0x15af64: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15af68: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15af68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15af6c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x15AF6Cu;
    {
        const bool branch_taken_0x15af6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af6c) {
            ctx->pc = 0x15B014u;
            return;
        }
    }
    ctx->pc = 0x15AF74u;
    // 0x15af74: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15af78: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x15af78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x15af7c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x15AF7Cu;
    {
        const bool branch_taken_0x15af7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15af7c) {
            ctx->pc = 0x15B014u;
            return;
        }
    }
    ctx->pc = 0x15AF84u;
    // 0x15af84: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x15af84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15af88: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15af88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15af8c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x15af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x15af90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15AF90u;
    {
        const bool branch_taken_0x15af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af90) {
            ctx->pc = 0x15AFACu;
            return;
        }
    }
    ctx->pc = 0x15AF98u;
    // 0x15af98: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15af98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15af9c: 0xc05c7e0  jal         func_171F80
    ctx->pc = 0x15AF9Cu;
    SET_GPR_U32(ctx, 31, 0x15AFA4u);
    ctx->pc = 0x171F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F80u, 0x15AF9Cu, 0x15AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFA4u;
label_15afa4:
    // 0x15afa4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15AFA4u;
    {
        const bool branch_taken_0x15afa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afa4) {
            ctx->pc = 0x15AFE0u;
            return;
        }
    }
    ctx->pc = 0x15AFACu;
}
