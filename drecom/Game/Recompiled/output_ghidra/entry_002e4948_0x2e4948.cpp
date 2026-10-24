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

// Function: entry_002e4948
// Address: 0x2e4948 - 0x2e49f4
void entry_002e4948_0x2e4948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4948_0x2e4948");
#endif

    switch (ctx->pc) {
        case 0x2e4998u: goto label_2e4998;
        default: break;
    }

    ctx->pc = 0x2e4948u;

    // 0x2e4948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e494c: 0x0  nop
    ctx->pc = 0x2e494cu;
    // NOP
    // 0x2e4950: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e4950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e4954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4958: 0x0  nop
    ctx->pc = 0x2e4958u;
    // NOP
    // 0x2e495c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e495cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e4960: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2e4960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2e4964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4968: 0x0  nop
    ctx->pc = 0x2e4968u;
    // NOP
    // 0x2e496c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e496cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e4970: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4978: 0x0  nop
    ctx->pc = 0x2e4978u;
    // NOP
    // 0x2e497c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e497cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e4980: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2e4980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e4984: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x2e4984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e4988: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e4988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e498c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e498cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4990: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E4990u;
    SET_GPR_U32(ctx, 31, 0x2E4998u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E4998u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4998u) { return; }
    ctx->pc = 0x2E4998u;
label_2e4998:
    // 0x2e4998: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2e4998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e499c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2e499cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2e49a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e49a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e49a4: 0x0  nop
    ctx->pc = 0x2e49a4u;
    // NOP
    // 0x2e49a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e49a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e49ac: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e49acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2e49b0: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2e49b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e49b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e49b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e49b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e49bc: 0x0  nop
    ctx->pc = 0x2e49bcu;
    // NOP
    // 0x2e49c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e49c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e49c4: 0x0  nop
    ctx->pc = 0x2e49c4u;
    // NOP
    // 0x2e49c8: 0x4501008f  bc1t        . + 4 + (0x8F << 2)
    ctx->pc = 0x2E49C8u;
    {
        const bool branch_taken_0x2e49c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e49c8) {
            ctx->pc = 0x2E4C08u;
            return;
        }
    }
    ctx->pc = 0x2E49D0u;
    // 0x2e49d0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e49d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e49d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e49d8: 0x0  nop
    ctx->pc = 0x2e49d8u;
    // NOP
    // 0x2e49dc: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e49dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2e49e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e49e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e49e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e49e8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e49e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e49ec: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2E49ECu;
    {
        const bool branch_taken_0x2e49ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e49ec) {
            ctx->pc = 0x2E4C08u;
            return;
        }
    }
    ctx->pc = 0x2E49F4u;
}
