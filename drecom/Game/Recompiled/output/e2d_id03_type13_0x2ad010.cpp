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

// Function: e2d_id03_type13
// Address: 0x2ad010 - 0x2ad160
void e2d_id03_type13_0x2ad010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type13_0x2ad010");
#endif

    switch (ctx->pc) {
        case 0x2ad0b4u: goto label_2ad0b4;
        default: break;
    }

    ctx->pc = 0x2ad010u;

    // 0x2ad010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ad014: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ad014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ad018: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ad018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ad01c: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x2ad01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x2ad020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad024: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad028: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ad028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ad02c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ad02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ad030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad034: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad038: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ad038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ad03c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ad03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ad040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad044: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad048: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ad048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ad04c: 0x3c0242c4  lui         $v0, 0x42C4
    ctx->pc = 0x2ad04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17092 << 16));
    // 0x2ad050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad054: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad058: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ad058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ad05c: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2ad05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2ad060: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2ad060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2ad064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad068: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad06c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2ad06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ad070: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ad070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ad074: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ad074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ad078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad07c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad080: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ad080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ad084: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ad084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ad088: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ad088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ad08c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad094: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2ad094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2ad098: 0x3c023f61  lui         $v0, 0x3F61
    ctx->pc = 0x2ad098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16225 << 16));
    // 0x2ad09c: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x2ad09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x2ad0a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad0a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad0a8: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ad0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ad0ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AD0ACu;
    SET_GPR_U32(ctx, 31, 0x2AD0B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AD0ACu, 0x2AD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0B4u;
label_2ad0b4:
    // 0x2ad0b4: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2ad0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2ad0b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ad0b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad0bc: 0x0  nop
    ctx->pc = 0x2ad0bcu;
    // NOP
    // 0x2ad0c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ad0c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ad0c4: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x2ad0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
    // 0x2ad0c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad0cc: 0x0  nop
    ctx->pc = 0x2ad0ccu;
    // NOP
    // 0x2ad0d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ad0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad0d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad0d8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ad0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ad0dc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2ad0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ad0e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad0e4: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2ad0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2ad0e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad0ec: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ad0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ad0f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ad0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ad0f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ad0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad0f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad0fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ad0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad100: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ad100u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ad104: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad108: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ad108u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ad10c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ad10cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ad110: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ad110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad114: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad118: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ad118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ad11c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ad11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ad120: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ad120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ad124: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad128: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ad128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ad12c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ad12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad130: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2ad130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ad134: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ad134u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ad138: 0x0  nop
    ctx->pc = 0x2ad138u;
    // NOP
    // 0x2ad13c: 0x0  nop
    ctx->pc = 0x2ad13cu;
    // NOP
    // 0x2ad140: 0x1810  mfhi        $v1
    ctx->pc = 0x2ad140u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ad144: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ad144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad148: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad14c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ad14cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad150: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ad150u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad154: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ad154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad158: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD160u;
}
