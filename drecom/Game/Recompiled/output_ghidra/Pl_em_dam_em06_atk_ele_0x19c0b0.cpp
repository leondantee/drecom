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

// Function: Pl_em_dam_em06_atk_ele
// Address: 0x19c0b0 - 0x19c484
void Pl_em_dam_em06_atk_ele_0x19c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em06_atk_ele_0x19c0b0");
#endif

    switch (ctx->pc) {
        case 0x19c124u: goto label_19c124;
        case 0x19c16cu: goto label_19c16c;
        case 0x19c28cu: goto label_19c28c;
        case 0x19c29cu: goto label_19c29c;
        case 0x19c2acu: goto label_19c2ac;
        case 0x19c2ecu: goto label_19c2ec;
        case 0x19c30cu: goto label_19c30c;
        case 0x19c35cu: goto label_19c35c;
        case 0x19c36cu: goto label_19c36c;
        case 0x19c37cu: goto label_19c37c;
        case 0x19c3bcu: goto label_19c3bc;
        case 0x19c3dcu: goto label_19c3dc;
        case 0x19c3f4u: goto label_19c3f4;
        case 0x19c400u: goto label_19c400;
        case 0x19c414u: goto label_19c414;
        case 0x19c420u: goto label_19c420;
        default: break;
    }

    ctx->pc = 0x19c0b0u;

    // 0x19c0b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19c0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19c0b4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x19c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x19c0b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19c0bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19c0c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c0c4: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x19c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x19c0c8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x19c0cc: 0x24637430  addiu       $v1, $v1, 0x7430
    ctx->pc = 0x19c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29744));
    // 0x19c0d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c0d4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19c0d4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x387430u));
    // 0x19c0d8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19c0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x19c0dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c0e0: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x19c0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x19c0e4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c0e8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x19c0e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19c0ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19c0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19c0f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c0f4: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x19C0F4u;
    {
        const bool branch_taken_0x19c0f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19c0f4) {
            ctx->pc = 0x19C198u;
            goto label_19c198;
        }
    }
    ctx->pc = 0x19C0FCu;
    // 0x19c0fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C0FCu;
    {
        const bool branch_taken_0x19c0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c0fc) {
            ctx->pc = 0x19C10Cu;
            goto label_19c10c;
        }
    }
    ctx->pc = 0x19C104u;
    // 0x19c104: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x19C104u;
    {
        const bool branch_taken_0x19c104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c104) {
            ctx->pc = 0x19C468u;
            goto label_19c468;
        }
    }
    ctx->pc = 0x19C10Cu;
label_19c10c:
    // 0x19c10c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c110: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c114: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x19c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19c118: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x19c118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19c11c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x19C11Cu;
    SET_GPR_U32(ctx, 31, 0x19C124u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x19C11Cu, 0x19C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C124u;
label_19c124:
    // 0x19c124: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x19c124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x19c128: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x19c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c12c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c130: 0x0  nop
    ctx->pc = 0x19c130u;
    // NOP
    // 0x19c134: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19c134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c138: 0x0  nop
    ctx->pc = 0x19c138u;
    // NOP
    // 0x19c13c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19C13Cu;
    {
        const bool branch_taken_0x19c13c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c13c) {
            ctx->pc = 0x19C150u;
            goto label_19c150;
        }
    }
    ctx->pc = 0x19C144u;
    // 0x19c144: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x19c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c148: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19c148u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19c14c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x19c14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_19c150:
    // 0x19c150: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c154: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x19c154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x19c158: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x19c158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x19c15c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x19c15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x19c160: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19c160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19c164: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19C164u;
    SET_GPR_U32(ctx, 31, 0x19C16Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19C164u, 0x19C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C16Cu;
label_19c16c:
    // 0x19c16c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x19c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x19c170: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c174: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x19c174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x19c178: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c17c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19c17cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x19c180: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c184: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x19c184u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x19c188: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c18c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x19c18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19c190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19c194: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x19c194u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_19c198:
    // 0x19c198: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c19c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x19c19cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x19c1a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19c1a4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x19c1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c1a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c1ac: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x19c1acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x19c1b0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x19c1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c1b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19c1b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19c1b8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19c1bc: 0x14620089  bne         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x19C1BCu;
    {
        const bool branch_taken_0x19c1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c1bc) {
            ctx->pc = 0x19C3E4u;
            goto label_19c3e4;
        }
    }
    ctx->pc = 0x19C1C4u;
    // 0x19c1c4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c1c8: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x19c1c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x19c1cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19c1d0: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x19c1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c1d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19c1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c1d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19c1d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19c1dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19c1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c1e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19c1e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19c1e4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x19c1e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19c1e8: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x19C1E8u;
    {
        const bool branch_taken_0x19c1e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c1e8) {
            ctx->pc = 0x19C3DCu;
            goto label_19c3dc;
        }
    }
    ctx->pc = 0x19C1F0u;
    // 0x19c1f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19c1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19c1f4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19c1f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19c1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c1fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19c204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19c208: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19c208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19c20c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19c20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19c210: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19c210u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19c214: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19c214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c218: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19c218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c21c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c220: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x19c220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x19c224: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19c224u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x19c228: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19c228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19c22c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19c22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19c230: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x19c230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x19c234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19c234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19c238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19c23c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x19C23Cu;
    {
        const bool branch_taken_0x19c23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c23c) {
            ctx->pc = 0x19C314u;
            goto label_19c314;
        }
    }
    ctx->pc = 0x19C244u;
    // 0x19c244: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x19c244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x19c248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c24c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x19c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x19c250: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19c250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19c254: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c258: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x19c258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19c25c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x19c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x19c260: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19c260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19c264: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c268: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19c268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19c26c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x19c26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c270: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x19c270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c274: 0x24080017  addiu       $t0, $zero, 0x17
    ctx->pc = 0x19c274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x19c278: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c27c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x19c27cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c280: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19c280u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c284: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x19C284u;
    SET_GPR_U32(ctx, 31, 0x19C28Cu);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x19C284u, 0x19C28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C28Cu;
