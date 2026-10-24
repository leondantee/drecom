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

// Function: entry_0018b17c
// Address: 0x18b17c - 0x18b1c8
void entry_0018b17c_0x18b17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b17c_0x18b17c");
#endif

    switch (ctx->pc) {
        case 0x18b1bcu: goto label_18b1bc;
        default: break;
    }

    ctx->pc = 0x18b17cu;

    // 0x18b17c: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x18b17cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x18b180: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18b180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18b184: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18b184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b18c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18b190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b194: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18b194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18b198: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18b198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18b19c: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18b1a0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x18b1a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b1a4: 0x96440006  lhu         $a0, 0x6($s2)
    ctx->pc = 0x18b1a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x18b1a8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x18b1a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x18b1ac: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x18b1acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18b1b0: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x18b1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18b1b4: 0xc062d38  jal         func_18B4E0
    ctx->pc = 0x18B1B4u;
    SET_GPR_U32(ctx, 31, 0x18B1BCu);
    ctx->pc = 0x18B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4E0u, 0x18B1B4u, 0x18B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1BCu;
label_18b1bc:
    // 0x18b1bc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18b1bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18b1c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18B1C0u;
    {
        const bool branch_taken_0x18b1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b1c0) {
            ctx->pc = 0x18B1D8u;
            return;
        }
    }
    ctx->pc = 0x18B1C8u;
}
