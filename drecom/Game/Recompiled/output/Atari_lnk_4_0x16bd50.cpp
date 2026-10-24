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

// Function: Atari_lnk_4
// Address: 0x16bd50 - 0x16bf78
void Atari_lnk_4_0x16bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Atari_lnk_4_0x16bd50");
#endif

    switch (ctx->pc) {
        case 0x16bd78u: goto label_16bd78;
        case 0x16bdb4u: goto label_16bdb4;
        case 0x16bf18u: goto label_16bf18;
        default: break;
    }

    ctx->pc = 0x16bd50u;

    // 0x16bd50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16bd54: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x16bd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x16bd58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16bd5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bd60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bd64: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x16bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x16bd68: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x16bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x16bd6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16bd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16bd70: 0x8c300df8  lw          $s0, 0xDF8($at)
    ctx->pc = 0x16bd70u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DF8u));
    // 0x16bd74: 0x0  nop
    ctx->pc = 0x16bd74u;
    // NOP
label_16bd78:
    // 0x16bd78: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16bd7c: 0x24630dfc  addiu       $v1, $v1, 0xDFC
    ctx->pc = 0x16bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3580));
    // 0x16bd80: 0x12030076  beq         $s0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x16BD80u;
    {
        const bool branch_taken_0x16bd80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bd80) {
            ctx->pc = 0x16BF5Cu;
            goto label_16bf5c;
        }
    }
    ctx->pc = 0x16BD88u;
    // 0x16bd88: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x16bd88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16bd8c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BD8Cu;
    {
        const bool branch_taken_0x16bd8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bd8c) {
            ctx->pc = 0x16BDA0u;
            goto label_16bda0;
        }
    }
    ctx->pc = 0x16BD94u;
    // 0x16bd94: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x16bd94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16bd98: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x16BD98u;
    {
        const bool branch_taken_0x16bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd98) {
            ctx->pc = 0x16BD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bd78;
        }
    }
    ctx->pc = 0x16BDA0u;
label_16bda0:
    // 0x16bda0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16bda0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16bda4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16bda4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16bda8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16bdac: 0xc05b0f0  jal         func_16C3C0
    ctx->pc = 0x16BDACu;
    SET_GPR_U32(ctx, 31, 0x16BDB4u);
    ctx->pc = 0x16C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C3C0u, 0x16BDACu, 0x16BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDB4u;
label_16bdb4:
    // 0x16bdb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16BDB4u;
    {
        const bool branch_taken_0x16bdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bdb4) {
            ctx->pc = 0x16BDD8u;
            goto label_16bdd8;
        }
    }
    ctx->pc = 0x16BDBCu;
    // 0x16bdbc: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x16bdbcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16bdc0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x16bdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16bdc4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16bdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bdc8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16bdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16bdcc: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16bdccu;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bdd0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x16bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x16bdd4: 0x0  nop
    ctx->pc = 0x16bdd4u;
    // NOP
label_16bdd8:
    // 0x16bdd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16bddc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16bde0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bde4: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16bde8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x16bde8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16bdec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16bdecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16bdf0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16bdf4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16bdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bdf8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16bdfc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16be00: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16be00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16be04: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x16BE04u;
    {
        const bool branch_taken_0x16be04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16be04) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BE0Cu;
    // 0x16be0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16be10: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16be10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16be14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16be14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16be18: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16be18u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16be1c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x16be1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16be20: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16be20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16be24: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16be24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16be28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16be2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16be30: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16be30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16be34: 0x14200046  bnez        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x16BE34u;
    {
        const bool branch_taken_0x16be34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16be34) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BE3Cu;
    // 0x16be3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16be40: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16be44: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16be44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16be48: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16be48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16be4c: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x16be4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x16be50: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16be50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16be54: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16be58: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16be58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16be5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16be60: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16be60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16be64: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16be64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16be68: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x16BE68u;
    {
        const bool branch_taken_0x16be68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16be68) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BE70u;
    // 0x16be70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16be70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16be74: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16be74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16be78: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16be78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16be7c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16be7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16be80: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x16be80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x16be84: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16be84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16be88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16be8c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16be90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16be90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16be94: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16be94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16be98: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x16BE98u;
    {
        const bool branch_taken_0x16be98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16be98) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BEA0u;
    // 0x16bea0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16bea4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16bea8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16beac: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16beacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16beb0: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x16beb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16beb4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16beb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16beb8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16bebc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16bec0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16bec4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16bec8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16bec8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16becc: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16BECCu;
    {
        const bool branch_taken_0x16becc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16becc) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BED4u;
    // 0x16bed4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16bed8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16bedc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16bee0: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16bee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16bee4: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x16bee4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16bee8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16bee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16beec: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16bef0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16bef4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16bef8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16bef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16befc: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x16BEFCu;
    {
        const bool branch_taken_0x16befc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16befc) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BF04u;
    // 0x16bf04: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x16bf04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16bf08: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x16bf08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16bf0c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x16bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x16bf10: 0xc059f30  jal         func_167CC0
    ctx->pc = 0x16BF10u;
    SET_GPR_U32(ctx, 31, 0x16BF18u);
    ctx->pc = 0x167CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167CC0u, 0x16BF10u, 0x16BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF18u;
label_16bf18:
    // 0x16bf18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bf1c: 0x1623000c  bne         $s1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16BF1Cu;
    {
        const bool branch_taken_0x16bf1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x16bf1c) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BF24u;
    // 0x16bf24: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x16bf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16bf28: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16bf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16bf2c: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16bf2cu;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bf30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16bf30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16bf34: 0x0  nop
    ctx->pc = 0x16bf34u;
    // NOP
    // 0x16bf38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x16BF38u;
    {
        const bool branch_taken_0x16bf38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16bf38) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BF40u;
    // 0x16bf40: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x16bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x16bf44: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16bf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16bf48: 0xac23ab20  sw          $v1, -0x54E0($at)
    ctx->pc = 0x16bf48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x16bf4c: 0x0  nop
    ctx->pc = 0x16bf4cu;
    // NOP
label_16bf50:
    // 0x16bf50: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x16bf50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16bf54: 0x1000ff88  b           . + 4 + (-0x78 << 2)
    ctx->pc = 0x16BF54u;
    {
        const bool branch_taken_0x16bf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf54) {
            ctx->pc = 0x16BD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bd78;
        }
    }
    ctx->pc = 0x16BF5Cu;
label_16bf5c:
    // 0x16bf5c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x16bf5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bf60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16bf60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bf64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bf64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bf68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x16bf6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16bf70: 0x3e00008  jr          $ra
    ctx->pc = 0x16BF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BF78u;
}
