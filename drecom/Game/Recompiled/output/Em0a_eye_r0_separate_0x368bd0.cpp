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

// Function: Em0a_eye_r0_separate
// Address: 0x368bd0 - 0x368f18
void Em0a_eye_r0_separate_0x368bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_eye_r0_separate_0x368bd0");
#endif

    switch (ctx->pc) {
        case 0x368ce8u: goto label_368ce8;
        case 0x368cfcu: goto label_368cfc;
        case 0x368d48u: goto label_368d48;
        case 0x368df0u: goto label_368df0;
        case 0x368e0cu: goto label_368e0c;
        case 0x368e80u: goto label_368e80;
        default: break;
    }

    ctx->pc = 0x368bd0u;

    // 0x368bd0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x368bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x368bd4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x368bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x368bd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x368bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x368bdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x368bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x368be0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x368be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x368be4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x368be8: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x368be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x368bec: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x368becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x368bf0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368bf4: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x368bf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x368bf8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x368bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368bfc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x368bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368c00: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x368c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x368c04: 0x2463af10  addiu       $v1, $v1, -0x50F0
    ctx->pc = 0x368c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946576));
    // 0x368c08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368c0c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x368c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368c10: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x368c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368c14: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x368c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x368c18: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x368c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x368c1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x368c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x368c20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x368c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x368c24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x368c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368c28: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x368c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x368c2c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x368c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368c30: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368c34: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x368c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x368c38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x368c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368c3c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x368c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368c40: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x368c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x368c44: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x368c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x368c48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368c4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x368c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368c50: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x368c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x368c54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368c58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x368c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368c5c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x368c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368c60: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x368c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x368c64: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x368c64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368c68: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368c6c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x368c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x368c70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x368c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368c78: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x368C78u;
    {
        const bool branch_taken_0x368c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x368c78) {
            ctx->pc = 0x368D88u;
            goto label_368d88;
        }
    }
    ctx->pc = 0x368C80u;
    // 0x368c80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368C80u;
    {
        const bool branch_taken_0x368c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c80) {
            ctx->pc = 0x368C90u;
            goto label_368c90;
        }
    }
    ctx->pc = 0x368C88u;
    // 0x368c88: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x368C88u;
    {
        const bool branch_taken_0x368c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c88) {
            ctx->pc = 0x368EF8u;
            goto label_368ef8;
        }
    }
    ctx->pc = 0x368C90u;
