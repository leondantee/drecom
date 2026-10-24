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

// Function: entry_00190d54
// Address: 0x190d54 - 0x190da8
void entry_00190d54_0x190d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190d54_0x190d54");
#endif

    ctx->pc = 0x190d54u;

    // 0x190d54: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190d58: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190d5c: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x190d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190d60: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x190d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190d68: 0x0  nop
    ctx->pc = 0x190d68u;
    // NOP
    // 0x190d6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x190d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190d70: 0x0  nop
    ctx->pc = 0x190d70u;
    // NOP
    // 0x190d74: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x190D74u;
    {
        const bool branch_taken_0x190d74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190d74) {
            ctx->pc = 0x190DA8u;
            return;
        }
    }
    ctx->pc = 0x190D7Cu;
    // 0x190d7c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190d80: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190d84: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x190d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190d88: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x190d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x190d8c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x190d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x190d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190d94: 0x0  nop
    ctx->pc = 0x190d94u;
    // NOP
    // 0x190d98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190d9c: 0x0  nop
    ctx->pc = 0x190d9cu;
    // NOP
    // 0x190da0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x190DA0u;
    {
        const bool branch_taken_0x190da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190da0) {
            ctx->pc = 0x190DB4u;
            return;
        }
    }
    ctx->pc = 0x190DA8u;
}
