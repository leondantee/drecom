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

// Function: entry_0020a5fc
// Address: 0x20a5fc - 0x20a6bc
void entry_0020a5fc_0x20a5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a5fc_0x20a5fc");
#endif

    switch (ctx->pc) {
        case 0x20a670u: goto label_20a670;
        case 0x20a680u: goto label_20a680;
        default: break;
    }

    ctx->pc = 0x20a5fcu;

    // 0x20a5fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a600: 0x8c2593e0  lw          $a1, -0x6C20($at)
    ctx->pc = 0x20a600u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6193E0u));
    // 0x20a604: 0x14a0002d  bnez        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x20A604u;
    {
        const bool branch_taken_0x20a604 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a604) {
            ctx->pc = 0x20A6BCu;
            return;
        }
    }
    ctx->pc = 0x20A60Cu;
    // 0x20a60c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20a60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a610: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a614: 0xac2693e0  sw          $a2, -0x6C20($at)
    ctx->pc = 0x20a614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6193E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E0u, _value); } while (0);
    // 0x20a618: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a61c: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x20a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x20a620: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x20a620u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x6192C0u));
    // 0x20a624: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x20a624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x20a628: 0x24a39390  addiu       $v1, $a1, -0x6C70
    ctx->pc = 0x20a628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939536));
    // 0x20a62c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x20a62cu;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x619390u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x619390u, _value); } while (0);
    // 0x20a630: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a634: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a638: 0xac2493e4  sw          $a0, -0x6C1C($at)
    ctx->pc = 0x20a638u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6193E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E4u, _value); } while (0);
    // 0x20a63c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x20a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x20a640: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x20a640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x20a644: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x20a644u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3EDCE0u));
    // 0x20a648: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a64c: 0x246393a0  addiu       $v1, $v1, -0x6C60
    ctx->pc = 0x20a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939552));
    // 0x20a650: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x20a650u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6193A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6193A0u, _value); } while (0);
    // 0x20a654: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x20a654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x20a658: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x20a658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x20a65c: 0x24c593a0  addiu       $a1, $a2, -0x6C60
    ctx->pc = 0x20a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939552));
    // 0x20a660: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a664: 0x24669390  addiu       $a2, $v1, -0x6C70
    ctx->pc = 0x20a664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939536));
    // 0x20a668: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x20A668u;
    SET_GPR_U32(ctx, 31, 0x20A670u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x20A668u, 0x20A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A670u;
label_20a670:
    // 0x20a670: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20a670u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20a674: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x20a674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x20a678: 0xc067588  jal         func_19D620
    ctx->pc = 0x20A678u;
    SET_GPR_U32(ctx, 31, 0x20A680u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x20A678u, 0x20A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A680u;
label_20a680:
    // 0x20a680: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a684: 0xe4209404  swc1        $f0, -0x6BFC($at)
    ctx->pc = 0x20a684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619404u, _value); } while (0); }
    // 0x20a688: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a68c: 0xc4219404  lwc1        $f1, -0x6BFC($at)
    ctx->pc = 0x20a68cu;
    { uint32_t bits = FAST_READ32(0x619404u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a690: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x20a690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x20a694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a698: 0x0  nop
    ctx->pc = 0x20a698u;
    // NOP
    // 0x20a69c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20a69cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a6a0: 0x0  nop
    ctx->pc = 0x20a6a0u;
    // NOP
    // 0x20a6a4: 0x45010086  bc1t        . + 4 + (0x86 << 2)
    ctx->pc = 0x20A6A4u;
    {
        const bool branch_taken_0x20a6a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a6a4) {
            ctx->pc = 0x20A8C0u;
            return;
        }
    }
    ctx->pc = 0x20A6ACu;
    // 0x20a6ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a6b0: 0xac2093e4  sw          $zero, -0x6C1C($at)
    ctx->pc = 0x20a6b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6193E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E4u, _value); } while (0);
    // 0x20a6b4: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x20A6B4u;
    {
        const bool branch_taken_0x20a6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6b4) {
            ctx->pc = 0x20A8C0u;
            return;
        }
    }
    ctx->pc = 0x20A6BCu;
}
