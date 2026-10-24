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

// Function: entry_001357a0
// Address: 0x1357a0 - 0x1357d4
void entry_001357a0_0x1357a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001357a0_0x1357a0");
#endif

    ctx->pc = 0x1357a0u;

    // 0x1357a0: 0x86020088  lh          $v0, 0x88($s0)
    ctx->pc = 0x1357a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1357a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1357a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1357a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1357a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1357ac: 0x2841008d  slti        $at, $v0, 0x8D
    ctx->pc = 0x1357acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)141) ? 1 : 0);
    // 0x1357b0: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1357B0u;
    {
        const bool branch_taken_0x1357b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1357b0) {
            ctx->pc = 0x1357D4u;
            return;
        }
    }
    ctx->pc = 0x1357B8u;
    // 0x1357b8: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1357b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1357bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1357bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1357c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1357c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1357c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1357c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1357c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1357c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1357cc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1357CCu;
    SET_GPR_U32(ctx, 31, 0x1357D4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1357D4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1357D4u) { return; }
    ctx->pc = 0x1357D4u;
}
