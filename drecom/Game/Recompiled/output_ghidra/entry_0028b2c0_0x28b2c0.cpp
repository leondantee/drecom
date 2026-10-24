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

// Function: entry_0028b2c0
// Address: 0x28b2c0 - 0x28b320
void entry_0028b2c0_0x28b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b2c0_0x28b2c0");
#endif

    switch (ctx->pc) {
        case 0x28b314u: goto label_28b314;
        default: break;
    }

    ctx->pc = 0x28b2c0u;

    // 0x28b2c0: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28b2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b2c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28b2c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b2c8: 0x0  nop
    ctx->pc = 0x28b2c8u;
    // NOP
    // 0x28b2cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28b2ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b2d0: 0x0  nop
    ctx->pc = 0x28b2d0u;
    // NOP
    // 0x28b2d4: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x28B2D4u;
    {
        const bool branch_taken_0x28b2d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b2d4) {
            ctx->pc = 0x28B394u;
            return;
        }
    }
    ctx->pc = 0x28B2DCu;
    // 0x28b2dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b2e0: 0x8c282038  lw          $t0, 0x2038($at)
    ctx->pc = 0x28b2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x622038u));
    // 0x28b2e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b2e8: 0x1504000d  bne         $t0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x28B2E8u;
    {
        const bool branch_taken_0x28b2e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x28b2e8) {
            ctx->pc = 0x28B320u;
            return;
        }
    }
    ctx->pc = 0x28B2F0u;
    // 0x28b2f0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28b2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b2f4: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x28b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x28b2f8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x28b2f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28b2fc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x28b2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b300: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x28b300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b304: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b308: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b308u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b30c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x28B30Cu;
    SET_GPR_U32(ctx, 31, 0x28B314u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x28B30Cu, 0x28B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B314u;
label_28b314:
    // 0x28b314: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b314u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b318: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b31c: 0xac202038  sw          $zero, 0x2038($at)
    ctx->pc = 0x28b31cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622038u, _value); } while (0);
    ctx->pc = 0x28b320u;
}
