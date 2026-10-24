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

// Function: e2d_id09_type01
// Address: 0x2afd00 - 0x2afdb0
void e2d_id09_type01_0x2afd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id09_type01_0x2afd00");
#endif

    switch (ctx->pc) {
        case 0x2afd14u: goto label_2afd14;
        default: break;
    }

    ctx->pc = 0x2afd00u;

    // 0x2afd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2afd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2afd04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2afd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2afd08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2afd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2afd0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AFD0Cu;
    SET_GPR_U32(ctx, 31, 0x2AFD14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AFD0Cu, 0x2AFD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD14u;
label_2afd14:
    // 0x2afd14: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2afd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2afd18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2afd18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2afd1c: 0x0  nop
    ctx->pc = 0x2afd1cu;
    // NOP
    // 0x2afd20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2afd20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2afd24: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2afd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2afd28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afd28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afd2c: 0x0  nop
    ctx->pc = 0x2afd2cu;
    // NOP
    // 0x2afd30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2afd30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2afd34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afd38: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2afd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2afd3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2afd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2afd40: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2afd40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2afd44: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2afd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2afd48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2afd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2afd4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2afd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2afd50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2afd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2afd54: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2afd54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2afd58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2afd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2afd5c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2afd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2afd60: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2afd60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2afd64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2afd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2afd68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2afd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2afd6c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2afd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2afd70: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2afd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2afd74: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2afd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2afd78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2afd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2afd7c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2afd7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2afd80: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2afd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2afd84: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2afd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2afd88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2afd88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2afd8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afd90: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2afd90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2afd94: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2afd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2afd98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afd9c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2afd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2afda0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2afda0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afda4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2afda4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2afda8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFDB0u;
}
