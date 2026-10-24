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

// Function: entry_0029a844
// Address: 0x29a844 - 0x29a874
void entry_0029a844_0x29a844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a844_0x29a844");
#endif

    ctx->pc = 0x29a844u;

    // 0x29a844: 0x14a182  srl         $s4, $s4, 6
    ctx->pc = 0x29a844u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 6));
    // 0x29a848: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a84c: 0x945e01a8  lhu         $fp, 0x1A8($v0)
    ctx->pc = 0x29a84cu;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x29a850: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x29a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x29a854: 0x30470010  andi        $a3, $v0, 0x10
    ctx->pc = 0x29a854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x29a858: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A858u;
    {
        const bool branch_taken_0x29a858 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a858) {
            ctx->pc = 0x29A874u;
            return;
        }
    }
    ctx->pc = 0x29A860u;
    // 0x29a860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29a860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a864: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29a864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29a868: 0xe46001d4  swc1        $f0, 0x1D4($v1)
    ctx->pc = 0x29a868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
    // 0x29a86c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29A86Cu;
    {
        const bool branch_taken_0x29a86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a86c) {
            ctx->pc = 0x29A8B4u;
            return;
        }
    }
    ctx->pc = 0x29A874u;
}
