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

// Function: entry_001b5d94
// Address: 0x1b5d94 - 0x1b5df0
void entry_001b5d94_0x1b5d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5d94_0x1b5d94");
#endif

    ctx->pc = 0x1b5d94u;

    // 0x1b5d94: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5d98: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1b5d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5d9c: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1b5d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1b5da0: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x1b5da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1b5da4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5da8: 0x0  nop
    ctx->pc = 0x1b5da8u;
    // NOP
    // 0x1b5dac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b5dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b5db0: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1b5db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
    // 0x1b5db4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5db8: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b5db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5dbc: 0x3c053fa6  lui         $a1, 0x3FA6
    ctx->pc = 0x1b5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16294 << 16));
    // 0x1b5dc0: 0x34a46666  ori         $a0, $a1, 0x6666
    ctx->pc = 0x1b5dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
    // 0x1b5dc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b5dc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5dc8: 0x0  nop
    ctx->pc = 0x1b5dc8u;
    // NOP
    // 0x1b5dcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5dccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5dd0: 0x0  nop
    ctx->pc = 0x1b5dd0u;
    // NOP
    // 0x1b5dd4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5DD4u;
    {
        const bool branch_taken_0x1b5dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5dd4) {
            ctx->pc = 0x1B5DF0u;
            return;
        }
    }
    ctx->pc = 0x1B5DDCu;
    // 0x1b5ddc: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b5ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1b5de0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b5de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b5de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5de8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5dec: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b5decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    ctx->pc = 0x1b5df0u;
}
