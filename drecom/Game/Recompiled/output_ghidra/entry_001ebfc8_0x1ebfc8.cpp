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

// Function: entry_001ebfc8
// Address: 0x1ebfc8 - 0x1ec00c
void entry_001ebfc8_0x1ebfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebfc8_0x1ebfc8");
#endif

    ctx->pc = 0x1ebfc8u;

    // 0x1ebfc8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ebfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebfcc: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x1ebfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ebfd0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1ebfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebfd4: 0x3c05442f  lui         $a1, 0x442F
    ctx->pc = 0x1ebfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17455 << 16));
    // 0x1ebfd8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ebfd8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebfdc: 0x0  nop
    ctx->pc = 0x1ebfdcu;
    // NOP
    // 0x1ebfe0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ebfe0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebfe4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebfe8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ebfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebfec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebfecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebff0: 0x0  nop
    ctx->pc = 0x1ebff0u;
    // NOP
    // 0x1ebff4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBFF4u;
    {
        const bool branch_taken_0x1ebff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebff4) {
            ctx->pc = 0x1EC00Cu;
            return;
        }
    }
    ctx->pc = 0x1EBFFCu;
    // 0x1ebffc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ebffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1ec000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec004: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec008: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ec008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x1ec00cu;
}
