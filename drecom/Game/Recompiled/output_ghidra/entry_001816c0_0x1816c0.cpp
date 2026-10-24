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

// Function: entry_001816c0
// Address: 0x1816c0 - 0x181728
void entry_001816c0_0x1816c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001816c0_0x1816c0");
#endif

    ctx->pc = 0x1816c0u;

    // 0x1816c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1816c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1816c4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1816c4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1816c8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1816c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1816cc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1816ccu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1816d0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1816d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1816d4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1816d8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1816d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1816dc: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x1816dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x1816e0: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x1816e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x1816e4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1816e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1816e8: 0x8ce60158  lw          $a2, 0x158($a3)
    ctx->pc = 0x1816e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x1816ec: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1816ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1816f0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1816f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1816f4: 0xace30158  sw          $v1, 0x158($a3)
    ctx->pc = 0x1816f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 344), GPR_U32(ctx, 3));
    // 0x1816f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1816f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1816fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1816fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181700: 0xac26f208  sw          $a2, -0xDF8($at)
    ctx->pc = 0x181700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F208u, _value); } while (0);
    // 0x181704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181708: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18170c: 0xacc30088  sw          $v1, 0x88($a2)
    ctx->pc = 0x18170cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 3));
    // 0x181710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181714: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x181714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x181718: 0xacc30094  sw          $v1, 0x94($a2)
    ctx->pc = 0x181718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 3));
    // 0x18171c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18171cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181720: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x181720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x181724: 0xace300b8  sw          $v1, 0xB8($a3)
    ctx->pc = 0x181724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 184), GPR_U32(ctx, 3));
    ctx->pc = 0x181728u;
}
