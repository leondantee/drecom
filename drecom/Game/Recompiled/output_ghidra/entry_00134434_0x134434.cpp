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

// Function: entry_00134434
// Address: 0x134434 - 0x1344b0
void entry_00134434_0x134434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134434_0x134434");
#endif

    ctx->pc = 0x134434u;

    // 0x134434: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134438: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13443c: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x13443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134444: 0x0  nop
    ctx->pc = 0x134444u;
    // NOP
    // 0x134448: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13444c: 0x0  nop
    ctx->pc = 0x13444cu;
    // NOP
    // 0x134450: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134450u;
    {
        const bool branch_taken_0x134450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134450) {
            ctx->pc = 0x1344C8u;
            return;
        }
    }
    ctx->pc = 0x134458u;
    // 0x134458: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13445c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134460: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x134460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134464: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x134464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134468: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x13446c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13446cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134470: 0x0  nop
    ctx->pc = 0x134470u;
    // NOP
    // 0x134474: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134478: 0x0  nop
    ctx->pc = 0x134478u;
    // NOP
    // 0x13447c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x13447Cu;
    {
        const bool branch_taken_0x13447c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13447c) {
            ctx->pc = 0x1344B0u;
            return;
        }
    }
    ctx->pc = 0x134484u;
    // 0x134484: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x134484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134488: 0x8ca402d0  lw          $a0, 0x2D0($a1)
    ctx->pc = 0x134488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x13448c: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x13448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134490: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x134490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134494: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13449c: 0x0  nop
    ctx->pc = 0x13449cu;
    // NOP
    // 0x1344a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1344a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1344a4: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x1344a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x1344a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1344A8u;
    {
        const bool branch_taken_0x1344a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1344a8) {
            ctx->pc = 0x134530u;
            return;
        }
    }
    ctx->pc = 0x1344B0u;
}
