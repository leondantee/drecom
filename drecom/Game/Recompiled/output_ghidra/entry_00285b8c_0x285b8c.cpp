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

// Function: entry_00285b8c
// Address: 0x285b8c - 0x285be4
void entry_00285b8c_0x285b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285b8c_0x285b8c");
#endif

    switch (ctx->pc) {
        case 0x285ba0u: goto label_285ba0;
        case 0x285bd4u: goto label_285bd4;
        default: break;
    }

    ctx->pc = 0x285b8cu;

    // 0x285b8c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x285b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285b90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285b90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285b94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285b94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285b98: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285B98u;
    SET_GPR_U32(ctx, 31, 0x285BA0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285B98u, 0x285BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BA0u;
label_285ba0:
    // 0x285ba0: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285ba4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x285ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x285ba8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x285ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x285bac: 0xae22685c  sw          $v0, 0x685C($s1)
    ctx->pc = 0x285bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 2));
    // 0x285bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285bb4: 0xa222660c  sb          $v0, 0x660C($s1)
    ctx->pc = 0x285bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26124), (uint8_t)GPR_U32(ctx, 2));
    // 0x285bb8: 0xa220660d  sb          $zero, 0x660D($s1)
    ctx->pc = 0x285bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26125), (uint8_t)GPR_U32(ctx, 0));
    // 0x285bbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285bc0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x285bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x285bc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285bc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285bc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285bc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285bcc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x285BCCu;
    SET_GPR_U32(ctx, 31, 0x285BD4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x285BCCu, 0x285BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BD4u;
label_285bd4:
    // 0x285bd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x285bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x285bd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285bdc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285be0: 0xe4206178  swc1        $f0, 0x6178($at)
    ctx->pc = 0x285be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x396178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x396178u, _value); } while (0); }
    ctx->pc = 0x285be4u;
}
