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

// Function: entry_001d3e54
// Address: 0x1d3e54 - 0x1d3e98
void entry_001d3e54_0x1d3e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3e54_0x1d3e54");
#endif

    switch (ctx->pc) {
        case 0x1d3e70u: goto label_1d3e70;
        case 0x1d3e8cu: goto label_1d3e8c;
        default: break;
    }

    ctx->pc = 0x1d3e54u;

label_1d3e54:
    // 0x1d3e54: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3e58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d3e5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3e60: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d3e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3e64: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1d3e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d3e68: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3E68u;
    SET_GPR_U32(ctx, 31, 0x1D3E70u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3E70u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3E70u) { return; }
    ctx->pc = 0x1D3E70u;
label_1d3e70:
    // 0x1d3e70: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3e74: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1d3e78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3e7c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3e80: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x1d3e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d3e84: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3E84u;
    SET_GPR_U32(ctx, 31, 0x1D3E8Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3E8Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3E8Cu) { return; }
    ctx->pc = 0x1D3E8Cu;
label_1d3e8c:
    // 0x1d3e8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d3e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d3e90: 0x1620fff0  bnez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D3E90u;
    {
        const bool branch_taken_0x1d3e90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e90) {
            ctx->pc = 0x1D3E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3e54;
        }
    }
    ctx->pc = 0x1D3E98u;
}
