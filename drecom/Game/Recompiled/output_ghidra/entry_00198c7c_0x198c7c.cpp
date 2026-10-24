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

// Function: entry_00198c7c
// Address: 0x198c7c - 0x198d08
void entry_00198c7c_0x198c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198c7c_0x198c7c");
#endif

    ctx->pc = 0x198c7cu;

    // 0x198c7c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198c80: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x198c80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x198c84: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x198c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x198c88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x198c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x198c8c: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x198C8Cu;
    {
        const bool branch_taken_0x198c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198c8c) {
            ctx->pc = 0x198D9Cu;
            return;
        }
    }
    ctx->pc = 0x198C94u;
    // 0x198c94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198c98: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x198c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198c9c: 0x3c0345e1  lui         $v1, 0x45E1
    ctx->pc = 0x198c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17889 << 16));
    // 0x198ca0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x198ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198ca4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x198ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198ca8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198cac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x198cacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198cb0: 0x0  nop
    ctx->pc = 0x198cb0u;
    // NOP
    // 0x198cb4: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x198CB4u;
    {
        const bool branch_taken_0x198cb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198cb4) {
            ctx->pc = 0x198D9Cu;
            return;
        }
    }
    ctx->pc = 0x198CBCu;
    // 0x198cbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198cc0: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x198cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x198cc4: 0x2c6101e1  sltiu       $at, $v1, 0x1E1
    ctx->pc = 0x198cc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)481) ? 1 : 0);
    // 0x198cc8: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x198CC8u;
    {
        const bool branch_taken_0x198cc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x198cc8) {
            ctx->pc = 0x198D08u;
            return;
        }
    }
    ctx->pc = 0x198CD0u;
    // 0x198cd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198cd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198cd8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198cdc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x198cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x198ce0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198ce4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198ce8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198cec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198cf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198cf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198cf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198cfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x198d00: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x198D00u;
    {
        const bool branch_taken_0x198d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198d00) {
            ctx->pc = 0x198D9Cu;
            return;
        }
    }
    ctx->pc = 0x198D08u;
}
