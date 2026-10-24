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

// Function: entry_00193a2c
// Address: 0x193a2c - 0x193a80
void entry_00193a2c_0x193a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a2c_0x193a2c");
#endif

    ctx->pc = 0x193a2cu;

    // 0x193a2c: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x193a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x193a30: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x193a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x193a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193a38: 0x0  nop
    ctx->pc = 0x193a38u;
    // NOP
    // 0x193a3c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x193a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193a40: 0x0  nop
    ctx->pc = 0x193a40u;
    // NOP
    // 0x193a44: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x193A44u;
    {
        const bool branch_taken_0x193a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193a44) {
            ctx->pc = 0x193A80u;
            return;
        }
    }
    ctx->pc = 0x193A4Cu;
    // 0x193a4c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x193a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x193a50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193a58: 0x0  nop
    ctx->pc = 0x193a58u;
    // NOP
    // 0x193a5c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x193a5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193a60: 0x0  nop
    ctx->pc = 0x193a60u;
    // NOP
    // 0x193a64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x193A64u;
    {
        const bool branch_taken_0x193a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193a64) {
            ctx->pc = 0x193A80u;
            return;
        }
    }
    ctx->pc = 0x193A6Cu;
    // 0x193a6c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x193a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x193a70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193a78: 0x0  nop
    ctx->pc = 0x193a78u;
    // NOP
    // 0x193a7c: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x193a7cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x193a80u;
}
