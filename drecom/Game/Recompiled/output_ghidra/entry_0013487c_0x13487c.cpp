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

// Function: entry_0013487c
// Address: 0x13487c - 0x1348f8
void entry_0013487c_0x13487c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013487c_0x13487c");
#endif

    ctx->pc = 0x13487cu;

    // 0x13487c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13487cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134880: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134884: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x134884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13488c: 0x0  nop
    ctx->pc = 0x13488cu;
    // NOP
    // 0x134890: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134894: 0x0  nop
    ctx->pc = 0x134894u;
    // NOP
    // 0x134898: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134898u;
    {
        const bool branch_taken_0x134898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134898) {
            ctx->pc = 0x134910u;
            return;
        }
    }
    ctx->pc = 0x1348A0u;
    // 0x1348a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1348a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1348a4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1348a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1348a8: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x1348a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1348ac: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1348acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1348b0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1348b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1348b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1348b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1348b8: 0x0  nop
    ctx->pc = 0x1348b8u;
    // NOP
    // 0x1348bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1348bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1348c0: 0x0  nop
    ctx->pc = 0x1348c0u;
    // NOP
    // 0x1348c4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1348C4u;
    {
        const bool branch_taken_0x1348c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1348c4) {
            ctx->pc = 0x1348F8u;
            return;
        }
    }
    ctx->pc = 0x1348CCu;
    // 0x1348cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1348ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1348d0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1348d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1348d4: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x1348d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1348d8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1348d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1348dc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1348dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1348e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1348e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1348e4: 0x0  nop
    ctx->pc = 0x1348e4u;
    // NOP
    // 0x1348e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1348e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1348ec: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x1348ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x1348f0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1348F0u;
    {
        const bool branch_taken_0x1348f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1348f0) {
            ctx->pc = 0x134978u;
            return;
        }
    }
    ctx->pc = 0x1348F8u;
}
