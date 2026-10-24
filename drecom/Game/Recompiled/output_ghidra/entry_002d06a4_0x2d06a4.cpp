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

// Function: entry_002d06a4
// Address: 0x2d06a4 - 0x2d06e4
void entry_002d06a4_0x2d06a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d06a4_0x2d06a4");
#endif

    ctx->pc = 0x2d06a4u;

    // 0x2d06a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d06a8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d06a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d06ac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d06acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d06b0: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d06b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d06b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d06bc: 0x28420018  slti        $v0, $v0, 0x18
    ctx->pc = 0x2d06bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2d06c0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D06C0u;
    {
        const bool branch_taken_0x2d06c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d06c0) {
            ctx->pc = 0x2D06E4u;
            return;
        }
    }
    ctx->pc = 0x2D06C8u;
    // 0x2d06c8: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x2d06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x2d06cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d06ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d06d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d06d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d06d4: 0x0  nop
    ctx->pc = 0x2d06d4u;
    // NOP
    // 0x2d06d8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d06d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d06dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D06DCu;
    {
        const bool branch_taken_0x2d06dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d06dc) {
            ctx->pc = 0x2D0744u;
            return;
        }
    }
    ctx->pc = 0x2D06E4u;
}
