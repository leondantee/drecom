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

// Function: e2d_id03_type06
// Address: 0x2ab910 - 0x2abbb4
void e2d_id03_type06_0x2ab910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type06_0x2ab910");
#endif

    switch (ctx->pc) {
        case 0x2ab9b4u: goto label_2ab9b4;
        case 0x2ab9e4u: goto label_2ab9e4;
        case 0x2aba04u: goto label_2aba04;
        case 0x2aba24u: goto label_2aba24;
        default: break;
    }

    ctx->pc = 0x2ab910u;

    // 0x2ab910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab914: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ab914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ab918: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ab918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ab91c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ab91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab924: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab928: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ab928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ab92c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ab92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab934: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab938: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ab938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ab93c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ab93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab948: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ab948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ab94c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2ab94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2ab950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab954: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab958: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ab958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ab95c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ab95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ab960: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ab960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ab964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab968: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab96c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2ab96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ab970: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ab970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ab974: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ab974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ab978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab97c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab980: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ab980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ab984: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ab984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ab988: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ab988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ab98c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab994: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2ab994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2ab998: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ab998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ab99c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ab99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ab9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab9a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab9a8: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ab9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ab9ac: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AB9ACu;
    SET_GPR_U32(ctx, 31, 0x2AB9B4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AB9ACu, 0x2AB9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9B4u;
label_2ab9b4:
    // 0x2ab9b4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2ab9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2ab9b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ab9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab9bc: 0x0  nop
    ctx->pc = 0x2ab9bcu;
    // NOP
    // 0x2ab9c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ab9c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab9c4: 0x3c024443  lui         $v0, 0x4443
    ctx->pc = 0x2ab9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17475 << 16));
    // 0x2ab9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab9cc: 0x0  nop
    ctx->pc = 0x2ab9ccu;
    // NOP
    // 0x2ab9d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ab9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ab9d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab9d8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2ab9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2ab9dc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AB9DCu;
    SET_GPR_U32(ctx, 31, 0x2AB9E4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AB9DCu, 0x2AB9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9E4u;
label_2ab9e4:
    // 0x2ab9e4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ab9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ab9e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ab9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab9ec: 0x0  nop
    ctx->pc = 0x2ab9ecu;
    // NOP
    // 0x2ab9f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ab9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab9f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab9f8: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2ab9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2ab9fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AB9FCu;
    SET_GPR_U32(ctx, 31, 0x2ABA04u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AB9FCu, 0x2ABA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA04u;
label_2aba04:
    // 0x2aba04: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2aba04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2aba08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aba08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aba0c: 0x0  nop
    ctx->pc = 0x2aba0cu;
    // NOP
    // 0x2aba10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2aba10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aba14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aba18: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2aba18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2aba1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ABA1Cu;
    SET_GPR_U32(ctx, 31, 0x2ABA24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ABA1Cu, 0x2ABA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA24u;
label_2aba24:
    // 0x2aba24: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2aba24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2aba28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aba28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aba2c: 0x0  nop
    ctx->pc = 0x2aba2cu;
    // NOP
    // 0x2aba30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2aba30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aba34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aba34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aba38: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2aba38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2aba3c: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2aba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2aba40: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2aba40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2aba44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aba44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aba48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aba4c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2aba4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2aba50: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2aba50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2aba54: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2aba54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2aba58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aba58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aba5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aba60: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x2aba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x2aba64: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2aba64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2aba68: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2aba68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2aba6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aba6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aba70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aba74: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x2aba74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2aba78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aba78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aba7c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aba80: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aba80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2aba84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2aba84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aba88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aba8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aba90: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2aba90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2aba94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aba94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aba98: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2aba98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2aba9c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2aba9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abaa0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abaa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abaa8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2abaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2abaac: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2abaacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2abab0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2abab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2abab4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abab8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2abab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ababc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ababcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abac0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2abac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2abac4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2abac4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2abac8: 0x0  nop
    ctx->pc = 0x2abac8u;
    // NOP
    // 0x2abacc: 0x0  nop
    ctx->pc = 0x2abaccu;
    // NOP
    // 0x2abad0: 0x1810  mfhi        $v1
    ctx->pc = 0x2abad0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2abad4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2abad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abad8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2abad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abadc: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2abadcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2abae0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abae4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abae4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abae8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abaec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abaf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abaf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abaf8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2abaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2abafc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abb00: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abb00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abb04: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abb08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abb0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abb10: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2abb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2abb14: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2abb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2abb18: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2abb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2abb1c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abb20: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2abb20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2abb24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abb28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2abb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2abb2c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2abb2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abb30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2abb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abb34: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2abb34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2abb38: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2abb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2abb3c: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2abb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abb40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abb44: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abb44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abb48: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abb4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abb50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abb54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abb58: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2abb58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2abb5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abb60: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2abb60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2abb64: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2abb64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2abb68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2abb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abb6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2abb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2abb70: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2abb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2abb74: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2abb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2abb78: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2abb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2abb7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2abb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2abb80: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2abb80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2abb84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2abb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abb88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2abb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2abb8c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2abb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2abb90: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2abb90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2abb94: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2abb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abb98: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2abb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2abb9c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2abb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2abba0: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2abba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abba4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2abba4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abba8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2abba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2abbac: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABBB4u;
}
