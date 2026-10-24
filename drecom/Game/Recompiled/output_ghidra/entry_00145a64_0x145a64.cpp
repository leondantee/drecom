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

// Function: entry_00145a64
// Address: 0x145a64 - 0x145aec
void entry_00145a64_0x145a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145a64_0x145a64");
#endif

    ctx->pc = 0x145a64u;

    // 0x145a64: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a68: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145a6c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x145a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x145a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145a74: 0x0  nop
    ctx->pc = 0x145a74u;
    // NOP
    // 0x145a78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145a7c: 0x0  nop
    ctx->pc = 0x145a7cu;
    // NOP
    // 0x145a80: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x145A80u;
    {
        const bool branch_taken_0x145a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145a80) {
            ctx->pc = 0x145AECu;
            return;
        }
    }
    ctx->pc = 0x145A88u;
    // 0x145a88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a8c: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x145a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x145a90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x145a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x145a94: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x145a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    // 0x145a98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145a9c: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x145a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x145aa0: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x145aa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x145aa4: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x145AA4u;
    {
        const bool branch_taken_0x145aa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x145aa4) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x145AACu;
    // 0x145aac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145ab0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ab4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x145ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x145ab8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145abc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x145abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x145ac0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ac4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x145ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x145ac8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145acc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x145accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x145ad0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ad4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x145ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x145ad8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x145ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x145adc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ae0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x145ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x145ae4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145AE4u;
    {
        const bool branch_taken_0x145ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ae4) {
            ctx->pc = 0x145AF4u;
            return;
        }
    }
    ctx->pc = 0x145AECu;
}
