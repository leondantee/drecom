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

// Function: entry_00246c58
// Address: 0x246c58 - 0x246dfc
void entry_00246c58_0x246c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246c58_0x246c58");
#endif

    switch (ctx->pc) {
        case 0x246c84u: goto label_246c84;
        case 0x246ca0u: goto label_246ca0;
        case 0x246cb8u: goto label_246cb8;
        case 0x246cc8u: goto label_246cc8;
        case 0x246d54u: goto label_246d54;
        case 0x246dd8u: goto label_246dd8;
        case 0x246de0u: goto label_246de0;
        default: break;
    }

    ctx->pc = 0x246c58u;

    // 0x246c58: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x246c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x246c5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x246c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x246c60: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x246c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x246c64: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c68: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x246c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c6c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x246c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x246c70: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x246c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x246c74: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x246c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x246c78: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x246c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x246c7c: 0xc05c848  jal         func_172120
    ctx->pc = 0x246C7Cu;
    SET_GPR_U32(ctx, 31, 0x246C84u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x246C7Cu, 0x246C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C84u;
label_246c84:
    // 0x246c84: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x246c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x246c88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246c8c: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x246c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246c90: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x246c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246c94: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x246c94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x246c98: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x246C98u;
    SET_GPR_U32(ctx, 31, 0x246CA0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x246C98u, 0x246CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CA0u;
label_246ca0:
    // 0x246ca0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ca4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x246ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x246ca8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246cac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x246cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x246cb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x246CB0u;
    SET_GPR_U32(ctx, 31, 0x246CB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x246CB0u, 0x246CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CB8u;
label_246cb8:
    // 0x246cb8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x246cb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x246cbc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246cc0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x246CC0u;
    SET_GPR_U32(ctx, 31, 0x246CC8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x246CC0u, 0x246CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CC8u;
label_246cc8:
    // 0x246cc8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246cc8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x246ccc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246cd0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x246cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x246cd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x246cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x246cd8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x246cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x246cdc: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x246CDCu;
    {
        const bool branch_taken_0x246cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246cdc) {
            ctx->pc = 0x246EACu;
            return;
        }
    }
    ctx->pc = 0x246CE4u;
    // 0x246ce4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ce8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x246ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x246cec: 0x24640880  addiu       $a0, $v1, 0x880
    ctx->pc = 0x246cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x246cf0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x246cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x246cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246cf8: 0x0  nop
    ctx->pc = 0x246cf8u;
    // NOP
    // 0x246cfc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x246cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x246d00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d04: 0x0  nop
    ctx->pc = 0x246d04u;
    // NOP
    // 0x246d08: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x246d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x246d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d10: 0x0  nop
    ctx->pc = 0x246d10u;
    // NOP
    // 0x246d14: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x246d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x246d18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x246d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x246d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d20: 0x0  nop
    ctx->pc = 0x246d20u;
    // NOP
    // 0x246d24: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x246d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x246d28: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x246d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x246d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d30: 0x0  nop
    ctx->pc = 0x246d30u;
    // NOP
    // 0x246d34: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x246d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x246d38: 0xa7a00034  sh          $zero, 0x34($sp)
    ctx->pc = 0x246d38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x246d3c: 0xa3a00036  sb          $zero, 0x36($sp)
    ctx->pc = 0x246d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x246d40: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x246d40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x246d44: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246d48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x246d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x246d4c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x246D4Cu;
    SET_GPR_U32(ctx, 31, 0x246D54u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x246D4Cu, 0x246D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D54u;
label_246d54:
    // 0x246d54: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x246D54u;
    {
        const bool branch_taken_0x246d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d54) {
            ctx->pc = 0x246EACu;
            return;
        }
    }
    ctx->pc = 0x246D5Cu;
    // 0x246d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d60: 0x0  nop
    ctx->pc = 0x246d60u;
    // NOP
    // 0x246d64: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x246d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x246d68: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x246d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x246d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d70: 0x0  nop
    ctx->pc = 0x246d70u;
    // NOP
    // 0x246d74: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x246d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x246d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d7c: 0x0  nop
    ctx->pc = 0x246d7cu;
    // NOP
    // 0x246d80: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x246d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x246d84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x246d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x246d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246d8c: 0x0  nop
    ctx->pc = 0x246d8cu;
    // NOP
    // 0x246d90: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x246d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x246d94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246d98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x246d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x246d9c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x246d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x246da0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x246da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x246da4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x246da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x246da8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246dac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x246dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246db0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x246db4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x246db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x246db8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246dbc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x246dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x246dc0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x246dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x246dc4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x246dc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246dc8: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x246dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x246dcc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x246dccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246dd0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x246DD0u;
    SET_GPR_U32(ctx, 31, 0x246DD8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x246DD0u, 0x246DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DD8u;
label_246dd8:
    // 0x246dd8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x246DD8u;
    SET_GPR_U32(ctx, 31, 0x246DE0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246DD8u, 0x246DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246DE0u;
label_246de0:
    // 0x246de0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246DE0u;
    {
        const bool branch_taken_0x246de0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x246de0) {
            ctx->pc = 0x246DFCu;
            return;
        }
    }
    ctx->pc = 0x246DE8u;
    // 0x246de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246dec: 0x0  nop
    ctx->pc = 0x246decu;
    // NOP
    // 0x246df0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x246df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x246df4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x246DF4u;
    {
        const bool branch_taken_0x246df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246df4) {
            ctx->pc = 0x246E18u;
            return;
        }
    }
    ctx->pc = 0x246DFCu;
}
