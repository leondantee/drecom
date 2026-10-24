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

// Function: entry_0021b2f4
// Address: 0x21b2f4 - 0x21b31c
void entry_0021b2f4_0x21b2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b2f4_0x21b2f4");
#endif

    ctx->pc = 0x21b2f4u;

    // 0x21b2f4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x21b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21b2f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b2fc: 0x1483017d  bne         $a0, $v1, . + 4 + (0x17D << 2)
    ctx->pc = 0x21B2FCu;
    {
        const bool branch_taken_0x21b2fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21b2fc) {
            ctx->pc = 0x21B8F4u;
            return;
        }
    }
    ctx->pc = 0x21B304u;
    // 0x21b304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21b304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b308: 0x0  nop
    ctx->pc = 0x21b308u;
    // NOP
    // 0x21b30c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b310: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21b310u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b314: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x21B314u;
    {
        const bool branch_taken_0x21b314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b314) {
            ctx->pc = 0x21B5D8u;
            return;
        }
    }
    ctx->pc = 0x21B31Cu;
}
