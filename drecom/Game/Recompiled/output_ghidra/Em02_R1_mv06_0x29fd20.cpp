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

// Function: Em02_R1_mv06
// Address: 0x29fd20 - 0x2a0948
void Em02_R1_mv06_0x29fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv06_0x29fd20");
#endif

    switch (ctx->pc) {
        case 0x29fd90u: goto label_29fd90;
        case 0x29fddcu: goto label_29fddc;
        case 0x29fde4u: goto label_29fde4;
        case 0x29fe6cu: goto label_29fe6c;
        case 0x29fec0u: goto label_29fec0;
        case 0x29feccu: goto label_29fecc;
        case 0x29fed8u: goto label_29fed8;
        case 0x29ff90u: goto label_29ff90;
        case 0x29ffc8u: goto label_29ffc8;
        case 0x2a0004u: goto label_2a0004;
        case 0x2a003cu: goto label_2a003c;
        case 0x2a0078u: goto label_2a0078;
        case 0x2a00b0u: goto label_2a00b0;
        case 0x2a00c4u: goto label_2a00c4;
        case 0x2a00d0u: goto label_2a00d0;
        case 0x2a00dcu: goto label_2a00dc;
        case 0x2a0194u: goto label_2a0194;
        case 0x2a01ccu: goto label_2a01cc;
        case 0x2a0204u: goto label_2a0204;
        case 0x2a023cu: goto label_2a023c;
        case 0x2a0278u: goto label_2a0278;
        case 0x2a02b4u: goto label_2a02b4;
        case 0x2a02ccu: goto label_2a02cc;
        case 0x2a02e8u: goto label_2a02e8;
        case 0x2a0304u: goto label_2a0304;
        case 0x2a0320u: goto label_2a0320;
        case 0x2a0340u: goto label_2a0340;
        case 0x2a03a0u: goto label_2a03a0;
        case 0x2a03b0u: goto label_2a03b0;
        case 0x2a03bcu: goto label_2a03bc;
        case 0x2a0478u: goto label_2a0478;
        case 0x2a04b4u: goto label_2a04b4;
        case 0x2a04f0u: goto label_2a04f0;
        case 0x2a0528u: goto label_2a0528;
        case 0x2a055cu: goto label_2a055c;
        case 0x2a0588u: goto label_2a0588;
        case 0x2a05a0u: goto label_2a05a0;
        case 0x2a05ccu: goto label_2a05cc;
        case 0x2a05ecu: goto label_2a05ec;
        case 0x2a0624u: goto label_2a0624;
        case 0x2a0640u: goto label_2a0640;
        case 0x2a0658u: goto label_2a0658;
        case 0x2a066cu: goto label_2a066c;
        case 0x2a0684u: goto label_2a0684;
        case 0x2a0698u: goto label_2a0698;
        case 0x2a06a4u: goto label_2a06a4;
        case 0x2a06f4u: goto label_2a06f4;
        case 0x2a073cu: goto label_2a073c;
        case 0x2a07a0u: goto label_2a07a0;
        case 0x2a07c4u: goto label_2a07c4;
        case 0x2a0828u: goto label_2a0828;
        case 0x2a0880u: goto label_2a0880;
        default: break;
    }

    ctx->pc = 0x29fd20u;

    // 0x29fd20: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x29fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x29fd24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x29fd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x29fd28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29fd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29fd2c: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x29fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
    // 0x29fd30: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x29fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fd34: 0x8c9002d0  lw          $s0, 0x2D0($a0)
    ctx->pc = 0x29fd34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x29fd38: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x29fd38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x29fd3c: 0x24c76b70  addiu       $a3, $a2, 0x6B70
    ctx->pc = 0x29fd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 27504));
    // 0x29fd40: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x29fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fd44: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x29fd44u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x396B70u));
    // 0x29fd48: 0x78e50010  lq          $a1, 0x10($a3)
    ctx->pc = 0x29fd48u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x396B80u));
    // 0x29fd4c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x29fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x29fd50: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x29fd50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x29fd54: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x29fd54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fd58: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x29fd58u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x29fd5c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x29fd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x29fd60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fd64: 0x10640179  beq         $v1, $a0, . + 4 + (0x179 << 2)
    ctx->pc = 0x29FD64u;
    {
        const bool branch_taken_0x29fd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x29fd64) {
            ctx->pc = 0x2A034Cu;
            goto label_2a034c;
        }
    }
    ctx->pc = 0x29FD6Cu;
    // 0x29fd6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FD6Cu;
    {
        const bool branch_taken_0x29fd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fd6c) {
            ctx->pc = 0x29FD7Cu;
            goto label_29fd7c;
        }
    }
    ctx->pc = 0x29FD74u;
    // 0x29fd74: 0x100002ef  b           . + 4 + (0x2EF << 2)
    ctx->pc = 0x29FD74u;
    {
        const bool branch_taken_0x29fd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fd74) {
            ctx->pc = 0x2A0934u;
            goto label_2a0934;
        }
    }
    ctx->pc = 0x29FD7Cu;
