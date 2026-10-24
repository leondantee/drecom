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

// Function: entry_00177100
// Address: 0x177100 - 0x177138
void entry_00177100_0x177100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177100_0x177100");
#endif

    switch (ctx->pc) {
        case 0x177128u: goto label_177128;
        default: break;
    }

    ctx->pc = 0x177100u;

label_177100:
    // 0x177100: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x177100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_177104:
    // 0x177104: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x177104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_177108:
    // 0x177108: 0x141682  srl         $v0, $s4, 26
    ctx->pc = 0x177108u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 26));
label_17710c:
    // 0x17710c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17710cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_177110:
    // 0x177110: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x177110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_177114:
    // 0x177114: 0x24425820  addiu       $v0, $v0, 0x5820
    ctx->pc = 0x177114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22560));
label_177118:
    // 0x177118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17711c:
    // 0x17711c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_177120:
    // 0x177120: 0x40f809  jalr        $v0
label_177124:
    if (ctx->pc == 0x177124u) {
        ctx->pc = 0x177128u;
        goto label_177128;
    }
    ctx->pc = 0x177120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177128u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177120u, 0x177128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177128u;
label_177128:
    // 0x177128: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x177128u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_17712c:
    // 0x17712c: 0x10807c  dsll32      $s0, $s0, 1
    ctx->pc = 0x17712cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 1));
label_177130:
    // 0x177130: 0x10807e  dsrl32      $s0, $s0, 1
    ctx->pc = 0x177130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 1));
label_177134:
    // 0x177134: 0x0  nop
    ctx->pc = 0x177134u;
    // NOP
    ctx->pc = 0x177138u;
}
