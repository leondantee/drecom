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

// Function: entry_001ddbf0
// Address: 0x1ddbf0 - 0x1ddc48
void entry_001ddbf0_0x1ddbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddbf0_0x1ddbf0");
#endif

    ctx->pc = 0x1ddbf0u;

    // 0x1ddbf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ddbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ddbf4: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x1ddbf4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddbf8: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x1ddbf8u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x1ddbfc: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x1ddbfcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ddc00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1ddc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddc04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddc04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddc08: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1ddc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ddc0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddc0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddc10: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1ddc10u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddc14: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1ddc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ddc18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddc18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddc1c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddc20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddc20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddc24: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1ddc24u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddc28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddc28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddc2c: 0x0  nop
    ctx->pc = 0x1ddc2cu;
    // NOP
    // 0x1ddc30: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1ddc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1ddc34: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1ddc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1ddc38: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1ddc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1ddc3c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ddc3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ddc40: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1DDC40u;
    {
        const bool branch_taken_0x1ddc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc40) {
            ctx->pc = 0x1DDEC8u;
            return;
        }
    }
    ctx->pc = 0x1DDC48u;
}
