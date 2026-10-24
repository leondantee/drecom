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

// Function: entry_00254a80
// Address: 0x254a80 - 0x254aa0
void entry_00254a80_0x254a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254a80_0x254a80");
#endif

    ctx->pc = 0x254a80u;

    // 0x254a80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x254a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254a84: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x254a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x254a88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254a8c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x254a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x254a90: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x254a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x254a94: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x254a94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x254a98: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x254a98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x254a9c: 0x0  nop
    ctx->pc = 0x254a9cu;
    // NOP
    ctx->pc = 0x254aa0u;
}
