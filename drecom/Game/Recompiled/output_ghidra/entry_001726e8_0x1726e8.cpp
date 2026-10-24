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

// Function: entry_001726e8
// Address: 0x1726e8 - 0x172720
void entry_001726e8_0x1726e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001726e8_0x1726e8");
#endif

    ctx->pc = 0x1726e8u;

    // 0x1726e8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1726e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1726ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1726ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1726f0: 0x0  nop
    ctx->pc = 0x1726f0u;
    // NOP
    // 0x1726f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1726f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1726f8: 0x0  nop
    ctx->pc = 0x1726f8u;
    // NOP
    // 0x1726fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1726FCu;
    {
        const bool branch_taken_0x1726fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1726fc) {
            ctx->pc = 0x172720u;
            return;
        }
    }
    ctx->pc = 0x172704u;
    // 0x172704: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x172704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x172708: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x17270c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17270cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172710: 0x0  nop
    ctx->pc = 0x172710u;
    // NOP
    // 0x172714: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x172718: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172718u;
    {
        const bool branch_taken_0x172718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172718) {
            ctx->pc = 0x172734u;
            return;
        }
    }
    ctx->pc = 0x172720u;
}
