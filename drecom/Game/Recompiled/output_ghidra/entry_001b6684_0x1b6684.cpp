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

// Function: entry_001b6684
// Address: 0x1b6684 - 0x1b6728
void entry_001b6684_0x1b6684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6684_0x1b6684");
#endif

    ctx->pc = 0x1b6684u;

    // 0x1b6684: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b6684u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6688: 0xc6611b5c  lwc1        $f1, 0x1B5C($s3)
    ctx->pc = 0x1b6688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b668c: 0x3c054240  lui         $a1, 0x4240
    ctx->pc = 0x1b668cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16960 << 16));
    // 0x1b6690: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b6690u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6694: 0x0  nop
    ctx->pc = 0x1b6694u;
    // NOP
    // 0x1b6698: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6698u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b669c: 0x0  nop
    ctx->pc = 0x1b669cu;
    // NOP
    // 0x1b66a0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B66A0u;
    {
        const bool branch_taken_0x1b66a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b66a0) {
            ctx->pc = 0x1B6784u;
            return;
        }
    }
    ctx->pc = 0x1B66A8u;
    // 0x1b66a8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b66ac: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1b66acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1b66b0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1b66b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1b66b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b66b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b66b8: 0x0  nop
    ctx->pc = 0x1b66b8u;
    // NOP
    // 0x1b66bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b66bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b66c0: 0x0  nop
    ctx->pc = 0x1b66c0u;
    // NOP
    // 0x1b66c4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B66C4u;
    {
        const bool branch_taken_0x1b66c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b66c4) {
            ctx->pc = 0x1B6728u;
            return;
        }
    }
    ctx->pc = 0x1B66CCu;
    // 0x1b66cc: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b66ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b66d0: 0xc6011b50  lwc1        $f1, 0x1B50($s0)
    ctx->pc = 0x1b66d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b66d4: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1b66d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1b66d8: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x1b66d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1b66dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b66dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b66e0: 0x0  nop
    ctx->pc = 0x1b66e0u;
    // NOP
    // 0x1b66e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b66e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b66e8: 0xe6001b50  swc1        $f0, 0x1B50($s0)
    ctx->pc = 0x1b66e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6992), bits); }
    // 0x1b66ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b66f0: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b66f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b66f4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b66f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b66f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b66f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b66fc: 0x0  nop
    ctx->pc = 0x1b66fcu;
    // NOP
    // 0x1b6700: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6704: 0x0  nop
    ctx->pc = 0x1b6704u;
    // NOP
    // 0x1b6708: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1B6708u;
    {
        const bool branch_taken_0x1b6708 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6708) {
            ctx->pc = 0x1B6784u;
            return;
        }
    }
    ctx->pc = 0x1B6710u;
    // 0x1b6710: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b6710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b6714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6718: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b671c: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b671cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x1b6720: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B6720u;
    {
        const bool branch_taken_0x1b6720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6720) {
            ctx->pc = 0x1B6784u;
            return;
        }
    }
    ctx->pc = 0x1B6728u;
}
