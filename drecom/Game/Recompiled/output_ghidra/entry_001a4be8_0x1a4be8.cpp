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

// Function: entry_001a4be8
// Address: 0x1a4be8 - 0x1a4c10
void entry_001a4be8_0x1a4be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4be8_0x1a4be8");
#endif

    ctx->pc = 0x1a4be8u;

    // 0x1a4be8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4bec: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4becu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4bf0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4bf4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1a4bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1a4bf8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4BF8u;
    {
        const bool branch_taken_0x1a4bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bf8) {
            ctx->pc = 0x1A4C10u;
            return;
        }
    }
    ctx->pc = 0x1A4C00u;
    // 0x1a4c00: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c04: 0x80830305  lb          $v1, 0x305($a0)
    ctx->pc = 0x1a4c04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 773)));
    // 0x1a4c08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4c0c: 0xa0830305  sb          $v1, 0x305($a0)
    ctx->pc = 0x1a4c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 773), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a4c10u;
}
