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

// Function: entry_002e228c
// Address: 0x2e228c - 0x2e2308
void entry_002e228c_0x2e228c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e228c_0x2e228c");
#endif

    ctx->pc = 0x2e228cu;

    // 0x2e228c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2290: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2294: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x2e2294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e229c: 0x0  nop
    ctx->pc = 0x2e229cu;
    // NOP
    // 0x2e22a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e22a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e22a4: 0x0  nop
    ctx->pc = 0x2e22a4u;
    // NOP
    // 0x2e22a8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x2E22A8u;
    {
        const bool branch_taken_0x2e22a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e22a8) {
            ctx->pc = 0x2E2320u;
            return;
        }
    }
    ctx->pc = 0x2E22B0u;
    // 0x2e22b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e22b4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e22b8: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x2e22b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e22bc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e22c0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e22c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e22c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e22c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e22c8: 0x0  nop
    ctx->pc = 0x2e22c8u;
    // NOP
    // 0x2e22cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e22ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e22d0: 0x0  nop
    ctx->pc = 0x2e22d0u;
    // NOP
    // 0x2e22d4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E22D4u;
    {
        const bool branch_taken_0x2e22d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e22d4) {
            ctx->pc = 0x2E2308u;
            return;
        }
    }
    ctx->pc = 0x2E22DCu;
    // 0x2e22dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e22e0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e22e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e22e4: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x2e22e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e22e8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e22ec: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e22ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e22f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e22f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e22f4: 0x0  nop
    ctx->pc = 0x2e22f4u;
    // NOP
    // 0x2e22f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e22f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e22fc: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x2e22fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x2e2300: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E2300u;
    {
        const bool branch_taken_0x2e2300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2300) {
            ctx->pc = 0x2E2388u;
            return;
        }
    }
    ctx->pc = 0x2E2308u;
}
