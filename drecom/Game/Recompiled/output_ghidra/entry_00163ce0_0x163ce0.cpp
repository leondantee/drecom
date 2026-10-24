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

// Function: entry_00163ce0
// Address: 0x163ce0 - 0x163d20
void entry_00163ce0_0x163ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163ce0_0x163ce0");
#endif

    ctx->pc = 0x163ce0u;

    // 0x163ce0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x163ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ce4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x163ce8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163cf0: 0x0  nop
    ctx->pc = 0x163cf0u;
    // NOP
    // 0x163cf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163cf8: 0x0  nop
    ctx->pc = 0x163cf8u;
    // NOP
    // 0x163cfc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163CFCu;
    {
        const bool branch_taken_0x163cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163cfc) {
            ctx->pc = 0x163D20u;
            return;
        }
    }
    ctx->pc = 0x163D04u;
    // 0x163d04: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163d08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163d0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163d10: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x163d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163d14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163D18u;
    {
        const bool branch_taken_0x163d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d18) {
            ctx->pc = 0x163D28u;
            return;
        }
    }
    ctx->pc = 0x163D20u;
}
