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

// Function: entry_002c5454
// Address: 0x2c5454 - 0x2c54a8
void entry_002c5454_0x2c5454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5454_0x2c5454");
#endif

    ctx->pc = 0x2c5454u;

    // 0x2c5454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5458: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c545c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2c545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5460: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5464: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c5464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5468: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c5468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c546c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2c546cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2c5470: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5474: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5478: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c5478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c547c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5480: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c5480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5484: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c5484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5488: 0x0  nop
    ctx->pc = 0x2c5488u;
    // NOP
    // 0x2c548c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C548Cu;
    {
        const bool branch_taken_0x2c548c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c548c) {
            ctx->pc = 0x2C54A8u;
            return;
        }
    }
    ctx->pc = 0x2C5494u;
    // 0x2c5494: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5498: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c5498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c549c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c54a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c54a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c54a4: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x2c54a8u;
}
