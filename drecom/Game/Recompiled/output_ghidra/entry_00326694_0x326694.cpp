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

// Function: entry_00326694
// Address: 0x326694 - 0x3266c8
void entry_00326694_0x326694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326694_0x326694");
#endif

    ctx->pc = 0x326694u;

    // 0x326694: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326698: 0x90620b1c  lbu         $v0, 0xB1C($v1)
    ctx->pc = 0x326698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x32669c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3266a0: 0xa0620b1c  sb          $v0, 0xB1C($v1)
    ctx->pc = 0x3266a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2844), (uint8_t)GPR_U32(ctx, 2));
    // 0x3266a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3266a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3266a8: 0x8c620b18  lw          $v0, 0xB18($v1)
    ctx->pc = 0x3266a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2840)));
    // 0x3266ac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3266acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3266b0: 0xac620b18  sw          $v0, 0xB18($v1)
    ctx->pc = 0x3266b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2840), GPR_U32(ctx, 2));
    // 0x3266b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3266b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3266b8: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x3266b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x3266bc: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x3266bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3266c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3266c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3266c4: 0xac820b18  sw          $v0, 0xB18($a0)
    ctx->pc = 0x3266c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 2));
    ctx->pc = 0x3266c8u;
}
