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

// Function: Atari_lnk_Cy
// Address: 0x16c1a0 - 0x16c3c0
void Atari_lnk_Cy_0x16c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Atari_lnk_Cy_0x16c1a0");
#endif

    switch (ctx->pc) {
        case 0x16c1c8u: goto label_16c1c8;
        case 0x16c200u: goto label_16c200;
        case 0x16c360u: goto label_16c360;
        default: break;
    }

    ctx->pc = 0x16c1a0u;

    // 0x16c1a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16c1a4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x16c1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x16c1a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16c1ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16c1b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16c1b4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x16c1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x16c1b8: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x16c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x16c1bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16c1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16c1c0: 0x8c300df8  lw          $s0, 0xDF8($at)
    ctx->pc = 0x16c1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DF8u));
    // 0x16c1c4: 0x0  nop
    ctx->pc = 0x16c1c4u;
    // NOP
label_16c1c8:
    // 0x16c1c8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16c1cc: 0x24630dfc  addiu       $v1, $v1, 0xDFC
    ctx->pc = 0x16c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3580));
    // 0x16c1d0: 0x12030074  beq         $s0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x16C1D0u;
    {
        const bool branch_taken_0x16c1d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c1d0) {
            ctx->pc = 0x16C3A4u;
            goto label_16c3a4;
        }
    }
    ctx->pc = 0x16C1D8u;
    // 0x16c1d8: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x16c1d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16c1dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C1DCu;
    {
        const bool branch_taken_0x16c1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c1dc) {
            ctx->pc = 0x16C1F0u;
            goto label_16c1f0;
        }
    }
    ctx->pc = 0x16C1E4u;
    // 0x16c1e4: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x16c1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16c1e8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x16C1E8u;
    {
        const bool branch_taken_0x16c1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c1e8) {
            ctx->pc = 0x16C1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c1c8;
        }
    }
    ctx->pc = 0x16C1F0u;
label_16c1f0:
    // 0x16c1f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16c1f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c1f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16c1f8: 0xc05b0f0  jal         func_16C3C0
    ctx->pc = 0x16C1F8u;
    SET_GPR_U32(ctx, 31, 0x16C200u);
    ctx->pc = 0x16C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C3C0u, 0x16C1F8u, 0x16C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C200u;
label_16c200:
    // 0x16c200: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C200u;
    {
        const bool branch_taken_0x16c200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c200) {
            ctx->pc = 0x16C220u;
            goto label_16c220;
        }
    }
    ctx->pc = 0x16C208u;
    // 0x16c208: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x16c208u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c20c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x16c20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16c210: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16c210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c214: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16c214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16c218: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16c218u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c21c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x16c21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_16c220:
    // 0x16c220: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16c220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c224: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c228: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16c228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c22c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c230: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x16c230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16c234: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c238: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c23c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c240: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c244: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16c244u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16c248: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16c248u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c24c: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x16C24Cu;
    {
        const bool branch_taken_0x16c24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c24c) {
            ctx->pc = 0x16C398u;
            goto label_16c398;
        }
    }
    ctx->pc = 0x16C254u;
    // 0x16c254: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16c254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c258: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c25c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c260: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c260u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c264: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x16c264u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16c268: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c26c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c270: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c274: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c278: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16c278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16c27c: 0x14200046  bnez        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x16C27Cu;
    {
        const bool branch_taken_0x16c27c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c27c) {
            ctx->pc = 0x16C398u;
            goto label_16c398;
        }
    }
    ctx->pc = 0x16C284u;
    // 0x16c284: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16c284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16c288: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c28c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c290: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c290u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c294: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x16c294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x16c298: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c29c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c2a0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c2a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c2a8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16c2ac: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16c2acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c2b0: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x16C2B0u;
    {
        const bool branch_taken_0x16c2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c2b0) {
            ctx->pc = 0x16C398u;
            goto label_16c398;
        }
    }
    ctx->pc = 0x16C2B8u;
    // 0x16c2b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16c2bc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c2c0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c2c4: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c2c8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x16c2c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x16c2cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c2d0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c2d4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c2d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c2dc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16c2dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16c2e0: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x16C2E0u;
    {
        const bool branch_taken_0x16c2e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c2e0) {
            ctx->pc = 0x16C398u;
            goto label_16c398;
        }
    }
    ctx->pc = 0x16C2E8u;
    // 0x16c2e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16c2ec: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c2f0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c2f4: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c2f8: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x16c2f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16c2fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c300: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c304: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c308: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c30c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16c310: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16c310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c314: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16C314u;
    {
        const bool branch_taken_0x16c314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c314) {
            ctx->pc = 0x16C398u;
            goto label_16c398;
        }
    }
    ctx->pc = 0x16C31Cu;
    // 0x16c31c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16c320: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c324: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c328: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c328u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c32c: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x16c32cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16c330: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c334: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c338: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16c338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c33c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c340: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16c340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16c344: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x16C344u;
    {
        const bool branch_taken_0x16c344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c344) {
            ctx->pc = 0x16C398u;
            goto label_16c398;
        }
    }
    ctx->pc = 0x16C34Cu;
    // 0x16c34c: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x16c34cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16c350: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x16c350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16c354: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x16c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x16c358: 0xc05a794  jal         func_169E50
    ctx->pc = 0x16C358u;
    SET_GPR_U32(ctx, 31, 0x16C360u);
    ctx->pc = 0x169E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E50u, 0x16C358u, 0x16C360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C360u;
label_16c360:
    // 0x16c360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c364: 0x1643000c  bne         $s2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16C364u;
    {
        const bool branch_taken_0x16c364 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c364) {
            ctx->pc = 0x16C398u;
            goto label_16c398;
        }
    }
    ctx->pc = 0x16C36Cu;
    // 0x16c36c: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x16c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c370: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16c374: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16c374u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c378: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16c378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c37c: 0x0  nop
    ctx->pc = 0x16c37cu;
    // NOP
    // 0x16c380: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x16C380u;
    {
        const bool branch_taken_0x16c380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c380) {
            ctx->pc = 0x16C398u;
            goto label_16c398;
        }
    }
    ctx->pc = 0x16C388u;
    // 0x16c388: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x16c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x16c38c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16c38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16c390: 0xac23ab20  sw          $v1, -0x54E0($at)
    ctx->pc = 0x16c390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x16c394: 0x0  nop
    ctx->pc = 0x16c394u;
    // NOP
label_16c398:
    // 0x16c398: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x16c398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16c39c: 0x1000ff8a  b           . + 4 + (-0x76 << 2)
    ctx->pc = 0x16C39Cu;
    {
        const bool branch_taken_0x16c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c39c) {
            ctx->pc = 0x16C1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c1c8;
        }
    }
    ctx->pc = 0x16C3A4u;
label_16c3a4:
    // 0x16c3a4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x16c3a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c3a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16c3a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c3ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c3b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x16c3b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16c3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x16C3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C3C0u;
}
