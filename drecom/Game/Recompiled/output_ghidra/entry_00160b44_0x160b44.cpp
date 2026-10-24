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

// Function: entry_00160b44
// Address: 0x160b44 - 0x160b9c
void entry_00160b44_0x160b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b44_0x160b44");
#endif

    ctx->pc = 0x160b44u;

    // 0x160b44: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160b48: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x160b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x160b4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x160b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x160b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160b54: 0x0  nop
    ctx->pc = 0x160b54u;
    // NOP
    // 0x160b58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160b58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160b5c: 0x0  nop
    ctx->pc = 0x160b5cu;
    // NOP
    // 0x160b60: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x160B60u;
    {
        const bool branch_taken_0x160b60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160b60) {
            ctx->pc = 0x160BCCu;
            return;
        }
    }
    ctx->pc = 0x160B68u;
    // 0x160b68: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x160b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x160b6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160b70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x160B70u;
    {
        const bool branch_taken_0x160b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b70) {
            ctx->pc = 0x160B9Cu;
            return;
        }
    }
    ctx->pc = 0x160B78u;
    // 0x160b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160b7c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160b80: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x160b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x160b84: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160b84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160b88: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b8c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b90: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160b94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x160B94u;
    {
        const bool branch_taken_0x160b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b94) {
            ctx->pc = 0x160BC0u;
            return;
        }
    }
    ctx->pc = 0x160B9Cu;
}
