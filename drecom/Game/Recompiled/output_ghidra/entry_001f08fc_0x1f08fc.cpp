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

// Function: entry_001f08fc
// Address: 0x1f08fc - 0x1f0aac
void entry_001f08fc_0x1f08fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f08fc_0x1f08fc");
#endif

    switch (ctx->pc) {
        case 0x1f0934u: goto label_1f0934;
        case 0x1f09f0u: goto label_1f09f0;
        case 0x1f0a84u: goto label_1f0a84;
        case 0x1f0a8cu: goto label_1f0a8c;
        default: break;
    }

    ctx->pc = 0x1f08fcu;

    // 0x1f08fc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1f08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1f0900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0904: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f0904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0908: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x1f0908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f090c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f090cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f0910: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0914: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x1f0914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1f0918: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1f0918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1f091c: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x1f091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1f0920: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x1F0920u;
    {
        const bool branch_taken_0x1f0920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0920) {
            ctx->pc = 0x1F0B7Cu;
            return;
        }
    }
    ctx->pc = 0x1F0928u;
    // 0x1f0928: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f092c: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x1F092Cu;
    SET_GPR_U32(ctx, 31, 0x1F0934u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x1F092Cu, 0x1F0934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0934u;
label_1f0934:
    // 0x1f0934: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1f0934u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0938: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x1f0938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1f093c: 0x1460008f  bnez        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x1F093Cu;
    {
        const bool branch_taken_0x1f093c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f093c) {
            ctx->pc = 0x1F0B7Cu;
            return;
        }
    }
    ctx->pc = 0x1F0944u;
    // 0x1f0944: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0948: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f094c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0950: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1f0950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1f0954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0958: 0x0  nop
    ctx->pc = 0x1f0958u;
    // NOP
    // 0x1f095c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f095cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0960: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f0960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f0964: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1f0964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1f0968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f096c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0970: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0974: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f0974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f0978: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f097c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f0980: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x1f0980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f0984: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1f0988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f098c: 0x0  nop
    ctx->pc = 0x1f098cu;
    // NOP
    // 0x1f0990: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f0990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f0994: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1f0994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1f0998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f099c: 0x0  nop
    ctx->pc = 0x1f099cu;
    // NOP
    // 0x1f09a0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f09a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1f09a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f09a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f09a8: 0x0  nop
    ctx->pc = 0x1f09a8u;
    // NOP
    // 0x1f09ac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f09acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1f09b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f09b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f09b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f09b8: 0x0  nop
    ctx->pc = 0x1f09b8u;
    // NOP
    // 0x1f09bc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f09bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1f09c0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f09c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f09c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f09c8: 0x0  nop
    ctx->pc = 0x1f09c8u;
    // NOP
    // 0x1f09cc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f09ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1f09d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f09d4: 0xa7a200c4  sh          $v0, 0xC4($sp)
    ctx->pc = 0x1f09d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f09d8: 0xa3a000c6  sb          $zero, 0xC6($sp)
    ctx->pc = 0x1f09d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 198), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f09dc: 0xa3a000c7  sb          $zero, 0xC7($sp)
    ctx->pc = 0x1f09dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 199), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f09e0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f09e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f09e4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1f09e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f09e8: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F09E8u;
    SET_GPR_U32(ctx, 31, 0x1F09F0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F09E8u, 0x1F09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09F0u;
label_1f09f0:
    // 0x1f09f0: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1F09F0u;
    {
        const bool branch_taken_0x1f09f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f09f0) {
            ctx->pc = 0x1F0B7Cu;
            return;
        }
    }
    ctx->pc = 0x1F09F8u;
    // 0x1f09f8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f09f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f09fc: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1f09fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f0a00: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1F0A00u;
    {
        const bool branch_taken_0x1f0a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0a00) {
            ctx->pc = 0x1F0B7Cu;
            return;
        }
    }
    ctx->pc = 0x1F0A08u;
    // 0x1f0a08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a0c: 0x0  nop
    ctx->pc = 0x1f0a0cu;
    // NOP
    // 0x1f0a10: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f0a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f0a14: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1f0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1f0a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a1c: 0x0  nop
    ctx->pc = 0x1f0a1cu;
    // NOP
    // 0x1f0a20: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f0a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1f0a24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a28: 0x0  nop
    ctx->pc = 0x1f0a28u;
    // NOP
    // 0x1f0a2c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1f0a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1f0a30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a38: 0x0  nop
    ctx->pc = 0x1f0a38u;
    // NOP
    // 0x1f0a3c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1f0a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1f0a40: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0a44: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1f0a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1f0a48: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1f0a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1f0a4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f0a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f0a50: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1f0a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1f0a54: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1f0a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f0a58: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x1f0a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1f0a5c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1f0a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f0a60: 0x34a40006  ori         $a0, $a1, 0x6
    ctx->pc = 0x1f0a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x1f0a64: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0a68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f0a6c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1f0a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f0a70: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f0a70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0a74: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1f0a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f0a78: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f0a78u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0a7c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F0A7Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A84u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F0A7Cu, 0x1F0A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A84u;
label_1f0a84:
    // 0x1f0a84: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0A84u;
    SET_GPR_U32(ctx, 31, 0x1F0A8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0A84u, 0x1F0A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A8Cu;
label_1f0a8c:
    // 0x1f0a8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f0a8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0a90: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0A90u;
    {
        const bool branch_taken_0x1f0a90 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1f0a90) {
            ctx->pc = 0x1F0AACu;
            return;
        }
    }
    ctx->pc = 0x1F0A98u;
    // 0x1f0a98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f0a98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0a9c: 0x0  nop
    ctx->pc = 0x1f0a9cu;
    // NOP
    // 0x1f0aa0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f0aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0aa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0AA4u;
    {
        const bool branch_taken_0x1f0aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0aa4) {
            ctx->pc = 0x1F0AC8u;
            return;
        }
    }
    ctx->pc = 0x1F0AACu;
}
