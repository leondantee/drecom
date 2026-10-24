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

// Function: entry_001346c0
// Address: 0x1346c0 - 0x134718
void entry_001346c0_0x1346c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001346c0_0x1346c0");
#endif

    ctx->pc = 0x1346c0u;

    // 0x1346c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1346c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1346c4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1346c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1346c8: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x1346c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1346cc: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x1346ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x1346d0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1346d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1346d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1346d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1346d8: 0x0  nop
    ctx->pc = 0x1346d8u;
    // NOP
    // 0x1346dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1346dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1346e0: 0x0  nop
    ctx->pc = 0x1346e0u;
    // NOP
    // 0x1346e4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1346E4u;
    {
        const bool branch_taken_0x1346e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1346e4) {
            ctx->pc = 0x134718u;
            return;
        }
    }
    ctx->pc = 0x1346ECu;
    // 0x1346ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1346ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1346f0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1346f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1346f4: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x1346f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1346f8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1346f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1346fc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1346fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134704: 0x0  nop
    ctx->pc = 0x134704u;
    // NOP
    // 0x134708: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13470c: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x13470cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x134710: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134710u;
    {
        const bool branch_taken_0x134710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134710) {
            ctx->pc = 0x134728u;
            return;
        }
    }
    ctx->pc = 0x134718u;
}
