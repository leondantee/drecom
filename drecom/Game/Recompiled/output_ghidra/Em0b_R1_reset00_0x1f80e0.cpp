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

// Function: Em0b_R1_reset00
// Address: 0x1f80e0 - 0x1f8680
void Em0b_R1_reset00_0x1f80e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_reset00_0x1f80e0");
#endif

    switch (ctx->pc) {
        case 0x1f814cu: goto label_1f814c;
        case 0x1f8214u: goto label_1f8214;
        case 0x1f8300u: goto label_1f8300;
        case 0x1f8310u: goto label_1f8310;
        case 0x1f831cu: goto label_1f831c;
        case 0x1f84fcu: goto label_1f84fc;
        case 0x1f8508u: goto label_1f8508;
        case 0x1f8564u: goto label_1f8564;
        case 0x1f8588u: goto label_1f8588;
        case 0x1f85c0u: goto label_1f85c0;
        default: break;
    }

    ctx->pc = 0x1f80e0u;

    // 0x1f80e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f80e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f80e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1f80e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f80e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1f80e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1f80ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f80ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f80f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f80f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f80f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f80f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f80f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f80f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f80fc: 0x1083010b  beq         $a0, $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x1F80FCu;
    {
        const bool branch_taken_0x1f80fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f80fc) {
            ctx->pc = 0x1F852Cu;
            goto label_1f852c;
        }
    }
    ctx->pc = 0x1F8104u;
    // 0x1f8104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8108: 0x10830086  beq         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x1F8108u;
    {
        const bool branch_taken_0x1f8108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f8108) {
            ctx->pc = 0x1F8324u;
            goto label_1f8324;
        }
    }
    ctx->pc = 0x1F8110u;
    // 0x1f8110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8114: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F8114u;
    {
        const bool branch_taken_0x1f8114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f8114) {
            ctx->pc = 0x1F81F4u;
            goto label_1f81f4;
        }
    }
    ctx->pc = 0x1F811Cu;
    // 0x1f811c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F811Cu;
    {
        const bool branch_taken_0x1f811c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f811c) {
            ctx->pc = 0x1F812Cu;
            goto label_1f812c;
        }
    }
    ctx->pc = 0x1F8124u;
    // 0x1f8124: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x1F8124u;
    {
        const bool branch_taken_0x1f8124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8124) {
            ctx->pc = 0x1F8670u;
            goto label_1f8670;
        }
    }
    ctx->pc = 0x1F812Cu;
