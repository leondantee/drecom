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

// Function: entry_002eca70
// Address: 0x2eca70 - 0x2eca94
void entry_002eca70_0x2eca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eca70_0x2eca70");
#endif

    ctx->pc = 0x2eca70u;

    // 0x2eca70: 0x2a270008  slti        $a3, $s1, 0x8
    ctx->pc = 0x2eca70u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2eca74: 0x14e0ff3b  bnez        $a3, . + 4 + (-0xC5 << 2)
    ctx->pc = 0x2ECA74u;
    {
        const bool branch_taken_0x2eca74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eca74) {
            ctx->pc = 0x2EC764u;
            return;
        }
    }
    ctx->pc = 0x2ECA7Cu;
    // 0x2eca7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eca7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eca80: 0x0  nop
    ctx->pc = 0x2eca80u;
    // NOP
    // 0x2eca84: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2eca84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2eca88: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2eca88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eca8c: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x2ECA8Cu;
    {
        const bool branch_taken_0x2eca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eca8c) {
            ctx->pc = 0x2ECF60u;
            return;
        }
    }
    ctx->pc = 0x2ECA94u;
}
