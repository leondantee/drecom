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

// Function: entry_00335898
// Address: 0x335898 - 0x3358d4
void entry_00335898_0x335898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335898_0x335898");
#endif

    switch (ctx->pc) {
        case 0x3358a0u: goto label_3358a0;
        default: break;
    }

    ctx->pc = 0x335898u;

    // 0x335898: 0xc0ce0d8  jal         func_338360
    ctx->pc = 0x335898u;
    SET_GPR_U32(ctx, 31, 0x3358A0u);
    ctx->pc = 0x338360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338360u, 0x335898u, 0x3358A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358A0u;
label_3358a0:
    // 0x3358a0: 0x26170620  addiu       $s7, $s0, 0x620
    ctx->pc = 0x3358a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x3358a4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3358a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3358a8: 0xac202720  sw          $zero, 0x2720($at)
    ctx->pc = 0x3358a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
    // 0x3358ac: 0x9203683f  lbu         $v1, 0x683F($s0)
    ctx->pc = 0x3358acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x3358b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3358b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3358b4: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x3358b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x3358b8: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x3358b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x3358bc: 0x9023c98e  lbu         $v1, -0x3672($at)
    ctx->pc = 0x3358bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x3358c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3358c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3358c4: 0x749023  subu        $s2, $v1, $s4
    ctx->pc = 0x3358c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3358c8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x3358c8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3358cc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3358CCu;
    {
        const bool branch_taken_0x3358cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3358cc) {
            ctx->pc = 0x335980u;
            return;
        }
    }
    ctx->pc = 0x3358D4u;
}
