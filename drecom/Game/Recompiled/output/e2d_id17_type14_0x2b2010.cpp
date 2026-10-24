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

// Function: e2d_id17_type14
// Address: 0x2b2010 - 0x2b21c8
void e2d_id17_type14_0x2b2010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type14_0x2b2010");
#endif

    switch (ctx->pc) {
        case 0x2b210cu: goto label_2b210c;
        default: break;
    }

    ctx->pc = 0x2b2010u;

    // 0x2b2010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2014: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b2014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b2018: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b2018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b201c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b2020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2024: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2028: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b2028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b202c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2b202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2b2030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2034: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2038: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b2038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b203c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b2040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2044: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2048: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b2048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b204c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2b204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2b2050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2054: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2058: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b2058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b205c: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x2b205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x2b2060: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2b2060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2b2064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2068: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b206c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2b206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2b2070: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x2b2070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x2b2074: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2b2074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2b2078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b207c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2080: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2b2080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2b2084: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x2b2084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x2b2088: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2b2088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2b208c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b208cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2094: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2b2094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2b2098: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b2098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b209c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b209cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b20a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b20a4: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b20a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b20a8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b20ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b20acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b20b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b20b4: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b20b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b20b8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b20bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b20bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b20c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b20c4: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b20c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b20c8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b20cc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b20ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b20d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b20d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b20d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b20d8: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b20d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b20dc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b20e0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b20e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b20e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b20e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b20e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b20ec: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b20ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b20f0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b20f4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b20f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b20f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b20f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b20fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2100: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b2100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b2104: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B2104u;
    SET_GPR_U32(ctx, 31, 0x2B210Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B2104u, 0x2B210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B210Cu;
label_2b210c:
    // 0x2b210c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b210cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b2110: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b2110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2114: 0x0  nop
    ctx->pc = 0x2b2114u;
    // NOP
    // 0x2b2118: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b211c: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b211cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b2120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2124: 0x0  nop
    ctx->pc = 0x2b2124u;
    // NOP
    // 0x2b2128: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b212c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2130: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b2134: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b2134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b2138: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b2138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b213c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b213cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2140: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2144: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b2144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b2148: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b2148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b214c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2150: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b2150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2154: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2158: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b215c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b215cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b2160: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2164: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2168: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b216c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b216cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b2170: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2174: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b2174u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2178: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b2178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b217c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b217cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b2180: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b2180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2184: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b2184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b2188: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b2188u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b218c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b2190: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2194: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b2194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b2198: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b2198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b219c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b219cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b21a0: 0x2464000d  addiu       $a0, $v1, 0xD
    ctx->pc = 0x2b21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
    // 0x2b21a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b21a8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b21ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b21acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b21b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b21b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b21b4: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b21b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b21b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b21b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b21bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b21bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b21c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B21C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B21C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B21C8u;
}
