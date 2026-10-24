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

// Function: entry_0030eb88
// Address: 0x30eb88 - 0x30ee18
void entry_0030eb88_0x30eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030eb88_0x30eb88");
#endif

    switch (ctx->pc) {
        case 0x30ec2cu: goto label_30ec2c;
        case 0x30ec38u: goto label_30ec38;
        case 0x30ec80u: goto label_30ec80;
        case 0x30ec8cu: goto label_30ec8c;
        case 0x30ed08u: goto label_30ed08;
        case 0x30ed14u: goto label_30ed14;
        case 0x30ed20u: goto label_30ed20;
        case 0x30ed54u: goto label_30ed54;
        case 0x30eddcu: goto label_30eddc;
        default: break;
    }

    ctx->pc = 0x30eb88u;

    // 0x30eb88: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb8c: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x30eb8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x30eb90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30eb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30eb94: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x30eb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x30eb98: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
    ctx->pc = 0x30EB98u;
    {
        const bool branch_taken_0x30eb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eb98) {
            ctx->pc = 0x30F020u;
            return;
        }
    }
    ctx->pc = 0x30EBA0u;
    // 0x30eba0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30eba4: 0x244499f0  addiu       $a0, $v0, -0x6610
    ctx->pc = 0x30eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x30eba8: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x30eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30ebac: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x30ebacu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3999F0u));
    // 0x30ebb0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30ebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30ebb4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30ebb8: 0x24629a00  addiu       $v0, $v1, -0x6600
    ctx->pc = 0x30ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941184));
    // 0x30ebbc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x30ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x30ebc0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30ebc0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399A00u));
    // 0x30ebc4: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x30ebc4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x399A10u));
    // 0x30ebc8: 0x78450020  lq          $a1, 0x20($v0)
    ctx->pc = 0x30ebc8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x399A20u));
    // 0x30ebcc: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x30ebccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399A30u));
    // 0x30ebd0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x30ebd0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x30ebd4: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x30ebd4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x30ebd8: 0x7cc50020  sq          $a1, 0x20($a2)
    ctx->pc = 0x30ebd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 5));
    // 0x30ebdc: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x30ebdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x30ebe0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30ebe4: 0x24449a40  addiu       $a0, $v0, -0x65C0
    ctx->pc = 0x30ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941248));
    // 0x30ebe8: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x30ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30ebec: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x30ebecu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399A40u));
    // 0x30ebf0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30ebf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30ebf4: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ebf8: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x30ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30ebfc: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x30ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x30ec00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30ec00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30ec04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30ec04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30ec08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30ec0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30ec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30ec10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30ec10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30ec14: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30ec14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30ec18: 0x24045504  addiu       $a0, $zero, 0x5504
    ctx->pc = 0x30ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21764));
    // 0x30ec1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ec1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ec20: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x30ec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30ec24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30EC24u;
    SET_GPR_U32(ctx, 31, 0x30EC2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30EC24u, 0x30EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC2Cu;
label_30ec2c:
    // 0x30ec2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ec2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ec30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30EC30u;
    SET_GPR_U32(ctx, 31, 0x30EC38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30EC30u, 0x30EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC38u;
label_30ec38:
    // 0x30ec38: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x30ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x30ec3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30ec3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ec40: 0x0  nop
    ctx->pc = 0x30ec40u;
    // NOP
    // 0x30ec44: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x30ec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x30ec48: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ec4c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x30ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30ec50: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x30ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x30ec54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30ec54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30ec58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30ec58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30ec5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30ec5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30ec60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30ec64: 0x3453ffff  ori         $s3, $v0, 0xFFFF
    ctx->pc = 0x30ec64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30ec68: 0x733824  and         $a3, $v1, $s3
    ctx->pc = 0x30ec68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x30ec6c: 0x24045503  addiu       $a0, $zero, 0x5503
    ctx->pc = 0x30ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21763));
    // 0x30ec70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ec70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ec74: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x30ec74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30ec78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30EC78u;
    SET_GPR_U32(ctx, 31, 0x30EC80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30EC78u, 0x30EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC80u;
label_30ec80:
    // 0x30ec80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ec80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ec84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30EC84u;
    SET_GPR_U32(ctx, 31, 0x30EC8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30EC84u, 0x30EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC8Cu;
label_30ec8c:
    // 0x30ec8c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ec90: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30ec90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30ec94: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30ec94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30ec98: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x30ec98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x30ec9c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x30ec9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x30eca0: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30eca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eca4: 0x24a31340  addiu       $v1, $a1, 0x1340
    ctx->pc = 0x30eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4928));
    // 0x30eca8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x30eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x30ecac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x30ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30ecb0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x30ecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30ecb4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30ecb8: 0xa4b021  addu        $s6, $a1, $a0
    ctx->pc = 0x30ecb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x30ecbc: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ecc0: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30ecc4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x30ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x30ecc8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30eccc: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30ecd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30ecd4: 0x2842804  sllv        $a1, $a0, $s4
    ctx->pc = 0x30ecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
    // 0x30ecd8: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ecdc: 0x8c441338  lw          $a0, 0x1338($v0)
    ctx->pc = 0x30ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x30ece0: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x30ece0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30ece4: 0xac451338  sw          $a1, 0x1338($v0)
    ctx->pc = 0x30ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 5));
    // 0x30ece8: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x30ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x30ecec: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x30ececu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x30ecf0: 0x24a297b0  addiu       $v0, $a1, -0x6850
    ctx->pc = 0x30ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940592));
    // 0x30ecf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30ecf8: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ecfc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30ecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ed00: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x30ED00u;
    SET_GPR_U32(ctx, 31, 0x30ED08u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x30ED00u, 0x30ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED08u;
label_30ed08:
    // 0x30ed08: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x30ed08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x30ed0c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30ED0Cu;
    SET_GPR_U32(ctx, 31, 0x30ED14u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30ED0Cu, 0x30ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED14u;
label_30ed14:
    // 0x30ed14: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x30ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x30ed18: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30ED18u;
    SET_GPR_U32(ctx, 31, 0x30ED20u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30ED18u, 0x30ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED20u;
label_30ed20:
    // 0x30ed20: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ed24: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x30ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ed28: 0xe6c00020  swc1        $f0, 0x20($s6)
    ctx->pc = 0x30ed28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
    // 0x30ed2c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ed30: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x30ed34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30ed34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30ed38: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x30ed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ed3c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x30ed3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30ed40: 0x0  nop
    ctx->pc = 0x30ed40u;
    // NOP
    // 0x30ed44: 0x0  nop
    ctx->pc = 0x30ed44u;
    // NOP
    // 0x30ed48: 0x0  nop
    ctx->pc = 0x30ed48u;
    // NOP
    // 0x30ed4c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x30ED4Cu;
    SET_GPR_U32(ctx, 31, 0x30ED54u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x30ED4Cu, 0x30ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED54u;
label_30ed54:
    // 0x30ed54: 0x8fb00298  lw          $s0, 0x298($sp)
    ctx->pc = 0x30ed54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ed58: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x30ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x30ed5c: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x30ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ed60: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30ed60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30ed64: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30ed68: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x30ed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed6c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30ed6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30ed70: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30ed70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30ed74: 0xe6c00010  swc1        $f0, 0x10($s6)
    ctx->pc = 0x30ed74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 16), bits); }
    // 0x30ed78: 0x8fb20298  lw          $s2, 0x298($sp)
    ctx->pc = 0x30ed78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ed7c: 0x8642127a  lh          $v0, 0x127A($s2)
    ctx->pc = 0x30ed7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4730)));
    // 0x30ed80: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x30ED80u;
    {
        const bool branch_taken_0x30ed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ed80) {
            ctx->pc = 0x30EEB4u;
            return;
        }
    }
    ctx->pc = 0x30ED88u;
    // 0x30ed88: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x30ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x30ed8c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30ed90: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30ed94: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x30ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ed98: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x30ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30ed9c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x30ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30eda0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x30eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30eda4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x30eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30eda8: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x30eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30edac: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x30edacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30edb0: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30edb4: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x30edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30edb8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x30edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30edbc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x30edbcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30edc0: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x30edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x30edc4: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x30edc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30edc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30edc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30edcc: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x30edccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30edd0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x30edd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x30edd4: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30EDD4u;
    SET_GPR_U32(ctx, 31, 0x30EDDCu);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30EDD4u, 0x30EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDDCu;
label_30eddc:
    // 0x30eddc: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ede0: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x30ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ede4: 0x3c06bfc8  lui         $a2, 0xBFC8
    ctx->pc = 0x30ede4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49096 << 16));
    // 0x30ede8: 0x34c5f5c3  ori         $a1, $a2, 0xF5C3
    ctx->pc = 0x30ede8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62915);
    // 0x30edec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30edecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30edf0: 0x0  nop
    ctx->pc = 0x30edf0u;
    // NOP
    // 0x30edf4: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x30edf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30edf8: 0x2687fffc  addiu       $a3, $s4, -0x4
    ctx->pc = 0x30edf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x30edfc: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x30EDFCu;
    {
        const bool branch_taken_0x30edfc = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x30edfc) {
            ctx->pc = 0x30EE18u;
            return;
        }
    }
    ctx->pc = 0x30EE04u;
    // 0x30ee04: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x30ee04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee08: 0x0  nop
    ctx->pc = 0x30ee08u;
    // NOP
    // 0x30ee0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30ee0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30ee10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30EE10u;
    {
        const bool branch_taken_0x30ee10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ee10) {
            ctx->pc = 0x30EE34u;
            return;
        }
    }
    ctx->pc = 0x30EE18u;
}
