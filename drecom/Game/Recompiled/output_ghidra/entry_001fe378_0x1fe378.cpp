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

// Function: entry_001fe378
// Address: 0x1fe378 - 0x1fe3a4
void entry_001fe378_0x1fe378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe378_0x1fe378");
#endif

    ctx->pc = 0x1fe378u;

    // 0x1fe378: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe37c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fe37cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe380: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe384: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fe384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe388: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE388u;
    {
        const bool branch_taken_0x1fe388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe388) {
            ctx->pc = 0x1FE33Cu;
            return;
        }
    }
    ctx->pc = 0x1FE390u;
    // 0x1fe390: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fe390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe394: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe398: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fe398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe39c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x1FE39Cu;
    {
        const bool branch_taken_0x1fe39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe39c) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE3A4u;
}