label_29fd7c:
    // 0x29fd7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29fd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fd80: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x29fd80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fd84: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x29fd84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x29fd88: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FD88u;
    SET_GPR_U32(ctx, 31, 0x29FD90u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FD88u, 0x29FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD90u;
label_29fd90:
    // 0x29fd90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fd94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29fd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29fd98: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29fd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29fd9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29fd9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29fda0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fda4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29fda4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fda8: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x29fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fdac: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fdb0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x29fdb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x29fdb4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29fdb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29fdb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29fdbc: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x29fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x29fdc0: 0x34460400  ori         $a2, $v0, 0x400
    ctx->pc = 0x29fdc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x29fdc4: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x29fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fdc8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x29fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x29fdcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29fdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fdd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29fdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29fdd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29FDD4u;
    SET_GPR_U32(ctx, 31, 0x29FDDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29FDD4u, 0x29FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDDCu;
label_29fddc:
    // 0x29fddc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FDDCu;
    SET_GPR_U32(ctx, 31, 0x29FDE4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FDDCu, 0x29FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDE4u;
label_29fde4:
    // 0x29fde4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fde8: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x29fde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29fdec: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x29fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x29fdf0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29fdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29fdf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29fdf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29fdf8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fdfc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x29fdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fe00: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x29fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x29fe04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29fe04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fe08: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe0c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x29fe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x29fe10: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe14: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x29fe14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x29fe18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FE18u;
    {
        const bool branch_taken_0x29fe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fe18) {
            ctx->pc = 0x29FE30u;
            goto label_29fe30;
        }
    }
    ctx->pc = 0x29FE20u;
    // 0x29fe20: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x29fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x29fe24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29fe24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fe28: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe2c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x29fe2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_29fe30:
    // 0x29fe30: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29fe38: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x29fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29fe3c: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x29fe3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29fe40: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29FE40u;
    {
        const bool branch_taken_0x29fe40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe40) {
            ctx->pc = 0x29FE64u;
            goto label_29fe64;
        }
    }
    ctx->pc = 0x29FE48u;
    // 0x29fe48: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x29fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe4c: 0x3c073f19  lui         $a3, 0x3F19
    ctx->pc = 0x29fe4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16153 << 16));
    // 0x29fe50: 0x34e6999a  ori         $a2, $a3, 0x999A
    ctx->pc = 0x29fe50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x29fe54: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x29fe54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29fe58: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x29fe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fe5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29fe5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29fe60: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x29fe60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
