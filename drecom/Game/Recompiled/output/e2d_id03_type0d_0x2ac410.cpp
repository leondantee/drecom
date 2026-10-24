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

// Function: e2d_id03_type0d
// Address: 0x2ac410 - 0x2ac5d8
void e2d_id03_type0d_0x2ac410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type0d_0x2ac410");
#endif

    switch (ctx->pc) {
        case 0x2ac4b0u: goto label_2ac4b0;
        default: break;
    }

    ctx->pc = 0x2ac410u;

    // 0x2ac410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac414: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ac414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ac418: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ac418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ac41c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2ac41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2ac420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac424: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac428: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ac428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ac42c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2ac42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2ac430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac434: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac438: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ac438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ac43c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2ac43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2ac440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac444: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac448: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ac448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ac44c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ac44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ac450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac458: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ac458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ac45c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac464: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac468: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2ac468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ac46c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ac46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ac470: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ac470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ac474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac478: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac47c: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ac47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ac480: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ac480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ac484: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ac484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ac488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac48c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac490: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2ac490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2ac494: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2ac494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2ac498: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2ac498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2ac49c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac4a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac4a4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ac4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ac4a8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AC4A8u;
    SET_GPR_U32(ctx, 31, 0x2AC4B0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AC4A8u, 0x2AC4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC4B0u;
label_2ac4b0:
    // 0x2ac4b0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ac4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ac4b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac4b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac4b8: 0x0  nop
    ctx->pc = 0x2ac4b8u;
    // NOP
    // 0x2ac4bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ac4bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac4c0: 0x3c0343e6  lui         $v1, 0x43E6
    ctx->pc = 0x2ac4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17382 << 16));
    // 0x2ac4c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac4c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac4c8: 0x0  nop
    ctx->pc = 0x2ac4c8u;
    // NOP
    // 0x2ac4cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac4d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac4d4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ac4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ac4d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac4dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac4e0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2ac4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2ac4e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ac4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ac4e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac4ec: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ac4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac4f0: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2ac4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2ac4f4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2ac4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2ac4f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac4fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac500: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ac500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ac504: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac508: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac508u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac50c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac510: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac514: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac518: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac51c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac51cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac520: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac524: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac524u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac528: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac52c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac530: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac534: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac538: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac53c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac540: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac544: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac544u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac548: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac54c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ac54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ac550: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac554: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ac554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac558: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ac558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ac55c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ac55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ac560: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ac560u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac564: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac568: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac568u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac56c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac570: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac574: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac578: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac57c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac57cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac580: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac584: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac588: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac58c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac590: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac594: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac598: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac598u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac59c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac5a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac5a4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac5a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac5a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac5ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ac5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ac5b0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ac5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ac5b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac5b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac5b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ac5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac5bc: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ac5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ac5c0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ac5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ac5c4: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ac5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac5c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ac5c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac5cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ac5ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ac5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC5D8u;
}
