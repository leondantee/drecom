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

// Function: Pl_r1_step_aside
// Address: 0x14bdb0 - 0x14bf58
void Pl_r1_step_aside_0x14bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_step_aside_0x14bdb0");
#endif

    switch (ctx->pc) {
        case 0x14be10u: goto label_14be10;
        case 0x14be20u: goto label_14be20;
        case 0x14be54u: goto label_14be54;
        case 0x14be88u: goto label_14be88;
        case 0x14bea0u: goto label_14bea0;
        case 0x14beb8u: goto label_14beb8;
        case 0x14beccu: goto label_14becc;
        case 0x14bee0u: goto label_14bee0;
        case 0x14beecu: goto label_14beec;
        default: break;
    }

    ctx->pc = 0x14bdb0u;

    // 0x14bdb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14bdb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14bdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x14bdb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x14bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x14bdbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bdc0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14bdc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14bdc4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14bdc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14bdc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bdcc: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x14BDCCu;
    {
        const bool branch_taken_0x14bdcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14bdcc) {
            ctx->pc = 0x14BE64u;
            goto label_14be64;
        }
    }
    ctx->pc = 0x14BDD4u;
    // 0x14bdd4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BDD4u;
    {
        const bool branch_taken_0x14bdd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bdd4) {
            ctx->pc = 0x14BDE4u;
            goto label_14bde4;
        }
    }
    ctx->pc = 0x14BDDCu;
    // 0x14bddc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x14BDDCu;
    {
        const bool branch_taken_0x14bddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bddc) {
            ctx->pc = 0x14BF48u;
            goto label_14bf48;
        }
    }
    ctx->pc = 0x14BDE4u;
label_14bde4:
    // 0x14bde4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14bde8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bdec: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14bdecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14bdf0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bdf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bdf8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14bdfc: 0x24060a26  addiu       $a2, $zero, 0xA26
    ctx->pc = 0x14bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2598));
    // 0x14be00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14be00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14be04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14be04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14be08: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14BE08u;
    SET_GPR_U32(ctx, 31, 0x14BE10u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14BE08u, 0x14BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE10u;
label_14be10:
    // 0x14be10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be14: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x14be14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x14be18: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x14BE18u;
    SET_GPR_U32(ctx, 31, 0x14BE20u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x14BE18u, 0x14BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE20u;
label_14be20:
    // 0x14be20: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x14be20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x14be24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14be24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14be28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be2c: 0xe4401b48  swc1        $f0, 0x1B48($v0)
    ctx->pc = 0x14be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6984), bits); }
    // 0x14be30: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x14be30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x14be34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14be38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14be38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14be3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be44: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x14be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x14be48: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x14be48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x14be4c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x14BE4Cu;
    SET_GPR_U32(ctx, 31, 0x14BE54u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x14BE54u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14BE54u) { return; }
    ctx->pc = 0x14BE54u;
label_14be54:
    // 0x14be54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be58: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14be58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14be5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14be60: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14be60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14be64:
    // 0x14be64: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14be64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14be68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be6c: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x14be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x14be70: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x14be70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x14be74: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14be74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14be78: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x14be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14be7c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x14be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14be80: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14BE80u;
    SET_GPR_U32(ctx, 31, 0x14BE88u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14BE80u, 0x14BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE88u;
label_14be88:
    // 0x14be88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be8c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14be8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14be90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14be90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14be94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14be98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14BE98u;
    SET_GPR_U32(ctx, 31, 0x14BEA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14BE98u, 0x14BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEA0u;
label_14bea0:
    // 0x14bea0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bea8: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x14bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x14beac: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x14beacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x14beb0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x14BEB0u;
    SET_GPR_U32(ctx, 31, 0x14BEB8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14BEB8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14BEB8u) { return; }
    ctx->pc = 0x14BEB8u;
label_14beb8:
    // 0x14beb8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bebc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bec0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14bec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14bec4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14BEC4u;
    SET_GPR_U32(ctx, 31, 0x14BECCu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14BEC4u, 0x14BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BECCu;
label_14becc:
    // 0x14becc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14beccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14bed0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14bed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bed4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14bed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14bed8: 0xc057480  jal         func_15D200
    ctx->pc = 0x14BED8u;
    SET_GPR_U32(ctx, 31, 0x14BEE0u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x14BED8u, 0x14BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEE0u;
label_14bee0:
    // 0x14bee0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14bee0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14bee4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14BEE4u;
    SET_GPR_U32(ctx, 31, 0x14BEECu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14BEE4u, 0x14BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEECu;
label_14beec:
    // 0x14beec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bef0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14bef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14bef4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14BEF4u;
    {
        const bool branch_taken_0x14bef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bef4) {
            ctx->pc = 0x14BF48u;
            goto label_14bf48;
        }
    }
    ctx->pc = 0x14BEFCu;
    // 0x14befc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14befcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bf00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bf04: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14bf04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14bf08: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x14bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x14bf0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bf10: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x14bf10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x14bf14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bf18: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14bf18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14bf1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bf20: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14bf20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14bf24: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x14bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x14bf28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bf2c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14bf30: 0x3c03c110  lui         $v1, 0xC110
    ctx->pc = 0x14bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49424 << 16));
    // 0x14bf34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14bf34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bf38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bf3c: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x14bf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x14bf40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bf44: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14bf44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_14bf48:
    // 0x14bf48: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14bf48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bf4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14bf4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x14BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BF58u;
}
