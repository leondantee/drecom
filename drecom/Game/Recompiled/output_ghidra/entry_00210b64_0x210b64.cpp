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

// Function: entry_00210b64
// Address: 0x210b64 - 0x210b8c
void entry_00210b64_0x210b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210b64_0x210b64");
#endif

    ctx->pc = 0x210b64u;

    // 0x210b64: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210b68: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x210b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x210b6c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x210b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x210b70: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x210b70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x210b74: 0x28a10050  slti        $at, $a1, 0x50
    ctx->pc = 0x210b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x210b78: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x210B78u;
    {
        const bool branch_taken_0x210b78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b78) {
            ctx->pc = 0x210B8Cu;
            return;
        }
    }
    ctx->pc = 0x210B80u;
    // 0x210b80: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x210b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x210b84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x210b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x210b88: 0xac249538  sw          $a0, -0x6AC8($at)
    ctx->pc = 0x210b88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x619538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619538u, _value); } while (0);
    ctx->pc = 0x210b8cu;
}
