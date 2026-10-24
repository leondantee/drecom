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

// Function: entry_001a8a4c
// Address: 0x1a8a4c - 0x1a8aa4
void entry_001a8a4c_0x1a8a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8a4c_0x1a8a4c");
#endif

    ctx->pc = 0x1a8a4cu;

    // 0x1a8a4c: 0x82220304  lb          $v0, 0x304($s1)
    ctx->pc = 0x1a8a4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x1a8a50: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a8a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a8a54: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a8a54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a8a58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8a5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8a60: 0x245200c8  addiu       $s2, $v0, 0xC8
    ctx->pc = 0x1a8a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1a8a64: 0x82220305  lb          $v0, 0x305($s1)
    ctx->pc = 0x1a8a64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 773)));
    // 0x1a8a68: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a8a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a8a6c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a8a6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a8a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8a74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8a78: 0x245300fa  addiu       $s3, $v0, 0xFA
    ctx->pc = 0x1a8a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 250));
    // 0x1a8a7c: 0x82220304  lb          $v0, 0x304($s1)
    ctx->pc = 0x1a8a7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x1a8a80: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a8a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a8a84: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a8a84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a8a88: 0x82220305  lb          $v0, 0x305($s1)
    ctx->pc = 0x1a8a88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 773)));
    // 0x1a8a8c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a8a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a8a90: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a8a90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a8a94: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8a98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a8a9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a8a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a8aa0: 0xa2220313  sb          $v0, 0x313($s1)
    ctx->pc = 0x1a8aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 787), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a8aa4u;
}
