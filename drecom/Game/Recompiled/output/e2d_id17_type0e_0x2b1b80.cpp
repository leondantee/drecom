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

// Function: e2d_id17_type0e
// Address: 0x2b1b80 - 0x2b1cf8
void e2d_id17_type0e_0x2b1b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type0e_0x2b1b80");
#endif

    switch (ctx->pc) {
        case 0x2b1c3cu: goto label_2b1c3c;
        default: break;
    }

    ctx->pc = 0x2b1b80u;

    // 0x2b1b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b1b84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b1b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b1b88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b1b8c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b1b90: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b1b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b1b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1b9c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2b1b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2b1ba0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b1ba4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b1ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b1ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1bac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1bb0: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2b1bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2b1bb4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b1bb8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b1bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b1bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1bc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1bc4: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2b1bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2b1bc8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b1bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1bd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1bd4: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b1bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b1bd8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b1bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1be0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1be4: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b1be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b1be8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b1bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1bf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1bf4: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b1bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b1bf8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b1bfc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b1bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b1c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1c04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1c08: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b1c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b1c0c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b1c10: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b1c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b1c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1c18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1c1c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b1c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b1c20: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b1c24: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b1c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b1c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1c2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1c30: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b1c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b1c34: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B1C34u;
    SET_GPR_U32(ctx, 31, 0x2B1C3Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B1C34u, 0x2B1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C3Cu;
label_2b1c3c:
    // 0x2b1c3c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b1c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b1c40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b1c40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1c44: 0x0  nop
    ctx->pc = 0x2b1c44u;
    // NOP
    // 0x2b1c48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b1c48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b1c4c: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b1c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b1c50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1c54: 0x0  nop
    ctx->pc = 0x2b1c54u;
    // NOP
    // 0x2b1c58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b1c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b1c5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1c60: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1c64: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b1c68: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b1c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b1c6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1c70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1c74: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b1c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b1c78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1c7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1c80: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b1c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1c84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b1c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b1c88: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b1c8c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b1c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b1c90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b1c94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b1c98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b1c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b1c9c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b1c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b1ca0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b1ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b1ca4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b1ca8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b1ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b1cac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b1cb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b1cb4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b1cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b1cb8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b1cbc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b1cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b1cc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b1cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b1cc4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b1cc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b1cc8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b1cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b1ccc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2b1cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2b1cd0: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x2b1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2b1cd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1cd8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b1cdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1ce0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1ce4: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b1ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1ce8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b1ce8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1cec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b1cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b1cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1CF8u;
}
