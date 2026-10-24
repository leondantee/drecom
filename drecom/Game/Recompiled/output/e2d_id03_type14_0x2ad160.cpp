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

// Function: e2d_id03_type14
// Address: 0x2ad160 - 0x2ad2bc
void e2d_id03_type14_0x2ad160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type14_0x2ad160");
#endif

    switch (ctx->pc) {
        case 0x2ad210u: goto label_2ad210;
        default: break;
    }

    ctx->pc = 0x2ad160u;

    // 0x2ad160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ad164: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ad164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ad168: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ad168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ad16c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ad16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ad170: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad174: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ad174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ad178: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x2ad178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x2ad17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad180: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad184: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ad184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ad188: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ad188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ad18c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad190: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad194: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ad194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ad198: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ad198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ad19c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad1a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad1a4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ad1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ad1a8: 0x3c0242c4  lui         $v0, 0x42C4
    ctx->pc = 0x2ad1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17092 << 16));
    // 0x2ad1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad1b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad1b4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ad1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ad1b8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ad1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ad1bc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ad1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ad1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad1c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad1c8: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2ad1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ad1cc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ad1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ad1d0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ad1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ad1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad1d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad1dc: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ad1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ad1e0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ad1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ad1e4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ad1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ad1e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad1ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad1f0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2ad1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2ad1f4: 0x3c023f61  lui         $v0, 0x3F61
    ctx->pc = 0x2ad1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16225 << 16));
    // 0x2ad1f8: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x2ad1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x2ad1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad200: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad204: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ad204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ad208: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AD208u;
    SET_GPR_U32(ctx, 31, 0x2AD210u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AD208u, 0x2AD210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD210u;
label_2ad210:
    // 0x2ad210: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2ad210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2ad214: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ad214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad218: 0x0  nop
    ctx->pc = 0x2ad218u;
    // NOP
    // 0x2ad21c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ad21cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ad220: 0x3c034352  lui         $v1, 0x4352
    ctx->pc = 0x2ad220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17234 << 16));
    // 0x2ad224: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad228: 0x0  nop
    ctx->pc = 0x2ad228u;
    // NOP
    // 0x2ad22c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ad22cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad230: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad234: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ad234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ad238: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2ad238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ad23c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad240: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2ad240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2ad244: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad248: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ad248u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ad24c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ad24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ad250: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ad250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad254: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad258: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ad258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad25c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ad25cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ad260: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad264: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ad264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ad268: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ad268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ad26c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ad26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad270: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad274: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ad274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ad278: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ad278u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ad27c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ad27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ad280: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad284: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ad284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ad288: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ad288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad28c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2ad28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ad290: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ad290u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ad294: 0x0  nop
    ctx->pc = 0x2ad294u;
    // NOP
    // 0x2ad298: 0x0  nop
    ctx->pc = 0x2ad298u;
    // NOP
    // 0x2ad29c: 0x1810  mfhi        $v1
    ctx->pc = 0x2ad29cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ad2a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ad2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad2a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad2a8: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ad2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad2ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ad2acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad2b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ad2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD2BCu;
}
