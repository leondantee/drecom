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

// Function: entry_00184738
// Address: 0x184738 - 0x184760
void entry_00184738_0x184738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184738_0x184738");
#endif

    ctx->pc = 0x184738u;

    // 0x184738: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x184738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18473c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x184740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184744: 0x0  nop
    ctx->pc = 0x184744u;
    // NOP
    // 0x184748: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18474c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x18474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x184750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184754: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x184754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x184758: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x184758u;
    {
        const bool branch_taken_0x184758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184758) {
            ctx->pc = 0x184918u;
            return;
        }
    }
    ctx->pc = 0x184760u;
}
