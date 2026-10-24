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

// Function: entry_001360d8
// Address: 0x1360d8 - 0x136170
void entry_001360d8_0x1360d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001360d8_0x1360d8");
#endif

    switch (ctx->pc) {
        case 0x136110u: goto label_136110;
        case 0x136120u: goto label_136120;
        case 0x136144u: goto label_136144;
        default: break;
    }

    ctx->pc = 0x1360d8u;

    // 0x1360d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1360d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1360dc: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x1360dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x1360e0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1360e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1360e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1360e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1360e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1360e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1360ec: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x1360ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    // 0x1360f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1360f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1360f4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1360f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1360f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1360f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1360fc: 0x24452290  addiu       $a1, $v0, 0x2290
    ctx->pc = 0x1360fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8848));
    // 0x136100: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x136100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x136104: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x136104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x136108: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x136108u;
    SET_GPR_U32(ctx, 31, 0x136110u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x136108u, 0x136110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136110u;
label_136110:
    // 0x136110: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x136110u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x136114: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x136114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x136118: 0xc040c24  jal         func_103090
    ctx->pc = 0x136118u;
    SET_GPR_U32(ctx, 31, 0x136120u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x136120u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136120u) { return; }
    ctx->pc = 0x136120u;
label_136120:
    // 0x136120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136124: 0x0  nop
    ctx->pc = 0x136124u;
    // NOP
    // 0x136128: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x13612c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x13612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x136130: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x136130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x136134: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x136134u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x136138: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x136138u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13613c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x13613Cu;
    SET_GPR_U32(ctx, 31, 0x136144u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x136144u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136144u) { return; }
    ctx->pc = 0x136144u;
label_136144:
    // 0x136144: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x136144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x136148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13614c: 0x0  nop
    ctx->pc = 0x13614cu;
    // NOP
    // 0x136150: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x136154: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x136154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x136158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13615c: 0x0  nop
    ctx->pc = 0x13615cu;
    // NOP
    // 0x136160: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x136160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x136164: 0x92020097  lbu         $v0, 0x97($s0)
    ctx->pc = 0x136164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x136168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x136168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13616c: 0xa2020097  sb          $v0, 0x97($s0)
    ctx->pc = 0x13616cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x136170u;
}
