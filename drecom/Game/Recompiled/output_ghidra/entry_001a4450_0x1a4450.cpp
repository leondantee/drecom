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

// Function: entry_001a4450
// Address: 0x1a4450 - 0x1a4478
void entry_001a4450_0x1a4450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4450_0x1a4450");
#endif

    ctx->pc = 0x1a4450u;

    // 0x1a4450: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4454: 0x90230101  lbu         $v1, 0x101($at)
    ctx->pc = 0x1a4454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0101u));
    // 0x1a4458: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a445c: 0x286100c1  slti        $at, $v1, 0xC1
    ctx->pc = 0x1a445cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x1a4460: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4460u;
    {
        const bool branch_taken_0x1a4460 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4460) {
            ctx->pc = 0x1A4478u;
            return;
        }
    }
    ctx->pc = 0x1A4468u;
    // 0x1a4468: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a446c: 0x8ca40300  lw          $a0, 0x300($a1)
    ctx->pc = 0x1a446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 768)));
    // 0x1a4470: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x1a4470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1a4474: 0xaca30300  sw          $v1, 0x300($a1)
    ctx->pc = 0x1a4474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 768), GPR_U32(ctx, 3));
    ctx->pc = 0x1a4478u;
}
