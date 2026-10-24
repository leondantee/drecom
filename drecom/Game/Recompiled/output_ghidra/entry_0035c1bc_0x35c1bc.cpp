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

// Function: entry_0035c1bc
// Address: 0x35c1bc - 0x35c1e8
void entry_0035c1bc_0x35c1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035c1bc_0x35c1bc");
#endif

    ctx->pc = 0x35c1bcu;

    // 0x35c1bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1c0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35c1c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35c1c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35c1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35c1c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35c1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35c1cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35C1CCu;
    {
        const bool branch_taken_0x35c1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c1cc) {
            ctx->pc = 0x35C1E8u;
            return;
        }
    }
    ctx->pc = 0x35C1D4u;
    // 0x35c1d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1d8: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35c1dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35c1e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35c1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35c1e4: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    ctx->pc = 0x35c1e8u;
}
