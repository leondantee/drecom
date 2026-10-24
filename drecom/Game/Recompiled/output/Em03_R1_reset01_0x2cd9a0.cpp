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

// Function: Em03_R1_reset01
// Address: 0x2cd9a0 - 0x2cdd70
void Em03_R1_reset01_0x2cd9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_reset01_0x2cd9a0");
#endif

    switch (ctx->pc) {
        case 0x2cda28u: goto label_2cda28;
        case 0x2cdad0u: goto label_2cdad0;
        case 0x2cdaf8u: goto label_2cdaf8;
        case 0x2cdb30u: goto label_2cdb30;
        case 0x2cdb9cu: goto label_2cdb9c;
        case 0x2cdba8u: goto label_2cdba8;
        case 0x2cdc04u: goto label_2cdc04;
        case 0x2cdc10u: goto label_2cdc10;
        case 0x2cdc50u: goto label_2cdc50;
        case 0x2cdc6cu: goto label_2cdc6c;
        case 0x2cdc84u: goto label_2cdc84;
        case 0x2cdc90u: goto label_2cdc90;
        case 0x2cdca0u: goto label_2cdca0;
        case 0x2cdcacu: goto label_2cdcac;
        default: break;
    }

    ctx->pc = 0x2cd9a0u;

    // 0x2cd9a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cd9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cd9a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2cd9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2cd9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd9ac: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2cd9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2cd9b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd9b4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2cd9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2cd9b8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2cd9bc: 0x246381e0  addiu       $v1, $v1, -0x7E20
    ctx->pc = 0x2cd9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935008));
    // 0x2cd9c0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2cd9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cd9c4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2cd9c4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3981E0u));
    // 0x2cd9c8: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x2cd9c8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3981F0u));
    // 0x2cd9cc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2cd9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2cd9d0: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2cd9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2cd9d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd9d8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2cd9d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2cd9dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2cd9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cd9e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd9e4: 0x1083008f  beq         $a0, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x2CD9E4u;
    {
        const bool branch_taken_0x2cd9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cd9e4) {
            ctx->pc = 0x2CDC24u;
            goto label_2cdc24;
        }
    }
    ctx->pc = 0x2CD9ECu;
    // 0x2cd9ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD9ECu;
    {
        const bool branch_taken_0x2cd9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd9ec) {
            ctx->pc = 0x2CD9FCu;
            goto label_2cd9fc;
        }
    }
    ctx->pc = 0x2CD9F4u;
    // 0x2cd9f4: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x2CD9F4u;
    {
        const bool branch_taken_0x2cd9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd9f4) {
            ctx->pc = 0x2CDD5Cu;
            goto label_2cdd5c;
        }
    }
    ctx->pc = 0x2CD9FCu;
label_2cd9fc:
    // 0x2cd9fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cda00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda04: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cda04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cda08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda0c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cda0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda10: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cda10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cda14: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2cda14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cda18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cda18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cda1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cda1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cda20: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CDA20u;
    SET_GPR_U32(ctx, 31, 0x2CDA28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CDA20u, 0x2CDA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA28u;
label_2cda28:
    // 0x2cda28: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2cda28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cda2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda30: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2cda30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cda34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cda34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cda38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cda3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda40: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2cda40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2cda44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cda44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cda48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cda48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cda4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cda50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda54: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cda54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cda58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda5c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cda5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda60: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2cda60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cda64: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2cda64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cda68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cda68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cda6c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2cda6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2cda70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cda70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cda74: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda78: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cda78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda7c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2cda7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2cda80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cda80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cda84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cda88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda8c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2cda8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2cda90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cda94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda98: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2cda98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2cda9c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2cda9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2cdaa0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2cdaa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2cdaa4: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2cdaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2cdaa8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CDAA8u;
    {
        const bool branch_taken_0x2cdaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdaa8) {
            ctx->pc = 0x2CDAD8u;
            goto label_2cdad8;
        }
    }
    ctx->pc = 0x2CDAB0u;
    // 0x2cdab0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdab4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdab8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cdab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cdabc: 0x24061e0a  addiu       $a2, $zero, 0x1E0A
    ctx->pc = 0x2cdabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7690));
    // 0x2cdac0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cdac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdac4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cdac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cdac8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CDAC8u;
    SET_GPR_U32(ctx, 31, 0x2CDAD0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CDAC8u, 0x2CDAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAD0u;
label_2cdad0:
    // 0x2cdad0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDAD0u;
    {
        const bool branch_taken_0x2cdad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdad0) {
            ctx->pc = 0x2CDAF8u;
            goto label_2cdaf8;
        }
    }
    ctx->pc = 0x2CDAD8u;
