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

// Function: entry_001736e4
// Address: 0x1736e4 - 0x173714
void entry_001736e4_0x1736e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001736e4_0x1736e4");
#endif

    ctx->pc = 0x1736e4u;

    // 0x1736e4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1736e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1736e8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1736e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1736ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1736ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1736f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1736f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1736f4: 0x0  nop
    ctx->pc = 0x1736f4u;
    // NOP
    // 0x1736f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1736f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1736fc: 0x0  nop
    ctx->pc = 0x1736fcu;
    // NOP
    // 0x173700: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x173700u;
    {
        const bool branch_taken_0x173700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173700) {
            ctx->pc = 0x173714u;
            return;
        }
    }
    ctx->pc = 0x173708u;
    // 0x173708: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x173708u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17370c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17370Cu;
    {
        const bool branch_taken_0x17370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17370c) {
            ctx->pc = 0x173748u;
            return;
        }
    }
    ctx->pc = 0x173714u;
}
