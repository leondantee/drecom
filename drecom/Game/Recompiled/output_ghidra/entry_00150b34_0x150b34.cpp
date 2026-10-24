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

// Function: entry_00150b34
// Address: 0x150b34 - 0x150e04
void entry_00150b34_0x150b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150b34_0x150b34");
#endif

    switch (ctx->pc) {
        case 0x150b80u: goto label_150b80;
        case 0x150bc8u: goto label_150bc8;
        case 0x150be8u: goto label_150be8;
        case 0x150c58u: goto label_150c58;
        case 0x150c80u: goto label_150c80;
        case 0x150cd8u: goto label_150cd8;
        case 0x150cfcu: goto label_150cfc;
        case 0x150d54u: goto label_150d54;
        case 0x150d78u: goto label_150d78;
        case 0x150dd4u: goto label_150dd4;
        case 0x150df4u: goto label_150df4;
        default: break;
    }

    ctx->pc = 0x150b34u;

    // 0x150b34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b38: 0x0  nop
    ctx->pc = 0x150b38u;
    // NOP
    // 0x150b3c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x150b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x150b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b44: 0x0  nop
    ctx->pc = 0x150b44u;
    // NOP
    // 0x150b48: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x150b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x150b4c: 0x3c064416  lui         $a2, 0x4416
    ctx->pc = 0x150b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17430 << 16));
    // 0x150b50: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x150b50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b54: 0x0  nop
    ctx->pc = 0x150b54u;
    // NOP
    // 0x150b58: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x150b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x150b5c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x150b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x150b60: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x150b60u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b64: 0x0  nop
    ctx->pc = 0x150b64u;
    // NOP
    // 0x150b68: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x150b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x150b6c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x150b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150b70: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150b74: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x150b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150b78: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150B78u;
    SET_GPR_U32(ctx, 31, 0x150B80u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150B80u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150B80u) { return; }
    ctx->pc = 0x150B80u;
label_150b80:
    // 0x150b80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b84: 0x0  nop
    ctx->pc = 0x150b84u;
    // NOP
    // 0x150b88: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150b8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b90: 0x0  nop
    ctx->pc = 0x150b90u;
    // NOP
    // 0x150b94: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150b98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150b98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b9c: 0x0  nop
    ctx->pc = 0x150b9cu;
    // NOP
    // 0x150ba0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150ba4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150bac: 0x0  nop
    ctx->pc = 0x150bacu;
    // NOP
    // 0x150bb0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150bb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150bb8: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150bbc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150bc0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150BC0u;
    SET_GPR_U32(ctx, 31, 0x150BC8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150BC8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150BC8u) { return; }
    ctx->pc = 0x150BC8u;
label_150bc8:
    // 0x150bc8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150bcc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150bd0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150bd4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150bd8: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x150bd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x150bdc: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x150bdcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x150be0: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150BE0u;
    SET_GPR_U32(ctx, 31, 0x150BE8u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150BE0u, 0x150BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BE8u;
label_150be8:
    // 0x150be8: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x150be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x150bec: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x150becu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x150bf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x150bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x150bf4: 0x8c25013c  lw          $a1, 0x13C($at)
    ctx->pc = 0x150bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x150bf8: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x150bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x150bfc: 0x10c00081  beqz        $a2, . + 4 + (0x81 << 2)
    ctx->pc = 0x150BFCu;
    {
        const bool branch_taken_0x150bfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bfc) {
            ctx->pc = 0x150E04u;
            return;
        }
    }
    ctx->pc = 0x150C04u;
    // 0x150c04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c08: 0x0  nop
    ctx->pc = 0x150c08u;
    // NOP
    // 0x150c0c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150c10: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x150c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x150c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c18: 0x0  nop
    ctx->pc = 0x150c18u;
    // NOP
    // 0x150c1c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150c20: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x150c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x150c24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150c24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c28: 0x0  nop
    ctx->pc = 0x150c28u;
    // NOP
    // 0x150c2c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150c30: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x150c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x150c34: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x150c34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c38: 0x0  nop
    ctx->pc = 0x150c38u;
    // NOP
    // 0x150c3c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150c40: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150c44: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x150c44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x150c48: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150c4c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150c50: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150C50u;
    SET_GPR_U32(ctx, 31, 0x150C58u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150C58u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150C58u) { return; }
    ctx->pc = 0x150C58u;
