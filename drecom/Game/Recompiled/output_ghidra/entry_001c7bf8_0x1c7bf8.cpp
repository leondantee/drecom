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

// Function: entry_001c7bf8
// Address: 0x1c7bf8 - 0x1c7c28
void entry_001c7bf8_0x1c7bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7bf8_0x1c7bf8");
#endif

    ctx->pc = 0x1c7bf8u;

    // 0x1c7bf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7bfc: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1c7bfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c7c00: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7C00u;
    {
        const bool branch_taken_0x1c7c00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c00) {
            ctx->pc = 0x1C7C28u;
            return;
        }
    }
    ctx->pc = 0x1C7C08u;
    // 0x1c7c08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c0c: 0x8c6509f8  lw          $a1, 0x9F8($v1)
    ctx->pc = 0x1c7c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
    // 0x1c7c10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c14: 0x8c6309fc  lw          $v1, 0x9FC($v1)
    ctx->pc = 0x1c7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2556)));
    // 0x1c7c18: 0x2464ff00  addiu       $a0, $v1, -0x100
    ctx->pc = 0x1c7c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x1c7c1c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x1c7c1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c7c20: 0x102001d0  beqz        $at, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x1C7C20u;
    {
        const bool branch_taken_0x1c7c20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c20) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7C28u;
}
