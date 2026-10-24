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

// Function: entry_002cdaf8
// Address: 0x2cdaf8 - 0x2cdc24
void entry_002cdaf8_0x2cdaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cdaf8_0x2cdaf8");
#endif

    switch (ctx->pc) {
        case 0x2cdb30u: goto label_2cdb30;
        case 0x2cdb9cu: goto label_2cdb9c;
        case 0x2cdba8u: goto label_2cdba8;
        case 0x2cdc04u: goto label_2cdc04;
        case 0x2cdc10u: goto label_2cdc10;
        default: break;
    }

    ctx->pc = 0x2cdaf8u;

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
    ctx->pc = 0x2cdc24u;
}