label_150c58:
    // 0x150c58: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x150c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150c5c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150c60: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150c64: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x150c64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x150c68: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150c6c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x150c6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x150c70: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x150c70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x150c74: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x150c74u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x150c78: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150C78u;
    SET_GPR_U32(ctx, 31, 0x150C80u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150C78u, 0x150C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C80u;
label_150c80:
    // 0x150c80: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x150c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x150c84: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x150c84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c8c: 0x0  nop
    ctx->pc = 0x150c8cu;
    // NOP
    // 0x150c90: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150c94: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x150c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x150c98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c9c: 0x0  nop
    ctx->pc = 0x150c9cu;
    // NOP
    // 0x150ca0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150ca4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x150ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x150ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150cac: 0x0  nop
    ctx->pc = 0x150cacu;
    // NOP
    // 0x150cb0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150cb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150cbc: 0x0  nop
    ctx->pc = 0x150cbcu;
    // NOP
    // 0x150cc0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150cc4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150cc8: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150ccc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150cd0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150CD0u;
    SET_GPR_U32(ctx, 31, 0x150CD8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150CD8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150CD8u) { return; }
    ctx->pc = 0x150CD8u;
label_150cd8:
    // 0x150cd8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150cdc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ce0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ce4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x150ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150ce8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x150ce8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x150cec: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x150cecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x150cf0: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x150cf0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x150cf4: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150CF4u;
    SET_GPR_U32(ctx, 31, 0x150CFCu);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150CF4u, 0x150CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CFCu;
label_150cfc:
    // 0x150cfc: 0x2221825  or          $v1, $s1, $v0
    ctx->pc = 0x150cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x150d00: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x150d00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x150d04: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x150d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x150d08: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x150d08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d0c: 0x0  nop
    ctx->pc = 0x150d0cu;
    // NOP
    // 0x150d10: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150d14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d18: 0x0  nop
    ctx->pc = 0x150d18u;
    // NOP
    // 0x150d1c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150d20: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x150d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x150d24: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x150d24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d28: 0x0  nop
    ctx->pc = 0x150d28u;
    // NOP
    // 0x150d2c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150d30: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x150d30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x150d34: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x150d34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d38: 0x0  nop
    ctx->pc = 0x150d38u;
    // NOP
    // 0x150d3c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150d40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150d44: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150d48: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150d4c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150D4Cu;
    SET_GPR_U32(ctx, 31, 0x150D54u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150D54u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150D54u) { return; }
    ctx->pc = 0x150D54u;
label_150d54:
    // 0x150d54: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x150d54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150d58: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150d5c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x150d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150d60: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150d64: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150d68: 0x90c61576  lbu         $a2, 0x1576($a2)
    ctx->pc = 0x150d68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5494)));
    // 0x150d6c: 0x90671577  lbu         $a3, 0x1577($v1)
    ctx->pc = 0x150d6cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5495)));
    // 0x150d70: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150D70u;
    SET_GPR_U32(ctx, 31, 0x150D78u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150D70u, 0x150D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D78u;
label_150d78:
    // 0x150d78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x150d78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150d7c: 0x2232825  or          $a1, $s1, $v1
    ctx->pc = 0x150d7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x150d80: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x150d80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x150d84: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x150d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x150d88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d8c: 0x0  nop
    ctx->pc = 0x150d8cu;
    // NOP
    // 0x150d90: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150d94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d98: 0x0  nop
    ctx->pc = 0x150d98u;
    // NOP
    // 0x150d9c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150da0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x150da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x150da4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150da8: 0x0  nop
    ctx->pc = 0x150da8u;
    // NOP
    // 0x150dac: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150db0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150db8: 0x0  nop
    ctx->pc = 0x150db8u;
    // NOP
    // 0x150dbc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150dc0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150dc4: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150dc8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150dcc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150DCCu;
    SET_GPR_U32(ctx, 31, 0x150DD4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150DD4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150DD4u) { return; }
    ctx->pc = 0x150DD4u;
label_150dd4:
    // 0x150dd4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150dd8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ddc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150de0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150de4: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x150de4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x150de8: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x150de8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x150dec: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150DECu;
    SET_GPR_U32(ctx, 31, 0x150DF4u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150DECu, 0x150DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DF4u;
label_150df4:
    // 0x150df4: 0x2221825  or          $v1, $s1, $v0
    ctx->pc = 0x150df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x150df8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x150df8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x150dfc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x150DFCu;
    {
        const bool branch_taken_0x150dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150dfc) {
            ctx->pc = 0x151010u;
            return;
        }
    }
    ctx->pc = 0x150E04u;
}
