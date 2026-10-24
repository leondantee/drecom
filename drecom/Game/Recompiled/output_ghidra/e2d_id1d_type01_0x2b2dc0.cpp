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

// Function: e2d_id1d_type01
// Address: 0x2b2dc0 - 0x2b2f70
void e2d_id1d_type01_0x2b2dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id1d_type01_0x2b2dc0");
#endif

    switch (ctx->pc) {
        case 0x2b2dd4u: goto label_2b2dd4;
        case 0x2b2f24u: goto label_2b2f24;
        default: break;
    }

    ctx->pc = 0x2b2dc0u;

    // 0x2b2dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2dc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b2dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b2dc8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b2dcc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B2DCCu;
    SET_GPR_U32(ctx, 31, 0x2B2DD4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B2DCCu, 0x2B2DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DD4u;
label_2b2dd4:
    // 0x2b2dd4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b2dd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b2dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2ddc: 0x0  nop
    ctx->pc = 0x2b2ddcu;
    // NOP
    // 0x2b2de0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2de4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2b2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2b2de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2dec: 0x0  nop
    ctx->pc = 0x2b2decu;
    // NOP
    // 0x2b2df0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2df4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2df8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b2df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b2dfc: 0x3c023f6e  lui         $v0, 0x3F6E
    ctx->pc = 0x2b2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16238 << 16));
    // 0x2b2e00: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2b2e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2b2e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2e08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2e0c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b2e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b2e10: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x2b2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b2e14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2e18: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2b2e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2b2e1c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2e20: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2e24: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b2e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b2e28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b2e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b2e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2e34: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b2e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b2e38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2e3c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2e40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b2e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b2e44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b2e48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e4c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b2e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b2e50: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b2e54: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b2e58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2e5c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b2e5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b2e60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b2e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2e64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2e68: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2b2e68u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2b2e6c: 0x0  nop
    ctx->pc = 0x2b2e6cu;
    // NOP
    // 0x2b2e70: 0x0  nop
    ctx->pc = 0x2b2e70u;
    // NOP
    // 0x2b2e74: 0x1010  mfhi        $v0
    ctx->pc = 0x2b2e74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b2e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b2e7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b2e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2e80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2e84: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2b2e84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2e88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2e8c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2e90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b2e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b2e94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b2e98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2e9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b2e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2ea0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b2ea4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2ea8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b2eac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b2eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b2eb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b2eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2eb8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b2eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b2ebc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b2ec0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b2ec4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b2ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b2ec8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b2ec8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b2ecc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b2eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2ed0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b2ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b2ed4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b2ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2ed8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2edc: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2b2edcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2ee0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2b2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2b2ee4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b2ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b2ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2eec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2ef0: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2b2ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2b2ef4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2b2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2b2ef8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2b2ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2b2efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2f00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2f04: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x2b2f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x2b2f08: 0x3c02be19  lui         $v0, 0xBE19
    ctx->pc = 0x2b2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48665 << 16));
    // 0x2b2f0c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2b2f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2b2f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2f14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2f18: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b2f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b2f1c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2B2F1Cu;
    SET_GPR_U32(ctx, 31, 0x2B2F24u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2B2F1Cu, 0x2B2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F24u;
label_2b2f24:
    // 0x2b2f24: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2b2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2b2f28: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b2f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b2f2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b2f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2f30: 0x0  nop
    ctx->pc = 0x2b2f30u;
    // NOP
    // 0x2b2f34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2f34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2f38: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2b2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2b2f3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2f40: 0x0  nop
    ctx->pc = 0x2b2f40u;
    // NOP
    // 0x2b2f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2f48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2f4c: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2b2f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2b2f50: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2b2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2b2f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2f58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2f5c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b2f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b2f60: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b2f60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2f64: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2f64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b2f68: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2F70u;
}
