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

// Function: entry_001b6728
// Address: 0x1b6728 - 0x1b6784
void entry_001b6728_0x1b6728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6728_0x1b6728");
#endif

    ctx->pc = 0x1b6728u;

    // 0x1b6728: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b672c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6730: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1b6730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1b6734: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x1b6734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1b6738: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b6738u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b673c: 0x0  nop
    ctx->pc = 0x1b673cu;
    // NOP
    // 0x1b6740: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6744: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b6744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b6748: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b674c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6750: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1b6750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
    // 0x1b6754: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x1b6754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x1b6758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b675c: 0x0  nop
    ctx->pc = 0x1b675cu;
    // NOP
    // 0x1b6760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6764: 0x0  nop
    ctx->pc = 0x1b6764u;
    // NOP
    // 0x1b6768: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6768u;
    {
        const bool branch_taken_0x1b6768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6768) {
            ctx->pc = 0x1B6784u;
            return;
        }
    }
    ctx->pc = 0x1B6770u;
    // 0x1b6770: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b6770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1b6774: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b6774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b6778: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b677c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b677cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6780: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b6780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    ctx->pc = 0x1b6784u;
}
