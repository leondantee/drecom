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

// Function: Em06_R1_br_fly
// Address: 0x198ba0 - 0x198db0
void Em06_R1_br_fly_0x198ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_br_fly_0x198ba0");
#endif

    switch (ctx->pc) {
        case 0x198bc8u: goto label_198bc8;
        case 0x198bf0u: goto label_198bf0;
        default: break;
    }

    ctx->pc = 0x198ba0u;

    // 0x198ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198ba4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x198ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x198ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x198bac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x198bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x198bb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198bb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x198bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198bb8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x198bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x198bbc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x198bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x198bc0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x198BC0u;
    SET_GPR_U32(ctx, 31, 0x198BC8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x198BC0u, 0x198BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BC8u;
label_198bc8:
    // 0x198bc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x198bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x198bcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x198bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198bd0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x198bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x198bd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x198bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198bd8: 0x24640170  addiu       $a0, $v1, 0x170
    ctx->pc = 0x198bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x198bdc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x198bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198be0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x198be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x198be4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x198be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x198be8: 0xc05cc90  jal         func_173240
    ctx->pc = 0x198BE8u;
    SET_GPR_U32(ctx, 31, 0x198BF0u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x198BE8u, 0x198BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BF0u;
label_198bf0:
    // 0x198bf0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x198bf0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x198bf4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x198bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x198bf8: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x198bf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x198bfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198c00: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x198c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198c04: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x198c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x198c08: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x198c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x198c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198c10: 0x0  nop
    ctx->pc = 0x198c10u;
    // NOP
    // 0x198c14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198c18: 0x0  nop
    ctx->pc = 0x198c18u;
    // NOP
    // 0x198c1c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x198C1Cu;
    {
        const bool branch_taken_0x198c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198c1c) {
            ctx->pc = 0x198C68u;
            goto label_198c68;
        }
    }
    ctx->pc = 0x198C24u;
    // 0x198c24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198c28: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x198c2c: 0x2c610190  sltiu       $at, $v1, 0x190
    ctx->pc = 0x198c2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)400) ? 1 : 0);
    // 0x198c30: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x198C30u;
    {
        const bool branch_taken_0x198c30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198c30) {
            ctx->pc = 0x198C68u;
            goto label_198c68;
        }
    }
    ctx->pc = 0x198C38u;
    // 0x198c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198c3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198c40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198c44: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x198c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x198c48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198c4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198c50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198c54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198c58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198c5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198c60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198c64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_198c68:
    // 0x198c68: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198C68u;
    {
        const bool branch_taken_0x198c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198c68) {
            ctx->pc = 0x198C7Cu;
            goto label_198c7c;
        }
    }
    ctx->pc = 0x198C70u;
    // 0x198c70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198c74: 0x16030032  bne         $s0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x198C74u;
    {
        const bool branch_taken_0x198c74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x198c74) {
            ctx->pc = 0x198D40u;
            goto label_198d40;
        }
    }
    ctx->pc = 0x198C7Cu;
label_198c7c:
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
            goto label_198d9c;
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
            goto label_198d9c;
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
            goto label_198d08;
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
            goto label_198d9c;
        }
    }
    ctx->pc = 0x198D08u;
label_198d08:
    // 0x198d08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198d0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198d14: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x198d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x198d18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198d20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198d28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198d30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x198d38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x198D38u;
    {
        const bool branch_taken_0x198d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198d38) {
            ctx->pc = 0x198D9Cu;
            goto label_198d9c;
        }
    }
    ctx->pc = 0x198D40u;
label_198d40:
    // 0x198d40: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198d44: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x198d44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x198d48: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x198d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x198d4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x198d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x198d50: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x198D50u;
    {
        const bool branch_taken_0x198d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198d50) {
            ctx->pc = 0x198D9Cu;
            goto label_198d9c;
        }
    }
    ctx->pc = 0x198D58u;
    // 0x198d58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d5c: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x198d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x198d60: 0x2c6101e1  sltiu       $at, $v1, 0x1E1
    ctx->pc = 0x198d60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)481) ? 1 : 0);
    // 0x198d64: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x198D64u;
    {
        const bool branch_taken_0x198d64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x198d64) {
            ctx->pc = 0x198D9Cu;
            goto label_198d9c;
        }
    }
    ctx->pc = 0x198D6Cu;
    // 0x198d6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198d70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198d78: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x198d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x198d7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198d84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198d8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198d94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_198d9c:
    // 0x198d9c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x198d9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198da0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198da4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x198da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x198da8: 0x3e00008  jr          $ra
    ctx->pc = 0x198DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198DB0u;
}
