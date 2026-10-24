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

// Function: entry_00182a64
// Address: 0x182a64 - 0x182bf4
void entry_00182a64_0x182a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182a64_0x182a64");
#endif

    switch (ctx->pc) {
        case 0x182accu: goto label_182acc;
        case 0x182becu: goto label_182bec;
        default: break;
    }

    ctx->pc = 0x182a64u;

    // 0x182a64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182a68: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182a68u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182a6c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182a70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182a70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182a74: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x182a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182a78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182a7c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182a80: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x182a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x182a84: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x182a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x182a88: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x182a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182a8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182a90: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182a90u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182a94: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182a98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182a98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182a9c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182aa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182aa4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182aa8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182aac: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182ab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182ab4: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x182ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x182ab8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x182ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182abc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x182abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x182ac0: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x182ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182ac4: 0xc05f19c  jal         func_17C670
    ctx->pc = 0x182AC4u;
    SET_GPR_U32(ctx, 31, 0x182ACCu);
    ctx->pc = 0x17C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C670u, 0x182AC4u, 0x182ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182ACCu;
label_182acc:
    // 0x182acc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x182accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ad0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182ad4: 0xe420f240  swc1        $f0, -0xDC0($at)
    ctx->pc = 0x182ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F240u, _value); } while (0); }
    // 0x182ad8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182adc: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182adcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182ae0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182ae4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182ae4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182ae8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182af0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182af4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182af8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b00: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x182b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182b04: 0xc4400168  lwc1        $f0, 0x168($v0)
    ctx->pc = 0x182b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182b08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x182b08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x182b0c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x182b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x182b10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182b14: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182b14u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182b18: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182b1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182b1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182b20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b28: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182b2c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182b30: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b38: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x182b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182b3c: 0xc440016c  lwc1        $f0, 0x16C($v0)
    ctx->pc = 0x182b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182b40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x182b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x182b44: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x182b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x182b48: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182b4c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182b50: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182b54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182b54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182b58: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b60: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182b64: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182b68: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182b6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b70: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x182b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x182b74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x182b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182b78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x182b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182b7c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x182b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182b80: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182b84: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182b84u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182b88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182b8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182b8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182b90: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x182b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b98: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182b9c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x182b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x182ba0: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x182ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x182ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182ba8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x182ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x182bac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182bb0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182bb0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182bb4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182bb8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182bb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182bbc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182bc4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182bc8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182bcc: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182bd4: 0x90420155  lbu         $v0, 0x155($v0)
    ctx->pc = 0x182bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 341)));
    // 0x182bd8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x182bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182bdc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x182bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182be0: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x182be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182be4: 0xc05f19c  jal         func_17C670
    ctx->pc = 0x182BE4u;
    SET_GPR_U32(ctx, 31, 0x182BECu);
    ctx->pc = 0x17C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C670u, 0x182BE4u, 0x182BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182BECu;
label_182bec:
    // 0x182bec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182BECu;
    {
        const bool branch_taken_0x182bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182bec) {
            ctx->pc = 0x182C00u;
            return;
        }
    }
    ctx->pc = 0x182BF4u;
}
