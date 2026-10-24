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

// Function: entry_0018c90c
// Address: 0x18c90c - 0x18c944
void entry_0018c90c_0x18c90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c90c_0x18c90c");
#endif

    ctx->pc = 0x18c90cu;

    // 0x18c90c: 0xdfa300d8  ld          $v1, 0xD8($sp)
    ctx->pc = 0x18c90cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x18c910: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18c914: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18c918: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c91c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c920: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c924: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18c924u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18c928: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18c928u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c92c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18c930: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18c930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18c934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18c938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c93c: 0x0  nop
    ctx->pc = 0x18c93cu;
    // NOP
    // 0x18c940: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x18c940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->pc = 0x18c944u;
}
