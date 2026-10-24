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

// Function: entry_00185574
// Address: 0x185574 - 0x1855ac
void entry_00185574_0x185574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185574_0x185574");
#endif

    ctx->pc = 0x185574u;

    // 0x185574: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185578: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x185578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x18557c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185584: 0x0  nop
    ctx->pc = 0x185584u;
    // NOP
    // 0x185588: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18558c: 0x0  nop
    ctx->pc = 0x18558cu;
    // NOP
    // 0x185590: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185590u;
    {
        const bool branch_taken_0x185590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185590) {
            ctx->pc = 0x1855ACu;
            return;
        }
    }
    ctx->pc = 0x185598u;
    // 0x185598: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x185598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x18559c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1855a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1855a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1855a4: 0x0  nop
    ctx->pc = 0x1855a4u;
    // NOP
    // 0x1855a8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1855a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x1855acu;
}
