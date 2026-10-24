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

// Function: entry_00285c4c
// Address: 0x285c4c - 0x285ca8
void entry_00285c4c_0x285c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285c4c_0x285c4c");
#endif

    switch (ctx->pc) {
        case 0x285c64u: goto label_285c64;
        case 0x285c98u: goto label_285c98;
        default: break;
    }

    ctx->pc = 0x285c4cu;

    // 0x285c4c: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x285c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285c50: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x285c50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x285c54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285c54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285c58: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285c58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285c5c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285C5Cu;
    SET_GPR_U32(ctx, 31, 0x285C64u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285C5Cu, 0x285C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C64u;
label_285c64:
    // 0x285c64: 0x8e30685c  lw          $s0, 0x685C($s1)
    ctx->pc = 0x285c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285c68: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x285c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x285c6c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x285c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x285c70: 0xae22685c  sw          $v0, 0x685C($s1)
    ctx->pc = 0x285c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 2));
    // 0x285c74: 0xa220660c  sb          $zero, 0x660C($s1)
    ctx->pc = 0x285c74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26124), (uint8_t)GPR_U32(ctx, 0));
    // 0x285c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285c7c: 0xa222660d  sb          $v0, 0x660D($s1)
    ctx->pc = 0x285c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26125), (uint8_t)GPR_U32(ctx, 2));
    // 0x285c80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285c84: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x285c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x285c88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285c8c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285c8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285c90: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x285C90u;
    SET_GPR_U32(ctx, 31, 0x285C98u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x285C90u, 0x285C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C98u;
label_285c98:
    // 0x285c98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x285c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x285c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285ca0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285ca4: 0xe4206178  swc1        $f0, 0x6178($at)
    ctx->pc = 0x285ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x396178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x396178u, _value); } while (0); }
    ctx->pc = 0x285ca8u;
}
