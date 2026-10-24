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

// Function: entry_002d06e4
// Address: 0x2d06e4 - 0x2d0730
void entry_002d06e4_0x2d06e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d06e4_0x2d06e4");
#endif

    ctx->pc = 0x2d06e4u;

    // 0x2d06e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d06e8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d06ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d06f0: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d06f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d06f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d06fc: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x2d06fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2d0700: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0700u;
    {
        const bool branch_taken_0x2d0700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0700) {
            ctx->pc = 0x2D0730u;
            return;
        }
    }
    ctx->pc = 0x2D0708u;
    // 0x2d0708: 0x3c02bfef  lui         $v0, 0xBFEF
    ctx->pc = 0x2d0708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49135 << 16));
    // 0x2d070c: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x2d070cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x2d0710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0714: 0x0  nop
    ctx->pc = 0x2d0714u;
    // NOP
    // 0x2d0718: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d0718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d071c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d071cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0720: 0x0  nop
    ctx->pc = 0x2d0720u;
    // NOP
    // 0x2d0724: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d0724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d0728: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0728u;
    {
        const bool branch_taken_0x2d0728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0728) {
            ctx->pc = 0x2D0744u;
            return;
        }
    }
    ctx->pc = 0x2D0730u;
}
