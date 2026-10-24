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

// Function: entry_0022a32c
// Address: 0x22a32c - 0x22a370
void entry_0022a32c_0x22a32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a32c_0x22a32c");
#endif

    ctx->pc = 0x22a32cu;

    // 0x22a32c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a330: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a334: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x22a334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x22a338: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22a338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22a33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a340: 0x0  nop
    ctx->pc = 0x22a340u;
    // NOP
    // 0x22a344: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a344u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a348: 0x0  nop
    ctx->pc = 0x22a348u;
    // NOP
    // 0x22a34c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22A34Cu;
    {
        const bool branch_taken_0x22a34c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a34c) {
            ctx->pc = 0x22A370u;
            return;
        }
    }
    ctx->pc = 0x22A354u;
    // 0x22a354: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22a354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x22a358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a35c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a360: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22a364: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22a368: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22A368u;
    {
        const bool branch_taken_0x22a368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a368) {
            ctx->pc = 0x22A384u;
            return;
        }
    }
    ctx->pc = 0x22A370u;
}
