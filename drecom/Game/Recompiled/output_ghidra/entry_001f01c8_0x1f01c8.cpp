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

// Function: entry_001f01c8
// Address: 0x1f01c8 - 0x1f0248
void entry_001f01c8_0x1f01c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f01c8_0x1f01c8");
#endif

    switch (ctx->pc) {
        case 0x1f01e8u: goto label_1f01e8;
        case 0x1f0218u: goto label_1f0218;
        default: break;
    }

    ctx->pc = 0x1f01c8u;

    // 0x1f01c8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f01cc: 0x36263c00  ori         $a2, $s1, 0x3C00
    ctx->pc = 0x1f01ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)15360);
    // 0x1f01d0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f01d4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1f01d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1f01d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f01d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f01dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f01dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f01e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F01E0u;
    SET_GPR_U32(ctx, 31, 0x1F01E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F01E0u, 0x1F01E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F01E8u;
label_1f01e8:
    // 0x1f01e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f01e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f01ec: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f01f0: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x1f01f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f01f4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f01f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f01f8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f01fc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f01fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f0200: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f0200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0204: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x1f0204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x1f0208: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1f0208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1f020c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f020cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0210: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F0210u;
    SET_GPR_U32(ctx, 31, 0x1F0218u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F0210u, 0x1F0218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0218u;
label_1f0218:
    // 0x1f0218: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f0218u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f021c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f021cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f0220: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f0220u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f0224: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x1f0224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x1f0228: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f0228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f022c: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f022cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1f0230: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0234: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0238: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f0238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f023c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f0240: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1f0240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f0244: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f0244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1f0248u;
}
