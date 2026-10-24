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

// Function: e2d_id79_type01
// Address: 0x2bc970 - 0x2bca64
void e2d_id79_type01_0x2bc970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id79_type01_0x2bc970");
#endif

    switch (ctx->pc) {
        case 0x2bc984u: goto label_2bc984;
        default: break;
    }

    ctx->pc = 0x2bc970u;

    // 0x2bc970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc974: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bc974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bc978: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bc978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bc97c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BC97Cu;
    SET_GPR_U32(ctx, 31, 0x2BC984u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BC97Cu, 0x2BC984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC984u;
label_2bc984:
    // 0x2bc984: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bc984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bc988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc98c: 0x0  nop
    ctx->pc = 0x2bc98cu;
    // NOP
    // 0x2bc990: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc994: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2bc994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2bc998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc99c: 0x0  nop
    ctx->pc = 0x2bc99cu;
    // NOP
    // 0x2bc9a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc9a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc9a8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bc9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bc9ac: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2bc9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bc9b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc9b4: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2bc9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bc9b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bc9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bc9bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc9bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc9c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc9c4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2bc9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2bc9c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bc9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bc9cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc9ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc9d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc9d4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2bc9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2bc9d8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2bc9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2bc9dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc9dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc9e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc9e4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2bc9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2bc9e8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2bc9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2bc9ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc9f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc9f4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2bc9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2bc9f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc9fc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bc9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bca00: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bca00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bca04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bca04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bca08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bca0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bca0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bca10: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bca10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bca14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bca14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bca18: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bca18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bca1c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bca1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bca20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bca20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bca24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bca28: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bca28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bca2c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bca30: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bca34: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bca34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bca38: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bca38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bca3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bca3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bca40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bca40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bca44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2bca44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bca48: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2bca48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bca4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bca50: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2bca50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bca54: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bca54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bca58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bca5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCA64u;
}
