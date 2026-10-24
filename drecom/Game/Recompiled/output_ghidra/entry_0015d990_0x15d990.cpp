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

// Function: entry_0015d990
// Address: 0x15d990 - 0x15d9b4
void entry_0015d990_0x15d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d990_0x15d990");
#endif

    ctx->pc = 0x15d990u;

    // 0x15d990: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x15d990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d994: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15d994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d998: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x15d998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x15d99c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D99Cu;
    {
        const bool branch_taken_0x15d99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d99c) {
            ctx->pc = 0x15D9B4u;
            return;
        }
    }
    ctx->pc = 0x15D9A4u;
    // 0x15d9a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d9a8: 0x8c6213fc  lw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5116)));
    // 0x15d9ac: 0x24420019  addiu       $v0, $v0, 0x19
    ctx->pc = 0x15d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x15d9b0: 0xac6213fc  sw          $v0, 0x13FC($v1)
    ctx->pc = 0x15d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5116), GPR_U32(ctx, 2));
    ctx->pc = 0x15d9b4u;
}
