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

// Function: entry_0013d730
// Address: 0x13d730 - 0x13d76c
void entry_0013d730_0x13d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d730_0x13d730");
#endif

    ctx->pc = 0x13d730u;

    // 0x13d730: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d734: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x13d734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13d738: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d73c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13d73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13d740: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x13d740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x13d744: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x13d744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x13d748: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x13d748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x13d74c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13d74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13d750: 0x8423cc92  lh          $v1, -0x336E($at)
    ctx->pc = 0x13d750u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47CC92u));
    // 0x13d754: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13d754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13d758: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13d758u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13d75c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13d75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d760: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13d760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13d764: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d768: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x13d768u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    ctx->pc = 0x13d76cu;
}
