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

// Function: entry_003630f0
// Address: 0x3630f0 - 0x36312c
void entry_003630f0_0x3630f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003630f0_0x3630f0");
#endif

    ctx->pc = 0x3630f0u;

    // 0x3630f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3630f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3630f4: 0x846411f2  lh          $a0, 0x11F2($v1)
    ctx->pc = 0x3630f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x3630f8: 0x86230016  lh          $v1, 0x16($s1)
    ctx->pc = 0x3630f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x3630fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3630fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x363100: 0xa6230016  sh          $v1, 0x16($s1)
    ctx->pc = 0x363100u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x363104: 0x86230016  lh          $v1, 0x16($s1)
    ctx->pc = 0x363104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x363108: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x363108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x36310c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36310cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x363110: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x363110u;
    {
        const bool branch_taken_0x363110 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x363110) {
            ctx->pc = 0x36312Cu;
            return;
        }
    }
    ctx->pc = 0x363118u;
    // 0x363118: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x363118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36311c: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x36311cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x363120: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x363120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x363124: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x363124u;
    {
        const bool branch_taken_0x363124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363124) {
            ctx->pc = 0x363518u;
            return;
        }
    }
    ctx->pc = 0x36312Cu;
}
