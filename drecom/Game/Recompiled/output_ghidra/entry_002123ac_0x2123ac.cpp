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

// Function: entry_002123ac
// Address: 0x2123ac - 0x2123e0
void entry_002123ac_0x2123ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002123ac_0x2123ac");
#endif

    ctx->pc = 0x2123acu;

    // 0x2123ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2123acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2123b0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2123b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2123b4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2123b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2123b8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2123b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2123bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2123bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2123c0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2123c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2123c4: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x2123c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2123c8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2123c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2123cc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2123ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2123d0: 0x2463ac70  addiu       $v1, $v1, -0x5390
    ctx->pc = 0x2123d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945904));
    // 0x2123d4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2123d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2123d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2123d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2123dc: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x2123dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2123e0u;
}
