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

// Function: entry_001721e4
// Address: 0x1721e4 - 0x17221c
void entry_001721e4_0x1721e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001721e4_0x1721e4");
#endif

    ctx->pc = 0x1721e4u;

    // 0x1721e4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1721e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1721e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1721e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1721ec: 0x0  nop
    ctx->pc = 0x1721ecu;
    // NOP
    // 0x1721f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1721f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1721f4: 0x0  nop
    ctx->pc = 0x1721f4u;
    // NOP
    // 0x1721f8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1721F8u;
    {
        const bool branch_taken_0x1721f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1721f8) {
            ctx->pc = 0x17221Cu;
            return;
        }
    }
    ctx->pc = 0x172200u;
    // 0x172200: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x172200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x172204: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17220c: 0x0  nop
    ctx->pc = 0x17220cu;
    // NOP
    // 0x172210: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x172210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x172214: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172214u;
    {
        const bool branch_taken_0x172214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172214) {
            ctx->pc = 0x172230u;
            return;
        }
    }
    ctx->pc = 0x17221Cu;
}
