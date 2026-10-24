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

// Function: entry_00134a74
// Address: 0x134a74 - 0x134af0
void entry_00134a74_0x134a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134a74_0x134a74");
#endif

    ctx->pc = 0x134a74u;

    // 0x134a74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134a78: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134a7c: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x134a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a84: 0x0  nop
    ctx->pc = 0x134a84u;
    // NOP
    // 0x134a88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134a8c: 0x0  nop
    ctx->pc = 0x134a8cu;
    // NOP
    // 0x134a90: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134A90u;
    {
        const bool branch_taken_0x134a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a90) {
            ctx->pc = 0x134B08u;
            return;
        }
    }
    ctx->pc = 0x134A98u;
    // 0x134a98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134a9c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134aa0: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x134aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134aa4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134aa8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ab0: 0x0  nop
    ctx->pc = 0x134ab0u;
    // NOP
    // 0x134ab4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134ab8: 0x0  nop
    ctx->pc = 0x134ab8u;
    // NOP
    // 0x134abc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134ABCu;
    {
        const bool branch_taken_0x134abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134abc) {
            ctx->pc = 0x134AF0u;
            return;
        }
    }
    ctx->pc = 0x134AC4u;
    // 0x134ac4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134ac8: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134acc: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x134accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ad0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134ad4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134ad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134adc: 0x0  nop
    ctx->pc = 0x134adcu;
    // NOP
    // 0x134ae0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134ae4: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x134ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x134ae8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x134AE8u;
    {
        const bool branch_taken_0x134ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ae8) {
            ctx->pc = 0x134B70u;
            return;
        }
    }
    ctx->pc = 0x134AF0u;
}
