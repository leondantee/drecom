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

// Function: entry_001a976c
// Address: 0x1a976c - 0x1a97c0
void entry_001a976c_0x1a976c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a976c_0x1a976c");
#endif

    switch (ctx->pc) {
        case 0x1a9798u: goto label_1a9798;
        default: break;
    }

    ctx->pc = 0x1a976cu;

    // 0x1a976c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9770: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a9774: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9778: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a9778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a977c: 0x3442240b  ori         $v0, $v0, 0x240B
    ctx->pc = 0x1a977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9227);
    // 0x1a9780: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a9780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9784: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a9784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9788: 0x2445f260  addiu       $a1, $v0, -0xDA0
    ctx->pc = 0x1a9788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
    // 0x1a978c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1a978cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a9790: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9790u;
    SET_GPR_U32(ctx, 31, 0x1A9798u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9790u, 0x1A9798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9798u;
label_1a9798:
    // 0x1a9798: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x1a9798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x1a979c: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x1a979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a97a0: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a97a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a97a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a97a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a97a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a97a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a97ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A97ACu;
    {
        const bool branch_taken_0x1a97ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a97ac) {
            ctx->pc = 0x1A97C0u;
            return;
        }
    }
    ctx->pc = 0x1A97B4u;
    // 0x1a97b4: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x1a97b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a97b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A97B8u;
    {
        const bool branch_taken_0x1a97b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a97b8) {
            ctx->pc = 0x1A97C4u;
            return;
        }
    }
    ctx->pc = 0x1A97C0u;
}
