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

// Function: entry_001ea8c8
// Address: 0x1ea8c8 - 0x1eac58
void entry_001ea8c8_0x1ea8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea8c8_0x1ea8c8");
#endif

    switch (ctx->pc) {
        case 0x1eaa04u: goto label_1eaa04;
        case 0x1eaa40u: goto label_1eaa40;
        case 0x1eaa68u: goto label_1eaa68;
        case 0x1eabb0u: goto label_1eabb0;
        case 0x1eac14u: goto label_1eac14;
        case 0x1eac20u: goto label_1eac20;
        case 0x1eac30u: goto label_1eac30;
        default: break;
    }

    ctx->pc = 0x1ea8c8u;

    // 0x1ea8c8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ea8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ea8d0: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x1ea8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1ea8d4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ea8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ea8d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ea8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ea8dc: 0x24439c40  addiu       $v1, $v0, -0x63C0
    ctx->pc = 0x1ea8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
    // 0x1ea8e0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8e4: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x1ea8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x1ea8e8: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x1ea8ec: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8f0: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x1ea8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x1ea8f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ea8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea8f8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea8fc: 0xa0821219  sb          $v0, 0x1219($a0)
    ctx->pc = 0x1ea8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4633), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ea900: 0x3c06466a  lui         $a2, 0x466A
    ctx->pc = 0x1ea900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18026 << 16));
    // 0x1ea904: 0x34c56000  ori         $a1, $a2, 0x6000
    ctx->pc = 0x1ea904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24576);
    // 0x1ea908: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ea908u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea90c: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x1ea90cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea910: 0xe4e011e8  swc1        $f0, 0x11E8($a3)
    ctx->pc = 0x1ea910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4584), bits); }
    // 0x1ea914: 0x24080027  addiu       $t0, $zero, 0x27
    ctx->pc = 0x1ea914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1ea918: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea91c: 0xa04810a9  sb          $t0, 0x10A9($v0)
    ctx->pc = 0x1ea91cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4265), (uint8_t)GPR_U32(ctx, 8));
    // 0x1ea920: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea924: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x1ea924u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ea928: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea92c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1ea92cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ea930: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea934: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1ea934u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ea938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea93c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea940: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1ea940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1ea944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea948: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea94c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1ea94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1ea950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ea950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea954: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea958: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1ea958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1ea95c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ea95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea960: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1ea960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1ea964: 0x245e39d0  addiu       $fp, $v0, 0x39D0
    ctx->pc = 0x1ea964u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 14800));
    // 0x1ea968: 0x97c30140  lhu         $v1, 0x140($fp)
    ctx->pc = 0x1ea968u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 320)));
    // 0x1ea96c: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1ea96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1ea970: 0xa7c20140  sh          $v0, 0x140($fp)
    ctx->pc = 0x1ea970u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ea974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ea974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea978: 0x27c50150  addiu       $a1, $fp, 0x150
    ctx->pc = 0x1ea978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea97c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1ea97cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1ea980: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x1ea980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x1ea984: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1ea984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ea988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea98c: 0x27c20150  addiu       $v0, $fp, 0x150
    ctx->pc = 0x1ea98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea990: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ea990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ea994: 0x3c053d56  lui         $a1, 0x3D56
    ctx->pc = 0x1ea994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15702 << 16));
    // 0x1ea998: 0x34a47750  ori         $a0, $a1, 0x7750
    ctx->pc = 0x1ea998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30544);
    // 0x1ea99c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ea99cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea9a0: 0x27c20150  addiu       $v0, $fp, 0x150
    ctx->pc = 0x1ea9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea9a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ea9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1ea9a8: 0x3c053eb2  lui         $a1, 0x3EB2
    ctx->pc = 0x1ea9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16050 << 16));
    // 0x1ea9ac: 0x34a4b8c2  ori         $a0, $a1, 0xB8C2
    ctx->pc = 0x1ea9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47298);
    // 0x1ea9b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ea9b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea9b4: 0x27c20150  addiu       $v0, $fp, 0x150
    ctx->pc = 0x1ea9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea9b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1ea9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1ea9bc: 0x3c053d0e  lui         $a1, 0x3D0E
    ctx->pc = 0x1ea9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15630 << 16));
    // 0x1ea9c0: 0x34b3fa35  ori         $s3, $a1, 0xFA35
    ctx->pc = 0x1ea9c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64053);
    // 0x1ea9c4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1ea9c4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea9c8: 0x27c20150  addiu       $v0, $fp, 0x150
    ctx->pc = 0x1ea9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea9cc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1ea9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1ea9d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ea9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ea9d4: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x1ea9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x1ea9d8: 0x24700130  addiu       $s0, $v1, 0x130
    ctx->pc = 0x1ea9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x1ea9dc: 0x27d30150  addiu       $s3, $fp, 0x150
    ctx->pc = 0x1ea9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
    // 0x1ea9e0: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x1ea9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
    // 0x1ea9e4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ea9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea9e8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ea9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ea9ec: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1ea9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1ea9f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ea9f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ea9f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ea9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea9f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ea9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ea9fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EA9FCu;
    SET_GPR_U32(ctx, 31, 0x1EAA04u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EA9FCu, 0x1EAA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA04u;
label_1eaa04:
    // 0x1eaa04: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eaa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eaa0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1eaa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1eaa10: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1eaa10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa14: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x1eaa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x1eaa18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1eaa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1eaa1c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eaa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa20: 0x24b61330  addiu       $s6, $a1, 0x1330
    ctx->pc = 0x1eaa20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eaa24: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x1eaa24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x1eaa28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaa28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaa2c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa30: 0x24461330  addiu       $a2, $v0, 0x1330
    ctx->pc = 0x1eaa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eaa34: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1eaa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1eaa38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EAA38u;
    SET_GPR_U32(ctx, 31, 0x1EAA40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EAA38u, 0x1EAA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA40u;
label_1eaa40:
    // 0x1eaa40: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1eaa40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eaa44: 0x3104007f  andi        $a0, $t0, 0x7F
    ctx->pc = 0x1eaa44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
    // 0x1eaa48: 0x2485012c  addiu       $a1, $a0, 0x12C
    ctx->pc = 0x1eaa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x1eaa4c: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x1eaa4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1eaa50: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1eaa50u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1eaa54: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x1eaa54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa58: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1eaa58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1eaa5c: 0xa506005c  sh          $a2, 0x5C($t0)
    ctx->pc = 0x1eaa5cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 92), (uint16_t)GPR_U32(ctx, 6));
    // 0x1eaa60: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EAA60u;
    SET_GPR_U32(ctx, 31, 0x1EAA68u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EAA60u, 0x1EAA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA68u;
label_1eaa68:
    // 0x1eaa68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1eaa68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eaa6c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1eaa6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eaa70: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x1eaa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x1eaa74: 0x246604b0  addiu       $a2, $v1, 0x4B0
    ctx->pc = 0x1eaa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x1eaa78: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x1eaa78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1eaa7c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1eaa7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1eaa80: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eaa80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa84: 0x24b11330  addiu       $s1, $a1, 0x1330
    ctx->pc = 0x1eaa84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eaa88: 0xa6240076  sh          $a0, 0x76($s1)
    ctx->pc = 0x1eaa88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 118), (uint16_t)GPR_U32(ctx, 4));
    // 0x1eaa8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaa8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaa90: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eaa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaa94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eaa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eaa98: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x1eaa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x1eaa9c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eaa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaaa0: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x1eaaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eaaa4: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x1eaaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x1eaaa8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaaac: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1eaaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eaab0: 0xa4600082  sh          $zero, 0x82($v1)
    ctx->pc = 0x1eaab0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eaab4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1eaab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eaab8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eaab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaabc: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x1eaabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eaac0: 0xa064007f  sb          $a0, 0x7F($v1)
    ctx->pc = 0x1eaac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eaac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaac8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eaac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaacc: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x1eaaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eaad0: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x1eaad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x1eaad4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaad8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaadc: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1eaadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eaae0: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x1eaae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x1eaae4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaae8: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x1eaae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaaec: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1eaaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1eaaf0: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x1eaaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x1eaaf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaaf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaaf8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaafc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eaafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab00: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1eab00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1eab04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eab04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab08: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab0c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1eab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eab10: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1eab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1eab14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eab14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab18: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab20: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1eab20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1eab24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eab24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab28: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eab28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab2c: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1eab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eab30: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1eab30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1eab34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eab34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab38: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab3c: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x1eab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eab40: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1eab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1eab44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eab44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab48: 0x8fb50138  lw          $s5, 0x138($sp)
    ctx->pc = 0x1eab48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab4c: 0x26a31330  addiu       $v1, $s5, 0x1330
    ctx->pc = 0x1eab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4912));
    // 0x1eab50: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1eab50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1eab54: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab5c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1eab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x1eab60: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1eab60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab64: 0x26621330  addiu       $v0, $s3, 0x1330
    ctx->pc = 0x1eab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4912));
    // 0x1eab68: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1eab68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1eab6c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab70: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1eab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eab74: 0xa4400078  sh          $zero, 0x78($v0)
    ctx->pc = 0x1eab74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eab78: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab7c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1eab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab80: 0xa080007b  sb          $zero, 0x7B($a0)
    ctx->pc = 0x1eab80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eab84: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab88: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab8c: 0xa060007d  sb          $zero, 0x7D($v1)
    ctx->pc = 0x1eab8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eab90: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eab94: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1eab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eab98: 0xa080007e  sb          $zero, 0x7E($a0)
    ctx->pc = 0x1eab98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 126), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eab9c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaba0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1eaba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eaba4: 0xa4400080  sh          $zero, 0x80($v0)
    ctx->pc = 0x1eaba4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eaba8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EABA8u;
    SET_GPR_U32(ctx, 31, 0x1EABB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EABA8u, 0x1EABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EABB0u;
label_1eabb0:
    // 0x1eabb0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1eabb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eabb4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1eabb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1eabb8: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x1eabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1eabbc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x1eabbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1eabc0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1eabc0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1eabc4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eabc8: 0x24551330  addiu       $s5, $v0, 0x1330
    ctx->pc = 0x1eabc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eabcc: 0xa6a5005e  sh          $a1, 0x5E($s5)
    ctx->pc = 0x1eabccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 94), (uint16_t)GPR_U32(ctx, 5));
    // 0x1eabd0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eabd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eabd4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eabd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eabd8: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x1eabd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eabdc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eabe0: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eabe4: 0xa4800094  sh          $zero, 0x94($a0)
    ctx->pc = 0x1eabe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eabe8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eabec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eabecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eabf0: 0xa06000a8  sb          $zero, 0xA8($v1)
    ctx->pc = 0x1eabf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eabf4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eabf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eabf8: 0x24b01330  addiu       $s0, $a1, 0x1330
    ctx->pc = 0x1eabf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eabfc: 0xa60000ac  sh          $zero, 0xAC($s0)
    ctx->pc = 0x1eabfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 172), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eac00: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eac04: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1eac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eac08: 0xa44000aa  sh          $zero, 0xAA($v0)
    ctx->pc = 0x1eac08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 0));
    // 0x1eac0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EAC0Cu;
    SET_GPR_U32(ctx, 31, 0x1EAC14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EAC0Cu, 0x1EAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC14u;
label_1eac14:
    // 0x1eac14: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1eac14u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eac18: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EAC18u;
    SET_GPR_U32(ctx, 31, 0x1EAC20u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EAC18u, 0x1EAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC20u;
label_1eac20:
    // 0x1eac20: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1eac20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eac24: 0x2a48021  addu        $s0, $s5, $a0
    ctx->pc = 0x1eac24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1eac28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EAC28u;
    SET_GPR_U32(ctx, 31, 0x1EAC30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EAC28u, 0x1EAC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC30u;
label_1eac30:
    // 0x1eac30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eac34: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1eac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eac38: 0x30850007  andi        $a1, $a0, 0x7
    ctx->pc = 0x1eac38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1eac3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac40: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAC40u;
    {
        const bool branch_taken_0x1eac40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eac40) {
            ctx->pc = 0x1EAC58u;
            return;
        }
    }
    ctx->pc = 0x1EAC48u;
    // 0x1eac48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac4c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eac50: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1eac50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eac54: 0xa4a300aa  sh          $v1, 0xAA($a1)
    ctx->pc = 0x1eac54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 170), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1eac58u;
}
