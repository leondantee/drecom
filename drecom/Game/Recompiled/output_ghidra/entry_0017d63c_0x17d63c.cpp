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

// Function: entry_0017d63c
// Address: 0x17d63c - 0x17d684
void entry_0017d63c_0x17d63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d63c_0x17d63c");
#endif

    switch (ctx->pc) {
        case 0x17d660u: goto label_17d660;
        default: break;
    }

    ctx->pc = 0x17d63cu;

    // 0x17d63c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d640: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d644: 0x24022c1a  addiu       $v0, $zero, 0x2C1A
    ctx->pc = 0x17d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11290));
    // 0x17d648: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d64c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d650: 0x2442ec90  addiu       $v0, $v0, -0x1370
    ctx->pc = 0x17d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962320));
    // 0x17d654: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17d654u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17d658: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D658u;
    SET_GPR_U32(ctx, 31, 0x17D660u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D658u, 0x17D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D660u;
label_17d660:
    // 0x17d660: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d664: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x17d664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x17d668: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x17d668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17d66c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x17d66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x17d670: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D670u;
    {
        const bool branch_taken_0x17d670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d670) {
            ctx->pc = 0x17D684u;
            return;
        }
    }
    ctx->pc = 0x17D678u;
    // 0x17d678: 0xa380809c  sb          $zero, -0x7F64($gp)
    ctx->pc = 0x17d678u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934684), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d67c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x17D67Cu;
    {
        const bool branch_taken_0x17d67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d67c) {
            ctx->pc = 0x17D85Cu;
            return;
        }
    }
    ctx->pc = 0x17D684u;
}
