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

// Function: entry_002d0318
// Address: 0x2d0318 - 0x2d0364
void entry_002d0318_0x2d0318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0318_0x2d0318");
#endif

    ctx->pc = 0x2d0318u;

    // 0x2d0318: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d031c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d031cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0320: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0324: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d032c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0330: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x2d0330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2d0334: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0334u;
    {
        const bool branch_taken_0x2d0334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0334) {
            ctx->pc = 0x2D0364u;
            return;
        }
    }
    ctx->pc = 0x2D033Cu;
    // 0x2d033c: 0x3c02bfef  lui         $v0, 0xBFEF
    ctx->pc = 0x2d033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49135 << 16));
    // 0x2d0340: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x2d0340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x2d0344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0348: 0x0  nop
    ctx->pc = 0x2d0348u;
    // NOP
    // 0x2d034c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d0350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d0350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0354: 0x0  nop
    ctx->pc = 0x2d0354u;
    // NOP
    // 0x2d0358: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2d0358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d035c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D035Cu;
    {
        const bool branch_taken_0x2d035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d035c) {
            ctx->pc = 0x2D0378u;
            return;
        }
    }
    ctx->pc = 0x2D0364u;
}
