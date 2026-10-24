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

// Function: entry_001ffa68
// Address: 0x1ffa68 - 0x1ffaa0
void entry_001ffa68_0x1ffa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffa68_0x1ffa68");
#endif

    ctx->pc = 0x1ffa68u;

    // 0x1ffa68: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa6c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1ffa6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffa70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffa74: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1ffa74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ffa78: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FFA78u;
    {
        const bool branch_taken_0x1ffa78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa78) {
            ctx->pc = 0x1FFA2Cu;
            return;
        }
    }
    ctx->pc = 0x1FFA80u;
    // 0x1ffa80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ffa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffa84: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa88: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1ffa88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ffa8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1ffa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ffa90: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa94: 0xacc30364  sw          $v1, 0x364($a2)
    ctx->pc = 0x1ffa94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 868), GPR_U32(ctx, 3));
    // 0x1ffa98: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x1FFA98u;
    {
        const bool branch_taken_0x1ffa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa98) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFAA0u;
}
