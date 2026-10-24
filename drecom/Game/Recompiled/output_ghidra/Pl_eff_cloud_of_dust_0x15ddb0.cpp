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

// Function: Pl_eff_cloud_of_dust
// Address: 0x15ddb0 - 0x15e020
void Pl_eff_cloud_of_dust_0x15ddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_eff_cloud_of_dust_0x15ddb0");
#endif

    switch (ctx->pc) {
        case 0x15ddd0u: goto label_15ddd0;
        case 0x15de9cu: goto label_15de9c;
        case 0x15df3cu: goto label_15df3c;
        case 0x15df44u: goto label_15df44;
        case 0x15e00cu: goto label_15e00c;
        default: break;
    }

    ctx->pc = 0x15ddb0u;

    // 0x15ddb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15ddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15ddb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15ddb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15ddb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ddbc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15ddc0: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15ddc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15ddc4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ddc8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15DDC8u;
    SET_GPR_U32(ctx, 31, 0x15DDD0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15DDC8u, 0x15DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDD0u;
label_15ddd0:
    // 0x15ddd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15ddd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ddd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ddd8: 0x0  nop
    ctx->pc = 0x15ddd8u;
    // NOP
    // 0x15dddc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x15dddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15dde0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15dde4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dde8: 0x0  nop
    ctx->pc = 0x15dde8u;
    // NOP
    // 0x15ddec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x15ddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x15ddf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15ddf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ddf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ddf8: 0x0  nop
    ctx->pc = 0x15ddf8u;
    // NOP
    // 0x15ddfc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x15ddfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15de00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15de00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15de04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de08: 0x0  nop
    ctx->pc = 0x15de08u;
    // NOP
    // 0x15de0c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15de0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15de10: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x15de10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x15de14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de18: 0x0  nop
    ctx->pc = 0x15de18u;
    // NOP
    // 0x15de1c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15de1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15de20: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x15de20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x15de24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de28: 0x0  nop
    ctx->pc = 0x15de28u;
    // NOP
    // 0x15de2c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15de2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15de30: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x15de30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x15de34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de38: 0x0  nop
    ctx->pc = 0x15de38u;
    // NOP
    // 0x15de3c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15de3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15de40: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x15de40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x15de44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de48: 0x0  nop
    ctx->pc = 0x15de48u;
    // NOP
    // 0x15de4c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x15de4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15de50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15de50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15de54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de58: 0x0  nop
    ctx->pc = 0x15de58u;
    // NOP
    // 0x15de5c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15de5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15de60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15de60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15de64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de68: 0x0  nop
    ctx->pc = 0x15de68u;
    // NOP
    // 0x15de6c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15de6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15de70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15de70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15de74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de78: 0x0  nop
    ctx->pc = 0x15de78u;
    // NOP
    // 0x15de7c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15de80: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x15de80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x15de84: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x15de84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x15de88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15de88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15de8c: 0x0  nop
    ctx->pc = 0x15de8cu;
    // NOP
    // 0x15de90: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x15de90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x15de94: 0xc067694  jal         func_19DA50
    ctx->pc = 0x15DE94u;
    SET_GPR_U32(ctx, 31, 0x15DE9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x15DE94u, 0x15DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE9Cu;
label_15de9c:
    // 0x15de9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15de9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15dea0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x15dea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x15dea4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15dea8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15DEA8u;
    {
        const bool branch_taken_0x15dea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15dea8) {
            ctx->pc = 0x15DF20u;
            goto label_15df20;
        }
    }
    ctx->pc = 0x15DEB0u;
    // 0x15deb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15deb4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15DEB4u;
    {
        const bool branch_taken_0x15deb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15deb4) {
            ctx->pc = 0x15DF08u;
            goto label_15df08;
        }
    }
    ctx->pc = 0x15DEBCu;
    // 0x15debc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dec0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15DEC0u;
    {
        const bool branch_taken_0x15dec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15dec0) {
            ctx->pc = 0x15DEF0u;
            goto label_15def0;
        }
    }
    ctx->pc = 0x15DEC8u;
    // 0x15dec8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DEC8u;
    {
        const bool branch_taken_0x15dec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dec8) {
            ctx->pc = 0x15DED8u;
            goto label_15ded8;
        }
    }
    ctx->pc = 0x15DED0u;
    // 0x15ded0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15DED0u;
    {
        const bool branch_taken_0x15ded0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ded0) {
            ctx->pc = 0x15DF30u;
            goto label_15df30;
        }
    }
    ctx->pc = 0x15DED8u;
label_15ded8:
    // 0x15ded8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x15ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x15dedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dee0: 0x0  nop
    ctx->pc = 0x15dee0u;
    // NOP
    // 0x15dee4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15dee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15dee8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15DEE8u;
    {
        const bool branch_taken_0x15dee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dee8) {
            ctx->pc = 0x15DF30u;
            goto label_15df30;
        }
    }
    ctx->pc = 0x15DEF0u;
