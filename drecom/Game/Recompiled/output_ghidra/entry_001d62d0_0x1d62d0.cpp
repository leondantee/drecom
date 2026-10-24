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

// Function: entry_001d62d0
// Address: 0x1d62d0 - 0x1d6304
void entry_001d62d0_0x1d62d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d62d0_0x1d62d0");
#endif

    ctx->pc = 0x1d62d0u;

    // 0x1d62d0: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x1d62d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1d62d4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1d62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d62d8: 0x41ac2  srl         $v1, $a0, 11
    ctx->pc = 0x1d62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x1d62dc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d62dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d62e0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d62e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d62e4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1d62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1d62e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d62e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d62ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d62f0: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1d62f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1d62f4: 0x26030360  addiu       $v1, $s0, 0x360
    ctx->pc = 0x1d62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x1d62f8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1d62f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d62fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6300: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x1d6300u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    ctx->pc = 0x1d6304u;
}
