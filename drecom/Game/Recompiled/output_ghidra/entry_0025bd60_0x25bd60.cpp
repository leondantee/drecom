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

// Function: entry_0025bd60
// Address: 0x25bd60 - 0x25bdd0
void entry_0025bd60_0x25bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025bd60_0x25bd60");
#endif

    ctx->pc = 0x25bd60u;

    // 0x25bd60: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x25bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bd64: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bd68: 0xc46002e0  lwc1        $f0, 0x2E0($v1)
    ctx->pc = 0x25bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bd6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25bd6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25bd70: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x25bd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25bd74: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x25bd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bd78: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x25bd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x25bd7c: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x25bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25bd80: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bd84: 0xc46002e8  lwc1        $f0, 0x2E8($v1)
    ctx->pc = 0x25bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bd88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25bd88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25bd8c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25bd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25bd90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25bd94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25bd94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25bd98: 0x0  nop
    ctx->pc = 0x25bd98u;
    // NOP
    // 0x25bd9c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x25bd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x25bda0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bda4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25bda4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25bda8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25bda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25bdac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25bdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25bdb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BDB0u;
    {
        const bool branch_taken_0x25bdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bdb0) {
            ctx->pc = 0x25BDD0u;
            return;
        }
    }
    ctx->pc = 0x25BDB8u;
    // 0x25bdb8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25bdbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25bdbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25bdc0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x25bdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bdc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25bdc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25bdc8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x25bdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25bdcc: 0x0  nop
    ctx->pc = 0x25bdccu;
    // NOP
    ctx->pc = 0x25bdd0u;
}
