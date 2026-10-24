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

// Function: entry_0021ff0c
// Address: 0x21ff0c - 0x21ff38
void entry_0021ff0c_0x21ff0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ff0c_0x21ff0c");
#endif

    switch (ctx->pc) {
        case 0x21ff2cu: goto label_21ff2c;
        default: break;
    }

    ctx->pc = 0x21ff0cu;

    // 0x21ff0c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x21ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21ff10: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21ff14: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21ff18: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x21ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x21ff1c: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x21ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x21ff20: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x21ff20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x21ff24: 0xc040c80  jal         func_103200
    ctx->pc = 0x21FF24u;
    SET_GPR_U32(ctx, 31, 0x21FF2Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x21FF2Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21FF2Cu) { return; }
    ctx->pc = 0x21FF2Cu;
label_21ff2c:
    // 0x21ff2c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21ff2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ff30: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x21FF30u;
    {
        const bool branch_taken_0x21ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff30) {
            ctx->pc = 0x21FFF0u;
            return;
        }
    }
    ctx->pc = 0x21FF38u;
}
