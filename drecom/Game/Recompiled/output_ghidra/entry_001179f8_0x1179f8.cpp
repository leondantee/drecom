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

// Function: entry_001179f8
// Address: 0x1179f8 - 0x117a20
void entry_001179f8_0x1179f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001179f8_0x1179f8");
#endif

    switch (ctx->pc) {
        case 0x117a08u: goto label_117a08;
        default: break;
    }

    ctx->pc = 0x1179f8u;

    // 0x1179f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1179f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1179fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1179fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a00: 0xc0462d2  jal         func_118B48
    ctx->pc = 0x117A00u;
    SET_GPR_U32(ctx, 31, 0x117A08u);
    ctx->pc = 0x117A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A00u;
    // 0x117a04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B48u;
    {
        ctx->pc = 0x117A08u;
        ps2_stubs::memmove(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117A08u) { return; }
    ctx->pc = 0x117A08u;
label_117a08:
    // 0x117a08: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x117a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x117a0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x117a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x117a10: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x117a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x117a14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x117a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x117a18: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x117a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x117a1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x117a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x117a20u;
}
