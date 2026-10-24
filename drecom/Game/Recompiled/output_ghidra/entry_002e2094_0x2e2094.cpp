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

// Function: entry_002e2094
// Address: 0x2e2094 - 0x2e2110
void entry_002e2094_0x2e2094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2094_0x2e2094");
#endif

    ctx->pc = 0x2e2094u;

    // 0x2e2094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2098: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e209c: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x2e209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e20a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e20a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e20a4: 0x0  nop
    ctx->pc = 0x2e20a4u;
    // NOP
    // 0x2e20a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e20a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e20ac: 0x0  nop
    ctx->pc = 0x2e20acu;
    // NOP
    // 0x2e20b0: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x2E20B0u;
    {
        const bool branch_taken_0x2e20b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e20b0) {
            ctx->pc = 0x2E2128u;
            return;
        }
    }
    ctx->pc = 0x2E20B8u;
    // 0x2e20b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e20bc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e20c0: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x2e20c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e20c4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e20c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e20c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e20c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e20cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e20ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e20d0: 0x0  nop
    ctx->pc = 0x2e20d0u;
    // NOP
    // 0x2e20d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e20d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e20d8: 0x0  nop
    ctx->pc = 0x2e20d8u;
    // NOP
    // 0x2e20dc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2E20DCu;
    {
        const bool branch_taken_0x2e20dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e20dc) {
            ctx->pc = 0x2E2110u;
            return;
        }
    }
    ctx->pc = 0x2E20E4u;
    // 0x2e20e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e20e8: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e20e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e20ec: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x2e20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e20f0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e20f4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e20f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e20f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e20f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e20fc: 0x0  nop
    ctx->pc = 0x2e20fcu;
    // NOP
    // 0x2e2100: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e2100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e2104: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x2e2104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x2e2108: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E2108u;
    {
        const bool branch_taken_0x2e2108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2108) {
            ctx->pc = 0x2E2190u;
            return;
        }
    }
    ctx->pc = 0x2E2110u;
}
