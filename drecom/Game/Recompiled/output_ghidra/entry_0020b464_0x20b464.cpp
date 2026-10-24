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

// Function: entry_0020b464
// Address: 0x20b464 - 0x20b524
void entry_0020b464_0x20b464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b464_0x20b464");
#endif

    switch (ctx->pc) {
        case 0x20b4d8u: goto label_20b4d8;
        case 0x20b4e8u: goto label_20b4e8;
        default: break;
    }

    ctx->pc = 0x20b464u;

    // 0x20b464: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b468: 0x8c2293e0  lw          $v0, -0x6C20($at)
    ctx->pc = 0x20b468u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6193E0u));
    // 0x20b46c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x20B46Cu;
    {
        const bool branch_taken_0x20b46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b46c) {
            ctx->pc = 0x20B524u;
            return;
        }
    }
    ctx->pc = 0x20B474u;
    // 0x20b474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b478: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b47c: 0xac2293e0  sw          $v0, -0x6C20($at)
    ctx->pc = 0x20b47cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6193E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E0u, _value); } while (0);
    // 0x20b480: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b484: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x20b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20b488: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20b488u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6192C0u));
    // 0x20b48c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b490: 0x24429390  addiu       $v0, $v0, -0x6C70
    ctx->pc = 0x20b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x20b494: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20b494u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x619390u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x619390u, _value); } while (0);
    // 0x20b498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b49c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b4a0: 0xac2293e4  sw          $v0, -0x6C1C($at)
    ctx->pc = 0x20b4a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6193E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E4u, _value); } while (0);
    // 0x20b4a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20b4a8: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x20b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20b4ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20b4acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3EDCE0u));
    // 0x20b4b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b4b4: 0x244293a0  addiu       $v0, $v0, -0x6C60
    ctx->pc = 0x20b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939552));
    // 0x20b4b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20b4b8u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6193A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6193A0u, _value); } while (0);
    // 0x20b4bc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x20b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x20b4c0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b4c4: 0x246593a0  addiu       $a1, $v1, -0x6C60
    ctx->pc = 0x20b4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939552));
    // 0x20b4c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b4cc: 0x24669390  addiu       $a2, $v1, -0x6C70
    ctx->pc = 0x20b4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939536));
    // 0x20b4d0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x20B4D0u;
    SET_GPR_U32(ctx, 31, 0x20B4D8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x20B4D0u, 0x20B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4D8u;
label_20b4d8:
    // 0x20b4d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20b4d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20b4dc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x20b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x20b4e0: 0xc067588  jal         func_19D620
    ctx->pc = 0x20B4E0u;
    SET_GPR_U32(ctx, 31, 0x20B4E8u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x20B4E0u, 0x20B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4E8u;
label_20b4e8:
    // 0x20b4e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b4ec: 0xe4209404  swc1        $f0, -0x6BFC($at)
    ctx->pc = 0x20b4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619404u, _value); } while (0); }
    // 0x20b4f0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b4f4: 0xc4219404  lwc1        $f1, -0x6BFC($at)
    ctx->pc = 0x20b4f4u;
    { uint32_t bits = FAST_READ32(0x619404u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b4f8: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x20b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x20b4fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20b4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b500: 0x0  nop
    ctx->pc = 0x20b500u;
    // NOP
    // 0x20b504: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20b504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b508: 0x0  nop
    ctx->pc = 0x20b508u;
    // NOP
    // 0x20b50c: 0x45010086  bc1t        . + 4 + (0x86 << 2)
    ctx->pc = 0x20B50Cu;
    {
        const bool branch_taken_0x20b50c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b50c) {
            ctx->pc = 0x20B728u;
            return;
        }
    }
    ctx->pc = 0x20B514u;
    // 0x20b514: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b518: 0xac2093e4  sw          $zero, -0x6C1C($at)
    ctx->pc = 0x20b518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6193E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E4u, _value); } while (0);
    // 0x20b51c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x20B51Cu;
    {
        const bool branch_taken_0x20b51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b51c) {
            ctx->pc = 0x20B728u;
            return;
        }
    }
    ctx->pc = 0x20B524u;
}
