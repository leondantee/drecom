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

// Function: entry_0035e0b8
// Address: 0x35e0b8 - 0x35e158
void entry_0035e0b8_0x35e0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e0b8_0x35e0b8");
#endif

    ctx->pc = 0x35e0b8u;

    // 0x35e0b8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x35e0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x35e0bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35e0bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35e0c0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x35e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x35e0c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e0c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35e0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35e0cc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35e0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e0d0: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35e0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35e0d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e0d8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x35e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x35e0dc: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x35e0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x35e0e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e0e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35e0e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35e0e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e0ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e0f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x35e0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x35e0f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e0f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35e0fc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35e0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e100: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35e100u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35e104: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e108: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e10c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x35e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x35e110: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35e110u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e114: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35e114u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35e118: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e11c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e120: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e124: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x35e124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x35e128: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35e128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35e12c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35e12cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e130: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x35e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35e134: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x35e134u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x35e138: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e13c: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x35e13cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x35e140: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x35e140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x35e144: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x35e144u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x35e148: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e14c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35e150: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35e150u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e154: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35e154u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    ctx->pc = 0x35e158u;
}
