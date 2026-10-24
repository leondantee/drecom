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

// Function: entry_00134b70
// Address: 0x134b70 - 0x134bec
void entry_00134b70_0x134b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134b70_0x134b70");
#endif

    ctx->pc = 0x134b70u;

    // 0x134b70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134b74: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134b78: 0xc461043c  lwc1        $f1, 0x43C($v1)
    ctx->pc = 0x134b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134b80: 0x0  nop
    ctx->pc = 0x134b80u;
    // NOP
    // 0x134b84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134b88: 0x0  nop
    ctx->pc = 0x134b88u;
    // NOP
    // 0x134b8c: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134B8Cu;
    {
        const bool branch_taken_0x134b8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134b8c) {
            ctx->pc = 0x134C04u;
            return;
        }
    }
    ctx->pc = 0x134B94u;
    // 0x134b94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134b98: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134b9c: 0xc461043c  lwc1        $f1, 0x43C($v1)
    ctx->pc = 0x134b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ba0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134ba4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134bac: 0x0  nop
    ctx->pc = 0x134bacu;
    // NOP
    // 0x134bb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134bb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134bb4: 0x0  nop
    ctx->pc = 0x134bb4u;
    // NOP
    // 0x134bb8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134BB8u;
    {
        const bool branch_taken_0x134bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134bb8) {
            ctx->pc = 0x134BECu;
            return;
        }
    }
    ctx->pc = 0x134BC0u;
    // 0x134bc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134bc4: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134bc8: 0xc481043c  lwc1        $f1, 0x43C($a0)
    ctx->pc = 0x134bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134bcc: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134bd0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134bd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134bd8: 0x0  nop
    ctx->pc = 0x134bd8u;
    // NOP
    // 0x134bdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134be0: 0xe480043c  swc1        $f0, 0x43C($a0)
    ctx->pc = 0x134be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1084), bits); }
    // 0x134be4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x134BE4u;
    {
        const bool branch_taken_0x134be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134be4) {
            ctx->pc = 0x134C6Cu;
            return;
        }
    }
    ctx->pc = 0x134BECu;
}
