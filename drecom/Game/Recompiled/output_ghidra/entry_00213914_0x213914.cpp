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

// Function: entry_00213914
// Address: 0x213914 - 0x213930
void entry_00213914_0x213914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213914_0x213914");
#endif

    switch (ctx->pc) {
        case 0x213924u: goto label_213924;
        case 0x21392cu: goto label_21392c;
        default: break;
    }

    ctx->pc = 0x213914u;

    // 0x213914: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x213914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x213918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x213918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21391c: 0xc084a10  jal         func_212840
    ctx->pc = 0x21391Cu;
    SET_GPR_U32(ctx, 31, 0x213924u);
    ctx->pc = 0x213920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21391Cu;
    // 0x213920: 0x24a59ce0  addiu       $a1, $a1, -0x6320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212840u;
    {
        ctx->pc = 0x213924u;
        ps2_syscalls::StartThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213924u) { return; }
    ctx->pc = 0x213924u;
label_213924:
    // 0x213924: 0xc084a44  jal         func_212910
    ctx->pc = 0x213924u;
    SET_GPR_U32(ctx, 31, 0x21392Cu);
    ctx->pc = 0x212910u;
    {
        ctx->pc = 0x21392Cu;
        ps2_syscalls::GetThreadId(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21392Cu) { return; }
    ctx->pc = 0x21392Cu;
label_21392c:
    // 0x21392c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21392cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213930u;
}
