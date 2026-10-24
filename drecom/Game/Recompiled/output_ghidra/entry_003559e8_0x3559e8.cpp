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

// Function: entry_003559e8
// Address: 0x3559e8 - 0x355a54
void entry_003559e8_0x3559e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003559e8_0x3559e8");
#endif

    ctx->pc = 0x3559e8u;

    // 0x3559e8: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3559e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3559ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3559ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3559f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3559f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3559f4: 0x84630036  lh          $v1, 0x36($v1)
    ctx->pc = 0x3559f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x3559f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3559f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3559fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3559fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x355a00: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x355A00u;
    {
        const bool branch_taken_0x355a00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x355a00) {
            ctx->pc = 0x355A54u;
            return;
        }
    }
    ctx->pc = 0x355A08u;
    // 0x355a08: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x355a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x355a0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a14: 0xa46400be  sh          $a0, 0xBE($v1)
    ctx->pc = 0x355a14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 4));
    // 0x355a18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a1c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x355a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a20: 0x848300bc  lh          $v1, 0xBC($a0)
    ctx->pc = 0x355a20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x355a24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x355a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x355a28: 0xa48300bc  sh          $v1, 0xBC($a0)
    ctx->pc = 0x355a28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 188), (uint16_t)GPR_U32(ctx, 3));
    // 0x355a2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a34: 0x846400be  lh          $a0, 0xBE($v1)
    ctx->pc = 0x355a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 190)));
    // 0x355a38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a40: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x355a40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x355a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x355a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355a48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a50: 0xa06400b8  sb          $a0, 0xB8($v1)
    ctx->pc = 0x355a50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x355a54u;
}
