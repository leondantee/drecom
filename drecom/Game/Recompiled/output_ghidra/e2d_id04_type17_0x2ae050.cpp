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

// Function: e2d_id04_type17
// Address: 0x2ae050 - 0x2ae168
void e2d_id04_type17_0x2ae050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type17_0x2ae050");
#endif

    switch (ctx->pc) {
        case 0x2ae0c4u: goto label_2ae0c4;
        default: break;
    }

    ctx->pc = 0x2ae050u;

    // 0x2ae050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae054: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ae054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ae058: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ae058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ae05c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ae05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ae060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae064: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae068: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ae068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ae06c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ae06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ae070: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ae070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ae074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae078: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae07c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ae07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ae080: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ae080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ae084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae088: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae08c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2ae08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2ae090: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x2ae090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x2ae094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae098: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae09c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2ae09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2ae0a0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ae0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ae0a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae0a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae0ac: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2ae0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2ae0b0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ae0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ae0b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae0b8: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2ae0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae0bc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AE0BCu;
    SET_GPR_U32(ctx, 31, 0x2AE0C4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AE0BCu, 0x2AE0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE0C4u;
label_2ae0c4:
    // 0x2ae0c4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ae0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2ae0c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ae0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae0cc: 0x0  nop
    ctx->pc = 0x2ae0ccu;
    // NOP
    // 0x2ae0d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ae0d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ae0d4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ae0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ae0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae0dc: 0x0  nop
    ctx->pc = 0x2ae0dcu;
    // NOP
    // 0x2ae0e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae0e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ae0e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae0e8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ae0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ae0ec: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2ae0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2ae0f0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ae0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ae0f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae0f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae0f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae0fc: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ae0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ae100: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae104: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ae104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae108: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ae108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ae10c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae110: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae114: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ae114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae118: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ae118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ae11c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae120: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ae120u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae124: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ae124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ae128: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae12c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae130: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ae130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ae134: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ae134u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ae138: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ae138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ae13c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae140: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ae140u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ae144: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ae144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae148: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2ae148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ae14c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ae14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae150: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae154: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ae154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae158: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ae158u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae15c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ae15cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ae160: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE168u;
}
