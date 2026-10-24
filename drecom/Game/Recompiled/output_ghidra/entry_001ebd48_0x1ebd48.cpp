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

// Function: entry_001ebd48
// Address: 0x1ebd48 - 0x1ebdbc
void entry_001ebd48_0x1ebd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebd48_0x1ebd48");
#endif

    ctx->pc = 0x1ebd48u;

    // 0x1ebd48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebd4c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ebd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ebd50: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x1ebd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebd54: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1ebd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1ebd58: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1ebd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1ebd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebd60: 0x0  nop
    ctx->pc = 0x1ebd60u;
    // NOP
    // 0x1ebd64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ebd64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebd68: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x1ebd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x1ebd6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebd70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ebd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ebd74: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x1ebd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebd78: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x1ebd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x1ebd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebd80: 0x0  nop
    ctx->pc = 0x1ebd80u;
    // NOP
    // 0x1ebd84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebd84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebd88: 0x0  nop
    ctx->pc = 0x1ebd88u;
    // NOP
    // 0x1ebd8c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1EBD8Cu;
    {
        const bool branch_taken_0x1ebd8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebd8c) {
            ctx->pc = 0x1EBDBCu;
            return;
        }
    }
    ctx->pc = 0x1EBD94u;
    // 0x1ebd94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebd98: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ebd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ebd9c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1ebd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ebda0: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x1ebda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ebda4: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1ebda4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1ebda8: 0x3c02c140  lui         $v0, 0xC140
    ctx->pc = 0x1ebda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49472 << 16));
    // 0x1ebdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebdb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebdb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ebdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ebdb8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1ebdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    ctx->pc = 0x1ebdbcu;
}
