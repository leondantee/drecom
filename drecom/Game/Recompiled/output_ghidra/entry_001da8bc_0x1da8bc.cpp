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

// Function: entry_001da8bc
// Address: 0x1da8bc - 0x1da8e8
void entry_001da8bc_0x1da8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da8bc_0x1da8bc");
#endif

    ctx->pc = 0x1da8bcu;

    // 0x1da8bc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1da8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da8c0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1da8c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1da8c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da8c8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x1da8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x1da8cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA8CCu;
    {
        const bool branch_taken_0x1da8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8cc) {
            ctx->pc = 0x1DA8E8u;
            return;
        }
    }
    ctx->pc = 0x1DA8D4u;
    // 0x1da8d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1da8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1da8d8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da8dc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da8e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA8E0u;
    {
        const bool branch_taken_0x1da8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8e0) {
            ctx->pc = 0x1DA8F8u;
            return;
        }
    }
    ctx->pc = 0x1DA8E8u;
}
