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

// Function: entry_00172ca4
// Address: 0x172ca4 - 0x172cdc
void entry_00172ca4_0x172ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172ca4_0x172ca4");
#endif

    ctx->pc = 0x172ca4u;

    // 0x172ca4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x172ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172ca8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172cac: 0x0  nop
    ctx->pc = 0x172cacu;
    // NOP
    // 0x172cb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172cb4: 0x0  nop
    ctx->pc = 0x172cb4u;
    // NOP
    // 0x172cb8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172CB8u;
    {
        const bool branch_taken_0x172cb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172cb8) {
            ctx->pc = 0x172CDCu;
            return;
        }
    }
    ctx->pc = 0x172CC0u;
    // 0x172cc0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x172cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x172cc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172ccc: 0x0  nop
    ctx->pc = 0x172cccu;
    // NOP
    // 0x172cd0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x172cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x172cd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172CD4u;
    {
        const bool branch_taken_0x172cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172cd4) {
            ctx->pc = 0x172CF0u;
            return;
        }
    }
    ctx->pc = 0x172CDCu;
}
