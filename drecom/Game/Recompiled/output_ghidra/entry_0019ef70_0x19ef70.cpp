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

// Function: entry_0019ef70
// Address: 0x19ef70 - 0x19ef94
void entry_0019ef70_0x19ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef70_0x19ef70");
#endif

    ctx->pc = 0x19ef70u;

    // 0x19ef70: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x19ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ef74: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x19ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ef78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ef78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ef7c: 0x0  nop
    ctx->pc = 0x19ef7cu;
    // NOP
    // 0x19ef80: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x19EF80u;
    {
        const bool branch_taken_0x19ef80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ef80) {
            ctx->pc = 0x19EF94u;
            return;
        }
    }
    ctx->pc = 0x19EF88u;
    // 0x19ef88: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19ef88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19ef8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19EF8Cu;
    {
        const bool branch_taken_0x19ef8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef8c) {
            ctx->pc = 0x19EFF0u;
            return;
        }
    }
    ctx->pc = 0x19EF94u;
}
