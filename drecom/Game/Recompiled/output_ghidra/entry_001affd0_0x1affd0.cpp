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

// Function: entry_001affd0
// Address: 0x1affd0 - 0x1b0000
void entry_001affd0_0x1affd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001affd0_0x1affd0");
#endif

    ctx->pc = 0x1affd0u;

    // 0x1affd0: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1affd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1affd4: 0x8fa304b0  lw          $v1, 0x4B0($sp)
    ctx->pc = 0x1affd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1affd8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1affd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1affdc: 0xafa404b0  sw          $a0, 0x4B0($sp)
    ctx->pc = 0x1affdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 4));
    // 0x1affe0: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1affe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1affe4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1affe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1affe8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1affe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1affec: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1affecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afff0: 0x1460ff87  bnez        $v1, . + 4 + (-0x79 << 2)
    ctx->pc = 0x1AFFF0u;
    {
        const bool branch_taken_0x1afff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afff0) {
            ctx->pc = 0x1AFE10u;
            return;
        }
    }
    ctx->pc = 0x1AFFF8u;
    // 0x1afff8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1AFFF8u;
    {
        const bool branch_taken_0x1afff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afff8) {
            ctx->pc = 0x1B0070u;
            return;
        }
    }
    ctx->pc = 0x1B0000u;
}
