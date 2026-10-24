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

// Function: entry_00305f68
// Address: 0x305f68 - 0x306278
void entry_00305f68_0x305f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305f68_0x305f68");
#endif

    switch (ctx->pc) {
        case 0x306014u: goto label_306014;
        case 0x30605cu: goto label_30605c;
        case 0x306084u: goto label_306084;
        case 0x306090u: goto label_306090;
        case 0x3060c4u: goto label_3060c4;
        case 0x3061d4u: goto label_3061d4;
        case 0x3061f8u: goto label_3061f8;
        case 0x30620cu: goto label_30620c;
        case 0x30621cu: goto label_30621c;
        case 0x30622cu: goto label_30622c;
        case 0x30623cu: goto label_30623c;
        default: break;
    }

    ctx->pc = 0x305f68u;

    // 0x305f68: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f6c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x305f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x305f70: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x305f70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x305f74: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x305f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x305f78: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x305f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x305f7c: 0x246492f0  addiu       $a0, $v1, -0x6D10
    ctx->pc = 0x305f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939376));
    // 0x305f80: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x305f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x305f84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x305f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305f88: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x305f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x305f8c: 0x108000ba  beqz        $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x305F8Cu;
    {
        const bool branch_taken_0x305f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f8c) {
            ctx->pc = 0x306278u;
            return;
        }
    }
    ctx->pc = 0x305F94u;
    // 0x305f94: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x305f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x305f98: 0x24639690  addiu       $v1, $v1, -0x6970
    ctx->pc = 0x305f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940304));
    // 0x305f9c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x305f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305fa0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x305fa0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399690u));
    // 0x305fa4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x305fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x305fa8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x305fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x305fac: 0x246396a0  addiu       $v1, $v1, -0x6960
    ctx->pc = 0x305facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940320));
    // 0x305fb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x305fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305fb4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x305fb4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3996A0u));
    // 0x305fb8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x305fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x305fbc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x305fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x305fc0: 0x246496b0  addiu       $a0, $v1, -0x6950
    ctx->pc = 0x305fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x305fc4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x305fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x305fc8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x305fc8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3996B0u));
    // 0x305fcc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305fccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305fd0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x305fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305fd4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x305fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305fd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x305fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x305fdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x305fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x305fe0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x305fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x305fe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x305fe8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x305fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x305fec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x305fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305ff0: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x305ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x305ff4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x305ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ff8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305ffc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x305ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x306000: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x306000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x306004: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x306004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x306008: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x306008u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30600c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30600Cu;
    SET_GPR_U32(ctx, 31, 0x306014u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30600Cu, 0x306014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306014u;
label_306014:
    // 0x306014: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x306014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306018: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x306018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30601c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x30601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x306020: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x306020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x306024: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306028: 0x2222004  sllv        $a0, $v0, $s1
    ctx->pc = 0x306028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x30602c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306030: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x306030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x306034: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x306034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x306038: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x306038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30603c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30603cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306040: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x306040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x306044: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x306044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x306048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30604c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30604cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306050: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x306050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306054: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x306054u;
    SET_GPR_U32(ctx, 31, 0x30605Cu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x306054u, 0x30605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30605Cu;
label_30605c:
    // 0x30605c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306060: 0x2444133c  addiu       $a0, $v0, 0x133C
    ctx->pc = 0x306060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x306064: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x306064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x306068: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x306068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30606c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30606cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x306070: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x306070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x306074: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x306074u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306078: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x306078u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30607c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30607Cu;
    SET_GPR_U32(ctx, 31, 0x306084u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30607Cu, 0x306084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306084u;
label_306084:
    // 0x306084: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x306084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x306088: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x306088u;
    SET_GPR_U32(ctx, 31, 0x306090u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x306088u, 0x306090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306090u;
label_306090:
    // 0x306090: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x306090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306094: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x306094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x306098: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x306098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x30609c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3060a0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3060a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3060a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3060a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3060a8: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x3060a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3060ac: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3060acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3060b0: 0x0  nop
    ctx->pc = 0x3060b0u;
    // NOP
    // 0x3060b4: 0x0  nop
    ctx->pc = 0x3060b4u;
    // NOP
    // 0x3060b8: 0x0  nop
    ctx->pc = 0x3060b8u;
    // NOP
    // 0x3060bc: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x3060BCu;
    SET_GPR_U32(ctx, 31, 0x3060C4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x3060BCu, 0x3060C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060C4u;
label_3060c4:
    // 0x3060c4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3060c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3060c8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3060c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3060cc: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x3060ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3060d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3060d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3060d4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x3060d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x3060d8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x3060d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3060dc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3060dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3060e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3060e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3060e4: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x3060e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x3060e8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3060e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3060ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3060ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3060f0: 0x244292d0  addiu       $v0, $v0, -0x6D30
    ctx->pc = 0x3060f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
    // 0x3060f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3060f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3060f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3060f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3060fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3060fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x306100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306104: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x306104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x306108: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x306108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30610c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x306110: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x306110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306114: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x306114u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x306118: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x306118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30611c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30611cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x306120: 0x244292e0  addiu       $v0, $v0, -0x6D20
    ctx->pc = 0x306120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x306124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306128: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x306128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30612c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30612cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x306130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306134: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x306134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x306138: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x306138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30613c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x306140: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x306140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306148: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x306148u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30614c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30614cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306150: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x306150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x306154: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x306154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x306158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30615c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30615cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306160: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x306160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x306164: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x306164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306168: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x306168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30616c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x306170: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x306170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x306174: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x306174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306178: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x306178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30617c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x30617cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306180: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x306180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x306184: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x306184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x306188: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x306188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x30618c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x30618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x306190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306194: 0x0  nop
    ctx->pc = 0x306194u;
    // NOP
    // 0x306198: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x306198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30619c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3061a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3061a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3061a4: 0x0  nop
    ctx->pc = 0x3061a4u;
    // NOP
    // 0x3061a8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3061a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3061ac: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x3061acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x3061b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3061b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3061b4: 0x0  nop
    ctx->pc = 0x3061b4u;
    // NOP
    // 0x3061b8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3061b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3061bc: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x3061bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x3061c0: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x3061c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x3061c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3061c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3061c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3061c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3061cc: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x3061CCu;
    SET_GPR_U32(ctx, 31, 0x3061D4u);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x3061CCu, 0x3061D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061D4u;
label_3061d4:
    // 0x3061d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3061d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3061d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3061d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3061dc: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x3061dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x3061e0: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x3061e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x3061e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3061e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3061e8: 0x0  nop
    ctx->pc = 0x3061e8u;
    // NOP
    // 0x3061ec: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3061ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3061f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3061F0u;
    SET_GPR_U32(ctx, 31, 0x3061F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3061F0u, 0x3061F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061F8u;
label_3061f8:
    // 0x3061f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3061f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3061fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3061fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x306200: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x306200u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x306204: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x306204u;
    SET_GPR_U32(ctx, 31, 0x30620Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30620Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30620Cu) { return; }
    ctx->pc = 0x30620Cu;
label_30620c:
    // 0x30620c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x30620cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x306210: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x306210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x306214: 0xc040c9e  jal         func_103278
    ctx->pc = 0x306214u;
    SET_GPR_U32(ctx, 31, 0x30621Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30621Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30621Cu) { return; }
    ctx->pc = 0x30621Cu;
label_30621c:
    // 0x30621c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x30621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x306220: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x306220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x306224: 0xc040c9e  jal         func_103278
    ctx->pc = 0x306224u;
    SET_GPR_U32(ctx, 31, 0x30622Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30622Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30622Cu) { return; }
    ctx->pc = 0x30622Cu;
label_30622c:
    // 0x30622c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x30622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x306230: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x306230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x306234: 0xc040c9e  jal         func_103278
    ctx->pc = 0x306234u;
    SET_GPR_U32(ctx, 31, 0x30623Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30623Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30623Cu) { return; }
    ctx->pc = 0x30623Cu;
label_30623c:
    // 0x30623c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306240: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x306240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x306244: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x306244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x306248: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x306248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30624c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30624cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x306250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x306250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x306254: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x306254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x306258: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x306258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30625c: 0x3444000c  ori         $a0, $v0, 0xC
    ctx->pc = 0x30625cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x306260: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x306260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x306264: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x306264u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306268: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x306268u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x30626c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30626cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306270: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x306270u;
    SET_GPR_U32(ctx, 31, 0x306278u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x306270u, 0x306278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306278u;
}
