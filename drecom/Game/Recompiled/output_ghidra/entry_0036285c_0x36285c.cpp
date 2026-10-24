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

// Function: entry_0036285c
// Address: 0x36285c - 0x362888
void entry_0036285c_0x36285c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036285c_0x36285c");
#endif

    ctx->pc = 0x36285cu;

    // 0x36285c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362860: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x362860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x362864: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x362864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x362868: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x362868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36286c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36286Cu;
    {
        const bool branch_taken_0x36286c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36286c) {
            ctx->pc = 0x362888u;
            return;
        }
    }
    ctx->pc = 0x362874u;
    // 0x362874: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x362874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362878: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x362878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x36287c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36287cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x362880: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x362880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x362884: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x362884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    ctx->pc = 0x362888u;
}
