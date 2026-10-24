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

// Function: entry_001fe7d8
// Address: 0x1fe7d8 - 0x1fe818
void entry_001fe7d8_0x1fe7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe7d8_0x1fe7d8");
#endif

    ctx->pc = 0x1fe7d8u;

    // 0x1fe7d8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe7dc: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe7e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe7e4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fe7e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe7e8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE7E8u;
    {
        const bool branch_taken_0x1fe7e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe7e8) {
            ctx->pc = 0x1FE79Cu;
            return;
        }
    }
    ctx->pc = 0x1FE7F0u;
    // 0x1fe7f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe7f4: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe7f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe7f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe7fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE7FCu;
    {
        const bool branch_taken_0x1fe7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe7fc) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE804u;
    // 0x1fe804: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fe804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe808: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe80c: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fe80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x1fe810: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE810u;
    {
        const bool branch_taken_0x1fe810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe810) {
            ctx->pc = 0x1FE838u;
            return;
        }
    }
    ctx->pc = 0x1FE818u;
}
