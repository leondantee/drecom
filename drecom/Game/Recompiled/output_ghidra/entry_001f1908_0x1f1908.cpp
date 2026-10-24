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

// Function: entry_001f1908
// Address: 0x1f1908 - 0x1f1960
void entry_001f1908_0x1f1908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1908_0x1f1908");
#endif

    ctx->pc = 0x1f1908u;

    // 0x1f1908: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f190c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1910: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f1910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1914: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1f1914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1f1918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f191c: 0x0  nop
    ctx->pc = 0x1f191cu;
    // NOP
    // 0x1f1920: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1f1920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1924: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1928: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f1928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f192c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f192cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1930: 0x0  nop
    ctx->pc = 0x1f1930u;
    // NOP
    // 0x1f1934: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x1F1934u;
    {
        const bool branch_taken_0x1f1934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1934) {
            ctx->pc = 0x1F1A00u;
            return;
        }
    }
    ctx->pc = 0x1F193Cu;
    // 0x1f193c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f193cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1940: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1f1940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1944: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1f1944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x1f1948: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f1948u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f194c: 0x0  nop
    ctx->pc = 0x1f194cu;
    // NOP
    // 0x1f1950: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1954: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f1954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f1958: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1F1958u;
    {
        const bool branch_taken_0x1f1958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1958) {
            ctx->pc = 0x1F1A00u;
            return;
        }
    }
    ctx->pc = 0x1F1960u;
}
