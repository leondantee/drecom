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

// Function: entry_0026df70
// Address: 0x26df70 - 0x26df94
void entry_0026df70_0x26df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026df70_0x26df70");
#endif

    ctx->pc = 0x26df70u;

    // 0x26df70: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x26df70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x26df74: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x26df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x26df78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26df78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26df7c: 0x0  nop
    ctx->pc = 0x26df7cu;
    // NOP
    // 0x26df80: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x26df80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x26df84: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x26df84u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26df88: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x26df88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26df8c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x26DF8Cu;
    {
        const bool branch_taken_0x26df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df8c) {
            ctx->pc = 0x26E120u;
            return;
        }
    }
    ctx->pc = 0x26DF94u;
}
