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

// Function: entry_002e2190
// Address: 0x2e2190 - 0x2e220c
void entry_002e2190_0x2e2190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2190_0x2e2190");
#endif

    ctx->pc = 0x2e2190u;

    // 0x2e2190: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2194: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2198: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x2e2198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e219c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e219cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e21a0: 0x0  nop
    ctx->pc = 0x2e21a0u;
    // NOP
    // 0x2e21a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e21a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e21a8: 0x0  nop
    ctx->pc = 0x2e21a8u;
    // NOP
    // 0x2e21ac: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x2E21ACu;
    {
        const bool branch_taken_0x2e21ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e21ac) {
            ctx->pc = 0x2E2224u;
            return;
        }
    }
    ctx->pc = 0x2E21B4u;
    // 0x2e21b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e21b8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e21bc: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x2e21bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e21c0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e21c4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e21c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e21c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e21c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e21cc: 0x0  nop
    ctx->pc = 0x2e21ccu;
    // NOP
    // 0x2e21d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e21d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e21d4: 0x0  nop
    ctx->pc = 0x2e21d4u;
    // NOP
    // 0x2e21d8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E21D8u;
    {
        const bool branch_taken_0x2e21d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e21d8) {
            ctx->pc = 0x2E220Cu;
            return;
        }
    }
    ctx->pc = 0x2E21E0u;
    // 0x2e21e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e21e4: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e21e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e21e8: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x2e21e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e21ec: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e21f0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e21f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e21f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e21f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e21f8: 0x0  nop
    ctx->pc = 0x2e21f8u;
    // NOP
    // 0x2e21fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e21fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2200: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x2e2200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x2e2204: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E2204u;
    {
        const bool branch_taken_0x2e2204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2204) {
            ctx->pc = 0x2E228Cu;
            return;
        }
    }
    ctx->pc = 0x2E220Cu;
}
