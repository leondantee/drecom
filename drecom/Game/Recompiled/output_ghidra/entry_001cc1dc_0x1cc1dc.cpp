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

// Function: entry_001cc1dc
// Address: 0x1cc1dc - 0x1cc20c
void entry_001cc1dc_0x1cc1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc1dc_0x1cc1dc");
#endif

    ctx->pc = 0x1cc1dcu;

    // 0x1cc1dc: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1cc1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc1e0: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x1cc1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x1cc1e4: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1cc1e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1cc1e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cc1e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc1ec: 0x0  nop
    ctx->pc = 0x1cc1ecu;
    // NOP
    // 0x1cc1f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cc1f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc1f4: 0x0  nop
    ctx->pc = 0x1cc1f4u;
    // NOP
    // 0x1cc1f8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC1F8u;
    {
        const bool branch_taken_0x1cc1f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc1f8) {
            ctx->pc = 0x1CC20Cu;
            return;
        }
    }
    ctx->pc = 0x1CC200u;
    // 0x1cc200: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cc200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cc204: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc208: 0xac851b60  sw          $a1, 0x1B60($a0)
    ctx->pc = 0x1cc208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 5));
    ctx->pc = 0x1cc20cu;
}
