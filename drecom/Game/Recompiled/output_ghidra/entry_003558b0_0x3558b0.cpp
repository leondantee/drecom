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

// Function: entry_003558b0
// Address: 0x3558b0 - 0x355930
void entry_003558b0_0x3558b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003558b0_0x3558b0");
#endif

    ctx->pc = 0x3558b0u;

    // 0x3558b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3558b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3558b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3558b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3558b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3558bc: 0xa06400b8  sb          $a0, 0xB8($v1)
    ctx->pc = 0x3558bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 4));
    // 0x3558c0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3558c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3558c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3558c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3558c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3558cc: 0xa46400bc  sh          $a0, 0xBC($v1)
    ctx->pc = 0x3558ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 4));
    // 0x3558d0: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x3558d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3558d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3558d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3558d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3558dc: 0xa46400be  sh          $a0, 0xBE($v1)
    ctx->pc = 0x3558dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 4));
    // 0x3558e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3558e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3558e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3558e8: 0x846400be  lh          $a0, 0xBE($v1)
    ctx->pc = 0x3558e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 190)));
    // 0x3558ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3558f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3558f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3558f4: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x3558f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x3558f8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3558f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3558fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355900: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355904: 0xa4640038  sh          $a0, 0x38($v1)
    ctx->pc = 0x355904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x355908: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x355908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x35590c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35590cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355910: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355914: 0xa464003a  sh          $a0, 0x3A($v1)
    ctx->pc = 0x355914u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 4));
    // 0x355918: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35591c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35591cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355920: 0x846400bc  lh          $a0, 0xBC($v1)
    ctx->pc = 0x355920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x355924: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355928: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35592c: 0xa464003c  sh          $a0, 0x3C($v1)
    ctx->pc = 0x35592cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x355930u;
}
