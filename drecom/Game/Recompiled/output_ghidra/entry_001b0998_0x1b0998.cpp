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

// Function: entry_001b0998
// Address: 0x1b0998 - 0x1b09c8
void entry_001b0998_0x1b0998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0998_0x1b0998");
#endif

    ctx->pc = 0x1b0998u;

    // 0x1b0998: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1b0998u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1b099c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b099cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b09a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b09a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b09a4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1b09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1b09a8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1b09a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b09ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b09acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b09b0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1b09b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1b09b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b09b8: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1b09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1b09bc: 0x8c750028  lw          $s5, 0x28($v1)
    ctx->pc = 0x1b09bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1b09c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B09C0u;
    {
        const bool branch_taken_0x1b09c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b09c0) {
            ctx->pc = 0x1B0A20u;
            return;
        }
    }
    ctx->pc = 0x1B09C8u;
}
