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

// Function: entry_001b7954
// Address: 0x1b7954 - 0x1b79b0
void entry_001b7954_0x1b7954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7954_0x1b7954");
#endif

    ctx->pc = 0x1b7954u;

    // 0x1b7954: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7958: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b7958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b795c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b795cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1b7960: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x1b7960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b7964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7968: 0x0  nop
    ctx->pc = 0x1b7968u;
    // NOP
    // 0x1b796c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b796cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b7970: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b7970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x1b7974: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7978: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b797c: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1b797cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
    // 0x1b7980: 0x34856666  ori         $a1, $a0, 0x6666
    ctx->pc = 0x1b7980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x1b7984: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b7984u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7988: 0x0  nop
    ctx->pc = 0x1b7988u;
    // NOP
    // 0x1b798c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b798cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7990: 0x0  nop
    ctx->pc = 0x1b7990u;
    // NOP
    // 0x1b7994: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7994u;
    {
        const bool branch_taken_0x1b7994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7994) {
            ctx->pc = 0x1B79B0u;
            return;
        }
    }
    ctx->pc = 0x1B799Cu;
    // 0x1b799c: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b799cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1b79a0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b79a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b79a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b79a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b79a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b79ac: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b79acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    ctx->pc = 0x1b79b0u;
}
