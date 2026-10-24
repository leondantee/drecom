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

// Function: entry_00332f24
// Address: 0x332f24 - 0x332f6c
void entry_00332f24_0x332f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332f24_0x332f24");
#endif

    switch (ctx->pc) {
        case 0x332f44u: goto label_332f44;
        default: break;
    }

    ctx->pc = 0x332f24u;

    // 0x332f24: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x332f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x332f28: 0x34560096  ori         $s6, $v0, 0x96
    ctx->pc = 0x332f28u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)150);
    // 0x332f2c: 0x8e2665a0  lw          $a2, 0x65A0($s1)
    ctx->pc = 0x332f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26016)));
    // 0x332f30: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x332f30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x332f34: 0x3405a800  ori         $a1, $zero, 0xA800
    ctx->pc = 0x332f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x332f38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x332f38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332f3c: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x332F3Cu;
    SET_GPR_U32(ctx, 31, 0x332F44u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x332F3Cu, 0x332F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F44u;
label_332f44:
    // 0x332f44: 0x8e24685c  lw          $a0, 0x685C($s1)
    ctx->pc = 0x332f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x332f48: 0x34830002  ori         $v1, $a0, 0x2
    ctx->pc = 0x332f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x332f4c: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x332f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x332f50: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332f54: 0x8c232788  lw          $v1, 0x2788($at)
    ctx->pc = 0x332f54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892788u));
    // 0x332f58: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x332f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x332f5c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x332f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x332f60: 0xac242788  sw          $a0, 0x2788($at)
    ctx->pc = 0x332f60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x892788u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892788u, _value); } while (0);
    // 0x332f64: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x332F64u;
    {
        const bool branch_taken_0x332f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332f64) {
            ctx->pc = 0x3332DCu;
            return;
        }
    }
    ctx->pc = 0x332F6Cu;
}
