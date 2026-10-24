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

// Function: entry_001faf1c
// Address: 0x1faf1c - 0x1faf60
void entry_001faf1c_0x1faf1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faf1c_0x1faf1c");
#endif

    ctx->pc = 0x1faf1cu;

    // 0x1faf1c: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x1faf1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1faf20: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1faf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1faf24: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1faf24u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1faf28: 0x0  nop
    ctx->pc = 0x1faf28u;
    // NOP
    // 0x1faf2c: 0x0  nop
    ctx->pc = 0x1faf2cu;
    // NOP
    // 0x1faf30: 0x1812  mflo        $v1
    ctx->pc = 0x1faf30u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1faf34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf38: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1faf38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf3c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x1faf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1faf40: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x1faf40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1faf44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1faf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faf48: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x1faf48u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faf4c: 0x2b31823  subu        $v1, $s5, $s3
    ctx->pc = 0x1faf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1faf50: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1faf50u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf54: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1faf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1faf58: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1faf58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf5c: 0x0  nop
    ctx->pc = 0x1faf5cu;
    // NOP
    ctx->pc = 0x1faf60u;
}
