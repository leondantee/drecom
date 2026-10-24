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

// Function: e2d_id76_type00
// Address: 0x2bc0a0 - 0x2bc1cc
void e2d_id76_type00_0x2bc0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id76_type00_0x2bc0a0");
#endif

    switch (ctx->pc) {
        case 0x2bc0e4u: goto label_2bc0e4;
        default: break;
    }

    ctx->pc = 0x2bc0a0u;

    // 0x2bc0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc0a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bc0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bc0a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bc0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bc0ac: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x2bc0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
    // 0x2bc0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc0b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc0b8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bc0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bc0bc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bc0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc0c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc0c8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bc0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bc0cc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bc0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bc0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc0d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc0d8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bc0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bc0dc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BC0DCu;
    SET_GPR_U32(ctx, 31, 0x2BC0E4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BC0DCu, 0x2BC0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0E4u;
label_2bc0e4:
    // 0x2bc0e4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bc0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bc0e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc0e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc0ec: 0x0  nop
    ctx->pc = 0x2bc0ecu;
    // NOP
    // 0x2bc0f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc0f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc0f4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bc0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bc0f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc0f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc0fc: 0x0  nop
    ctx->pc = 0x2bc0fcu;
    // NOP
    // 0x2bc100: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc108: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bc108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bc10c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc110: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bc110u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc114: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bc114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bc118: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bc118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bc11c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc120: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bc120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc124: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bc124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bc128: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc12c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bc12cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc130: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bc130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bc134: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bc134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bc138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bc138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc13c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bc13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bc140: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bc140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bc144: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bc144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bc148: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc14c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bc14cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc150: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bc150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc154: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2bc154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2bc158: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2bc158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc15c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc160: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2bc160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bc164: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc168: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bc168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc16c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bc16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bc170: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bc170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bc174: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bc174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc178: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bc178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc17c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bc17cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bc180: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc184: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bc184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc188: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bc188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bc18c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bc18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bc190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bc190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc194: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bc194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bc198: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bc198u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bc19c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bc19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bc1a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc1a4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bc1a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc1a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bc1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc1ac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2bc1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2bc1b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2bc1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc1b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc1b8: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2bc1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bc1bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bc1bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc1c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bc1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC1CCu;
}
