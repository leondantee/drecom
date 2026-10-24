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

// Function: entry_0011ba08
// Address: 0x11ba08 - 0x11ba30
void entry_0011ba08_0x11ba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba08_0x11ba08");
#endif

    switch (ctx->pc) {
        case 0x11ba1cu: goto label_11ba1c;
        default: break;
    }

    ctx->pc = 0x11ba08u;

    // 0x11ba08: 0x640000b  bltz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x11BA08u;
    {
        const bool branch_taken_0x11ba08 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA08u;
        // 0x11ba0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba08) {
            ctx->pc = 0x11BA38u;
            return;
        }
    }
    ctx->pc = 0x11BA10u;
    // 0x11ba10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ba10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba14: 0xc046248  jal         func_118920
    ctx->pc = 0x11BA14u;
    SET_GPR_U32(ctx, 31, 0x11BA1Cu);
    ctx->pc = 0x11BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA14u;
    // 0x11ba18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118920u;
    {
        ctx->pc = 0x11BA1Cu;
        ps2_stubs::memchr(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11BA1Cu) { return; }
    ctx->pc = 0x11BA1Cu;
label_11ba1c:
    // 0x11ba1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BA1Cu;
    {
        const bool branch_taken_0x11ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA1Cu;
        // 0x11ba20: 0x53a823  subu        $s5, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba1c) {
            ctx->pc = 0x11BA30u;
            return;
        }
    }
    ctx->pc = 0x11BA24u;
    // 0x11ba24: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x11ba24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x11ba28: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x11BA28u;
    {
        const bool branch_taken_0x11ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA28u;
        // 0x11ba2c: 0x242a80b  movn        $s5, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba28) {
            ctx->pc = 0x11BC54u;
            return;
        }
    }
    ctx->pc = 0x11BA30u;
}
