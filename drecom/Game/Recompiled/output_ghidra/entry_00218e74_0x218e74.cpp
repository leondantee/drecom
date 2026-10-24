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

// Function: entry_00218e74
// Address: 0x218e74 - 0x218ecc
void entry_00218e74_0x218e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218e74_0x218e74");
#endif

    ctx->pc = 0x218e74u;

    // 0x218e74: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x218e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218e78: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218e7c: 0x12030013  beq         $s0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x218E7Cu;
    {
        const bool branch_taken_0x218e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x218e7c) {
            ctx->pc = 0x218ECCu;
            return;
        }
    }
    ctx->pc = 0x218E84u;
    // 0x218e84: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x218e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218e88: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x218e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x218e8c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x218e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218e90: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x218e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x218e94: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x218e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218e98: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x218e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x218e9c: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x218e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x218ea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218ea4: 0x0  nop
    ctx->pc = 0x218ea4u;
    // NOP
    // 0x218ea8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x218ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x218eac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x218eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x218eb0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x218eb0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218eb4: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x218eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x218eb8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x218eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x218ebc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x218ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218ec0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x218ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x218ec4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x218ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x218ec8: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x218ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x218eccu;
}
