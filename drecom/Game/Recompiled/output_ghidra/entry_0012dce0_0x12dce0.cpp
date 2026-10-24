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

// Function: entry_0012dce0
// Address: 0x12dce0 - 0x12dd84
void entry_0012dce0_0x12dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dce0_0x12dce0");
#endif

    switch (ctx->pc) {
        case 0x12dd04u: goto label_12dd04;
        case 0x12dd18u: goto label_12dd18;
        case 0x12dd5cu: goto label_12dd5c;
        default: break;
    }

    ctx->pc = 0x12dce0u;

    // 0x12dce0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dce4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12dce8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dcec: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x12dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x12dcf0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12dcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12dcf4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12dcf8: 0x24478d80  addiu       $a3, $v0, -0x7280
    ctx->pc = 0x12dcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
    // 0x12dcfc: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x12DCFCu;
    SET_GPR_U32(ctx, 31, 0x12DD04u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12DCFCu, 0x12DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD04u;
label_12dd04:
    // 0x12dd04: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12DD04u;
    {
        const bool branch_taken_0x12dd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dd04) {
            ctx->pc = 0x12DD84u;
            return;
        }
    }
    ctx->pc = 0x12DD0Cu;
    // 0x12dd0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12dd10: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12DD10u;
    SET_GPR_U32(ctx, 31, 0x12DD18u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12DD10u, 0x12DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD18u;
label_12dd18:
    // 0x12dd18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dd1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12dd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12dd20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12dd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12dd24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12dd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12dd28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12dd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12dd2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12dd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12dd30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12dd34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12dd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12dd38: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12dd38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12dd3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dd40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12dd44: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x12dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12dd48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12dd48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12dd4c: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x12dd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12dd50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12dd50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12dd54: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12DD54u;
    SET_GPR_U32(ctx, 31, 0x12DD5Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12DD54u, 0x12DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD5Cu;
label_12dd5c:
    // 0x12dd5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dd60: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12dd64: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12dd68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12dd6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12dd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12dd70: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x12dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x12dd74: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x12dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x12dd78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12dd78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12dd7c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12DD7Cu;
    SET_GPR_U32(ctx, 31, 0x12DD84u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12DD7Cu, 0x12DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD84u;
}
