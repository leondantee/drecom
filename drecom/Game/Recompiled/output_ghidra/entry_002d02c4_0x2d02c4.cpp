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

// Function: entry_002d02c4
// Address: 0x2d02c4 - 0x2d0318
void entry_002d02c4_0x2d02c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d02c4_0x2d02c4");
#endif

    ctx->pc = 0x2d02c4u;

    // 0x2d02c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d02c8: 0x24428730  addiu       $v0, $v0, -0x78D0
    ctx->pc = 0x2d02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936368));
    // 0x2d02cc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2d02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d02d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d02d0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398730u));
    // 0x2d02d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d02d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d02d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d02dc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d02e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d02e4: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d02e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d02ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d02f0: 0x28420018  slti        $v0, $v0, 0x18
    ctx->pc = 0x2d02f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2d02f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D02F4u;
    {
        const bool branch_taken_0x2d02f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d02f4) {
            ctx->pc = 0x2D0318u;
            return;
        }
    }
    ctx->pc = 0x2D02FCu;
    // 0x2d02fc: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x2d02fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x2d0300: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d0300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d0304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0308: 0x0  nop
    ctx->pc = 0x2d0308u;
    // NOP
    // 0x2d030c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2d030cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d0310: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D0310u;
    {
        const bool branch_taken_0x2d0310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0310) {
            ctx->pc = 0x2D0378u;
            return;
        }
    }
    ctx->pc = 0x2D0318u;
}
