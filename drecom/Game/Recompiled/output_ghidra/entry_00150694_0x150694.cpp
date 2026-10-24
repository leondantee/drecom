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

// Function: entry_00150694
// Address: 0x150694 - 0x1506c8
void entry_00150694_0x150694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150694_0x150694");
#endif

    ctx->pc = 0x150694u;

    // 0x150694: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150698: 0x846215f0  lh          $v0, 0x15F0($v1)
    ctx->pc = 0x150698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5616)));
    // 0x15069c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x15069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1506a0: 0xa46415f0  sh          $a0, 0x15F0($v1)
    ctx->pc = 0x1506a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5616), (uint16_t)GPR_U32(ctx, 4));
    // 0x1506a4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x1506a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1506a8: 0x84a615f0  lh          $a2, 0x15F0($a1)
    ctx->pc = 0x1506a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5616)));
    // 0x1506ac: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1506acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1506b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1506b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1506b4: 0x28440005  slti        $a0, $v0, 0x5
    ctx->pc = 0x1506b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1506b8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1506B8u;
    {
        const bool branch_taken_0x1506b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1506b8) {
            ctx->pc = 0x1506C8u;
            return;
        }
    }
    ctx->pc = 0x1506C0u;
    // 0x1506c0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1506c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1506c4: 0xa46015f0  sh          $zero, 0x15F0($v1)
    ctx->pc = 0x1506c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5616), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1506c8u;
}
