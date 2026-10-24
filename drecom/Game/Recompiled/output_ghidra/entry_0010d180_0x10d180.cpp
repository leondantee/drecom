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

// Function: entry_0010d180
// Address: 0x10d180 - 0x10d1bc
void entry_0010d180_0x10d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d180_0x10d180");
#endif

    switch (ctx->pc) {
        case 0x10d18cu: goto label_10d18c;
        case 0x10d1b4u: goto label_10d1b4;
        default: break;
    }

    ctx->pc = 0x10d180u;

    // 0x10d180: 0x8c4445b8  lw          $a0, 0x45B8($v0)
    ctx->pc = 0x10d180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    // 0x10d184: 0xc084a94  jal         func_212A50
    ctx->pc = 0x10D184u;
    SET_GPR_U32(ctx, 31, 0x10D18Cu);
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x10D18Cu;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D18Cu) { return; }
    ctx->pc = 0x10D18Cu;
label_10d18c:
    // 0x10d18c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10d190: 0x8c6245b4  lw          $v0, 0x45B4($v1)
    ctx->pc = 0x10d190u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3845B4u));
    // 0x10d194: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D194u;
    {
        const bool branch_taken_0x10d194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D194u;
        // 0x10d198: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d194) {
            ctx->pc = 0x10D1BCu;
            return;
        }
    }
    ctx->pc = 0x10D19Cu;
    // 0x10d19c: 0x8c4345f4  lw          $v1, 0x45F4($v0)
    ctx->pc = 0x10d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17908)));
    // 0x10d1a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D1A0u;
    {
        const bool branch_taken_0x10d1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1A0u;
        // 0x10d1a4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1a0) {
            ctx->pc = 0x10D1BCu;
            return;
        }
    }
    ctx->pc = 0x10D1A8u;
    // 0x10d1a8: 0x8c4445c0  lw          $a0, 0x45C0($v0)
    ctx->pc = 0x10d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17856)));
    // 0x10d1ac: 0xc084a94  jal         func_212A50
    ctx->pc = 0x10D1ACu;
    SET_GPR_U32(ctx, 31, 0x10D1B4u);
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x10D1B4u;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D1B4u) { return; }
    ctx->pc = 0x10D1B4u;
label_10d1b4:
    // 0x10d1b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10D1B4u;
    {
        const bool branch_taken_0x10d1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d1b4) {
            ctx->pc = 0x10D1C4u;
            return;
        }
    }
    ctx->pc = 0x10D1BCu;
}
