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

// Function: entry_00165d5c
// Address: 0x165d5c - 0x165d88
void entry_00165d5c_0x165d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165d5c_0x165d5c");
#endif

    switch (ctx->pc) {
        case 0x165d64u: goto label_165d64;
        case 0x165d7cu: goto label_165d7c;
        default: break;
    }

    ctx->pc = 0x165d5cu;

    // 0x165d5c: 0xc085be2  jal         func_216F88
    ctx->pc = 0x165D5Cu;
    SET_GPR_U32(ctx, 31, 0x165D64u);
    ctx->pc = 0x216F88u;
    {
        ctx->pc = 0x165D64u;
        ps2_stubs::sceSifInitIopHeap(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D64u) { return; }
    ctx->pc = 0x165D64u;
label_165d64:
    // 0x165d64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x165D64u;
    {
        const bool branch_taken_0x165d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d64) {
            ctx->pc = 0x165D88u;
            return;
        }
    }
    ctx->pc = 0x165D6Cu;
    // 0x165d6c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165d70: 0x2444eb20  addiu       $a0, $v0, -0x14E0
    ctx->pc = 0x165d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
    // 0x165d74: 0xc046760  jal         func_119D80
    ctx->pc = 0x165D74u;
    SET_GPR_U32(ctx, 31, 0x165D7Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x165D7Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D7Cu) { return; }
    ctx->pc = 0x165D7Cu;
label_165d7c:
    // 0x165d7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x165d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165d80: 0xc045bc0  jal         func_116F00
    ctx->pc = 0x165D80u;
    SET_GPR_U32(ctx, 31, 0x165D88u);
    ctx->pc = 0x116F00u;
    {
        ctx->pc = 0x165D88u;
        ps2_stubs::exit(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D88u) { return; }
    ctx->pc = 0x165D88u;
}
