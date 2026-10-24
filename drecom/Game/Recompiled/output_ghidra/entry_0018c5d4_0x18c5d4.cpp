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

// Function: entry_0018c5d4
// Address: 0x18c5d4 - 0x18c634
void entry_0018c5d4_0x18c5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c5d4_0x18c5d4");
#endif

    ctx->pc = 0x18c5d4u;

    // 0x18c5d4: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18c5d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c5dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18c5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18c5e0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18c5e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5e8: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x18c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x18c5ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5f0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18c5f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c5fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c600: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c604: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c608: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c60c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c610: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x18c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18c614: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c618: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18c618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c61c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18c61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18c620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c624: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c628: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c62c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18c62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c630: 0xfe0201e0  sd          $v0, 0x1E0($s0)
    ctx->pc = 0x18c630u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 480), GPR_U64(ctx, 2));
    ctx->pc = 0x18c634u;
}
