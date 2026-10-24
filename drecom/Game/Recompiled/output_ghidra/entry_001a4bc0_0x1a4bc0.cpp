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

// Function: entry_001a4bc0
// Address: 0x1a4bc0 - 0x1a4be8
void entry_001a4bc0_0x1a4bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4bc0_0x1a4bc0");
#endif

    ctx->pc = 0x1a4bc0u;

    // 0x1a4bc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4bc4: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4bc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4bc8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4bcc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1a4bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1a4bd0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4BD0u;
    {
        const bool branch_taken_0x1a4bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bd0) {
            ctx->pc = 0x1A4BE8u;
            return;
        }
    }
    ctx->pc = 0x1A4BD8u;
    // 0x1a4bd8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4bdc: 0x80830304  lb          $v1, 0x304($a0)
    ctx->pc = 0x1a4bdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 772)));
    // 0x1a4be0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4be4: 0xa0830304  sb          $v1, 0x304($a0)
    ctx->pc = 0x1a4be4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 772), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a4be8u;
}
