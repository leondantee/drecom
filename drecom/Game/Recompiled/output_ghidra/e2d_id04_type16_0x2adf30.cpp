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

// Function: e2d_id04_type16
// Address: 0x2adf30 - 0x2ae044
void e2d_id04_type16_0x2adf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type16_0x2adf30");
#endif

    switch (ctx->pc) {
        case 0x2adfa0u: goto label_2adfa0;
        default: break;
    }

    ctx->pc = 0x2adf30u;

    // 0x2adf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2adf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2adf34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2adf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2adf38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2adf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2adf3c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2adf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2adf40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adf40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adf44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adf48: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2adf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2adf4c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2adf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2adf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adf54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adf58: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2adf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2adf5c: 0x3c02c0e0  lui         $v0, 0xC0E0
    ctx->pc = 0x2adf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49376 << 16));
    // 0x2adf60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adf60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adf64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adf68: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2adf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2adf6c: 0x3c024029  lui         $v0, 0x4029
    ctx->pc = 0x2adf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16425 << 16));
    // 0x2adf70: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2adf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2adf74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adf74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adf78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adf7c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2adf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2adf80: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2adf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2adf84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adf88: 0xa0430138  sb          $v1, 0x138($v0)
    ctx->pc = 0x2adf88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 312), (uint8_t)GPR_U32(ctx, 3));
    // 0x2adf8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2adf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2adf90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2adf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adf94: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2adf94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2adf98: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ADF98u;
    SET_GPR_U32(ctx, 31, 0x2ADFA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ADF98u, 0x2ADFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADFA0u;
label_2adfa0:
    // 0x2adfa0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2adfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2adfa4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2adfa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2adfa8: 0x0  nop
    ctx->pc = 0x2adfa8u;
    // NOP
    // 0x2adfac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2adfacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2adfb0: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2adfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2adfb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2adfb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adfb8: 0x0  nop
    ctx->pc = 0x2adfb8u;
    // NOP
    // 0x2adfbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2adfbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2adfc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adfc4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2adfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2adfc8: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2adfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2adfcc: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2adfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2adfd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2adfd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adfd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2adfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2adfd8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2adfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2adfdc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adfe0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2adfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2adfe4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2adfe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2adfe8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2adfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2adfec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adff0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2adff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adff4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2adff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2adff8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2adff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2adffc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2adffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae000: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ae000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ae004: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae008: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae00c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ae00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ae010: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ae010u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ae014: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ae014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ae018: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae01c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ae01cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ae020: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ae020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae024: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2ae024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ae028: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ae028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae02c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae030: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ae030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae034: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ae034u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae038: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ae038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ae03c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE044u;
}
