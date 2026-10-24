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

// Function: entry_00292788
// Address: 0x292788 - 0x2927b4
void entry_00292788_0x292788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292788_0x292788");
#endif

    switch (ctx->pc) {
        case 0x2927acu: goto label_2927ac;
        default: break;
    }

    ctx->pc = 0x292788u;

    // 0x292788: 0x8e035dc4  lw          $v1, 0x5DC4($s0)
    ctx->pc = 0x292788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x29278c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292790: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x292790u;
    {
        const bool branch_taken_0x292790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292790) {
            ctx->pc = 0x2927B4u;
            return;
        }
    }
    ctx->pc = 0x292798u;
    // 0x292798: 0x26040630  addiu       $a0, $s0, 0x630
    ctx->pc = 0x292798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x29279c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x29279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2927a0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2927a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2927a4: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x2927A4u;
    SET_GPR_U32(ctx, 31, 0x2927ACu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x2927ACu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2927ACu) { return; }
    ctx->pc = 0x2927ACu;
label_2927ac:
    // 0x2927ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2927acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2927b0: 0xae020638  sw          $v0, 0x638($s0)
    ctx->pc = 0x2927b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1592), GPR_U32(ctx, 2));
    ctx->pc = 0x2927b4u;
}
