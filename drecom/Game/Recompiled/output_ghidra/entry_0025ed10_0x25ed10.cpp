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

// Function: entry_0025ed10
// Address: 0x25ed10 - 0x25ed50
void entry_0025ed10_0x25ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ed10_0x25ed10");
#endif

    switch (ctx->pc) {
        case 0x25ed48u: goto label_25ed48;
        default: break;
    }

    ctx->pc = 0x25ed10u;

    // 0x25ed10: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ed10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ed14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ed14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ed18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25ed18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25ed1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25ED1Cu;
    {
        const bool branch_taken_0x25ed1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed1c) {
            ctx->pc = 0x25ED50u;
            return;
        }
    }
    ctx->pc = 0x25ED24u;
    // 0x25ed24: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ed24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ed28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ed2c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x25ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x25ed30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25ED30u;
    {
        const bool branch_taken_0x25ed30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ed30) {
            ctx->pc = 0x25ED68u;
            return;
        }
    }
    ctx->pc = 0x25ED38u;
    // 0x25ed38: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x25ed38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25ed3c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25ed3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25ed40: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25ED40u;
    SET_GPR_U32(ctx, 31, 0x25ED48u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25ED48u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25ED48u) { return; }
    ctx->pc = 0x25ED48u;
label_25ed48:
    // 0x25ed48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25ED48u;
    {
        const bool branch_taken_0x25ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed48) {
            ctx->pc = 0x25ED68u;
            return;
        }
    }
    ctx->pc = 0x25ED50u;
}
