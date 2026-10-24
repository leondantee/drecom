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

// Function: entry_001d6a98
// Address: 0x1d6a98 - 0x1d6ae4
void entry_001d6a98_0x1d6a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6a98_0x1d6a98");
#endif

    ctx->pc = 0x1d6a98u;

    // 0x1d6a98: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x1d6a98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1d6a9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6aa0: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1d6aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d6aa4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x1d6aa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1d6aa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6aac: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x1d6aacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d6ab0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1d6ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6ab4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1d6ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6ab8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d6ab8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d6abc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1d6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d6ac0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6AC0u;
    {
        const bool branch_taken_0x1d6ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6ac0) {
            ctx->pc = 0x1D6AE4u;
            return;
        }
    }
    ctx->pc = 0x1D6AC8u;
    // 0x1d6ac8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d6ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6acc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1d6accu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d6ad0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d6ad4: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x1d6ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d6ad8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6adc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6ae0: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1d6ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1d6ae4u;
}
