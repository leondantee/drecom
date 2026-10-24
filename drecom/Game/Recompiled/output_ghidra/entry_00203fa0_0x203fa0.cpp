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

// Function: entry_00203fa0
// Address: 0x203fa0 - 0x204000
void entry_00203fa0_0x203fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203fa0_0x203fa0");
#endif

    switch (ctx->pc) {
        case 0x203fb0u: goto label_203fb0;
        case 0x203fe4u: goto label_203fe4;
        default: break;
    }

    ctx->pc = 0x203fa0u;

    // 0x203fa0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x203fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203fa4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203fa8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x203FA8u;
    SET_GPR_U32(ctx, 31, 0x203FB0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x203FA8u, 0x203FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FB0u;
label_203fb0:
    // 0x203fb0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x203FB0u;
    {
        const bool branch_taken_0x203fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203fb0) {
            ctx->pc = 0x2040B8u;
            return;
        }
    }
    ctx->pc = 0x203FB8u;
    // 0x203fb8: 0x3c073dcc  lui         $a3, 0x3DCC
    ctx->pc = 0x203fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15820 << 16));
    // 0x203fbc: 0x34e5cccd  ori         $a1, $a3, 0xCCCD
    ctx->pc = 0x203fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x203fc0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x203fc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x203fc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x203fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203fc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x203fc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x203fcc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203fd0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x203fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203fd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x203fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203fd8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x203fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203fdc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x203FDCu;
    SET_GPR_U32(ctx, 31, 0x203FE4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x203FDCu, 0x203FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FE4u;
label_203fe4:
    // 0x203fe4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203fe8: 0x84269270  lh          $a2, -0x6D90($at)
    ctx->pc = 0x203fe8u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x619270u));
    // 0x203fec: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x203fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x203ff0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203ff4: 0xa4279270  sh          $a3, -0x6D90($at)
    ctx->pc = 0x203ff4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
    // 0x203ff8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x203FF8u;
    {
        const bool branch_taken_0x203ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ff8) {
            ctx->pc = 0x2040B8u;
            return;
        }
    }
    ctx->pc = 0x204000u;
}
