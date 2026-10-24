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

// Function: entry_00231a58
// Address: 0x231a58 - 0x231a8c
void entry_00231a58_0x231a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231a58_0x231a58");
#endif

    ctx->pc = 0x231a58u;

    // 0x231a58: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x231a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231a5c: 0x944311f4  lhu         $v1, 0x11F4($v0)
    ctx->pc = 0x231a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x231a60: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x231a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x231a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x231a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231a68: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x231A68u;
    {
        const bool branch_taken_0x231a68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x231a68) {
            ctx->pc = 0x231A8Cu;
            return;
        }
    }
    ctx->pc = 0x231A70u;
    // 0x231a70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x231a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231a74: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231a78: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x231a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x231a7c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x231a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x231a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231a84: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231a88: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x231a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    ctx->pc = 0x231a8cu;
}
