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

// Function: entry_0018a298
// Address: 0x18a298 - 0x18a2c8
void entry_0018a298_0x18a298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a298_0x18a298");
#endif

    switch (ctx->pc) {
        case 0x18a2a8u: goto label_18a2a8;
        default: break;
    }

    ctx->pc = 0x18a298u;

    // 0x18a298: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x18a298u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x18a29c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18a29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a2a0: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18A2A0u;
    SET_GPR_U32(ctx, 31, 0x18A2A8u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18A2A0u, 0x18A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A2A8u;
label_18a2a8:
    // 0x18a2a8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x18a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x18a2ac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18a2b0: 0xa2230030  sb          $v1, 0x30($s1)
    ctx->pc = 0x18a2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a2b4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18a2b8: 0xa2230031  sb          $v1, 0x31($s1)
    ctx->pc = 0x18a2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x18a2bc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18a2bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18a2c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A2C0u;
    {
        const bool branch_taken_0x18a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a2c0) {
            ctx->pc = 0x18A2E0u;
            return;
        }
    }
    ctx->pc = 0x18A2C8u;
}
