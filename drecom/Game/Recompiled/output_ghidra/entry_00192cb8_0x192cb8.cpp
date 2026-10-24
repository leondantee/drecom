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

// Function: entry_00192cb8
// Address: 0x192cb8 - 0x192d10
void entry_00192cb8_0x192cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192cb8_0x192cb8");
#endif

    ctx->pc = 0x192cb8u;

    // 0x192cb8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192cbc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192cc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x192cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192cc4: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x192cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x192cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192ccc: 0x0  nop
    ctx->pc = 0x192cccu;
    // NOP
    // 0x192cd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192cd4: 0x0  nop
    ctx->pc = 0x192cd4u;
    // NOP
    // 0x192cd8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x192CD8u;
    {
        const bool branch_taken_0x192cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192cd8) {
            ctx->pc = 0x192D10u;
            return;
        }
    }
    ctx->pc = 0x192CE0u;
    // 0x192ce0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192ce4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192ce8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x192ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192cec: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x192cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x192cf0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x192cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x192cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192cf8: 0x0  nop
    ctx->pc = 0x192cf8u;
    // NOP
    // 0x192cfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192d00: 0x0  nop
    ctx->pc = 0x192d00u;
    // NOP
    // 0x192d04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x192D04u;
    {
        const bool branch_taken_0x192d04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192d04) {
            ctx->pc = 0x192D18u;
            return;
        }
    }
    ctx->pc = 0x192D0Cu;
    // 0x192d0c: 0x0  nop
    ctx->pc = 0x192d0cu;
    // NOP
    ctx->pc = 0x192d10u;
}