label_1f812c:
    // 0x1f812c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8130: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8134: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f8134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f8138: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f8138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f813c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f813cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8140: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f8140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f8144: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F8144u;
    SET_GPR_U32(ctx, 31, 0x1F814Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F8144u, 0x1F814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F814Cu;
label_1f814c:
    // 0x1f814c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8150: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f8150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8154: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f8154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f8158: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f8158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f815c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f815cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f8160: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8164: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f8164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f8168: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1f8168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1f816c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f816cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f8170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8178: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f8178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f817c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f817cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8180: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8184: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f8184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x1f8188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f818c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8190: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f8190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f8194: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f8194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f8198: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f819c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f819cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f81a0: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x1f81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x1f81a4: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f81a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f81a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f81a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f81ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f81b4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f81b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f81b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f81b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f81bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81c0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f81c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f81c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f81c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f81c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81cc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1f81ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1f81d0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1f81d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f81d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1f81d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f81d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f81dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f81e4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f81e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f81e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f81e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f81ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81f0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f81f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1f81f4:
    // 0x1f81f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f81f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f81fc: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f81fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8200: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8204: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f8204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8208: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f8208u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f820c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F820Cu;
    SET_GPR_U32(ctx, 31, 0x1F8214u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F820Cu, 0x1F8214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8214u;
label_1f8214:
    // 0x1f8214: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8218: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f8218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f821c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8220: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x1f8220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8224: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f8224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1f8228: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f8228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1f822c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f822cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8230: 0x0  nop
    ctx->pc = 0x1f8230u;
    // NOP
    // 0x1f8234: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8238: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1f8238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1f823c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8240: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x1f8240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8244: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x1f8244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x1f8248: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x1f8248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x1f824c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f824cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8250: 0x0  nop
    ctx->pc = 0x1f8250u;
    // NOP
    // 0x1f8254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8258: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f8258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f825c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8260: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x1f8260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8264: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x1f8264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x1f8268: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x1f8268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x1f826c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f826cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8270: 0x0  nop
    ctx->pc = 0x1f8270u;
    // NOP
    // 0x1f8274: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8278: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x1f8278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x1f827c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f827cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8280: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1f8280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1f8284: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1f8284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f8288: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x1f8288u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f828c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F828Cu;
    {
        const bool branch_taken_0x1f828c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f828c) {
            ctx->pc = 0x1F82C0u;
            goto label_1f82c0;
        }
    }
    ctx->pc = 0x1F8294u;
    // 0x1f8294: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8298: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f829c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f829cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f82a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82a4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1f82a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f82a8: 0x3c023d81  lui         $v0, 0x3D81
    ctx->pc = 0x1f82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15745 << 16));
    // 0x1f82ac: 0x3442fabc  ori         $v0, $v0, 0xFABC
    ctx->pc = 0x1f82acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64188);
    // 0x1f82b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f82b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f82b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f82bc: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1f82bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_1f82c0:
    // 0x1f82c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f82c8: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f82c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f82cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f82d4: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x1f82d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f82d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f82d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f82dc: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f82dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f82e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f82e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f82e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f82e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f82ec: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f82ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f82f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f82f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f82f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f82f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f82f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F82F8u;
    SET_GPR_U32(ctx, 31, 0x1F8300u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F82F8u, 0x1F8300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8300u;
label_1f8300:
    // 0x1f8300: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8304: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f8304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f8308: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F8308u;
    SET_GPR_U32(ctx, 31, 0x1F8310u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F8308u, 0x1F8310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8310u;
label_1f8310:
    // 0x1f8310: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8314: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F8314u;
    SET_GPR_U32(ctx, 31, 0x1F831Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F8314u, 0x1F831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F831Cu;
label_1f831c:
    // 0x1f831c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1F831Cu;
    {
        const bool branch_taken_0x1f831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f831c) {
            ctx->pc = 0x1F8670u;
            goto label_1f8670;
        }
    }
    ctx->pc = 0x1F8324u;
label_1f8324:
    // 0x1f8324: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8328: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f8328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f832c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f8330: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f8330u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f8334: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8338: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f8338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f833c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f8340: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f8340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f8344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f8344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8348: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f8348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f834c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f834cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f8350: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f8350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1f8354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8358: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f8358u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f835c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f835cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8360: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f8360u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f8364: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1f8364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f8368: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F8368u;
    {
        const bool branch_taken_0x1f8368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8368) {
            ctx->pc = 0x1F8438u;
            goto label_1f8438;
        }
    }
    ctx->pc = 0x1F8370u;
    // 0x1f8370: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8374: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8378: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1f8378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f837c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8380: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8384: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f8384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8388: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f8388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f838c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f838cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f8390: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8394: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8398: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f8398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f839c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f839cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f83a0: 0x0  nop
    ctx->pc = 0x1f83a0u;
    // NOP
    // 0x1f83a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f83a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f83a8: 0x0  nop
    ctx->pc = 0x1f83a8u;
    // NOP
    // 0x1f83ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F83ACu;
    {
        const bool branch_taken_0x1f83ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f83ac) {
            ctx->pc = 0x1F83C4u;
            goto label_1f83c4;
        }
    }
    ctx->pc = 0x1F83B4u;
    // 0x1f83b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f83b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f83b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f83bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f83c0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f83c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1f83c4:
    // 0x1f83c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f83c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f83cc: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f83ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f83d0: 0x3c023cb2  lui         $v0, 0x3CB2
    ctx->pc = 0x1f83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15538 << 16));
    // 0x1f83d4: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f83d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f83d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f83d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f83dc: 0x0  nop
    ctx->pc = 0x1f83dcu;
    // NOP
    // 0x1f83e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f83e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f83e4: 0x0  nop
    ctx->pc = 0x1f83e4u;
    // NOP
    // 0x1f83e8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1F83E8u;
    {
        const bool branch_taken_0x1f83e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f83e8) {
            ctx->pc = 0x1F8418u;
            goto label_1f8418;
        }
    }
    ctx->pc = 0x1F83F0u;
    // 0x1f83f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f83f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f83f8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1f83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1f83fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f83fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f8400: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f8400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8404: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f8404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8408: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f8408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f840c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f840cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f8410: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8410u;
    {
        const bool branch_taken_0x1f8410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8410) {
            ctx->pc = 0x1F8438u;
            goto label_1f8438;
        }
    }
    ctx->pc = 0x1F8418u;
