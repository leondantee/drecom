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

// Function: entry_001e15d8
// Address: 0x1e15d8 - 0x1e1650
void entry_001e15d8_0x1e15d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e15d8_0x1e15d8");
#endif

    ctx->pc = 0x1e15d8u;

    // 0x1e15d8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e15dc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e15e0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e15e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e15e4: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e15e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e15e8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e15ec: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e15ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e15f0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e15f4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e15f8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1e15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1e15fc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e15fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e1600: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1604: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e1604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1e1608: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e160c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1610: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1e1610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1e1614: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e1614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e1618: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e161c: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1e161cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1e1620: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e1620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e1624: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1628: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1e1628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1e162c: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e1630: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1634: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1e1634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1e1638: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e1638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e163c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1640: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e1640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e1644: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1648: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e1648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e164c: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e164cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    ctx->pc = 0x1e1650u;
}
