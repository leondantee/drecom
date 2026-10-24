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

// Function: entry_002eb338
// Address: 0x2eb338 - 0x2eb35c
void entry_002eb338_0x2eb338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eb338_0x2eb338");
#endif

    ctx->pc = 0x2eb338u;

    // 0x2eb338: 0x2a23000c  slti        $v1, $s1, 0xC
    ctx->pc = 0x2eb338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2eb33c: 0x1460ff5a  bnez        $v1, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x2EB33Cu;
    {
        const bool branch_taken_0x2eb33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb33c) {
            ctx->pc = 0x2EB0A8u;
            return;
        }
    }
    ctx->pc = 0x2EB344u;
    // 0x2eb344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eb344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb348: 0x0  nop
    ctx->pc = 0x2eb348u;
    // NOP
    // 0x2eb34c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2eb34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2eb350: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2eb350u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eb354: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2EB354u;
    {
        const bool branch_taken_0x2eb354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb354) {
            ctx->pc = 0x2EB5F0u;
            return;
        }
    }
    ctx->pc = 0x2EB35Cu;
}
