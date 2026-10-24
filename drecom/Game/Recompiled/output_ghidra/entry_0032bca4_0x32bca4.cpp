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

// Function: entry_0032bca4
// Address: 0x32bca4 - 0x32bce8
void entry_0032bca4_0x32bca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032bca4_0x32bca4");
#endif

    ctx->pc = 0x32bca4u;

    // 0x32bca4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x32bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bca8: 0x90425e04  lbu         $v0, 0x5E04($v0)
    ctx->pc = 0x32bca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24068)));
    // 0x32bcac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32bcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32bcb0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x32bcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bcb4: 0x1446000c  bne         $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x32BCB4u;
    {
        const bool branch_taken_0x32bcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x32bcb4) {
            ctx->pc = 0x32BCE8u;
            return;
        }
    }
    ctx->pc = 0x32BCBCu;
    // 0x32bcbc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x32bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bcc0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x32bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x32bcc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32bcc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bcc8: 0xc4405e00  lwc1        $f0, 0x5E00($v0)
    ctx->pc = 0x32bcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bccc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32bcccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bcd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32bcd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bcd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bcd8: 0x0  nop
    ctx->pc = 0x32bcd8u;
    // NOP
    // 0x32bcdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32bcdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32bce0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x32bce4: 0x0  nop
    ctx->pc = 0x32bce4u;
    // NOP
    ctx->pc = 0x32bce8u;
}
