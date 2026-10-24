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

// Function: entry_0015ee40
// Address: 0x15ee40 - 0x15ee6c
void entry_0015ee40_0x15ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ee40_0x15ee40");
#endif

    ctx->pc = 0x15ee40u;

    // 0x15ee40: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x15ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ee44: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x15ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x15ee48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ee48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ee4c: 0x0  nop
    ctx->pc = 0x15ee4cu;
    // NOP
    // 0x15ee50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15ee50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ee54: 0x0  nop
    ctx->pc = 0x15ee54u;
    // NOP
    // 0x15ee58: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15EE58u;
    {
        const bool branch_taken_0x15ee58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ee58) {
            ctx->pc = 0x15EE6Cu;
            return;
        }
    }
    ctx->pc = 0x15EE60u;
    // 0x15ee60: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15ee60u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ee64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15EE64u;
    {
        const bool branch_taken_0x15ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee64) {
            ctx->pc = 0x15EE94u;
            return;
        }
    }
    ctx->pc = 0x15EE6Cu;
}
