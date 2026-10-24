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

// Function: entry_00364f04
// Address: 0x364f04 - 0x364f3c
void entry_00364f04_0x364f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364f04_0x364f04");
#endif

    ctx->pc = 0x364f04u;

    // 0x364f04: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x364f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364f08: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x364f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x364f0c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x364f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x364f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364f14: 0x0  nop
    ctx->pc = 0x364f14u;
    // NOP
    // 0x364f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364f1c: 0x0  nop
    ctx->pc = 0x364f1cu;
    // NOP
    // 0x364f20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x364F20u;
    {
        const bool branch_taken_0x364f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364f20) {
            ctx->pc = 0x364F3Cu;
            return;
        }
    }
    ctx->pc = 0x364F28u;
    // 0x364f28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x364f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x364f2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364f30: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x364f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x364f34: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x364F34u;
    {
        const bool branch_taken_0x364f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364f34) {
            ctx->pc = 0x365144u;
            return;
        }
    }
    ctx->pc = 0x364F3Cu;
}