label_29fe64:
    // 0x29fe64: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FE64u;
    SET_GPR_U32(ctx, 31, 0x29FE6Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FE64u, 0x29FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE6Cu;
label_29fe6c:
    // 0x29fe6c: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x29fe6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fe70: 0x312a0007  andi        $t2, $t1, 0x7
    ctx->pc = 0x29fe70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)7);
    // 0x29fe74: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x29fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x29fe78: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29fe7c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x29fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fe80: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe84: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x29fe84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x29fe88: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe8c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29fe90: 0x1480010b  bnez        $a0, . + 4 + (0x10B << 2)
    ctx->pc = 0x29FE90u;
    {
        const bool branch_taken_0x29fe90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe90) {
            ctx->pc = 0x2A02C0u;
            goto label_2a02c0;
        }
    }
    ctx->pc = 0x29FE98u;
    // 0x29fe98: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x29fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe9c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x29fe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x29fea0: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x29fea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x29fea4: 0x30e80004  andi        $t0, $a3, 0x4
    ctx->pc = 0x29fea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x29fea8: 0x11000083  beqz        $t0, . + 4 + (0x83 << 2)
    ctx->pc = 0x29FEA8u;
    {
        const bool branch_taken_0x29fea8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fea8) {
            ctx->pc = 0x2A00B8u;
            goto label_2a00b8;
        }
    }
    ctx->pc = 0x29FEB0u;
    // 0x29feb0: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x29feb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29feb4: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x29feb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x29feb8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x29FEB8u;
    SET_GPR_U32(ctx, 31, 0x29FEC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x29FEB8u, 0x29FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FEC0u;
label_29fec0:
    // 0x29fec0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29fec4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x29FEC4u;
    SET_GPR_U32(ctx, 31, 0x29FECCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x29FEC4u, 0x29FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FECCu;
label_29fecc:
    // 0x29fecc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29fed0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x29FED0u;
    SET_GPR_U32(ctx, 31, 0x29FED8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x29FED0u, 0x29FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FED8u;
label_29fed8:
    // 0x29fed8: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x29fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
    // 0x29fedc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x29fedcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fee0: 0x0  nop
    ctx->pc = 0x29fee0u;
    // NOP
    // 0x29fee4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x29fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29fee8: 0x3c0541c0  lui         $a1, 0x41C0
    ctx->pc = 0x29fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16832 << 16));
    // 0x29feec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29feecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fef0: 0x0  nop
    ctx->pc = 0x29fef0u;
    // NOP
    // 0x29fef4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x29fef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x29fef8: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x29fef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x29fefc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29fefcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff00: 0x0  nop
    ctx->pc = 0x29ff00u;
    // NOP
    // 0x29ff04: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x29ff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x29ff08: 0x3c074300  lui         $a3, 0x4300
    ctx->pc = 0x29ff08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17152 << 16));
    // 0x29ff0c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x29ff0cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff10: 0x0  nop
    ctx->pc = 0x29ff10u;
    // NOP
    // 0x29ff14: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x29ff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x29ff18: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x29ff18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x29ff1c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x29ff1cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff20: 0x0  nop
    ctx->pc = 0x29ff20u;
    // NOP
    // 0x29ff24: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x29ff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x29ff28: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x29ff28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x29ff2c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x29ff2cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff30: 0x0  nop
    ctx->pc = 0x29ff30u;
    // NOP
    // 0x29ff34: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x29ff34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x29ff38: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x29ff38u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x29ff3c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x29ff3cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff40: 0x0  nop
    ctx->pc = 0x29ff40u;
    // NOP
    // 0x29ff44: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x29ff44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x29ff48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29ff4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ff4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff50: 0x0  nop
    ctx->pc = 0x29ff50u;
    // NOP
    // 0x29ff54: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x29ff54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x29ff58: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x29ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x29ff5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29ff5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ff60: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x29ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x29ff64: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x29ff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x29ff68: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29ff68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29ff6c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x29ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29ff70: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29ff70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29ff74: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29ff78: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x29ff78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29ff7c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x29ff7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ff80: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x29ff80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29ff84: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x29ff84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ff88: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x29FF88u;
    SET_GPR_U32(ctx, 31, 0x29FF90u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x29FF88u, 0x29FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF90u;
label_29ff90:
    // 0x29ff90: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x29ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x29ff94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29ff94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ff98: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x29ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x29ff9c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x29ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x29ffa0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29ffa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29ffa4: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x29ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29ffa8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x29ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29ffac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29ffacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29ffb0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x29ffb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29ffb4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x29ffb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ffb8: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x29ffb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29ffbc: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x29ffbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ffc0: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x29FFC0u;
    SET_GPR_U32(ctx, 31, 0x29FFC8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x29FFC0u, 0x29FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FFC8u;
label_29ffc8:
    // 0x29ffc8: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x29ffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
    // 0x29ffcc: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x29ffccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x29ffd0: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x29ffd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29ffd4: 0x3c064448  lui         $a2, 0x4448
    ctx->pc = 0x29ffd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17480 << 16));
    // 0x29ffd8: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x29ffd8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ffdc: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x29ffdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29ffe0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x29ffe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x29ffe4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x29ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29ffe8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29ffec: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x29ffecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29fff0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x29fff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29fff4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x29fff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29fff8: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x29fff8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fffc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x29FFFCu;
    SET_GPR_U32(ctx, 31, 0x2A0004u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x29FFFCu, 0x2A0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0004u;
label_2a0004:
    // 0x2a0004: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x2a0004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x2a0008: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2a0008u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a000c: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x2a000cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0010: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2a0010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2a0014: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a0014u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0018: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a001c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a0020: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a0020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0024: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a0024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a0028: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a0028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a002c: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a002cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0030: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a0030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0034: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0034u;
    SET_GPR_U32(ctx, 31, 0x2A003Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0034u, 0x2A003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A003Cu;
label_2a003c:
    // 0x2a003c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a0040: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0044: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a0044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0048: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a0048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a004c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a004cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0050: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2a0050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0054: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a0054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a0058: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a0058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a005c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a005cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0060: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a0060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a0064: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a0064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0068: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a0068u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a006c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a006cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0070: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0070u;
    SET_GPR_U32(ctx, 31, 0x2A0078u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0070u, 0x2A0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0078u;
label_2a0078:
    // 0x2a0078: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x2a0078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x2a007c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a007cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0080: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a0080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0084: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x2a0084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a0088: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a008c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0090: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a0090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0094: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a0094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0098: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a0098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a009c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a009cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a00a0: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a00a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a00a4: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a00a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a00a8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A00A8u;
    SET_GPR_U32(ctx, 31, 0x2A00B0u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A00A8u, 0x2A00B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00B0u;
label_2a00b0:
    // 0x2a00b0: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2A00B0u;
    {
        const bool branch_taken_0x2a00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a00b0) {
            ctx->pc = 0x2A0340u;
            goto label_2a0340;
        }
    }
    ctx->pc = 0x2A00B8u;
label_2a00b8:
    // 0x2a00b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a00b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a00bc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A00BCu;
    SET_GPR_U32(ctx, 31, 0x2A00C4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A00BCu, 0x2A00C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00C4u;
label_2a00c4:
    // 0x2a00c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a00c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a00c8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A00C8u;
    SET_GPR_U32(ctx, 31, 0x2A00D0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A00C8u, 0x2A00D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00D0u;
label_2a00d0:
    // 0x2a00d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a00d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a00d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A00D4u;
    SET_GPR_U32(ctx, 31, 0x2A00DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A00D4u, 0x2A00DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00DCu;
label_2a00dc:
    // 0x2a00dc: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2a00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2a00e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a00e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a00e4: 0x0  nop
    ctx->pc = 0x2a00e4u;
    // NOP
    // 0x2a00e8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2a00e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2a00ec: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a00f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a00f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a00f4: 0x0  nop
    ctx->pc = 0x2a00f4u;
    // NOP
    // 0x2a00f8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2a00f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2a00fc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a0100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0104: 0x0  nop
    ctx->pc = 0x2a0104u;
    // NOP
    // 0x2a0108: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2a0108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2a010c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a0110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0114: 0x0  nop
    ctx->pc = 0x2a0114u;
    // NOP
    // 0x2a0118: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2a0118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2a011c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0124: 0x0  nop
    ctx->pc = 0x2a0124u;
    // NOP
    // 0x2a0128: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a0128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a012c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0134: 0x0  nop
    ctx->pc = 0x2a0134u;
    // NOP
    // 0x2a0138: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a0138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2a013c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0144: 0x0  nop
    ctx->pc = 0x2a0144u;
    // NOP
    // 0x2a0148: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a0148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2a014c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a014cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a0150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0154: 0x0  nop
    ctx->pc = 0x2a0154u;
    // NOP
    // 0x2a0158: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a0158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2a015c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a015cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0160: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a0160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a0164: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0168: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2a0168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2a016c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a016cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0170: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0174: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a0174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0178: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a017c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a017cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0180: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a0180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a0184: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a0184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a0188: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a0188u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a018c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A018Cu;
    SET_GPR_U32(ctx, 31, 0x2A0194u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A018Cu, 0x2A0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0194u;
label_2a0194:
    // 0x2a0194: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2a0194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2a0198: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a019c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a01a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a01a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a01a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a01a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a01a8: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a01a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a01ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a01acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a01b0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a01b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a01b4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a01b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a01b8: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a01b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a01bc: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a01bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a01c0: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a01c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a01c4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A01C4u;
    SET_GPR_U32(ctx, 31, 0x2A01CCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A01C4u, 0x2A01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A01CCu;
label_2a01cc:
    // 0x2a01cc: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2a01ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2a01d0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a01d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a01d4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a01d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a01d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a01dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a01dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a01e0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a01e4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a01e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a01e8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a01e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a01ec: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a01ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a01f0: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a01f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a01f4: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a01f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a01f8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a01f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a01fc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A01FCu;
    SET_GPR_U32(ctx, 31, 0x2A0204u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A01FCu, 0x2A0204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0204u;
label_2a0204:
    // 0x2a0204: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2a0204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0208: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a020c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a020cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0210: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x2a0210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a0214: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0218: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a021c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a0220: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0224: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a0224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0228: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a0228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a022c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a022cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a0230: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a0230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a0234: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0234u;
    SET_GPR_U32(ctx, 31, 0x2A023Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0234u, 0x2A023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A023Cu;
label_2a023c:
    // 0x2a023c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2a023cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0240: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a0240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0244: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a0244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0248: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2a0248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a024c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a024cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0250: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0254: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a0254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0258: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a0258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a025c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0260: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a0260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0264: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a0264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a0268: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a0268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a026c: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a026cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a0270: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0270u;
    SET_GPR_U32(ctx, 31, 0x2A0278u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0270u, 0x2A0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0278u;
label_2a0278:
    // 0x2a0278: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a0278u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a027c: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2a027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2a0280: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a0280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0284: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a0284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0288: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x2a0288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a028c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a028cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0290: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0294: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a0294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0298: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a029c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a029cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a02a0: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a02a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a02a4: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a02a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a02a8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a02a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a02ac: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A02ACu;
    SET_GPR_U32(ctx, 31, 0x2A02B4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A02ACu, 0x2A02B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02B4u;
label_2a02b4:
    // 0x2a02b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a02b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a02b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2A02B8u;
    {
        const bool branch_taken_0x2a02b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a02b8) {
            ctx->pc = 0x2A0340u;
            goto label_2a0340;
        }
    }
    ctx->pc = 0x2A02C0u;
label_2a02c0:
    // 0x2a02c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a02c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a02c4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A02C4u;
    SET_GPR_U32(ctx, 31, 0x2A02CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A02C4u, 0x2A02CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02CCu;
label_2a02cc:
    // 0x2a02cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a02ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a02d0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a02d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a02d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a02d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a02d8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a02d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a02dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a02dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a02e0: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A02E0u;
    SET_GPR_U32(ctx, 31, 0x2A02E8u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A02E0u, 0x2A02E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02E8u;
label_2a02e8:
    // 0x2a02e8: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a02e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a02ec: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x2a02ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a02f0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2a02f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2a02f4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a02f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a02f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a02f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a02fc: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A02FCu;
    SET_GPR_U32(ctx, 31, 0x2A0304u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A02FCu, 0x2A0304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0304u;
label_2a0304:
    // 0x2a0304: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0304u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0308: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a030c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0310: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a0310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a0314: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0318: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0318u;
    SET_GPR_U32(ctx, 31, 0x2A0320u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0318u, 0x2A0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0320u;
label_2a0320:
    // 0x2a0320: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0320u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0324: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0328: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a0328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a032c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a0330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0334: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a0334u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0338: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0338u;
    SET_GPR_U32(ctx, 31, 0x2A0340u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0338u, 0x2A0340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0340u;
label_2a0340:
    // 0x2a0340: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0344: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a0344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0348: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x2a0348u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
label_2a034c:
    // 0x2a034c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0350: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x2a0350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a0354: 0x14600076  bnez        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x2A0354u;
    {
        const bool branch_taken_0x2a0354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0354) {
            ctx->pc = 0x2A0530u;
            goto label_2a0530;
        }
    }
    ctx->pc = 0x2A035Cu;
    // 0x2a035c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0360: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2a0360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2a0364: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a0364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a0368: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a0368u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a036c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a036cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a0370: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2A0370u;
    {
        const bool branch_taken_0x2a0370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0370) {
            ctx->pc = 0x2A05F0u;
            goto label_2a05f0;
        }
    }
    ctx->pc = 0x2A0378u;
    // 0x2a0378: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a0378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a037c: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x2a037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2a0380: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2a0380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a0384: 0x30a70004  andi        $a3, $a1, 0x4
    ctx->pc = 0x2a0384u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2a0388: 0x10e00099  beqz        $a3, . + 4 + (0x99 << 2)
    ctx->pc = 0x2A0388u;
    {
        const bool branch_taken_0x2a0388 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0388) {
            ctx->pc = 0x2A05F0u;
            goto label_2a05f0;
        }
    }
    ctx->pc = 0x2A0390u;
    // 0x2a0390: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x2a0390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a0394: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a0394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0398: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0398u;
    SET_GPR_U32(ctx, 31, 0x2A03A0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0398u, 0x2A03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A03A0u;
label_2a03a0:
    // 0x2a03a0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2a03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a03a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a03a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a03a8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A03A8u;
    SET_GPR_U32(ctx, 31, 0x2A03B0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A03A8u, 0x2A03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A03B0u;
label_2a03b0:
    // 0x2a03b0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a03b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a03b4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A03B4u;
    SET_GPR_U32(ctx, 31, 0x2A03BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A03B4u, 0x2A03BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A03BCu;
label_2a03bc:
    // 0x2a03bc: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2a03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2a03c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a03c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a03c4: 0x0  nop
    ctx->pc = 0x2a03c4u;
    // NOP
    // 0x2a03c8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2a03c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2a03cc: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a03d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a03d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a03d4: 0x0  nop
    ctx->pc = 0x2a03d4u;
    // NOP
    // 0x2a03d8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2a03d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2a03dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a03e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a03e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a03e4: 0x0  nop
    ctx->pc = 0x2a03e4u;
    // NOP
    // 0x2a03e8: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x2a03e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2a03ec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a03f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a03f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a03f4: 0x0  nop
    ctx->pc = 0x2a03f4u;
    // NOP
    // 0x2a03f8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a03f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2a03fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0404: 0x0  nop
    ctx->pc = 0x2a0404u;
    // NOP
    // 0x2a0408: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2a0408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a040c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a040cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0414: 0x0  nop
    ctx->pc = 0x2a0414u;
    // NOP
    // 0x2a0418: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2a0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2a041c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0424: 0x0  nop
    ctx->pc = 0x2a0424u;
    // NOP
    // 0x2a0428: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2a0428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2a042c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0434: 0x0  nop
    ctx->pc = 0x2a0434u;
    // NOP
    // 0x2a0438: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2a0438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2a043c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a043cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0440: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0444: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x2a0444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2a0448: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a0448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a044c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a044cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0450: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0454: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a0454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0458: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a0458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a045c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2a045cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a0460: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2a0460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a0464: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2a0464u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0468: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x2a0468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a046c: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x2a046cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a0470: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0470u;
    SET_GPR_U32(ctx, 31, 0x2A0478u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0470u, 0x2A0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0478u;
label_2a0478:
    // 0x2a0478: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x2a0478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2a047c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a0480: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0484: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a0484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0488: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a048c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a048cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0490: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a0490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0494: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a0494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a0498: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2a0498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a049c: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x2a049cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a04a0: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x2a04a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a04a4: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2a04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a04a8: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a04a8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a04ac: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A04ACu;
    SET_GPR_U32(ctx, 31, 0x2A04B4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A04ACu, 0x2A04B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04B4u;
label_2a04b4:
    // 0x2a04b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a04b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a04b8: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x2a04b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x2a04bc: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a04bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a04c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a04c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a04c4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a04c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a04c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a04cc: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a04ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a04d0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a04d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a04d4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a04d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a04d8: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2a04d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a04dc: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x2a04dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a04e0: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x2a04e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a04e4: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x2a04e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a04e8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A04E8u;
    SET_GPR_U32(ctx, 31, 0x2A04F0u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A04E8u, 0x2A04F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04F0u;
label_2a04f0:
    // 0x2a04f0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a04f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a04f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a04f8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x2a04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2a04fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a04fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a0500: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0504: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0508: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a0508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a050c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a050cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a0510: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2a0510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a0514: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x2a0514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a0518: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x2a0518u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a051c: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x2a051cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a0520: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0520u;
    SET_GPR_U32(ctx, 31, 0x2A0528u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0520u, 0x2A0528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0528u;
label_2a0528:
    // 0x2a0528: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2A0528u;
    {
        const bool branch_taken_0x2a0528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0528) {
            ctx->pc = 0x2A05F0u;
            goto label_2a05f0;
        }
    }
    ctx->pc = 0x2A0530u;
label_2a0530:
    // 0x2a0530: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0534: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2a0534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2a0538: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a0538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a053c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a053cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a0540: 0x3044001f  andi        $a0, $v0, 0x1F
    ctx->pc = 0x2a0540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2a0544: 0x1480002a  bnez        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A0544u;
    {
        const bool branch_taken_0x2a0544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0544) {
            ctx->pc = 0x2A05F0u;
            goto label_2a05f0;
        }
    }
    ctx->pc = 0x2A054Cu;
    // 0x2a054c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2a054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a0550: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a0550u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a0554: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0554u;
    SET_GPR_U32(ctx, 31, 0x2A055Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0554u, 0x2A055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A055Cu;
label_2a055c:
    // 0x2a055c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a055cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0560: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a0560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0564: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a0564u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a0568: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2a0568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a056c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a056cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0570: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x2a0570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a0574: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2a0574u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a0578: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a0578u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a057c: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2a057cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0580: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0580u;
    SET_GPR_U32(ctx, 31, 0x2A0588u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0580u, 0x2A0588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0588u;
label_2a0588:
    // 0x2a0588: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a058c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0590: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2a0590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a0594: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0598: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0598u;
    SET_GPR_U32(ctx, 31, 0x2A05A0u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0598u, 0x2A05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05A0u;
label_2a05a0:
    // 0x2a05a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a05a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a05a4: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a05a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a05a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a05a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a05ac: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2a05acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a05b0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a05b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a05b4: 0x27a80140  addiu       $t0, $sp, 0x140
    ctx->pc = 0x2a05b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a05b8: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a05b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a05bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a05bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a05c0: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a05c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a05c4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A05C4u;
    SET_GPR_U32(ctx, 31, 0x2A05CCu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A05C4u, 0x2A05CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05CCu;
label_2a05cc:
    // 0x2a05cc: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a05ccu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a05d0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a05d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a05d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a05d8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a05d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a05dc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2a05dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a05e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a05e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a05e4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A05E4u;
    SET_GPR_U32(ctx, 31, 0x2A05ECu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A05E4u, 0x2A05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05ECu;
label_2a05ec:
    // 0x2a05ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a05ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a05f0:
    // 0x2a05f0: 0x3c063e8e  lui         $a2, 0x3E8E
    ctx->pc = 0x2a05f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16014 << 16));
    // 0x2a05f4: 0x34c5fa35  ori         $a1, $a2, 0xFA35
    ctx->pc = 0x2a05f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64053);
    // 0x2a05f8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a05f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a05fc: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a05fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0600: 0x8fa80168  lw          $t0, 0x168($sp)
    ctx->pc = 0x2a0600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0604: 0x24e90120  addiu       $t1, $a3, 0x120
    ctx->pc = 0x2a0604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x2a0608: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a0608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a060c: 0xc50c00d4  lwc1        $f12, 0xD4($t0)
    ctx->pc = 0x2a060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0610: 0x3c0a003f  lui         $t2, 0x3F
    ctx->pc = 0x2a0610u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)63 << 16));
    // 0x2a0614: 0x2542dce0  addiu       $v0, $t2, -0x2320
    ctx->pc = 0x2a0614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958304));
    // 0x2a0618: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a0618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a061c: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A061Cu;
    SET_GPR_U32(ctx, 31, 0x2A0624u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A061Cu, 0x2A0624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0624u;
label_2a0624:
    // 0x2a0624: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2a0624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2a0628: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a062c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0630: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x2a0630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0634: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a0634u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a0638: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A0638u;
    SET_GPR_U32(ctx, 31, 0x2A0640u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A0638u, 0x2A0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0640u;
label_2a0640:
    // 0x2a0640: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0644: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a0644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a0648: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a064c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a064cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a0650: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A0650u;
    SET_GPR_U32(ctx, 31, 0x2A0658u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A0650u, 0x2A0658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0658u;
label_2a0658:
    // 0x2a0658: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a0658u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a065c: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a065cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0660: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a0660u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a0664: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A0664u;
    SET_GPR_U32(ctx, 31, 0x2A066Cu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A0664u, 0x2A066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A066Cu;
label_2a066c:
    // 0x2a066c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a066cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0670: 0x8fa80168  lw          $t0, 0x168($sp)
    ctx->pc = 0x2a0670u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0674: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a0674u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0678: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a0678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a067c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A067Cu;
    SET_GPR_U32(ctx, 31, 0x2A0684u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A067Cu, 0x2A0684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0684u;
label_2a0684:
    // 0x2a0684: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a0684u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0688: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x2a0688u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a068c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a068cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0690: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A0690u;
    SET_GPR_U32(ctx, 31, 0x2A0698u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A0690u, 0x2A0698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0698u;
label_2a0698:
    // 0x2a0698: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a069c: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A069Cu;
    SET_GPR_U32(ctx, 31, 0x2A06A4u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A069Cu, 0x2A06A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06A4u;
label_2a06a4:
    // 0x2a06a4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06a8: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x2a06a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2a06ac: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x2a06acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a06b0: 0xa465127a  sh          $a1, 0x127A($v1)
    ctx->pc = 0x2a06b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a06b4: 0x1480009f  bnez        $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2A06B4u;
    {
        const bool branch_taken_0x2a06b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a06b4) {
            ctx->pc = 0x2A0934u;
            goto label_2a0934;
        }
    }
    ctx->pc = 0x2A06BCu;
    // 0x2a06bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a06bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a06c0: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a06c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06c4: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2a06c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a06c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a06c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a06cc: 0x8fa90168  lw          $t1, 0x168($sp)
    ctx->pc = 0x2a06ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06d0: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2a06d0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a06d4: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x2a06d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06d8: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x2a06d8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a06dc: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06e0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a06e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a06e4: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a06e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a06e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a06ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A06ECu;
    SET_GPR_U32(ctx, 31, 0x2A06F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A06ECu, 0x2A06F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06F4u;
label_2a06f4:
    // 0x2a06f4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a06f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a06f8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a06f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a06fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A06FCu;
    {
        const bool branch_taken_0x2a06fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a06fc) {
            ctx->pc = 0x2A0734u;
            goto label_2a0734;
        }
    }
    ctx->pc = 0x2A0704u;
    // 0x2a0704: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a0704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0708: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a070c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a070cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a0710: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a0710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0714: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0718: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2a0718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a071c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0720: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a0720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0724: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0728: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a0728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a072c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0730: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a0730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a0734:
    // 0x2a0734: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A0734u;
    SET_GPR_U32(ctx, 31, 0x2A073Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A0734u, 0x2A073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A073Cu;
label_2a073c:
    // 0x2a073c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0740: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2a0740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a0744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0748: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A0748u;
    {
        const bool branch_taken_0x2a0748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0748) {
            ctx->pc = 0x2A0798u;
            goto label_2a0798;
        }
    }
    ctx->pc = 0x2A0750u;
    // 0x2a0750: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0754: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a0754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a0758: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2a0758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a075c: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x2a075cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2a0760: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A0760u;
    {
        const bool branch_taken_0x2a0760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0760) {
            ctx->pc = 0x2A0798u;
            goto label_2a0798;
        }
    }
    ctx->pc = 0x2A0768u;
    // 0x2a0768: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a0768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a076c: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a076cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0770: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2a0770u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a0774: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a0774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a0778: 0x8fa90168  lw          $t1, 0x168($sp)
    ctx->pc = 0x2a0778u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a077c: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2a077cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a0780: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x2a0780u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0784: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x2a0784u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0788: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a078c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a078cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0790: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0794: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a0794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a0798:
    // 0x2a0798: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A0798u;
    SET_GPR_U32(ctx, 31, 0x2A07A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A0798u, 0x2A07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07A0u;
label_2a07a0:
    // 0x2a07a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a07a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a07a4: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x2a07a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a07a8: 0x2485003c  addiu       $a1, $a0, 0x3C
    ctx->pc = 0x2a07a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x2a07ac: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x2a07acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a07b0: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a07b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a07b4: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2a07b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2a07b8: 0xa5060046  sh          $a2, 0x46($t0)
    ctx->pc = 0x2a07b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 70), (uint16_t)GPR_U32(ctx, 6));
    // 0x2a07bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A07BCu;
    SET_GPR_U32(ctx, 31, 0x2A07C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A07BCu, 0x2A07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07C4u;
label_2a07c4:
    // 0x2a07c4: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a07c4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a07c8: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x2a07c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2a07cc: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x2a07ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x2a07d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a07d4: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A07D4u;
    {
        const bool branch_taken_0x2a07d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a07d4) {
            ctx->pc = 0x2A0820u;
            goto label_2a0820;
        }
    }
    ctx->pc = 0x2A07DCu;
    // 0x2a07dc: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a07e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a07e4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2a07e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a07e8: 0x34850001  ori         $a1, $a0, 0x1
    ctx->pc = 0x2a07e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2a07ec: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2a07ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2a07f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a07f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a07f4: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a07f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a07f8: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2a07f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a07fc: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2a07fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a0800: 0x8fa90168  lw          $t1, 0x168($sp)
    ctx->pc = 0x2a0800u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0804: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2a0804u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a0808: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x2a0808u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a080c: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x2a080cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0810: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0814: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a0814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0818: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a081c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a081cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a0820:
    // 0x2a0820: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A0820u;
    SET_GPR_U32(ctx, 31, 0x2A0828u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A0820u, 0x2A0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0828u;
label_2a0828:
    // 0x2a0828: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a0828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a082c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2a082cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a0830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a0830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0834: 0x1485003f  bne         $a0, $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2A0834u;
    {
        const bool branch_taken_0x2a0834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a0834) {
            ctx->pc = 0x2A0934u;
            goto label_2a0934;
        }
    }
    ctx->pc = 0x2A083Cu;
    // 0x2a083c: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a083cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0840: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2a0840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2a0844: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x2a0844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2a0848: 0x31090004  andi        $t1, $t0, 0x4
    ctx->pc = 0x2a0848u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x2a084c: 0x11200039  beqz        $t1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A084Cu;
    {
        const bool branch_taken_0x2a084c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a084c) {
            ctx->pc = 0x2A0934u;
            goto label_2a0934;
        }
    }
    ctx->pc = 0x2A0854u;
    // 0x2a0854: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x2a0854u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0858: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a085c: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x2a085cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x2a0860: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x2a0860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x2a0864: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a0864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0868: 0x25440120  addiu       $a0, $t2, 0x120
    ctx->pc = 0x2a0868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 288));
    // 0x2a086c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0870: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a0870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a0874: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a0874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a0878: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2A0878u;
    SET_GPR_U32(ctx, 31, 0x2A0880u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2A0878u, 0x2A0880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0880u;
label_2a0880:
    // 0x2a0880: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a0880u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0884: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A0884u;
    {
        const bool branch_taken_0x2a0884 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0884) {
            ctx->pc = 0x2A0934u;
            goto label_2a0934;
        }
    }
    ctx->pc = 0x2A088Cu;
    // 0x2a088c: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a088cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0890: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2a0890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2a0894: 0x8d090014  lw          $t1, 0x14($t0)
    ctx->pc = 0x2a0894u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2a0898: 0x352a0001  ori         $t2, $t1, 0x1
    ctx->pc = 0x2a0898u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x2a089c: 0xad0a0014  sw          $t2, 0x14($t0)
    ctx->pc = 0x2a089cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 10));
    // 0x2a08a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a08a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a08a4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a08a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a08ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a08acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a08b0: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a08b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a08b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a08b8: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a08b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08bc: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a08bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a08c0: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2a08c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08c4: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2a08c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a08c8: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a08c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08cc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2a08d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a08d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a08d4: 0x8427f1ac  lh          $a3, -0xE54($at)
    ctx->pc = 0x2a08d4u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2a08d8: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A08D8u;
    {
        const bool branch_taken_0x2a08d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a08d8) {
            ctx->pc = 0x2A0934u;
            goto label_2a0934;
        }
    }
    ctx->pc = 0x2A08E0u;
    // 0x2a08e0: 0x8fa80168  lw          $t0, 0x168($sp)
    ctx->pc = 0x2a08e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08e4: 0xc5011288  lwc1        $f1, 0x1288($t0)
    ctx->pc = 0x2a08e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a08e8: 0x3c09447a  lui         $t1, 0x447A
    ctx->pc = 0x2a08e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17530 << 16));
    // 0x2a08ec: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a08ecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a08f0: 0x0  nop
    ctx->pc = 0x2a08f0u;
    // NOP
    // 0x2a08f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a08f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a08f8: 0x0  nop
    ctx->pc = 0x2a08f8u;
    // NOP
    // 0x2a08fc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2A08FCu;
    {
        const bool branch_taken_0x2a08fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a08fc) {
            ctx->pc = 0x2A0934u;
            goto label_2a0934;
        }
    }
    ctx->pc = 0x2A0904u;
    // 0x2a0904: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a0904u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0908: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a0908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a090c: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x2a090cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x2a0910: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2a0910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0914: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a0914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0918: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a0918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a091c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a091cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0920: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a0920u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0924: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2a0924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0928: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2a0928u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a092c: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a092cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0930: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a0930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2a0934:
    // 0x2a0934: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2a0934u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a093c: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x2a093cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2a0940: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0948u;
}
