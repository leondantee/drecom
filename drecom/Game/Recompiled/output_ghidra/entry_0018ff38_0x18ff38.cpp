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

// Function: entry_0018ff38
// Address: 0x18ff38 - 0x18ff7c
void entry_0018ff38_0x18ff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ff38_0x18ff38");
#endif

    ctx->pc = 0x18ff38u;

    // 0x18ff38: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff3c: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x18ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x18ff40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ff40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ff44: 0x0  nop
    ctx->pc = 0x18ff44u;
    // NOP
    // 0x18ff48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ff48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ff4c: 0x0  nop
    ctx->pc = 0x18ff4cu;
    // NOP
    // 0x18ff50: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18FF50u;
    {
        const bool branch_taken_0x18ff50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ff50) {
            ctx->pc = 0x18FF7Cu;
            return;
        }
    }
    ctx->pc = 0x18FF58u;
    // 0x18ff58: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff5c: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x18ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x18ff60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18ff60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18ff64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ff64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ff68: 0x0  nop
    ctx->pc = 0x18ff68u;
    // NOP
    // 0x18ff6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ff6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ff70: 0x0  nop
    ctx->pc = 0x18ff70u;
    // NOP
    // 0x18ff74: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x18FF74u;
    {
        const bool branch_taken_0x18ff74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ff74) {
            ctx->pc = 0x18FF88u;
            return;
        }
    }
    ctx->pc = 0x18FF7Cu;
}
