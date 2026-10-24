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

// Function: entry_0030a0a8
// Address: 0x30a0a8 - 0x30a3e0
void entry_0030a0a8_0x30a0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a0a8_0x30a0a8");
#endif

    switch (ctx->pc) {
        case 0x30a160u: goto label_30a160;
        case 0x30a16cu: goto label_30a16c;
        case 0x30a1b4u: goto label_30a1b4;
        case 0x30a1dcu: goto label_30a1dc;
        case 0x30a1e8u: goto label_30a1e8;
        case 0x30a220u: goto label_30a220;
        case 0x30a33cu: goto label_30a33c;
        case 0x30a360u: goto label_30a360;
        case 0x30a374u: goto label_30a374;
        case 0x30a384u: goto label_30a384;
        case 0x30a394u: goto label_30a394;
        case 0x30a3a4u: goto label_30a3a4;
        default: break;
    }

    ctx->pc = 0x30a0a8u;

    // 0x30a0a8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a0ac: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30a0acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30a0b0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x30a0b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a0b4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x30a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a0b8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a0bc: 0x246492f0  addiu       $a0, $v1, -0x6D10
    ctx->pc = 0x30a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939376));
    // 0x30a0c0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x30a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30a0c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30a0c8: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x30a0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x30a0cc: 0x108000c4  beqz        $a0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x30A0CCu;
    {
        const bool branch_taken_0x30a0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a0cc) {
            ctx->pc = 0x30A3E0u;
            return;
        }
    }
    ctx->pc = 0x30A0D4u;
    // 0x30a0d4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a0d8: 0x24639740  addiu       $v1, $v1, -0x68C0
    ctx->pc = 0x30a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940480));
    // 0x30a0dc: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x30a0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30a0e0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30a0e0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399740u));
    // 0x30a0e4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x30a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x30a0e8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a0ec: 0x24639750  addiu       $v1, $v1, -0x68B0
    ctx->pc = 0x30a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940496));
    // 0x30a0f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30a0f4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30a0f4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399750u));
    // 0x30a0f8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30a0fc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a100: 0x24649760  addiu       $a0, $v1, -0x68A0
    ctx->pc = 0x30a100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940512));
    // 0x30a104: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x30a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30a108: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x30a108u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399760u));
    // 0x30a10c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30a110: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a114: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a118: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x30a11c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a120: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a124: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x30a124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x30a128: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a12c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30a130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a134: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30a134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a138: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30a138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30a13c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30a140: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30a140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30a144: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30a148: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30a148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a14c: 0x24045c00  addiu       $a0, $zero, 0x5C00
    ctx->pc = 0x30a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23552));
    // 0x30a150: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30a150u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a154: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30a154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a158: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30A158u;
    SET_GPR_U32(ctx, 31, 0x30A160u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30A158u, 0x30A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A160u;
label_30a160:
    // 0x30a160: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30a160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a164: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30A164u;
    SET_GPR_U32(ctx, 31, 0x30A16Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30A164u, 0x30A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A16Cu;
label_30a16c:
    // 0x30a16c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a170: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30a174: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x30a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x30a178: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30a178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30a17c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30a180: 0x2222004  sllv        $a0, $v0, $s1
    ctx->pc = 0x30a180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x30a184: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a188: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30a18c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30a18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30a190: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30a190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30a194: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a198: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a19c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x30a1a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a1a4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a1a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a1ac: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x30A1ACu;
    SET_GPR_U32(ctx, 31, 0x30A1B4u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x30A1ACu, 0x30A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1B4u;
label_30a1b4:
    // 0x30a1b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a1b8: 0x2444133c  addiu       $a0, $v0, 0x133C
    ctx->pc = 0x30a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x30a1bc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x30a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30a1c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30a1c4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30a1c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30a1cc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x30a1ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a1d0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x30a1d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30a1d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30A1D4u;
    SET_GPR_U32(ctx, 31, 0x30A1DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30A1D4u, 0x30A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1DCu;
label_30a1dc:
    // 0x30a1dc: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x30a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x30a1e0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30A1E0u;
    SET_GPR_U32(ctx, 31, 0x30A1E8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30A1E0u, 0x30A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1E8u;
label_30a1e8:
    // 0x30a1e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a1ec: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x30a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a1f0: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x30a1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x30a1f4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a1f8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x30a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x30a1fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30a1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30a200: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a204: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x30a204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a208: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x30a208u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30a20c: 0x0  nop
    ctx->pc = 0x30a20cu;
    // NOP
    // 0x30a210: 0x0  nop
    ctx->pc = 0x30a210u;
    // NOP
    // 0x30a214: 0x0  nop
    ctx->pc = 0x30a214u;
    // NOP
    // 0x30a218: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x30A218u;
    SET_GPR_U32(ctx, 31, 0x30A220u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x30A218u, 0x30A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A220u;
label_30a220:
    // 0x30a220: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a224: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30a228: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x30a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a22c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30a22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30a230: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30a230u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30a234: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x30a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a238: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30a238u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30a23c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30a23cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30a240: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x30a240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x30a244: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x30a244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x30a248: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x30a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30a24c: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x30a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x30a250: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a254: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a258: 0x244292d0  addiu       $v0, $v0, -0x6D30
    ctx->pc = 0x30a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
    // 0x30a25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a260: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30a260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a264: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30a264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30a268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a26c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30a270: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a274: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30a278: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x30a278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a27c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x30a27cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a280: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a284: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a288: 0x244292e0  addiu       $v0, $v0, -0x6D20
    ctx->pc = 0x30a288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x30a28c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a290: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30a290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a294: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30a294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30a298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a29c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30a2a0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a2a4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30a2a8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x30a2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a2b0: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x30a2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30a2b4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a2b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a2bc: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x30a2c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a2c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a2c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a2cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a2d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a2d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a2d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30a2dc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a2e0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30a2e4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x30a2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a2e8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x30a2e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30a2ec: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x30a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x30a2f0: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x30a2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x30a2f4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x30a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x30a2f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a2fc: 0x0  nop
    ctx->pc = 0x30a2fcu;
    // NOP
    // 0x30a300: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30a300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30a304: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x30a308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a30c: 0x0  nop
    ctx->pc = 0x30a30cu;
    // NOP
    // 0x30a310: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30a310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x30a314: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x30a314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x30a318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a31c: 0x0  nop
    ctx->pc = 0x30a31cu;
    // NOP
    // 0x30a320: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30a320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x30a324: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x30a324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x30a328: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x30a328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30a32c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30a32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30a330: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30a330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30a334: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30A334u;
    SET_GPR_U32(ctx, 31, 0x30A33Cu);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30A334u, 0x30A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A33Cu;
label_30a33c:
    // 0x30a33c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a340: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a344: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x30a344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x30a348: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x30a348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30a34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a350: 0x0  nop
    ctx->pc = 0x30a350u;
    // NOP
    // 0x30a354: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x30a354u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a358: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30A358u;
    SET_GPR_U32(ctx, 31, 0x30A360u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30A358u, 0x30A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A360u;
label_30a360:
    // 0x30a360: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30a360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30a364: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30a364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30a368: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30a368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30a36c: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x30A36Cu;
    SET_GPR_U32(ctx, 31, 0x30A374u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30A374u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30A374u) { return; }
    ctx->pc = 0x30A374u;
label_30a374:
    // 0x30a374: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x30a374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x30a378: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30a378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30a37c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30A37Cu;
    SET_GPR_U32(ctx, 31, 0x30A384u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30A384u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30A384u) { return; }
    ctx->pc = 0x30A384u;
label_30a384:
    // 0x30a384: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x30a384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30a388: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x30a388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30a38c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30A38Cu;
    SET_GPR_U32(ctx, 31, 0x30A394u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30A394u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30A394u) { return; }
    ctx->pc = 0x30A394u;
label_30a394:
    // 0x30a394: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x30a394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x30a398: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x30a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30a39c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30A39Cu;
    SET_GPR_U32(ctx, 31, 0x30A3A4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30A3A4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30A3A4u) { return; }
    ctx->pc = 0x30A3A4u;
label_30a3a4:
    // 0x30a3a4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a3a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30a3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a3ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30a3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30a3b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30a3b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30a3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30a3b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30a3bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30a3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a3c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a3c4: 0x3444000c  ori         $a0, $v0, 0xC
    ctx->pc = 0x30a3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x30a3c8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x30a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30a3cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30a3ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a3d0: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x30a3d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x30a3d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30a3d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a3d8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30A3D8u;
    SET_GPR_U32(ctx, 31, 0x30A3E0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30A3D8u, 0x30A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A3E0u;
}
