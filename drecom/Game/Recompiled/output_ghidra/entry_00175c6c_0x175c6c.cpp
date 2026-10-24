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

// Function: entry_00175c6c
// Address: 0x175c6c - 0x175c98
void entry_00175c6c_0x175c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175c6c_0x175c6c");
#endif

    switch (ctx->pc) {
        case 0x175c94u: goto label_175c94;
        default: break;
    }

    ctx->pc = 0x175c6cu;

    // 0x175c6c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x175c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175c70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x175c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x175c74: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x175c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x175c78: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x175C78u;
    {
        const bool branch_taken_0x175c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175c78) {
            ctx->pc = 0x175C98u;
            return;
        }
    }
    ctx->pc = 0x175C80u;
    // 0x175c80: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x175c80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x175c84: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x175c84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x175c88: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x175c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x175c8c: 0xc05d734  jal         func_175CD0
    ctx->pc = 0x175C8Cu;
    SET_GPR_U32(ctx, 31, 0x175C94u);
    ctx->pc = 0x175CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175CD0u, 0x175C8Cu, 0x175C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175C94u;
label_175c94:
    // 0x175c94: 0x0  nop
    ctx->pc = 0x175c94u;
    // NOP
    ctx->pc = 0x175c98u;
}
