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

// Function: entry_0022b678
// Address: 0x22b678 - 0x22b6bc
void entry_0022b678_0x22b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b678_0x22b678");
#endif

    ctx->pc = 0x22b678u;

    // 0x22b678: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b67c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b680: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b684: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b688: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22b688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b68c: 0x0  nop
    ctx->pc = 0x22b68cu;
    // NOP
    // 0x22b690: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x22B690u;
    {
        const bool branch_taken_0x22b690 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b690) {
            ctx->pc = 0x22B6BCu;
            return;
        }
    }
    ctx->pc = 0x22B698u;
    // 0x22b698: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b69c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b6a0: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22b6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b6a4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x22b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x22b6a8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x22b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x22b6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b6b0: 0x0  nop
    ctx->pc = 0x22b6b0u;
    // NOP
    // 0x22b6b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22b6b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b6b8: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22b6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    ctx->pc = 0x22b6bcu;
}
