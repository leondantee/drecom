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

// Function: entry_00358e90
// Address: 0x358e90 - 0x358ecc
void entry_00358e90_0x358e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358e90_0x358e90");
#endif

    switch (ctx->pc) {
        case 0x358ec0u: goto label_358ec0;
        default: break;
    }

    ctx->pc = 0x358e90u;

    // 0x358e90: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x358e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x358e94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x358e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x358e98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x358e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x358e9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358ea0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x358ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x358ea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x358ea8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x358ea8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x358eac: 0x24044502  addiu       $a0, $zero, 0x4502
    ctx->pc = 0x358eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17666));
    // 0x358eb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358eb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358eb4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x358eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358eb8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x358EB8u;
    SET_GPR_U32(ctx, 31, 0x358EC0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x358EB8u, 0x358EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358EC0u;
label_358ec0:
    // 0x358ec0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358ec0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358ec4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x358EC4u;
    SET_GPR_U32(ctx, 31, 0x358ECCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x358EC4u, 0x358ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358ECCu;
}
