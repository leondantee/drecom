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

// Function: entry_001dec08
// Address: 0x1dec08 - 0x1dec50
void entry_001dec08_0x1dec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dec08_0x1dec08");
#endif

    ctx->pc = 0x1dec08u;

    // 0x1dec08: 0x9643001c  lhu         $v1, 0x1C($s2)
    ctx->pc = 0x1dec08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1dec0c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec10: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x1dec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x1dec14: 0x3464000f  ori         $a0, $v1, 0xF
    ctx->pc = 0x1dec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x1dec18: 0x9643001e  lhu         $v1, 0x1E($s2)
    ctx->pc = 0x1dec18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x1dec1c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec20: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1dec20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1dec24: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1dec24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1dec28: 0x96430020  lhu         $v1, 0x20($s2)
    ctx->pc = 0x1dec28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1dec2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec30: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1dec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1dec34: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dec34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dec38: 0x96430022  lhu         $v1, 0x22($s2)
    ctx->pc = 0x1dec38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x1dec3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dec3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dec40: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1dec40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1dec44: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1dec44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dec48: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x1dec48u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x1dec4c: 0x0  nop
    ctx->pc = 0x1dec4cu;
    // NOP
    ctx->pc = 0x1dec50u;
}
