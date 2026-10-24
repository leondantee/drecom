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

// Function: entry_001b4d98
// Address: 0x1b4d98 - 0x1b4de8
void entry_001b4d98_0x1b4d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4d98_0x1b4d98");
#endif

    ctx->pc = 0x1b4d98u;

    // 0x1b4d98: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1b4d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1b4d9c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1b4d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1b4da0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B4DA0u;
    {
        const bool branch_taken_0x1b4da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4da0) {
            ctx->pc = 0x1B4DE8u;
            return;
        }
    }
    ctx->pc = 0x1B4DA8u;
    // 0x1b4da8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4dac: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b4dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4db0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1b4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1b4db4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4db8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4DB8u;
    {
        const bool branch_taken_0x1b4db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4db8) {
            ctx->pc = 0x1B4DE8u;
            return;
        }
    }
    ctx->pc = 0x1B4DC0u;
    // 0x1b4dc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4dc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4dc8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4dcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4dd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4dd4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1b4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1b4dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4ddc: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1b4ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b4de0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4DE0u;
    {
        const bool branch_taken_0x1b4de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4de0) {
            ctx->pc = 0x1B4E24u;
            return;
        }
    }
    ctx->pc = 0x1B4DE8u;
}
