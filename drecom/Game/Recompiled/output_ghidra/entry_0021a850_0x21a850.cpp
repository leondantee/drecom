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

// Function: entry_0021a850
// Address: 0x21a850 - 0x21a8b0
void entry_0021a850_0x21a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a850_0x21a850");
#endif

    ctx->pc = 0x21a850u;

    // 0x21a850: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a854: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a858: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x21A858u;
    {
        const bool branch_taken_0x21a858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21a858) {
            ctx->pc = 0x21A8B0u;
            return;
        }
    }
    ctx->pc = 0x21A860u;
    // 0x21a860: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x21a860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21a864: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21a864u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a868: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x21a868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x21a86c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21a870: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x21a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21a874: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21a874u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a878: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x21a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x21a87c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21a880: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x21a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21a884: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21a884u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a888: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x21a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x21a88c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21a890: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x21a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21a894: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21a894u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a898: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x21a898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x21a89c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21a8a0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x21a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a8a4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21a8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21a8a8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x21a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a8ac: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21a8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    ctx->pc = 0x21a8b0u;
}
