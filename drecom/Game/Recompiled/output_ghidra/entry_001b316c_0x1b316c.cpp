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

// Function: entry_001b316c
// Address: 0x1b316c - 0x1b31e0
void entry_001b316c_0x1b316c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b316c_0x1b316c");
#endif

    ctx->pc = 0x1b316cu;

    // 0x1b316c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b316cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b3170: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3174: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b3174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3178: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b317c: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x1b317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
    // 0x1b3180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3184: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1b3184u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3188: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x1b3188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b318c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3190: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3194: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1b3194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b3198: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1b3198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b319c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b31a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b31a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b31a4: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x1b31a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b31a8: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x1b31a8u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x1b31ac: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x1b31acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b31b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b31b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b31b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b31b8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1b31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b31bc: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1b31bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b31c0: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x1b31c0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b31c4: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x1b31c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b31c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b31c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b31cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b31d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1b31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b31d4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1b31d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1b31d8: 0xa3a2010f  sb          $v0, 0x10F($sp)
    ctx->pc = 0x1b31d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b31dc: 0x0  nop
    ctx->pc = 0x1b31dcu;
    // NOP
    ctx->pc = 0x1b31e0u;
}
