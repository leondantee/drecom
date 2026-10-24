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

// Function: entry_00195eec
// Address: 0x195eec - 0x195f1c
void entry_00195eec_0x195eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195eec_0x195eec");
#endif

    ctx->pc = 0x195eecu;

    // 0x195eec: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x195eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ef0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x195ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x195ef4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x195ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195ef8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195efc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x195efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x195f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195f04: 0x0  nop
    ctx->pc = 0x195f04u;
    // NOP
    // 0x195f08: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x195F08u;
    {
        const bool branch_taken_0x195f08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x195f08) {
            ctx->pc = 0x196014u;
            return;
        }
    }
    ctx->pc = 0x195F10u;
    // 0x195f10: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x195f10u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195f14: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x195F14u;
    {
        const bool branch_taken_0x195f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195f14) {
            ctx->pc = 0x196018u;
            return;
        }
    }
    ctx->pc = 0x195F1Cu;
}
