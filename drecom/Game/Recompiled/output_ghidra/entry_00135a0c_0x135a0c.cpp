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

// Function: entry_00135a0c
// Address: 0x135a0c - 0x135ab0
void entry_00135a0c_0x135a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135a0c_0x135a0c");
#endif

    switch (ctx->pc) {
        case 0x135a30u: goto label_135a30;
        case 0x135a44u: goto label_135a44;
        case 0x135a88u: goto label_135a88;
        default: break;
    }

    ctx->pc = 0x135a0cu;

    // 0x135a0c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135a10: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x135a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135a14: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135a18: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x135a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x135a1c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x135a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x135a20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x135a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x135a24: 0x24478da4  addiu       $a3, $v0, -0x725C
    ctx->pc = 0x135a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938020));
    // 0x135a28: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x135A28u;
    SET_GPR_U32(ctx, 31, 0x135A30u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x135A28u, 0x135A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A30u;
label_135a30:
    // 0x135a30: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x135A30u;
    {
        const bool branch_taken_0x135a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a30) {
            ctx->pc = 0x135AB0u;
            return;
        }
    }
    ctx->pc = 0x135A38u;
    // 0x135a38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x135a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x135a3c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x135A3Cu;
    SET_GPR_U32(ctx, 31, 0x135A44u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x135A3Cu, 0x135A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A44u;
label_135a44:
    // 0x135a44: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135a48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x135a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x135a4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x135a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x135a50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x135a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x135a54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x135a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x135a58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x135a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x135a5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x135a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x135a60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x135a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x135a64: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x135a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x135a68: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135a6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x135a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135a70: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x135a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x135a74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135a74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135a78: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x135a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x135a7c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x135a7cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135a80: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x135A80u;
    SET_GPR_U32(ctx, 31, 0x135A88u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x135A80u, 0x135A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A88u;
label_135a88:
    // 0x135a88: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135a8c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x135a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135a90: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x135a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x135a94: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x135a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x135a98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135a9c: 0x24040523  addiu       $a0, $zero, 0x523
    ctx->pc = 0x135a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1315));
    // 0x135aa0: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x135aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x135aa4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135aa4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135aa8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x135AA8u;
    SET_GPR_U32(ctx, 31, 0x135AB0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x135AA8u, 0x135AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AB0u;
}
