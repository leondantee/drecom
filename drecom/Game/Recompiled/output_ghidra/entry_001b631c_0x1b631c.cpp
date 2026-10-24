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

// Function: entry_001b631c
// Address: 0x1b631c - 0x1b6378
void entry_001b631c_0x1b631c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b631c_0x1b631c");
#endif

    ctx->pc = 0x1b631cu;

    // 0x1b631c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6320: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b6320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6324: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1b6324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1b6328: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x1b6328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1b632c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b632cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6330: 0x0  nop
    ctx->pc = 0x1b6330u;
    // NOP
    // 0x1b6334: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6338: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b6338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b633c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6340: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b6340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6344: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b6344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1b6348: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b6348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b634c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b634cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6350: 0x0  nop
    ctx->pc = 0x1b6350u;
    // NOP
    // 0x1b6354: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6358: 0x0  nop
    ctx->pc = 0x1b6358u;
    // NOP
    // 0x1b635c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B635Cu;
    {
        const bool branch_taken_0x1b635c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b635c) {
            ctx->pc = 0x1B6378u;
            return;
        }
    }
    ctx->pc = 0x1B6364u;
    // 0x1b6364: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1b6364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1b6368: 0x34526666  ori         $s2, $v0, 0x6666
    ctx->pc = 0x1b6368u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1b636c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b636cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6370: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6374: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b6374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    ctx->pc = 0x1b6378u;
}