label_368c90:
    // 0x368c90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x368c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x368c94: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368c98: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x368c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x368c9c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368ca0: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x368ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x368ca4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x368ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x368ca8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x368ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x368cac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x368cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x368cb0: 0x2442af30  addiu       $v0, $v0, -0x50D0
    ctx->pc = 0x368cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946608));
    // 0x368cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x368cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368cb8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x368cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368cbc: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x368cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x368cc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x368cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x368cc4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x368cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x368cc8: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x368cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    // 0x368ccc: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x368cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x368cd0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368cd4: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x368cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x368cd8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x368cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368cdc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x368cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x368ce0: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x368CE0u;
    SET_GPR_U32(ctx, 31, 0x368CE8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x368CE0u, 0x368CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CE8u;
label_368ce8:
    // 0x368ce8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x368ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368cec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x368cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x368cf0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x368cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x368cf4: 0xc067844  jal         func_19E110
    ctx->pc = 0x368CF4u;
    SET_GPR_U32(ctx, 31, 0x368CFCu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x368CF4u, 0x368CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CFCu;
label_368cfc:
    // 0x368cfc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x368cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x368d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d04: 0x0  nop
    ctx->pc = 0x368d04u;
    // NOP
    // 0x368d08: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x368d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x368d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d10: 0x0  nop
    ctx->pc = 0x368d10u;
    // NOP
    // 0x368d14: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x368d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x368d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d1c: 0x0  nop
    ctx->pc = 0x368d1cu;
    // NOP
    // 0x368d20: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x368d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x368d24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x368d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x368d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d2c: 0x0  nop
    ctx->pc = 0x368d2cu;
    // NOP
    // 0x368d30: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x368d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x368d34: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x368d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x368d38: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x368d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x368d3c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x368d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x368d40: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x368D40u;
    SET_GPR_U32(ctx, 31, 0x368D48u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x368D48u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x368D48u) { return; }
    ctx->pc = 0x368D48u;
label_368d48:
    // 0x368d48: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x368d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368d4c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d50: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x368d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x368d54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d58: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d5c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x368d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x368d60: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x368d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368d64: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x368d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x368d6c: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x368d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x368d70: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d74: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x368d74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x368d78: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d7c: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x368d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x368d80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x368d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x368d84: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x368d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
label_368d88:
    // 0x368d88: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x368d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368d8c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x368d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368d94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x368d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x368d98: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x368d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x368d9c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368da0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x368da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368da4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x368da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368da8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x368da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x368dac: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x368dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x368db0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x368db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x368db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368db8: 0x0  nop
    ctx->pc = 0x368db8u;
    // NOP
    // 0x368dbc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x368dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x368dc0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x368dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x368dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368dc8: 0x0  nop
    ctx->pc = 0x368dc8u;
    // NOP
    // 0x368dcc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x368dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x368dd0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x368dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x368dd4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x368dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x368dd8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x368dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x368ddc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x368ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368de0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x368de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x368de4: 0x34480007  ori         $t0, $v0, 0x7
    ctx->pc = 0x368de4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x368de8: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x368DE8u;
    SET_GPR_U32(ctx, 31, 0x368DF0u);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x368DE8u, 0x368DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368DF0u;
label_368df0:
    // 0x368df0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x368df0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x368df4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x368DF4u;
    {
        const bool branch_taken_0x368df4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x368df4) {
            ctx->pc = 0x368E3Cu;
            goto label_368e3c;
        }
    }
    ctx->pc = 0x368DFCu;
    // 0x368dfc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x368dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x368e00: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x368e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x368e04: 0xc040c9e  jal         func_103278
    ctx->pc = 0x368E04u;
    SET_GPR_U32(ctx, 31, 0x368E0Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x368E0Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x368E0Cu) { return; }
    ctx->pc = 0x368E0Cu;
label_368e0c:
    // 0x368e0c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x368e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368e10: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x368e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x368e14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x368e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368e18: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x368e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368e1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x368e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x368e20: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x368e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x368e24: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x368e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368e28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x368e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x368e2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x368e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368e30: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x368e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368e34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x368e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x368e38: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x368e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_368e3c:
    // 0x368e3c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x368e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368e40: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x368e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x368e44: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x368e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x368e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x368e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368e4c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x368e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368e50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x368e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x368e54: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x368e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x368e58: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x368e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368e5c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x368e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x368e60: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x368e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x368e64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x368e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368e68: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x368e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368e6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x368e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x368e70: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x368e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x368e74: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x368e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x368e78: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x368E78u;
    SET_GPR_U32(ctx, 31, 0x368E80u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x368E78u, 0x368E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E80u;
label_368e80:
    // 0x368e80: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x368e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x368e84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x368e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x368e88: 0x0  nop
    ctx->pc = 0x368e88u;
    // NOP
    // 0x368e8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x368e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x368e90: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x368e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x368e94: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368e98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x368e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368e9c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x368e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368ea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x368ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x368ea4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x368ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x368ea8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x368ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368eac: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x368eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368eb0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x368eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x368eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368eb8: 0x0  nop
    ctx->pc = 0x368eb8u;
    // NOP
    // 0x368ebc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x368ebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x368ec0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x368ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x368ec4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x368ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368ec8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x368ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368ecc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x368eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368ed0: 0x0  nop
    ctx->pc = 0x368ed0u;
    // NOP
    // 0x368ed4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x368ED4u;
    {
        const bool branch_taken_0x368ed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x368ed4) {
            ctx->pc = 0x368EF8u;
            goto label_368ef8;
        }
    }
    ctx->pc = 0x368EDCu;
    // 0x368edc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x368edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368ee0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x368ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x368ee4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x368ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368ee8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368eec: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x368eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x368ef0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368ef4: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x368ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
label_368ef8:
    // 0x368ef8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x368ef8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368efc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x368efcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368f00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x368f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368f0c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x368f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x368f10: 0x3e00008  jr          $ra
    ctx->pc = 0x368F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368F18u;
}