label_1f8418:
    // 0x1f8418: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f841c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f841cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8420: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1f8420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x1f8424: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f8424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f8428: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f8428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f842c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8430: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f8430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f8434: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f8434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_1f8438:
    // 0x1f8438: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f843c: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x1f843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8440: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f8440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f8444: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f8444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f8448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f844c: 0x0  nop
    ctx->pc = 0x1f844cu;
    // NOP
    // 0x1f8450: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8454: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f8454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f8458: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f845c: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x1f845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8460: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f8460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f8464: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f8464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f8468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f846c: 0x0  nop
    ctx->pc = 0x1f846cu;
    // NOP
    // 0x1f8470: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8474: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x1f8474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x1f8478: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f847c: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x1f847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8480: 0x3c023bda  lui         $v0, 0x3BDA
    ctx->pc = 0x1f8480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15322 << 16));
    // 0x1f8484: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x1f8484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x1f8488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f848c: 0x0  nop
    ctx->pc = 0x1f848cu;
    // NOP
    // 0x1f8490: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8494: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1f8494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1f8498: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f849c: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x1f849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f84a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f84a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f84a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f84a8: 0x0  nop
    ctx->pc = 0x1f84a8u;
    // NOP
    // 0x1f84ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f84acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f84b0: 0x0  nop
    ctx->pc = 0x1f84b0u;
    // NOP
    // 0x1f84b4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F84B4u;
    {
        const bool branch_taken_0x1f84b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f84b4) {
            ctx->pc = 0x1F84ECu;
            goto label_1f84ec;
        }
    }
    ctx->pc = 0x1F84BCu;
    // 0x1f84bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f84c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f84c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f84c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f84c8: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f84c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f84cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f84d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f84d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f84d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f84d8: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f84d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f84dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f84e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f84e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f84e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f84e8: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f84e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_1f84ec:
    // 0x1f84ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f84ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f84f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f84f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f84f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F84F4u;
    SET_GPR_U32(ctx, 31, 0x1F84FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F84F4u, 0x1F84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F84FCu;
label_1f84fc:
    // 0x1f84fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8500: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F8500u;
    SET_GPR_U32(ctx, 31, 0x1F8508u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F8500u, 0x1F8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8508u;
label_1f8508:
    // 0x1f8508: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f850c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f850cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f8510: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1F8510u;
    {
        const bool branch_taken_0x1f8510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8510) {
            ctx->pc = 0x1F8670u;
            goto label_1f8670;
        }
    }
    ctx->pc = 0x1F8518u;
    // 0x1f8518: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f8518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f851c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f851cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8520: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f8520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8524: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1F8524u;
    {
        const bool branch_taken_0x1f8524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8524) {
            ctx->pc = 0x1F8670u;
            goto label_1f8670;
        }
    }
    ctx->pc = 0x1F852Cu;
label_1f852c:
    // 0x1f852c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8530: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8534: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f8534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8538: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f853c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8540: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f8540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8544: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8548: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f8548u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f854c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8550: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f8550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8558: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f8558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f855c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F855Cu;
    SET_GPR_U32(ctx, 31, 0x1F8564u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F855Cu, 0x1F8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8564u;
label_1f8564:
    // 0x1f8564: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f8564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8568: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f8568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f856c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f8570: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f8570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8574: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8574u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8578: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f857c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f857cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8580: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8580u;
    SET_GPR_U32(ctx, 31, 0x1F8588u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8580u, 0x1F8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8588u;
label_1f8588:
    // 0x1f8588: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f8588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f858c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f8590: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f8590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f8594: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f8594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8598: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8598u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f859c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f85a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f85a4: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f85a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f85a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f85ac: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x1f85acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1f85b0: 0x3042f8ff  andi        $v0, $v0, 0xF8FF
    ctx->pc = 0x1f85b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63743);
    // 0x1f85b4: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x1f85b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f85b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F85B8u;
    SET_GPR_U32(ctx, 31, 0x1F85C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F85B8u, 0x1F85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F85C0u;
label_1f85c0:
    // 0x1f85c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f85c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f85c4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1f85c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1f85c8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1f85c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f85cc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f85d0: 0x24639c20  addiu       $v1, $v1, -0x63E0
    ctx->pc = 0x1f85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x1f85d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f85d8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1f85d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f85dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f85e0: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1f85e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f85e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f85e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f85e8: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f85e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f85ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f85ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f85f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f85f4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F85F4u;
    {
        const bool branch_taken_0x1f85f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f85f4) {
            ctx->pc = 0x1F860Cu;
            goto label_1f860c;
        }
    }
    ctx->pc = 0x1F85FCu;
    // 0x1f85fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f85fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8600: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8604: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f8604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f8608: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8608u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1f860c:
    // 0x1f860c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f860cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f8610: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f8610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f8614: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8618: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f861c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F861Cu;
    {
        const bool branch_taken_0x1f861c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f861c) {
            ctx->pc = 0x1F8650u;
            goto label_1f8650;
        }
    }
    ctx->pc = 0x1F8624u;
    // 0x1f8624: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8628: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f8628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f862c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f8630: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8630u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8634: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1f8634u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1f8638: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1f8638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f863c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f863cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f8640: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8644: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8644u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8648: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f864c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f864cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1f8650:
    // 0x1f8650: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8654: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f8654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f8658: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f8658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f865c: 0x2403dfe7  addiu       $v1, $zero, -0x2019
    ctx->pc = 0x1f865cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f8660: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f8660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f8664: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f8664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f8668: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f866c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f866cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1f8670:
    // 0x1f8670: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1f8670u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8674: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f8674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f8678: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8680u;
}
