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

// Function: entry_00185738
// Address: 0x185738 - 0x185774
void entry_00185738_0x185738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185738_0x185738");
#endif

    ctx->pc = 0x185738u;

    // 0x185738: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18573c: 0xc4210320  lwc1        $f1, 0x320($at)
    ctx->pc = 0x18573cu;
    { uint32_t bits = FAST_READ32(0x480320u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185740: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x185740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x185744: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x185748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18574c: 0x0  nop
    ctx->pc = 0x18574cu;
    // NOP
    // 0x185750: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185754: 0x0  nop
    ctx->pc = 0x185754u;
    // NOP
    // 0x185758: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185758u;
    {
        const bool branch_taken_0x185758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185758) {
            ctx->pc = 0x185774u;
            return;
        }
    }
    ctx->pc = 0x185760u;
    // 0x185760: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x185760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x185764: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x185768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18576c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18576cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185770: 0xe4200320  swc1        $f0, 0x320($at)
    ctx->pc = 0x185770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480320u, _value); } while (0); }
    ctx->pc = 0x185774u;
}
