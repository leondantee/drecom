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

// Function: entry_00203f40
// Address: 0x203f40 - 0x203fa0
void entry_00203f40_0x203f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203f40_0x203f40");
#endif

    switch (ctx->pc) {
        case 0x203f50u: goto label_203f50;
        case 0x203f84u: goto label_203f84;
        default: break;
    }

    ctx->pc = 0x203f40u;

    // 0x203f40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x203f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203f44: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203f48: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x203F48u;
    SET_GPR_U32(ctx, 31, 0x203F50u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x203F48u, 0x203F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F50u;
label_203f50:
    // 0x203f50: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x203F50u;
    {
        const bool branch_taken_0x203f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f50) {
            ctx->pc = 0x2040B8u;
            return;
        }
    }
    ctx->pc = 0x203F58u;
    // 0x203f58: 0x3c073dcc  lui         $a3, 0x3DCC
    ctx->pc = 0x203f58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15820 << 16));
    // 0x203f5c: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x203f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x203f60: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x203f60u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x203f64: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x203f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203f68: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x203f68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x203f6c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203f70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203f74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x203f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203f78: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x203f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203f7c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x203F7Cu;
    SET_GPR_U32(ctx, 31, 0x203F84u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x203F7Cu, 0x203F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F84u;
label_203f84:
    // 0x203f84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203f88: 0x84279270  lh          $a3, -0x6D90($at)
    ctx->pc = 0x203f88u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x619270u));
    // 0x203f8c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x203f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x203f90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203f94: 0xa4239270  sh          $v1, -0x6D90($at)
    ctx->pc = 0x203f94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
    // 0x203f98: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x203F98u;
    {
        const bool branch_taken_0x203f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f98) {
            ctx->pc = 0x2040B8u;
            return;
        }
    }
    ctx->pc = 0x203FA0u;
}