label_2cdad8:
    // 0x2cdad8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdadc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdae0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cdae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cdae4: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2cdae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2cdae8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cdae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdaec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cdaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cdaf0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CDAF0u;
    SET_GPR_U32(ctx, 31, 0x2CDAF8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CDAF0u, 0x2CDAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAF8u;
label_2cdaf8:
    // 0x2cdaf8: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cdafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdb00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdb04: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2cdb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2cdb08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cdb08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdb0c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdb10: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2cdb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2cdb14: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2cdb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2cdb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdb1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdb20: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2cdb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2cdb24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cdb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cdb28: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2CDB28u;
    SET_GPR_U32(ctx, 31, 0x2CDB30u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2CDB28u, 0x2CDB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB30u;
label_2cdb30:
    // 0x2cdb30: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2cdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2cdb34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdb38: 0x0  nop
    ctx->pc = 0x2cdb38u;
    // NOP
    // 0x2cdb3c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cdb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cdb40: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2cdb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2cdb44: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2cdb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2cdb48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdb4c: 0x0  nop
    ctx->pc = 0x2cdb4cu;
    // NOP
    // 0x2cdb50: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2cdb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2cdb54: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2cdb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2cdb58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdb5c: 0x0  nop
    ctx->pc = 0x2cdb5cu;
    // NOP
    // 0x2cdb60: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cdb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cdb64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdb68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cdb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cdb6c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2cdb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2cdb70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2cdb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cdb74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2cdb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2cdb78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cdb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cdb7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2cdb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2cdb80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cdb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cdb84: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2cdb84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cdb88: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2cdb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2cdb8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cdb8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cdb90: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2cdb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cdb94: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2CDB94u;
    SET_GPR_U32(ctx, 31, 0x2CDB9Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2CDB94u, 0x2CDB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB9Cu;
label_2cdb9c:
    // 0x2cdb9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cdb9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cdba0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2CDBA0u;
    SET_GPR_U32(ctx, 31, 0x2CDBA8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2CDBA0u, 0x2CDBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDBA8u;
label_2cdba8:
    // 0x2cdba8: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x2cdba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x2cdbac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdbb0: 0x0  nop
    ctx->pc = 0x2cdbb0u;
    // NOP
    // 0x2cdbb4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cdbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cdbb8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2cdbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2cdbbc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2cdbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2cdbc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cdbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdbc4: 0x0  nop
    ctx->pc = 0x2cdbc4u;
    // NOP
    // 0x2cdbc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2cdbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2cdbcc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdbd0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cdbd4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2cdbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2cdbd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2cdbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cdbdc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2cdbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2cdbe0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cdbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cdbe4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2cdbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2cdbe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cdbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cdbec: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2cdbecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cdbf0: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2cdbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2cdbf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cdbf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cdbf8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2cdbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cdbfc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2CDBFCu;
    SET_GPR_U32(ctx, 31, 0x2CDC04u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2CDBFCu, 0x2CDC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC04u;
label_2cdc04:
    // 0x2cdc04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cdc04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cdc08: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2CDC08u;
    SET_GPR_U32(ctx, 31, 0x2CDC10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2CDC08u, 0x2CDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC10u;
label_2cdc10:
    // 0x2cdc10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc14: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cdc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cdc18: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2cdc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2cdc1c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2cdc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2cdc20: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2cdc20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_2cdc24:
    // 0x2cdc24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc2c: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x2cdc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x2cdc30: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x2cdc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x2cdc34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2cdc34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cdc38: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cdc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cdc3c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2cdc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cdc40: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2cdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2cdc44: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2cdc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2cdc48: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CDC48u;
    SET_GPR_U32(ctx, 31, 0x2CDC50u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CDC48u, 0x2CDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC50u;
label_2cdc50:
    // 0x2cdc50: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2cdc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2cdc54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc58: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cdc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdc5c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2cdc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdc60: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cdc60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cdc64: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CDC64u;
    SET_GPR_U32(ctx, 31, 0x2CDC6Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CDC64u, 0x2CDC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC6Cu;
label_2cdc6c:
    // 0x2cdc6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc70: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2cdc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2cdc74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cdc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cdc7c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CDC7Cu;
    SET_GPR_U32(ctx, 31, 0x2CDC84u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CDC7Cu, 0x2CDC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC84u;
label_2cdc84:
    // 0x2cdc84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc88: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2CDC88u;
    SET_GPR_U32(ctx, 31, 0x2CDC90u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2CDC88u, 0x2CDC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC90u;
label_2cdc90:
    // 0x2cdc90: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cdc94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cdc98: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CDC98u;
    SET_GPR_U32(ctx, 31, 0x2CDCA0u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CDC98u, 0x2CDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCA0u;
label_2cdca0:
    // 0x2cdca0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdca4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CDCA4u;
    SET_GPR_U32(ctx, 31, 0x2CDCACu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CDCA4u, 0x2CDCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCACu;
label_2cdcac:
    // 0x2cdcac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdcb0: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cdcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cdcb4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cdcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cdcb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cdcb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cdcbc: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2cdcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdcc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cdcc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cdcc4: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2cdcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2cdcc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdccc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2cdcccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cdcd0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDCD0u;
    {
        const bool branch_taken_0x2cdcd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdcd0) {
            ctx->pc = 0x2CDCE8u;
            goto label_2cdce8;
        }
    }
    ctx->pc = 0x2CDCD8u;
    // 0x2cdcd8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdcdc: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2cdcdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2cdce0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cdce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cdce4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2cdce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2cdce8:
    // 0x2cdce8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdcec: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2cdcecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cdcf0: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CDCF0u;
    {
        const bool branch_taken_0x2cdcf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdcf0) {
            ctx->pc = 0x2CDD5Cu;
            goto label_2cdd5c;
        }
    }
    ctx->pc = 0x2CDCF8u;
    // 0x2cdcf8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2cdcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2cdcfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cdcfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cdd00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd04: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cdd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cdd08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cdd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdd0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2cdd10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cdd14: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd18: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2cdd18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cdd1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2cdd20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cdd24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2cdd28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cdd2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2cdd30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2cdd34: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2cdd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cdd38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cdd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cdd40: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2cdd40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cdd44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdd48: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2cdd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cdd4c: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2cdd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2cdd50: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2cdd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2cdd54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2cdd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cdd58: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2cdd58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
label_2cdd5c:
    // 0x2cdd5c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2cdd5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdd60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cdd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdd64: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2cdd64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cdd68: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDD70u;
}
