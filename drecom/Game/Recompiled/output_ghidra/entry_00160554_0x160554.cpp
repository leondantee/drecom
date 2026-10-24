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

// Function: entry_00160554
// Address: 0x160554 - 0x160584
void entry_00160554_0x160554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160554_0x160554");
#endif

    ctx->pc = 0x160554u;

    // 0x160554: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x160554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160558: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x160558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x16055c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16055cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x160560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160564: 0x0  nop
    ctx->pc = 0x160564u;
    // NOP
    // 0x160568: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16056c: 0x0  nop
    ctx->pc = 0x16056cu;
    // NOP
    // 0x160570: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x160570u;
    {
        const bool branch_taken_0x160570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160570) {
            ctx->pc = 0x160584u;
            return;
        }
    }
    ctx->pc = 0x160578u;
    // 0x160578: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x160578u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16057c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x16057Cu;
    {
        const bool branch_taken_0x16057c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16057c) {
            ctx->pc = 0x160678u;
            return;
        }
    }
    ctx->pc = 0x160584u;
}
