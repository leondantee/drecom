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

// Function: entry_00167288
// Address: 0x167288 - 0x1672f4
void entry_00167288_0x167288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167288_0x167288");
#endif

    ctx->pc = 0x167288u;

    // 0x167288: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x167288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16728c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x16728Cu;
    {
        const bool branch_taken_0x16728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16728c) {
            ctx->pc = 0x167238u;
            return;
        }
    }
    ctx->pc = 0x167294u;
    // 0x167294: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x167294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16729c: 0x0  nop
    ctx->pc = 0x16729cu;
    // NOP
    // 0x1672a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1672a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1672a4: 0x0  nop
    ctx->pc = 0x1672a4u;
    // NOP
    // 0x1672a8: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1672A8u;
    {
        const bool branch_taken_0x1672a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1672a8) {
            ctx->pc = 0x1672F4u;
            return;
        }
    }
    ctx->pc = 0x1672B0u;
    // 0x1672b0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1672b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1672b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1672b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1672b8: 0x0  nop
    ctx->pc = 0x1672b8u;
    // NOP
    // 0x1672bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1672bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1672c0: 0x0  nop
    ctx->pc = 0x1672c0u;
    // NOP
    // 0x1672c4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1672C4u;
    {
        const bool branch_taken_0x1672c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1672c4) {
            ctx->pc = 0x1672F4u;
            return;
        }
    }
    ctx->pc = 0x1672CCu;
    // 0x1672cc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1672ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1672d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1672d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1672d4: 0x0  nop
    ctx->pc = 0x1672d4u;
    // NOP
    // 0x1672d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1672d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1672dc: 0x0  nop
    ctx->pc = 0x1672dcu;
    // NOP
    // 0x1672e0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1672E0u;
    {
        const bool branch_taken_0x1672e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1672e0) {
            ctx->pc = 0x1672F4u;
            return;
        }
    }
    ctx->pc = 0x1672E8u;
    // 0x1672e8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1672e8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1672ec: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x1672ECu;
    {
        const bool branch_taken_0x1672ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1672ec) {
            ctx->pc = 0x16785Cu;
            return;
        }
    }
    ctx->pc = 0x1672F4u;
}
