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

// Function: entry_0032c624
// Address: 0x32c624 - 0x32c65c
void entry_0032c624_0x32c624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c624_0x32c624");
#endif

    ctx->pc = 0x32c624u;

    // 0x32c624: 0x82632820  lb          $v1, 0x2820($s3)
    ctx->pc = 0x32c624u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c628: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x32c628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32c62c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32c62cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32c630: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x32c630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32c634: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x32C634u;
    {
        const bool branch_taken_0x32c634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c634) {
            ctx->pc = 0x32C65Cu;
            return;
        }
    }
    ctx->pc = 0x32C63Cu;
    // 0x32c63c: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32c63cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c640: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32c644: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32c644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32c648: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32c648u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c64c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32c650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c654: 0x0  nop
    ctx->pc = 0x32c654u;
    // NOP
    // 0x32c658: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    ctx->pc = 0x32c65cu;
}
