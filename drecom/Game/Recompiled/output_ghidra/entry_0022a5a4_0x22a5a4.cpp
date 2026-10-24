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

// Function: entry_0022a5a4
// Address: 0x22a5a4 - 0x22a5e8
void entry_0022a5a4_0x22a5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a5a4_0x22a5a4");
#endif

    ctx->pc = 0x22a5a4u;

    // 0x22a5a4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a5a8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22a5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a5ac: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x22a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x22a5b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22a5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22a5b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a5b8: 0x0  nop
    ctx->pc = 0x22a5b8u;
    // NOP
    // 0x22a5bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a5bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a5c0: 0x0  nop
    ctx->pc = 0x22a5c0u;
    // NOP
    // 0x22a5c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22A5C4u;
    {
        const bool branch_taken_0x22a5c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a5c4) {
            ctx->pc = 0x22A5E8u;
            return;
        }
    }
    ctx->pc = 0x22A5CCu;
    // 0x22a5cc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x22a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x22a5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a5d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a5d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22a5dc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22a5e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22A5E0u;
    {
        const bool branch_taken_0x22a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a5e0) {
            ctx->pc = 0x22A5FCu;
            return;
        }
    }
    ctx->pc = 0x22A5E8u;
}
