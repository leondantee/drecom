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

// Function: entry_00345b2c
// Address: 0x345b2c - 0x345c94
void entry_00345b2c_0x345b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345b2c_0x345b2c");
#endif

    switch (ctx->pc) {
        case 0x345b3cu: goto label_345b3c;
        case 0x345b48u: goto label_345b48;
        case 0x345b58u: goto label_345b58;
        case 0x345b64u: goto label_345b64;
        case 0x345becu: goto label_345bec;
        case 0x345c70u: goto label_345c70;
        case 0x345c78u: goto label_345c78;
        default: break;
    }

    ctx->pc = 0x345b2cu;

    // 0x345b2c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345b30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345b34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x345B34u;
    SET_GPR_U32(ctx, 31, 0x345B3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x345B34u, 0x345B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B3Cu;
label_345b3c:
    // 0x345b3c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b40: 0xc05cd10  jal         func_173440
    ctx->pc = 0x345B40u;
    SET_GPR_U32(ctx, 31, 0x345B48u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x345B40u, 0x345B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B48u;
label_345b48:
    // 0x345b48: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345b4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345b50: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x345B50u;
    SET_GPR_U32(ctx, 31, 0x345B58u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x345B50u, 0x345B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B58u;
label_345b58:
    // 0x345b58: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x345B5Cu;
    SET_GPR_U32(ctx, 31, 0x345B64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x345B5Cu, 0x345B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B64u;
label_345b64:
    // 0x345b64: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b68: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x345b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x345b6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x345b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x345b70: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x345b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x345b74: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x345B74u;
    {
        const bool branch_taken_0x345b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345b74) {
            ctx->pc = 0x345D34u;
            return;
        }
    }
    ctx->pc = 0x345B7Cu;
    // 0x345b7c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345b80: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345b84: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x345b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x345b88: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x345b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x345b8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345b90: 0x0  nop
    ctx->pc = 0x345b90u;
    // NOP
    // 0x345b94: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x345b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x345b98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345b98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345b9c: 0x0  nop
    ctx->pc = 0x345b9cu;
    // NOP
    // 0x345ba0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x345ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x345ba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345ba8: 0x0  nop
    ctx->pc = 0x345ba8u;
    // NOP
    // 0x345bac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x345bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x345bb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345bb8: 0x0  nop
    ctx->pc = 0x345bb8u;
    // NOP
    // 0x345bbc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x345bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x345bc0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x345bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x345bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345bc8: 0x0  nop
    ctx->pc = 0x345bc8u;
    // NOP
    // 0x345bcc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x345bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x345bd0: 0xa7a00044  sh          $zero, 0x44($sp)
    ctx->pc = 0x345bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x345bd4: 0xa3a00046  sb          $zero, 0x46($sp)
    ctx->pc = 0x345bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x345bd8: 0xa3a00047  sb          $zero, 0x47($sp)
    ctx->pc = 0x345bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x345bdc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345be0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x345be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x345be4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x345BE4u;
    SET_GPR_U32(ctx, 31, 0x345BECu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x345BE4u, 0x345BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345BECu;
label_345bec:
    // 0x345bec: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x345BECu;
    {
        const bool branch_taken_0x345bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345bec) {
            ctx->pc = 0x345D34u;
            return;
        }
    }
    ctx->pc = 0x345BF4u;
    // 0x345bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345bf8: 0x0  nop
    ctx->pc = 0x345bf8u;
    // NOP
    // 0x345bfc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x345bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x345c00: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x345c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x345c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c08: 0x0  nop
    ctx->pc = 0x345c08u;
    // NOP
    // 0x345c0c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x345c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x345c10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c14: 0x0  nop
    ctx->pc = 0x345c14u;
    // NOP
    // 0x345c18: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x345c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x345c1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345c20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c24: 0x0  nop
    ctx->pc = 0x345c24u;
    // NOP
    // 0x345c28: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x345c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x345c2c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345c30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x345c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345c34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x345c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x345c38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x345c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x345c3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x345c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x345c40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x345c44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345c48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x345c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x345c4c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x345c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x345c50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345c54: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x345c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x345c58: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x345c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345c5c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x345c5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345c60: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x345c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x345c64: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x345c64u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x345c68: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x345C68u;
    SET_GPR_U32(ctx, 31, 0x345C70u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x345C68u, 0x345C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C70u;
label_345c70:
    // 0x345c70: 0xc067694  jal         func_19DA50
    ctx->pc = 0x345C70u;
    SET_GPR_U32(ctx, 31, 0x345C78u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x345C70u, 0x345C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C78u;
label_345c78:
    // 0x345c78: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x345C78u;
    {
        const bool branch_taken_0x345c78 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345c78) {
            ctx->pc = 0x345C94u;
            return;
        }
    }
    ctx->pc = 0x345C80u;
    // 0x345c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c84: 0x0  nop
    ctx->pc = 0x345c84u;
    // NOP
    // 0x345c88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x345c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345c8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x345C8Cu;
    {
        const bool branch_taken_0x345c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345c8c) {
            ctx->pc = 0x345CB0u;
            return;
        }
    }
    ctx->pc = 0x345C94u;
}
