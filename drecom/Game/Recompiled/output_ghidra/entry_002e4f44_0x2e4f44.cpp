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

// Function: entry_002e4f44
// Address: 0x2e4f44 - 0x2e4f80
void entry_002e4f44_0x2e4f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4f44_0x2e4f44");
#endif

    ctx->pc = 0x2e4f44u;

    // 0x2e4f44: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2e4f44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e4f48: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2e4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2e4f4c: 0x24638c08  addiu       $v1, $v1, -0x73F8
    ctx->pc = 0x2e4f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937608));
    // 0x2e4f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e4f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e4f54: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2e4f54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4f58: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2e4f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4f5c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2e4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2e4f60: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2e4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2e4f64: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e4f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e4f68: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x2e4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2e4f6c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2e4f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e4f70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4f74: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e4f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4f78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e4f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e4f7c: 0x0  nop
    ctx->pc = 0x2e4f7cu;
    // NOP
    ctx->pc = 0x2e4f80u;
}
