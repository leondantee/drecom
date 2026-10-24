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

// Function: entry_001939c8
// Address: 0x1939c8 - 0x193a2c
void entry_001939c8_0x1939c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001939c8_0x1939c8");
#endif

    ctx->pc = 0x1939c8u;

    // 0x1939c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1939c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1939cc: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x1939ccu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1939d0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1939d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1939d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1939d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1939d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1939d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1939dc: 0x0  nop
    ctx->pc = 0x1939dcu;
    // NOP
    // 0x1939e0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1939e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1939e4: 0x0  nop
    ctx->pc = 0x1939e4u;
    // NOP
    // 0x1939e8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1939E8u;
    {
        const bool branch_taken_0x1939e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1939e8) {
            ctx->pc = 0x193A2Cu;
            return;
        }
    }
    ctx->pc = 0x1939F0u;
    // 0x1939f0: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x1939f4: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1939f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1939f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1939f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1939fc: 0x0  nop
    ctx->pc = 0x1939fcu;
    // NOP
    // 0x193a00: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x193a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193a04: 0x0  nop
    ctx->pc = 0x193a04u;
    // NOP
    // 0x193a08: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x193A08u;
    {
        const bool branch_taken_0x193a08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193a08) {
            ctx->pc = 0x193A2Cu;
            return;
        }
    }
    ctx->pc = 0x193A10u;
    // 0x193a10: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x193a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x193a14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193a1c: 0x0  nop
    ctx->pc = 0x193a1cu;
    // NOP
    // 0x193a20: 0x46150541  sub.s       $f21, $f0, $f21
    ctx->pc = 0x193a20u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x193a24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x193A24u;
    {
        const bool branch_taken_0x193a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a24) {
            ctx->pc = 0x193A80u;
            return;
        }
    }
    ctx->pc = 0x193A2Cu;
}
