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

// Function: entry_0028b7e4
// Address: 0x28b7e4 - 0x28b86c
void entry_0028b7e4_0x28b7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b7e4_0x28b7e4");
#endif

    switch (ctx->pc) {
        case 0x28b83cu: goto label_28b83c;
        case 0x28b860u: goto label_28b860;
        default: break;
    }

    ctx->pc = 0x28b7e4u;

    // 0x28b7e4: 0xc6406620  lwc1        $f0, 0x6620($s2)
    ctx->pc = 0x28b7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b7e8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x28b7ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28b7ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28b7f0: 0x0  nop
    ctx->pc = 0x28b7f0u;
    // NOP
    // 0x28b7f4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28b7f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b7f8: 0x0  nop
    ctx->pc = 0x28b7f8u;
    // NOP
    // 0x28b7fc: 0x45010063  bc1t        . + 4 + (0x63 << 2)
    ctx->pc = 0x28B7FCu;
    {
        const bool branch_taken_0x28b7fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b7fc) {
            ctx->pc = 0x28B98Cu;
            return;
        }
    }
    ctx->pc = 0x28B804u;
    // 0x28b804: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b808: 0x8c222038  lw          $v0, 0x2038($at)
    ctx->pc = 0x28b808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622038u));
    // 0x28b80c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b810: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x28B810u;
    {
        const bool branch_taken_0x28b810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28b810) {
            ctx->pc = 0x28B86Cu;
            return;
        }
    }
    ctx->pc = 0x28B818u;
    // 0x28b818: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b81c: 0x24080071  addiu       $t0, $zero, 0x71
    ctx->pc = 0x28b81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x28b820: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28b820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b824: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b828: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x28b828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b82c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b830: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b830u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b834: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B834u;
    SET_GPR_U32(ctx, 31, 0x28B83Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B834u, 0x28B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B83Cu;
label_28b83c:
    // 0x28b83c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b83cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b840: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b844: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x28b844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b848: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x28b848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x28b84c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b850: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28b850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b854: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x28b854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x28b858: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B858u;
    SET_GPR_U32(ctx, 31, 0x28B860u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B858u, 0x28B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B860u;
label_28b860:
    // 0x28b860: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x28b860u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b864: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b868: 0xac202038  sw          $zero, 0x2038($at)
    ctx->pc = 0x28b868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622038u, _value); } while (0);
    ctx->pc = 0x28b86cu;
}
