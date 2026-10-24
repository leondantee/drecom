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

// Function: entry_00134978
// Address: 0x134978 - 0x1349f4
void entry_00134978_0x134978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134978_0x134978");
#endif

    ctx->pc = 0x134978u;

    // 0x134978: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13497c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13497cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134980: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x134980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134988: 0x0  nop
    ctx->pc = 0x134988u;
    // NOP
    // 0x13498c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13498cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134990: 0x0  nop
    ctx->pc = 0x134990u;
    // NOP
    // 0x134994: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134994u;
    {
        const bool branch_taken_0x134994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134994) {
            ctx->pc = 0x134A0Cu;
            return;
        }
    }
    ctx->pc = 0x13499Cu;
    // 0x13499c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1349a0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1349a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1349a4: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x1349a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1349a8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1349a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1349ac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1349acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1349b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1349b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1349b4: 0x0  nop
    ctx->pc = 0x1349b4u;
    // NOP
    // 0x1349b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1349b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1349bc: 0x0  nop
    ctx->pc = 0x1349bcu;
    // NOP
    // 0x1349c0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1349C0u;
    {
        const bool branch_taken_0x1349c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1349c0) {
            ctx->pc = 0x1349F4u;
            return;
        }
    }
    ctx->pc = 0x1349C8u;
    // 0x1349c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1349cc: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1349ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1349d0: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x1349d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1349d4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1349d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1349d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1349d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1349dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1349dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1349e0: 0x0  nop
    ctx->pc = 0x1349e0u;
    // NOP
    // 0x1349e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1349e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1349e8: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x1349e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x1349ec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1349ECu;
    {
        const bool branch_taken_0x1349ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1349ec) {
            ctx->pc = 0x134A74u;
            return;
        }
    }
    ctx->pc = 0x1349F4u;
}
