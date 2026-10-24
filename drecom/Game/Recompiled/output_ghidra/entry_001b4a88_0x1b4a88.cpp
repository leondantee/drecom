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

// Function: entry_001b4a88
// Address: 0x1b4a88 - 0x1b4ae0
void entry_001b4a88_0x1b4a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4a88_0x1b4a88");
#endif

    ctx->pc = 0x1b4a88u;

    // 0x1b4a88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4a8c: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b4a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
    // 0x1b4a90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b4a94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b4a94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b4a98: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x1b4a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1b4a9c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4A9Cu;
    {
        const bool branch_taken_0x1b4a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a9c) {
            ctx->pc = 0x1B4AE0u;
            return;
        }
    }
    ctx->pc = 0x1B4AA4u;
    // 0x1b4aa4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4aa8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b4aac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b4ab0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b4ab4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b4ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1b4ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4abc: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b4abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
    // 0x1b4ac0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b4ac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b4ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b4ac8: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x1b4ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1b4acc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4ACCu;
    {
        const bool branch_taken_0x1b4acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4acc) {
            ctx->pc = 0x1B4AE0u;
            return;
        }
    }
    ctx->pc = 0x1B4AD4u;
    // 0x1b4ad4: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1b4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1b4ad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4adc: 0xa4431418  sh          $v1, 0x1418($v0)
    ctx->pc = 0x1b4adcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5144), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b4ae0u;
}
