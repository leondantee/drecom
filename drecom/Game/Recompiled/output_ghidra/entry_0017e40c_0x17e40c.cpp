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

// Function: entry_0017e40c
// Address: 0x17e40c - 0x17e430
void entry_0017e40c_0x17e40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e40c_0x17e40c");
#endif

    ctx->pc = 0x17e40cu;

    // 0x17e40c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x17e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e410: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x17e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x17e414: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E414u;
    {
        const bool branch_taken_0x17e414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e414) {
            ctx->pc = 0x17E430u;
            return;
        }
    }
    ctx->pc = 0x17E41Cu;
    // 0x17e41c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e420: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x17e420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e424: 0xac640094  sw          $a0, 0x94($v1)
    ctx->pc = 0x17e424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 4));
    // 0x17e428: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x17e428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e42c: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x17e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
    ctx->pc = 0x17e430u;
}
