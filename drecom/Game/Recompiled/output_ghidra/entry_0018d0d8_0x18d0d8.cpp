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

// Function: entry_0018d0d8
// Address: 0x18d0d8 - 0x18d138
void entry_0018d0d8_0x18d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d0d8_0x18d0d8");
#endif

    ctx->pc = 0x18d0d8u;

    // 0x18d0d8: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18d0dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d0e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d0e4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18d0e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0ec: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x18d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x18d0f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0f4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18d0f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d100: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d104: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d108: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d10c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d110: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d114: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x18d114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18d118: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d11c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18d11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d120: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18d120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18d124: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d128: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18d128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18d12c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d130: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18d130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d134: 0xfe020aa0  sd          $v0, 0xAA0($s0)
    ctx->pc = 0x18d134u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 2));
    ctx->pc = 0x18d138u;
}
