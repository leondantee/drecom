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

// Function: Em09_R1_br_mv17
// Address: 0x34e8a0 - 0x34eb2c
void Em09_R1_br_mv17_0x34e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_br_mv17_0x34e8a0");
#endif

    switch (ctx->pc) {
        case 0x34e92cu: goto label_34e92c;
        case 0x34e994u: goto label_34e994;
        case 0x34ead8u: goto label_34ead8;
        case 0x34eaf8u: goto label_34eaf8;
        default: break;
    }

    ctx->pc = 0x34e8a0u;

    // 0x34e8a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e8a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x34e8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x34e8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34e8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e8b0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x34e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x34e8b4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34e8b8: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x34e8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x34e8bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e8c0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34e8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e8c4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x34e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x34e8c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e8c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e8cc: 0x0  nop
    ctx->pc = 0x34e8ccu;
    // NOP
    // 0x34e8d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34e8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e8d4: 0x0  nop
    ctx->pc = 0x34e8d4u;
    // NOP
    // 0x34e8d8: 0x4501008e  bc1t        . + 4 + (0x8E << 2)
    ctx->pc = 0x34E8D8u;
    {
        const bool branch_taken_0x34e8d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e8d8) {
            ctx->pc = 0x34EB14u;
            goto label_34eb14;
        }
    }
    ctx->pc = 0x34E8E0u;
    // 0x34e8e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e8e4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34e8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e8e8: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x34e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x34e8ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e8ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e8f0: 0x0  nop
    ctx->pc = 0x34e8f0u;
    // NOP
    // 0x34e8f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34e8f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e8f8: 0x0  nop
    ctx->pc = 0x34e8f8u;
    // NOP
    // 0x34e8fc: 0x45000085  bc1f        . + 4 + (0x85 << 2)
    ctx->pc = 0x34E8FCu;
    {
        const bool branch_taken_0x34e8fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e8fc) {
            ctx->pc = 0x34EB14u;
            goto label_34eb14;
        }
    }
    ctx->pc = 0x34E904u;
    // 0x34e904: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34e904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e908: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34e908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e90c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x34e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x34e910: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x34e910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x34e914: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34e914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34e918: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34e918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34e91c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34e91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34e920: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x34e920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x34e924: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x34E924u;
    SET_GPR_U32(ctx, 31, 0x34E92Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x34E924u, 0x34E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E92Cu;
label_34e92c:
    // 0x34e92c: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x34E92Cu;
    {
        const bool branch_taken_0x34e92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e92c) {
            ctx->pc = 0x34EB14u;
            goto label_34eb14;
        }
    }
    ctx->pc = 0x34E934u;
    // 0x34e934: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34e934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e938: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e93c: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x34e93cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34e940: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x34E940u;
    {
        const bool branch_taken_0x34e940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e940) {
            ctx->pc = 0x34EB14u;
            goto label_34eb14;
        }
    }
    ctx->pc = 0x34E948u;
    // 0x34e948: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34e948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e94c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e950: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x34e950u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x34e954: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x34E954u;
    {
        const bool branch_taken_0x34e954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e954) {
            ctx->pc = 0x34EB14u;
            goto label_34eb14;
        }
    }
    ctx->pc = 0x34E95Cu;
    // 0x34e95c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e960: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e964: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34e964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34e968: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x34e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x34e96c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e970: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34e970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34e974: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e978: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34e978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e97c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e980: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34e980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e984: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e988: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34e988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34e98c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34E98Cu;
    SET_GPR_U32(ctx, 31, 0x34E994u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34E98Cu, 0x34E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E994u;
label_34e994:
    // 0x34e994: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34e994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34e998: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x34e998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x34e99c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x34e99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x34e9a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x34e9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x34e9a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e9a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e9ac: 0xa040008e  sb          $zero, 0x8E($v0)
    ctx->pc = 0x34e9acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e9b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e9b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e9b8: 0xa4400090  sh          $zero, 0x90($v0)
    ctx->pc = 0x34e9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34e9bc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34e9c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34e9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34e9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e9c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e9cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e9d0: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x34e9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x34e9d4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34e9d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34e9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e9e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e9e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e9e8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x34e9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x34e9ec: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34e9f0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34e9f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e9f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e9fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ea00: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x34ea00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x34ea04: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34ea08: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34ea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ea0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ea0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ea10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ea14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ea18: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x34ea18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x34ea1c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34ea20: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ea24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ea24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ea28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ea2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ea30: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x34ea30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x34ea34: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34ea38: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34ea38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ea3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ea3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ea40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ea44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ea48: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x34ea48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x34ea4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34ea50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ea50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ea54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ea58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ea5c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x34ea5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x34ea60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34ea64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ea64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ea68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ea6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ea70: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x34ea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x34ea74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34ea78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ea78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ea7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ea80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ea84: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x34ea84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x34ea88: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34ea8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ea90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ea94: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x34ea94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ea98: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34ea9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34eaa0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eaa4: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x34eaa4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x34eaa8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34eaac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34eab0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eab4: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x34eab4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x34eab8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34eabc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34eac0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eac4: 0xa443003c  sh          $v1, 0x3C($v0)
    ctx->pc = 0x34eac4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x34eac8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34eacc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34eaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34ead0: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34EAD0u;
    SET_GPR_U32(ctx, 31, 0x34EAD8u);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34EAD0u, 0x34EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EAD8u;
label_34ead8:
    // 0x34ead8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x34ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x34eadc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34eadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34eae0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34eae4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34eae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34eae8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34eaec: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34eaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34eaf0: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34EAF0u;
    SET_GPR_U32(ctx, 31, 0x34EAF8u);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34EAF0u, 0x34EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EAF8u;
label_34eaf8:
    // 0x34eaf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34eafc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34eb00: 0x24710960  addiu       $s1, $v1, 0x960
    ctx->pc = 0x34eb00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34eb04: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x34eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x34eb08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34eb0c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x34eb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34eb10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_34eb14:
    // 0x34eb14: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x34eb14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34eb18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34eb18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34eb1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34eb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34eb20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34eb24: 0x3e00008  jr          $ra
    ctx->pc = 0x34EB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EB2Cu;
}
