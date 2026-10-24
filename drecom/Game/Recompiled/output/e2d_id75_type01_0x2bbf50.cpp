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

// Function: e2d_id75_type01
// Address: 0x2bbf50 - 0x2bc098
void e2d_id75_type01_0x2bbf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id75_type01_0x2bbf50");
#endif

    switch (ctx->pc) {
        case 0x2bbf7cu: goto label_2bbf7c;
        default: break;
    }

    ctx->pc = 0x2bbf50u;

    // 0x2bbf50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbf54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bbf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bbf58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bbf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bbf5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bbf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbf60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbf64: 0xa043013f  sb          $v1, 0x13F($v0)
    ctx->pc = 0x2bbf64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbf68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bbf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbf6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbf70: 0xa0430140  sb          $v1, 0x140($v0)
    ctx->pc = 0x2bbf70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 320), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbf74: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BBF74u;
    SET_GPR_U32(ctx, 31, 0x2BBF7Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BBF74u, 0x2BBF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF7Cu;
label_2bbf7c:
    // 0x2bbf7c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2bbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2bbf80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bbf80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbf84: 0x0  nop
    ctx->pc = 0x2bbf84u;
    // NOP
    // 0x2bbf88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bbf88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bbf8c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2bbf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2bbf90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbf90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbf94: 0x0  nop
    ctx->pc = 0x2bbf94u;
    // NOP
    // 0x2bbf98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbf98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbf9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbfa0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bbfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bbfa4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bbfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bbfa8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bbfac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bbfacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bbfb0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bbfb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bbfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bbfb8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bbfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bbfbc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bbfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bbfc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bbfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bbfc4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bbfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bbfc8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bbfc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bbfcc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bbfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bbfd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bbfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bbfd4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bbfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bbfd8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bbfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bbfdc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bbfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bbfe0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bbfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bbfe4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bbfe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bbfe8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bbfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bbfec: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2bbfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2bbff0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2bbff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bbff4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbff8: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2bbff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bbffc: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2bbffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2bc000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc004: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc008: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2bc008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2bc00c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc010: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bc010u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc014: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bc014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bc018: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bc018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bc01c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bc01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc020: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bc020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc024: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bc024u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bc028: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc02c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bc02cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc030: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bc030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bc034: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bc034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bc038: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bc038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc03c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bc03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bc040: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bc040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bc044: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bc044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bc048: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc04c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bc04cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc050: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bc050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc054: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2bc054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2bc058: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2bc058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc05c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc060: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2bc060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bc064: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc068: 0x9063013a  lbu         $v1, 0x13A($v1)
    ctx->pc = 0x2bc068u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 314)));
    // 0x2bc06c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bc06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc070: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2bc070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bc074: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC074u;
    {
        const bool branch_taken_0x2bc074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc074) {
            ctx->pc = 0x2BC088u;
            goto label_2bc088;
        }
    }
    ctx->pc = 0x2BC07Cu;
    // 0x2bc07c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2bc07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2bc080: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc084: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2bc084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
label_2bc088:
    // 0x2bc088: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bc088u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc08c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bc08cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc090: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC098u;
}
