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

// Function: entry_0018db50
// Address: 0x18db50 - 0x18dbb0
void entry_0018db50_0x18db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018db50_0x18db50");
#endif

    ctx->pc = 0x18db50u;

    // 0x18db50: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18db50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18db54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18db58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18db5c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x18db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x18db60: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x18db60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18db64: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x18db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x18db68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18db68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18db6c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18db70: 0x62b025  or          $s6, $v1, $v0
    ctx->pc = 0x18db70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18db74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18db74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18db78: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x18db78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db7c: 0x2c41825  or          $v1, $s6, $a0
    ctx->pc = 0x18db7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 4));
    // 0x18db80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18db80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18db84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18db84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18db88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18db88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18db8c: 0x8e320090  lw          $s2, 0x90($s1)
    ctx->pc = 0x18db8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18db90: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x18db90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x18db94: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x18db94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x18db98: 0x4117c  dsll32      $v0, $a0, 5
    ctx->pc = 0x18db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 5));
    // 0x18db9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18db9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18dba0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18dba4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18dba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dba8: 0x62b825  or          $s7, $v1, $v0
    ctx->pc = 0x18dba8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18dbac: 0xfe170aa0  sd          $s7, 0xAA0($s0)
    ctx->pc = 0x18dbacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 23));
    ctx->pc = 0x18dbb0u;
}
