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

// Function: entry_0018c898
// Address: 0x18c898 - 0x18c8d4
void entry_0018c898_0x18c898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c898_0x18c898");
#endif

    ctx->pc = 0x18c898u;

    // 0x18c898: 0xdfa200d8  ld          $v0, 0xD8($sp)
    ctx->pc = 0x18c898u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x18c89c: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18c89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c8a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18c8a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18c8a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c8ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c8b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c8b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18c8b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18c8b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18c8b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c8bc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x18c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18c8c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18c8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18c8c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18c8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c8cc: 0x0  nop
    ctx->pc = 0x18c8ccu;
    // NOP
    // 0x18c8d0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18c8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    ctx->pc = 0x18c8d4u;
}
