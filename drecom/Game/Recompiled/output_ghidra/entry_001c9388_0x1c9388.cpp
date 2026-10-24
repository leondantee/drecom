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

// Function: entry_001c9388
// Address: 0x1c9388 - 0x1c9420
void entry_001c9388_0x1c9388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9388_0x1c9388");
#endif

    ctx->pc = 0x1c9388u;

    // 0x1c9388: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c938c: 0x904409db  lbu         $a0, 0x9DB($v0)
    ctx->pc = 0x1c938cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c9390: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1c9390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c9394: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1c9394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1c9398: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C9398u;
    {
        const bool branch_taken_0x1c9398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9398) {
            ctx->pc = 0x1C9420u;
            return;
        }
    }
    ctx->pc = 0x1C93A0u;
    // 0x1c93a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c93a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c93a4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1c93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c93a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1c93a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1c93ac: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x1c93acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c93b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c93b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c93b4: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1c93b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1c93b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c93b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c93bc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c93c0: 0xa043157d  sb          $v1, 0x157D($v0)
    ctx->pc = 0x1c93c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c93c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c93c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c93c8: 0x8c441b6c  lw          $a0, 0x1B6C($v0)
    ctx->pc = 0x1c93c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1c93cc: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C93CCu;
    {
        const bool branch_taken_0x1c93cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c93cc) {
            ctx->pc = 0x1C9420u;
            return;
        }
    }
    ctx->pc = 0x1C93D4u;
    // 0x1c93d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c93d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c93d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c93dc: 0xac431b6c  sw          $v1, 0x1B6C($v0)
    ctx->pc = 0x1c93dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 3));
    // 0x1c93e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c93e4: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1c93e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1c93e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C93E8u;
    {
        const bool branch_taken_0x1c93e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93e8) {
            ctx->pc = 0x1C9420u;
            return;
        }
    }
    ctx->pc = 0x1C93F0u;
    // 0x1c93f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c93f4: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1c93f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1c93f8: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1c93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x1c93fc: 0xa46215ec  sh          $v0, 0x15EC($v1)
    ctx->pc = 0x1c93fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c9400: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9404: 0x844315ec  lh          $v1, 0x15EC($v0)
    ctx->pc = 0x1c9404u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1c9408: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1c9408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1c940c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c940cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c9410: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9410u;
    {
        const bool branch_taken_0x1c9410 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c9410) {
            ctx->pc = 0x1C9420u;
            return;
        }
    }
    ctx->pc = 0x1C9418u;
    // 0x1c9418: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c941c: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1c941cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c9420u;
}
