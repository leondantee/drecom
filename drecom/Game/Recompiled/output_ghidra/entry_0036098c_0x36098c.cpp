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

// Function: entry_0036098c
// Address: 0x36098c - 0x3609b8
void entry_0036098c_0x36098c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036098c_0x36098c");
#endif

    ctx->pc = 0x36098cu;

    // 0x36098c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x36098cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360990: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x360990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x360994: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x360994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x360998: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x360998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x36099c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x36099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x3609a0: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x3609a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3609a4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3609a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3609a8: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x3609a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x3609ac: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3609acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3609b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3609b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3609b4: 0x0  nop
    ctx->pc = 0x3609b4u;
    // NOP
    ctx->pc = 0x3609b8u;
}
