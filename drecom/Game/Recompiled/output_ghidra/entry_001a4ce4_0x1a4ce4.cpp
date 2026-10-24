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

// Function: entry_001a4ce4
// Address: 0x1a4ce4 - 0x1a4d14
void entry_001a4ce4_0x1a4ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4ce4_0x1a4ce4");
#endif

    ctx->pc = 0x1a4ce4u;

    // 0x1a4ce4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4ce8: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4ce8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4cec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4cf0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1a4cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1a4cf4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4CF4u;
    {
        const bool branch_taken_0x1a4cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4cf4) {
            ctx->pc = 0x1A4D14u;
            return;
        }
    }
    ctx->pc = 0x1A4CFCu;
    // 0x1a4cfc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d00: 0x90830306  lbu         $v1, 0x306($a0)
    ctx->pc = 0x1a4d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 774)));
    // 0x1a4d04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4d08: 0xa0830306  sb          $v1, 0x306($a0)
    ctx->pc = 0x1a4d08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 774), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4d0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d10: 0xa4600308  sh          $zero, 0x308($v1)
    ctx->pc = 0x1a4d10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 776), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a4d14u;
}