label_15def0:
    // 0x15def0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x15def4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15def4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15def8: 0x0  nop
    ctx->pc = 0x15def8u;
    // NOP
    // 0x15defc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15defcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15df00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15DF00u;
    {
        const bool branch_taken_0x15df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df00) {
            ctx->pc = 0x15DF30u;
            goto label_15df30;
        }
    }
    ctx->pc = 0x15DF08u;
label_15df08:
    // 0x15df08: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15df0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15df0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15df10: 0x0  nop
    ctx->pc = 0x15df10u;
    // NOP
    // 0x15df14: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15df14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15df18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15DF18u;
    {
        const bool branch_taken_0x15df18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df18) {
            ctx->pc = 0x15DF30u;
            goto label_15df30;
        }
    }
    ctx->pc = 0x15DF20u;
label_15df20:
    // 0x15df20: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x15df24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15df24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15df28: 0x0  nop
    ctx->pc = 0x15df28u;
    // NOP
    // 0x15df2c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15df2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_15df30:
    // 0x15df30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15df34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15DF34u;
    SET_GPR_U32(ctx, 31, 0x15DF3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15DF34u, 0x15DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF3Cu;
label_15df3c:
    // 0x15df3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x15DF3Cu;
    SET_GPR_U32(ctx, 31, 0x15DF44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x15DF3Cu, 0x15DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF44u;
label_15df44:
    // 0x15df44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15df44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15df48: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x15df48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x15df4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15df50: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15DF50u;
    {
        const bool branch_taken_0x15df50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15df50) {
            ctx->pc = 0x15DFC8u;
            goto label_15dfc8;
        }
    }
    ctx->pc = 0x15DF58u;
    // 0x15df58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15df5c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15DF5Cu;
    {
        const bool branch_taken_0x15df5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15df5c) {
            ctx->pc = 0x15DFB0u;
            goto label_15dfb0;
        }
    }
    ctx->pc = 0x15DF64u;
    // 0x15df64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15df64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15df68: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15DF68u;
    {
        const bool branch_taken_0x15df68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15df68) {
            ctx->pc = 0x15DF98u;
            goto label_15df98;
        }
    }
    ctx->pc = 0x15DF70u;
    // 0x15df70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DF70u;
    {
        const bool branch_taken_0x15df70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df70) {
            ctx->pc = 0x15DF80u;
            goto label_15df80;
        }
    }
    ctx->pc = 0x15DF78u;
    // 0x15df78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15DF78u;
    {
        const bool branch_taken_0x15df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df78) {
            ctx->pc = 0x15DFD8u;
            goto label_15dfd8;
        }
    }
    ctx->pc = 0x15DF80u;
label_15df80:
    // 0x15df80: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15df80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x15df84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15df84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15df88: 0x0  nop
    ctx->pc = 0x15df88u;
    // NOP
    // 0x15df8c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15df8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15df90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15DF90u;
    {
        const bool branch_taken_0x15df90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df90) {
            ctx->pc = 0x15DFD8u;
            goto label_15dfd8;
        }
    }
    ctx->pc = 0x15DF98u;
label_15df98:
    // 0x15df98: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x15df98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x15df9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15df9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dfa0: 0x0  nop
    ctx->pc = 0x15dfa0u;
    // NOP
    // 0x15dfa4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15dfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15dfa8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15DFA8u;
    {
        const bool branch_taken_0x15dfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dfa8) {
            ctx->pc = 0x15DFD8u;
            goto label_15dfd8;
        }
    }
    ctx->pc = 0x15DFB0u;
label_15dfb0:
    // 0x15dfb0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x15dfb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dfb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dfb8: 0x0  nop
    ctx->pc = 0x15dfb8u;
    // NOP
    // 0x15dfbc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15dfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15dfc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15DFC0u;
    {
        const bool branch_taken_0x15dfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dfc0) {
            ctx->pc = 0x15DFD8u;
            goto label_15dfd8;
        }
    }
    ctx->pc = 0x15DFC8u;
label_15dfc8:
    // 0x15dfc8: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x15dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x15dfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15dfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15dfd0: 0x0  nop
    ctx->pc = 0x15dfd0u;
    // NOP
    // 0x15dfd4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15dfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_15dfd8:
    // 0x15dfd8: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x15dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x15dfdc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15dfe0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15dfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15dfe4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15dfe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15dfe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15dfe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15dfec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15dfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15dff0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x15dff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15dff4: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x15dff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15dff8: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x15dff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15dffc: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15e000: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x15e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e004: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x15E004u;
    SET_GPR_U32(ctx, 31, 0x15E00Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x15E004u, 0x15E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E00Cu;
label_15e00c:
    // 0x15e00c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15e00cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e014: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x15e014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15e018: 0x3e00008  jr          $ra
    ctx->pc = 0x15E018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E020u;
}
