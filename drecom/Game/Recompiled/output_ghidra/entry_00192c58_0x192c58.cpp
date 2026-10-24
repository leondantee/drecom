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

// Function: entry_00192c58
// Address: 0x192c58 - 0x192cb0
void entry_00192c58_0x192c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192c58_0x192c58");
#endif

    ctx->pc = 0x192c58u;

    // 0x192c58: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192c5c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192c60: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c64: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x192c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x192c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192c6c: 0x0  nop
    ctx->pc = 0x192c6cu;
    // NOP
    // 0x192c70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192c70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192c74: 0x0  nop
    ctx->pc = 0x192c74u;
    // NOP
    // 0x192c78: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x192C78u;
    {
        const bool branch_taken_0x192c78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192c78) {
            ctx->pc = 0x192CB0u;
            return;
        }
    }
    ctx->pc = 0x192C80u;
    // 0x192c80: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192c84: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x192c88: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c8c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x192c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x192c90: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x192c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x192c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192c98: 0x0  nop
    ctx->pc = 0x192c98u;
    // NOP
    // 0x192c9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192ca0: 0x0  nop
    ctx->pc = 0x192ca0u;
    // NOP
    // 0x192ca4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x192CA4u;
    {
        const bool branch_taken_0x192ca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192ca4) {
            ctx->pc = 0x192CB8u;
            return;
        }
    }
    ctx->pc = 0x192CACu;
    // 0x192cac: 0x0  nop
    ctx->pc = 0x192cacu;
    // NOP
    ctx->pc = 0x192cb0u;
}
