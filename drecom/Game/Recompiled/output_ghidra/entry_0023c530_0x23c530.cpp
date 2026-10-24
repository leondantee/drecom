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

// Function: entry_0023c530
// Address: 0x23c530 - 0x23c568
void entry_0023c530_0x23c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c530_0x23c530");
#endif

    ctx->pc = 0x23c530u;

    // 0x23c530: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c534: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x23c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c538: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x23c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c53c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23c53cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c540: 0x0  nop
    ctx->pc = 0x23c540u;
    // NOP
    // 0x23c544: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23C544u;
    {
        const bool branch_taken_0x23c544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c544) {
            ctx->pc = 0x23C568u;
            return;
        }
    }
    ctx->pc = 0x23C54Cu;
    // 0x23c54c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c550: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c554: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x23c554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x23c558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c55c: 0x0  nop
    ctx->pc = 0x23c55cu;
    // NOP
    // 0x23c560: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23c560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c564: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23c564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x23c568u;
}
