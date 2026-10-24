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

// Function: e2d_id5c_type00
// Address: 0x2b8490 - 0x2b86a8
void e2d_id5c_type00_0x2b8490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5c_type00_0x2b8490");
#endif

    switch (ctx->pc) {
        case 0x2b8504u: goto label_2b8504;
        default: break;
    }

    ctx->pc = 0x2b8490u;

    // 0x2b8490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8494: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b8494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b8498: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b8498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b849c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2b849cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2b84a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b84a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b84a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b84a8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b84a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b84ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b84acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b84b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b84b4: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b84b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b84b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b84b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b84bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b84c0: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b84c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b84c4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b84c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b84c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b84cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b84d0: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b84d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b84d4: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b84d8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b84d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b84dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b84dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b84e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b84e4: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2b84e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2b84e8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2b84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2b84ec: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2b84ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2b84f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b84f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b84f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b84f8: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b84f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b84fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B84FCu;
    SET_GPR_U32(ctx, 31, 0x2B8504u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B84FCu, 0x2B8504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8504u;
label_2b8504:
    // 0x2b8504: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b8504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b8508: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b8508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b850c: 0x0  nop
    ctx->pc = 0x2b850cu;
    // NOP
    // 0x2b8510: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b8510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8514: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2b8514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2b8518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b851c: 0x0  nop
    ctx->pc = 0x2b851cu;
    // NOP
    // 0x2b8520: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8524: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8528: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b852c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b852cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b8530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8534: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8538: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2b8538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2b853c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b853cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b8540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8544: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8548: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b8548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b854c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b854cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b8550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8554: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8558: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b8558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b855c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b855cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b8560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8564: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8568: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b8568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b856c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b8570: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b8570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b8574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8578: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b857c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b857cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b8580: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b8580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b8584: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b8584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b8588: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b8588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b858c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b858cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b8590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b8594: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b8598: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b8598u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b859c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b859cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b85a0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b85a4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b85a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b85a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b85ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b85acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b85b0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b85b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b85b4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b85b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b85b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b85bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b85bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b85c0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b85c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b85c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b85c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b85c8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b85c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b85cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b85ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b85d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b85d4: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b85d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b85d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b85dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b85e0: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b85e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b85e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b85e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b85e8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b85e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b85ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b85ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b85f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b85f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b85f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b85f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b85fc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b85fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b8600: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b8600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b8604: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b8604u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b8608: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b8608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b860c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b860cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b8610: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b8614: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b8614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b8618: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b8618u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b861c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b8620: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b8620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b8624: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b8624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b8628: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b862c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2b862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2b8630: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x2b8630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x2b8634: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8638: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b8638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b863c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b863cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b8640: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b8640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b8644: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b8644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b8648: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b8648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b864c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b8650: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b8654: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b8654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b8658: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b8658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b865c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b865cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b8660: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b8660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b8664: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b8664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b8668: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b8668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b866c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b866cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b8670: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b8670u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b8674: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b8674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b8678: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b8678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b867c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b867cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b8680: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b8680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b8684: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b8684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b8688: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b8688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b868c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b868cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b8690: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8694: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b8694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8698: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b8698u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b869c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b869cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b86a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B86A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B86A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B86A8u;
}
