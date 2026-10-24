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

// Function: e2d_id5c_type01
// Address: 0x2b86b0 - 0x2b88d0
void e2d_id5c_type01_0x2b86b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5c_type01_0x2b86b0");
#endif

    switch (ctx->pc) {
        case 0x2b876cu: goto label_2b876c;
        default: break;
    }

    ctx->pc = 0x2b86b0u;

    // 0x2b86b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b86b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b86b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b86b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b86b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b86b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b86bc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b86c0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b86c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b86c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b86c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b86c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b86cc: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2b86ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2b86d0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b86d4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b86d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b86d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b86d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b86dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b86e0: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2b86e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2b86e4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b86e8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b86e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b86ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b86ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b86f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b86f4: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2b86f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2b86f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b86fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b86fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8700: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8704: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b8704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b8708: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b8708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b870c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b870cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8710: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8714: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b8714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b8718: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b8718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b871c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b871cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8720: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8724: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b8724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b8728: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b8728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b872c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b872cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b8730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8734: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8738: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b8738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b873c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b873cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b8740: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b8740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b8744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8748: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b874c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b874cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b8750: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2b8750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2b8754: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2b8754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2b8758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b875c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8760: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b8760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b8764: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B8764u;
    SET_GPR_U32(ctx, 31, 0x2B876Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B8764u, 0x2B876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B876Cu;
label_2b876c:
    // 0x2b876c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b876cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b8770: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b8770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8774: 0x0  nop
    ctx->pc = 0x2b8774u;
    // NOP
    // 0x2b8778: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b877c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b877cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b8780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8784: 0x0  nop
    ctx->pc = 0x2b8784u;
    // NOP
    // 0x2b8788: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b878c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8790: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b8794: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b8794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b8798: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b8798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b879c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b879cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b87a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b87a4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b87a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b87a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b87a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b87ac: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b87acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b87b0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b87b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b87b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b87b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b87bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b87bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b87c0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b87c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b87c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b87c8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b87c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b87cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b87ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b87d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b87d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b87d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b87d8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b87d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b87dc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b87e0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b87e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b87e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b87e8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b87e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b87ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b87ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b87f0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b87f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b87f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b87f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b87f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b87fc: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b87fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8800: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8804: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8808: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b8808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b880c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b880cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b8810: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b8810u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b8814: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b8814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b8818: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b8818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b881c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b8820: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b8824: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b8824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b8828: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b8828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b882c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b882cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b8830: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b8830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b8834: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b8834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b8838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b883c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b883cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b8840: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b8840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b8844: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b8844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b8848: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b8848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b884c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b884cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b8850: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b8854: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2b8854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2b8858: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x2b8858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2b885c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8860: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b8860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b8864: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b8864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b8868: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b8868u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b886c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b886cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b8870: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b8870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b8874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b8878: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b887c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b887cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b8880: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b8880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b8884: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b8884u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b8888: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b8888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b888c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b888cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b8890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b8894: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b8894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b8898: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b8898u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b889c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b88a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b88a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b88a4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b88a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b88a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b88a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b88ac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b88acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b88b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b88b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b88b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b88b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b88b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b88b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b88bc: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b88bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b88c0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b88c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b88c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b88c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b88c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B88C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B88C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B88D0u;
}
