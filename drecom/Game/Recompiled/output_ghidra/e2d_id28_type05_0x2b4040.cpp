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

// Function: e2d_id28_type05
// Address: 0x2b4040 - 0x2b4160
void e2d_id28_type05_0x2b4040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id28_type05_0x2b4040");
#endif

    switch (ctx->pc) {
        case 0x2b405cu: goto label_2b405c;
        case 0x2b4064u: goto label_2b4064;
        default: break;
    }

    ctx->pc = 0x2b4040u;

    // 0x2b4040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4044: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b4044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b4048: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b4048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b404c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4050: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b4050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b4054: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B4054u;
    SET_GPR_U32(ctx, 31, 0x2B405Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B4054u, 0x2B405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B405Cu;
label_2b405c:
    // 0x2b405c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B405Cu;
    SET_GPR_U32(ctx, 31, 0x2B4064u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B405Cu, 0x2B4064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4064u;
label_2b4064:
    // 0x2b4064: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b4064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b4068: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b4068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b406c: 0x0  nop
    ctx->pc = 0x2b406cu;
    // NOP
    // 0x2b4070: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b4070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4074: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b4074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b4078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b407c: 0x0  nop
    ctx->pc = 0x2b407cu;
    // NOP
    // 0x2b4080: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b4080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b4084: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4088: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b4088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b408c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b408cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4090: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4094: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b4094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4098: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b4098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b409c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b409cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b40a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b40a4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b40a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b40a8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b40ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b40acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b40b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b40b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b40b4: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b40b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b40b8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b40bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b40bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b40c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b40c4: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b40c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b40c8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b40cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b40ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b40d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b40d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b40d4: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b40d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b40d8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b40d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b40dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b40dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b40e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b40e4: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b40e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b40e8: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x2b40e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x2b40ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b40ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b40f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b40f4: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b40f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b40f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b40f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b40fc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b40fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b4100: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b4100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b4104: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b4104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b410c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b410cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4110: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b4110u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b4114: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4118: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b4118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b411c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b411cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b4120: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b4120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4124: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4128: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b4128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b412c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b412cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b4130: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b4130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b4134: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4138: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b4138u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b413c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b413cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4140: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b4140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b4144: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b4144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4148: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b414c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b414cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4150: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b4150u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4154: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4158: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4160u;
}
