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

// Function: entry_001e25d0
// Address: 0x1e25d0 - 0x1e2648
void entry_001e25d0_0x1e25d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e25d0_0x1e25d0");
#endif

    ctx->pc = 0x1e25d0u;

    // 0x1e25d0: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e25d4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e25d8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e25dc: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e25dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e25e0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e25e4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e25e8: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e25ec: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e25f0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1e25f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1e25f4: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e25f8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e25fc: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e25fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1e2600: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e2600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e2604: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2608: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1e2608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1e260c: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e2610: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2614: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1e2614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1e2618: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x1e2618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1e261c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2620: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1e2620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1e2624: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1e2624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1e2628: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e262c: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1e262cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1e2630: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x1e2630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1e2634: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e2634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e2638: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e2638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e263c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2640: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e2644: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e2644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    ctx->pc = 0x1e2648u;
}
