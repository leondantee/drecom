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

// Function: entry_00162734
// Address: 0x162734 - 0x162764
void entry_00162734_0x162734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162734_0x162734");
#endif

    ctx->pc = 0x162734u;

    // 0x162734: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162738: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x162738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x16273c: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x16273cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x162740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162744: 0x0  nop
    ctx->pc = 0x162744u;
    // NOP
    // 0x162748: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16274c: 0x0  nop
    ctx->pc = 0x16274cu;
    // NOP
    // 0x162750: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x162750u;
    {
        const bool branch_taken_0x162750 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162750) {
            ctx->pc = 0x162764u;
            return;
        }
    }
    ctx->pc = 0x162758u;
    // 0x162758: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x162758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16275c: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x16275Cu;
    {
        const bool branch_taken_0x16275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16275c) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x162764u;
}
