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

// Function: entry_001936a4
// Address: 0x1936a4 - 0x1936f8
void entry_001936a4_0x1936a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001936a4_0x1936a4");
#endif

    ctx->pc = 0x1936a4u;

    // 0x1936a4: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x1936a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x1936a8: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1936a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1936ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1936acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936b0: 0x0  nop
    ctx->pc = 0x1936b0u;
    // NOP
    // 0x1936b4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1936b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936b8: 0x0  nop
    ctx->pc = 0x1936b8u;
    // NOP
    // 0x1936bc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1936BCu;
    {
        const bool branch_taken_0x1936bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1936bc) {
            ctx->pc = 0x1936F8u;
            return;
        }
    }
    ctx->pc = 0x1936C4u;
    // 0x1936c4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1936c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1936c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1936c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1936cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1936ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936d0: 0x0  nop
    ctx->pc = 0x1936d0u;
    // NOP
    // 0x1936d4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1936d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936d8: 0x0  nop
    ctx->pc = 0x1936d8u;
    // NOP
    // 0x1936dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1936DCu;
    {
        const bool branch_taken_0x1936dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1936dc) {
            ctx->pc = 0x1936F8u;
            return;
        }
    }
    ctx->pc = 0x1936E4u;
    // 0x1936e4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1936e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1936e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1936e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1936ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1936ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936f0: 0x0  nop
    ctx->pc = 0x1936f0u;
    // NOP
    // 0x1936f4: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x1936f4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x1936f8u;
}
