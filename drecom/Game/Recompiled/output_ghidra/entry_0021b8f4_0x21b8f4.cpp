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

// Function: entry_0021b8f4
// Address: 0x21b8f4 - 0x21b91c
void entry_0021b8f4_0x21b8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b8f4_0x21b8f4");
#endif

    ctx->pc = 0x21b8f4u;

    // 0x21b8f4: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x21b8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21b8f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21b8fc: 0x14e4018a  bne         $a3, $a0, . + 4 + (0x18A << 2)
    ctx->pc = 0x21B8FCu;
    {
        const bool branch_taken_0x21b8fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x21b8fc) {
            ctx->pc = 0x21BF28u;
            return;
        }
    }
    ctx->pc = 0x21B904u;
    // 0x21b904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21b904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21b908: 0x0  nop
    ctx->pc = 0x21b908u;
    // NOP
    // 0x21b90c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21b90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21b910: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21b910u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b914: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x21B914u;
    {
        const bool branch_taken_0x21b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b914) {
            ctx->pc = 0x21BBF8u;
            return;
        }
    }
    ctx->pc = 0x21B91Cu;
}
