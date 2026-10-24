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

// Function: entry_001912ac
// Address: 0x1912ac - 0x1912d0
void entry_001912ac_0x1912ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001912ac_0x1912ac");
#endif

    ctx->pc = 0x1912acu;

    // 0x1912ac: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x1912acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1912b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1912b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1912b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1912b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1912b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1912B8u;
    {
        const bool branch_taken_0x1912b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1912b8) {
            ctx->pc = 0x1912D0u;
            return;
        }
    }
    ctx->pc = 0x1912C0u;
    // 0x1912c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1912c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1912c4: 0x8c30a600  lw          $s0, -0x5A00($at)
    ctx->pc = 0x1912c4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A600u));
    // 0x1912c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1912C8u;
    {
        const bool branch_taken_0x1912c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1912c8) {
            ctx->pc = 0x1912DCu;
            return;
        }
    }
    ctx->pc = 0x1912D0u;
}
