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

// Function: entry_001a4c8c
// Address: 0x1a4c8c - 0x1a4cbc
void entry_001a4c8c_0x1a4c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4c8c_0x1a4c8c");
#endif

    ctx->pc = 0x1a4c8cu;

    // 0x1a4c8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c90: 0xa4600308  sh          $zero, 0x308($v1)
    ctx->pc = 0x1a4c90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 776), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a4c94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4c98: 0x942300da  lhu         $v1, 0xDA($at)
    ctx->pc = 0x1a4c98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DAu));
    // 0x1a4c9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4ca0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1a4ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1a4ca4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4CA4u;
    {
        const bool branch_taken_0x1a4ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ca4) {
            ctx->pc = 0x1A4CBCu;
            return;
        }
    }
    ctx->pc = 0x1A4CACu;
    // 0x1a4cac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4cb0: 0x84830308  lh          $v1, 0x308($a0)
    ctx->pc = 0x1a4cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 776)));
    // 0x1a4cb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4cb8: 0xa4830308  sh          $v1, 0x308($a0)
    ctx->pc = 0x1a4cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 776), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a4cbcu;
}