label_19c28c:
    // 0x19c28c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x19c290: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19c290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19c294: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19C294u;
    SET_GPR_U32(ctx, 31, 0x19C29Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19C294u, 0x19C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C29Cu;
label_19c29c:
    // 0x19c29c: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x19c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x19c2a0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19c2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19c2a4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19C2A4u;
    SET_GPR_U32(ctx, 31, 0x19C2ACu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19C2A4u, 0x19C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2ACu;
label_19c2ac:
    // 0x19c2ac: 0x24020507  addiu       $v0, $zero, 0x507
    ctx->pc = 0x19c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x19c2b0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x19c2b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c2b4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x19c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x19c2b8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19c2bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19c2bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c2c0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x19c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19c2c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19c2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19c2c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19c2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19c2cc: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x19c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x19c2d0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19c2d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c2d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x19c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19c2dc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x19c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19c2e0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x19c2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x19c2e4: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x19C2E4u;
    SET_GPR_U32(ctx, 31, 0x19C2ECu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x19C2ECu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19C2ECu) { return; }
    ctx->pc = 0x19C2ECu;
label_19c2ec:
    // 0x19c2ec: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x19c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x19c2f0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19c2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19c2f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c2f8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x19c2f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19c2fc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x19c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19c300: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19c300u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c304: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x19C304u;
    SET_GPR_U32(ctx, 31, 0x19C30Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x19C304u, 0x19C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C30Cu;
label_19c30c:
    // 0x19c30c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19C30Cu;
    {
        const bool branch_taken_0x19c30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c30c) {
            ctx->pc = 0x19C3DCu;
            goto label_19c3dc;
        }
    }
    ctx->pc = 0x19C314u;
label_19c314:
    // 0x19c314: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x19c314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x19c318: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19c318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19c31c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c320: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x19c320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19c324: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x19c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x19c328: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c32c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x19c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x19c330: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19c330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19c334: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c338: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19c33c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x19c33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c340: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x19c340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c344: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x19c344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x19c348: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x19c348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c34c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x19c34cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c350: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19c350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c354: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x19C354u;
    SET_GPR_U32(ctx, 31, 0x19C35Cu);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x19C354u, 0x19C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C35Cu;
label_19c35c:
    // 0x19c35c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x19c360: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19c360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19c364: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19C364u;
    SET_GPR_U32(ctx, 31, 0x19C36Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19C364u, 0x19C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C36Cu;
label_19c36c:
    // 0x19c36c: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x19c370: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19c370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19c374: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19C374u;
    SET_GPR_U32(ctx, 31, 0x19C37Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19C374u, 0x19C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C37Cu;
label_19c37c:
    // 0x19c37c: 0x24020508  addiu       $v0, $zero, 0x508
    ctx->pc = 0x19c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x19c380: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x19c380u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c384: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x19c384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x19c388: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19c38c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19c38cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c390: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x19c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19c394: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19c394u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19c398: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19c398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19c39c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x19c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x19c3a0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19c3a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c3a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x19c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19c3ac: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x19c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19c3b0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x19c3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x19c3b4: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x19C3B4u;
    SET_GPR_U32(ctx, 31, 0x19C3BCu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x19C3BCu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19C3BCu) { return; }
    ctx->pc = 0x19C3BCu;
label_19c3bc:
    // 0x19c3bc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x19c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x19c3c0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19c3c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c3c8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x19c3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19c3cc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x19c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19c3d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19c3d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c3d4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x19C3D4u;
    SET_GPR_U32(ctx, 31, 0x19C3DCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x19C3D4u, 0x19C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3DCu;
label_19c3dc:
    // 0x19c3dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c3e0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19c3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_19c3e4:
    // 0x19c3e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c3e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19c3e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c3ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19C3ECu;
    SET_GPR_U32(ctx, 31, 0x19C3F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19C3ECu, 0x19C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3F4u;
label_19c3f4:
    // 0x19c3f4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c3f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19C3F8u;
    SET_GPR_U32(ctx, 31, 0x19C400u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19C3F8u, 0x19C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C400u;
label_19c400:
    // 0x19c400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19c400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c404: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c408: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19c408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c40c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x19C40Cu;
    SET_GPR_U32(ctx, 31, 0x19C414u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x19C40Cu, 0x19C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C414u;
label_19c414:
    // 0x19c414: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c418: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19C418u;
    SET_GPR_U32(ctx, 31, 0x19C420u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19C418u, 0x19C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C420u;
label_19c420:
    // 0x19c420: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c424: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19c424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19c428: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19C428u;
    {
        const bool branch_taken_0x19c428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c428) {
            ctx->pc = 0x19C468u;
            goto label_19c468;
        }
    }
    ctx->pc = 0x19C430u;
    // 0x19c430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c434: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c438: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19c438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19c43c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c440: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x19c440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c444: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c448: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19c448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c44c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c450: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19c450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c454: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x19c454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19c458: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c45c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x19c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x19c460: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19C460u;
    {
        const bool branch_taken_0x19c460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c460) {
            ctx->pc = 0x19C468u;
            goto label_19c468;
        }
    }
    ctx->pc = 0x19C468u;
label_19c468:
    // 0x19c468: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x19c468u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c46c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19c46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c470: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19c470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c474: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c478: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x19c478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19c47c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C484u;
}
