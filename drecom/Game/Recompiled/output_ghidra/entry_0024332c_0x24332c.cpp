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

// Function: entry_0024332c
// Address: 0x24332c - 0x2433a0
void entry_0024332c_0x24332c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024332c_0x24332c");
#endif

    ctx->pc = 0x24332cu;

    // 0x24332c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243330: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x243330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243334: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x243334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243338: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x243338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x24333c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x24333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x243340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243344: 0x0  nop
    ctx->pc = 0x243344u;
    // NOP
    // 0x243348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x243348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24334c: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x24334cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x243350: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243354: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243358: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x243358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24335c: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x24335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x243360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243364: 0x0  nop
    ctx->pc = 0x243364u;
    // NOP
    // 0x243368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24336c: 0x0  nop
    ctx->pc = 0x24336cu;
    // NOP
    // 0x243370: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x243370u;
    {
        const bool branch_taken_0x243370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243370) {
            ctx->pc = 0x2433A0u;
            return;
        }
    }
    ctx->pc = 0x243378u;
    // 0x243378: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24337c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x24337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243380: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x243380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x243384: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x243384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x243388: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x243388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x24338c: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x24338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x243390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243394: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243398: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24339c: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x24339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    ctx->pc = 0x2433a0u;
}
