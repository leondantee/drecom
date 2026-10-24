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

// Function: entry_0013f630
// Address: 0x13f630 - 0x13f678
void entry_0013f630_0x13f630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f630_0x13f630");
#endif

    switch (ctx->pc) {
        case 0x13f640u: goto label_13f640;
        default: break;
    }

    ctx->pc = 0x13f630u;

    // 0x13f630: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f634: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13f634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f638: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F638u;
    SET_GPR_U32(ctx, 31, 0x13F640u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F638u, 0x13F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F640u;
label_13f640:
    // 0x13f640: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13f640u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f644: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x13f644u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13f648: 0x32070082  andi        $a3, $s0, 0x82
    ctx->pc = 0x13f648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)130);
    // 0x13f64c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x13F64Cu;
    {
        const bool branch_taken_0x13f64c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f64c) {
            ctx->pc = 0x13F678u;
            return;
        }
    }
    ctx->pc = 0x13F654u;
    // 0x13f654: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x13f654u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
    // 0x13f658: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x13f658u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f65c: 0x27a215c0  addiu       $v0, $sp, 0x15C0
    ctx->pc = 0x13f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f660: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f660u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f664: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f668: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f66c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f66cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f670: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F670u;
    SET_GPR_U32(ctx, 31, 0x13F678u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F670u, 0x13F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F678u;
}
