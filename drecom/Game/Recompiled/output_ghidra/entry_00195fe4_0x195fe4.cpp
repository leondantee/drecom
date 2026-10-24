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

// Function: entry_00195fe4
// Address: 0x195fe4 - 0x196014
void entry_00195fe4_0x195fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195fe4_0x195fe4");
#endif

    ctx->pc = 0x195fe4u;

    // 0x195fe4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x195fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195fe8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x195fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x195fec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x195fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195ff0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195ff4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x195ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ff8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x195ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195ffc: 0x0  nop
    ctx->pc = 0x195ffcu;
    // NOP
    // 0x196000: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x196000u;
    {
        const bool branch_taken_0x196000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x196000) {
            ctx->pc = 0x196014u;
            return;
        }
    }
    ctx->pc = 0x196008u;
    // 0x196008: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x196008u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19600c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19600Cu;
    {
        const bool branch_taken_0x19600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19600c) {
            ctx->pc = 0x196018u;
            return;
        }
    }
    ctx->pc = 0x196014u;
}
