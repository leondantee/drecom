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

// Function: Dest_rot_hosei
// Address: 0x2cde70 - 0x2cdfb4
void Dest_rot_hosei_0x2cde70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dest_rot_hosei_0x2cde70");
#endif

    switch (ctx->pc) {
        case 0x2cdee0u: goto label_2cdee0;
        case 0x2cdf1cu: goto label_2cdf1c;
        case 0x2cdf74u: goto label_2cdf74;
        case 0x2cdf9cu: goto label_2cdf9c;
        default: break;
    }

    ctx->pc = 0x2cde70u;

    // 0x2cde70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cde70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cde74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2cde74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2cde78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2cde78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2cde7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2cde7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cde80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cde80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cde84: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x2cde84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2cde88: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CDE88u;
    {
        const bool branch_taken_0x2cde88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cde88) {
            ctx->pc = 0x2CDFA4u;
            goto label_2cdfa4;
        }
    }
    ctx->pc = 0x2CDE90u;
    // 0x2cde90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2cde90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cde94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cde94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cde98: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x2cde98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2cde9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2cde9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cdea0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2cdea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cdea4: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CDEA4u;
    {
        const bool branch_taken_0x2cdea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cdea4) {
            ctx->pc = 0x2CDF38u;
            goto label_2cdf38;
        }
    }
    ctx->pc = 0x2CDEACu;
    // 0x2cdeac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdeb0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cdeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cdeb4: 0x90620038  lbu         $v0, 0x38($v1)
    ctx->pc = 0x2cdeb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2cdeb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cdebc: 0xa0620038  sb          $v0, 0x38($v1)
    ctx->pc = 0x2cdebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cdec0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdec4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cdec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cdec8: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2cdec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdecc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cded0: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cded4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2cded4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cded8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CDED8u;
    SET_GPR_U32(ctx, 31, 0x2CDEE0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CDED8u, 0x2CDEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDEE0u;
label_2cdee0:
    // 0x2cdee0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2cdee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2cdee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cdee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cdee8: 0x0  nop
    ctx->pc = 0x2cdee8u;
    // NOP
    // 0x2cdeec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2cdeecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2cdef0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdef4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cdef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cdef8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2cdef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2cdefc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cdf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cdf04: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2cdf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdf08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf0c: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cdf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdf10: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2cdf10u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cdf14: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CDF14u;
    SET_GPR_U32(ctx, 31, 0x2CDF1Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CDF14u, 0x2CDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF1Cu;
label_2cdf1c:
    // 0x2cdf1c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2cdf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2cdf20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cdf20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cdf24: 0x0  nop
    ctx->pc = 0x2cdf24u;
    // NOP
    // 0x2cdf28: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2cdf28u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2cdf2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2cdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cdf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cdf34: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2cdf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_2cdf38:
    // 0x2cdf38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2cdf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf3c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2cdf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cdf40: 0x90a40038  lbu         $a0, 0x38($a1)
    ctx->pc = 0x2cdf40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2cdf44: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2cdf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2cdf48: 0xa0a30038  sb          $v1, 0x38($a1)
    ctx->pc = 0x2cdf48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cdf4c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CDF4Cu;
    {
        const bool branch_taken_0x2cdf4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf4c) {
            ctx->pc = 0x2CDFA4u;
            goto label_2cdfa4;
        }
    }
    ctx->pc = 0x2CDF54u;
    // 0x2cdf54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cdf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cdf5c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2cdf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdf60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf64: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cdf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdf68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cdf68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cdf6c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x2CDF74u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CDF6Cu, 0x2CDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF74u;
label_2cdf74:
    // 0x2cdf74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf78: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cdf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cdf7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cdf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cdf84: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2cdf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdf88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf8c: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cdf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdf90: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cdf90u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cdf94: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CDF94u;
    SET_GPR_U32(ctx, 31, 0x2CDF9Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CDF94u, 0x2CDF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF9Cu;
label_2cdf9c:
    // 0x2cdf9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2cdf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdfa0: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x2cdfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
label_2cdfa4:
    // 0x2cdfa4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2cdfa4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdfa8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cdfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cdfac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDFB4u;
}
