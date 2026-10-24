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

// Function: Em0b_dm_move
// Address: 0x1f99f0 - 0x1fa0a4
void Em0b_dm_move_0x1f99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_dm_move_0x1f99f0");
#endif

    ctx->pc = 0x1f99f0u;

    // 0x1f99f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f99f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f99f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f99f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f99f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f99f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f99fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f99fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f9a00: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1f9a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1f9a04: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9a08: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9a0c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f9a10: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1f9a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1f9a14: 0x1060019e  beqz        $v1, . + 4 + (0x19E << 2)
    ctx->pc = 0x1F9A14u;
    {
        const bool branch_taken_0x1f9a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9a14) {
            ctx->pc = 0x1FA090u;
            goto label_1fa090;
        }
    }
    ctx->pc = 0x1F9A1Cu;
    // 0x1f9a1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9a20: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f9a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9a24: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f9a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f9a28: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x1f9a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x1f9a2c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F9A2Cu;
    {
        const bool branch_taken_0x1f9a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9a2c) {
            ctx->pc = 0x1F9A78u;
            goto label_1f9a78;
        }
    }
    ctx->pc = 0x1F9A34u;
    // 0x1f9a34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9a38: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f9a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9a3c: 0xa0a0007d  sb          $zero, 0x7D($a1)
    ctx->pc = 0x1f9a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9a40: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f9a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f9a44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9a48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9a4c: 0xa064007e  sb          $a0, 0x7E($v1)
    ctx->pc = 0x1f9a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 126), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9a50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f9a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9a54: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f9a58: 0xa4600080  sh          $zero, 0x80($v1)
    ctx->pc = 0x1f9a58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f9a5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9a60: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f9a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9a64: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f9a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f9a68: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1f9a6c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x1f9a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x1f9a70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9a74: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f9a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_1f9a78:
    // 0x1f9a78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9a7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9a80: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x1f9a80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1f9a84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9A84u;
    {
        const bool branch_taken_0x1f9a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9a84) {
            ctx->pc = 0x1F9AA0u;
            goto label_1f9aa0;
        }
    }
    ctx->pc = 0x1F9A8Cu;
    // 0x1f9a8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9a90: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9a94: 0x8483005c  lh          $v1, 0x5C($a0)
    ctx->pc = 0x1f9a94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1f9a98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f9a9c: 0xa483005c  sh          $v1, 0x5C($a0)
    ctx->pc = 0x1f9a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 3));
label_1f9aa0:
    // 0x1f9aa0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f9aa4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1f9aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9aa8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9aac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9ab0: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x1f9ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x1f9ab4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f9ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f9ab8: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1f9ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f9abc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1f9ac0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1f9ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9ac4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f9ac8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1f9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9acc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f9accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f9ad0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1f9ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f9ad4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ad8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9adc: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x1f9adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
    // 0x1f9ae0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f9ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9ae4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f9ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9ae8: 0x10830155  beq         $a0, $v1, . + 4 + (0x155 << 2)
    ctx->pc = 0x1F9AE8u;
    {
        const bool branch_taken_0x1f9ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9ae8) {
            ctx->pc = 0x1FA040u;
            goto label_1fa040;
        }
    }
    ctx->pc = 0x1F9AF0u;
    // 0x1f9af0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9af4: 0x108300e1  beq         $a0, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1F9AF4u;
    {
        const bool branch_taken_0x1f9af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9af4) {
            ctx->pc = 0x1F9E7Cu;
            goto label_1f9e7c;
        }
    }
    ctx->pc = 0x1F9AFCu;
    // 0x1f9afc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f9afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9b00: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1F9B00u;
    {
        const bool branch_taken_0x1f9b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9b00) {
            ctx->pc = 0x1F9BF8u;
            goto label_1f9bf8;
        }
    }
    ctx->pc = 0x1F9B08u;
    // 0x1f9b08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9B08u;
    {
        const bool branch_taken_0x1f9b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9b08) {
            ctx->pc = 0x1F9B18u;
            goto label_1f9b18;
        }
    }
    ctx->pc = 0x1F9B10u;
    // 0x1f9b10: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x1F9B10u;
    {
        const bool branch_taken_0x1f9b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9b10) {
            ctx->pc = 0x1FA090u;
            goto label_1fa090;
        }
    }
    ctx->pc = 0x1F9B18u;
label_1f9b18:
    // 0x1f9b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9b1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b24: 0xa064007d  sb          $a0, 0x7D($v1)
    ctx->pc = 0x1f9b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9b28: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1f9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1f9b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9b30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b38: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1f9b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1f9b3c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1f9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1f9b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9b44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b4c: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f9b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x1f9b50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9b58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b60: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x1f9b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x1f9b64: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1f9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1f9b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9b6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b74: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x1f9b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x1f9b78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9b7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9b80: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1f9b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f9b84: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f9b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f9b88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9b8c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F9B8Cu;
    {
        const bool branch_taken_0x1f9b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9b8c) {
            ctx->pc = 0x1F9BF8u;
            goto label_1f9bf8;
        }
    }
    ctx->pc = 0x1F9B94u;
    // 0x1f9b94: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1f9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1f9b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9b9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ba0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9ba4: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x1f9ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x1f9ba8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1f9ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9bac: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f9bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f9bb0: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x1f9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1f9bb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9bb8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f9bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f9bbc: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1f9bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1f9bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9bc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9bc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9bcc: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1f9bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1f9bd0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1f9bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1f9bd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9bd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9bdc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9be0: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f9be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x1f9be4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1f9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1f9be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9bec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9bf0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9bf4: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x1f9bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_1f9bf8:
    // 0x1f9bf8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9bfc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c00: 0x9083007e  lbu         $v1, 0x7E($a0)
    ctx->pc = 0x1f9c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 126)));
    // 0x1f9c04: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1f9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1f9c08: 0xa083007e  sb          $v1, 0x7E($a0)
    ctx->pc = 0x1f9c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 126), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f9c0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c14: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x1f9c14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x1f9c18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f9c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9c1c: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x1f9c1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1f9c20: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9C20u;
    {
        const bool branch_taken_0x1f9c20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9c20) {
            ctx->pc = 0x1F9C48u;
            goto label_1f9c48;
        }
    }
    ctx->pc = 0x1F9C28u;
    // 0x1f9c28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f9c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9c2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c34: 0xa064007d  sb          $a0, 0x7D($v1)
    ctx->pc = 0x1f9c34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9c38: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1f9c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f9c3c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c44: 0xa064007e  sb          $a0, 0x7E($v1)
    ctx->pc = 0x1f9c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 126), (uint8_t)GPR_U32(ctx, 4));
label_1f9c48:
    // 0x1f9c48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c50: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x1f9c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x1f9c54: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1f9c54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9c58: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1f9c58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1f9c5c: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1f9c5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1f9c60: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f9c64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f9c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f9c68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f9c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f9c6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9c70: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1f9c70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1f9c74: 0xde0300e8  ld          $v1, 0xE8($s0)
    ctx->pc = 0x1f9c74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1f9c78: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1f9c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1f9c7c: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1f9c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1f9c80: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9c84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9c88: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1f9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f9c8c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f9c90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9c94: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1F9C94u;
    {
        const bool branch_taken_0x1f9c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9c94) {
            ctx->pc = 0x1F9D78u;
            goto label_1f9d78;
        }
    }
    ctx->pc = 0x1F9C9Cu;
    // 0x1f9c9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ca0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f9ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f9ca4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1f9ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1f9ca8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9cac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f9cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f9cb0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f9cb0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9cb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f9cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f9cb8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f9cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9cbc: 0x0  nop
    ctx->pc = 0x1f9cbcu;
    // NOP
    // 0x1f9cc0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9CC0u;
    {
        const bool branch_taken_0x1f9cc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9cc0) {
            ctx->pc = 0x1F9D04u;
            goto label_1f9d04;
        }
    }
    ctx->pc = 0x1F9CC8u;
    // 0x1f9cc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ccc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9cd0: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x1f9cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9cd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9cd8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9cdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9ce0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f9ce4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ce8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9cec: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x1f9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x1f9cf0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f9cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f9cf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9cf8: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9cfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9d00: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_1f9d04:
    // 0x1f9d04: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d08: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f9d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f9d0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f9d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f9d10: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f9d10u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9d14: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1f9d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1f9d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9d1c: 0x0  nop
    ctx->pc = 0x1f9d1cu;
    // NOP
    // 0x1f9d20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f9d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f9d24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f9d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9d28: 0x0  nop
    ctx->pc = 0x1f9d28u;
    // NOP
    // 0x1f9d2c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1F9D2Cu;
    {
        const bool branch_taken_0x1f9d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9d2c) {
            ctx->pc = 0x1F9DB4u;
            goto label_1f9db4;
        }
    }
    ctx->pc = 0x1F9D34u;
    // 0x1f9d34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9d3c: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x1f9d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9d40: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d44: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9d48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9d4c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f9d50: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d54: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9d58: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x1f9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x1f9d5c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f9d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f9d60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9d64: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9d68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9d6c: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x1f9d70: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F9D70u;
    {
        const bool branch_taken_0x1f9d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d70) {
            ctx->pc = 0x1F9DB4u;
            goto label_1f9db4;
        }
    }
    ctx->pc = 0x1F9D78u;
label_1f9d78:
    // 0x1f9d78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9d80: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x1f9d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9d84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d88: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9d8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9d90: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f9d94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d98: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9d9c: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x1f9d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x1f9da0: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1f9da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1f9da4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9da8: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9dac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9db0: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_1f9db4:
    // 0x1f9db4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1f9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f9db8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9dbc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1f9dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9dc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9dc4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9dc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9dcc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9dd0: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x1f9dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9dd4: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f9dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9dd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f9dd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f9ddc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9de0: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x1f9de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9de4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9de8: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1f9de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1f9dec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9df0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9df4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9df8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9dfc: 0xc481008c  lwc1        $f1, 0x8C($a0)
    ctx->pc = 0x1f9dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9e00: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f9e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9e04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f9e04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f9e08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e0c: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x1f9e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9e10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9e14: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1f9e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x1f9e18: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e1c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9e20: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1f9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1f9e24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9e28: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x1f9e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9e2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9e30: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x1f9e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1f9e34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e38: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9e3c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1f9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1f9e40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1f9e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1f9e44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9e48: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1f9e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9e4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9e50: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x1f9e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1f9e54: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e58: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9e5c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1f9e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1f9e60: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1f9e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1f9e64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9e68: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f9e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9e6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9e70: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f9e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x1f9e74: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1F9E74u;
    {
        const bool branch_taken_0x1f9e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e74) {
            ctx->pc = 0x1FA090u;
            goto label_1fa090;
        }
    }
    ctx->pc = 0x1F9E7Cu;
label_1f9e7c:
    // 0x1f9e7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e80: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9e84: 0x9083007e  lbu         $v1, 0x7E($a0)
    ctx->pc = 0x1f9e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 126)));
    // 0x1f9e88: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f9e8c: 0xa083007e  sb          $v1, 0x7E($a0)
    ctx->pc = 0x1f9e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 126), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f9e90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9e98: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x1f9e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x1f9e9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f9e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9ea0: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x1f9ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f9ea4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F9EA4u;
    {
        const bool branch_taken_0x1f9ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ea4) {
            ctx->pc = 0x1F9EF4u;
            goto label_1f9ef4;
        }
    }
    ctx->pc = 0x1F9EACu;
    // 0x1f9eac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f9eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9eb0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9eb4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9eb8: 0xa064007d  sb          $a0, 0x7D($v1)
    ctx->pc = 0x1f9eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9ebc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f9ec0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ec4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9ec8: 0xa064007e  sb          $a0, 0x7E($v1)
    ctx->pc = 0x1f9ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 126), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9ecc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f9ed0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1f9ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f9ed4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f9ed8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f9ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f9edc: 0xfe0300e0  sd          $v1, 0xE0($s0)
    ctx->pc = 0x1f9edcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
    // 0x1f9ee0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f9ee4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1f9ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f9ee8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f9ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f9eec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f9eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f9ef0: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1f9ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
label_1f9ef4:
    // 0x1f9ef4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9ef8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9efc: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x1f9efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x1f9f00: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1f9f00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9f04: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1f9f04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1f9f08: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1f9f08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1f9f0c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f9f10: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f9f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f9f14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f9f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f9f18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9f1c: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1f9f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1f9f20: 0xde0300e8  ld          $v1, 0xE8($s0)
    ctx->pc = 0x1f9f20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1f9f24: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1f9f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1f9f28: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1f9f28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1f9f2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f30: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9f34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9f3c: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x1f9f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9f40: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f9f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f9f44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f9f48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f4c: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x1f9f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9f54: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1f9f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1f9f58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f5c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9f60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9f68: 0xc481008c  lwc1        $f1, 0x8C($a0)
    ctx->pc = 0x1f9f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9f6c: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f9f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f9f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f9f74: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f78: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x1f9f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9f80: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1f9f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x1f9f84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f88: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9f8c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1f9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1f9f90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9f94: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x1f9f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9f9c: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x1f9f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1f9fa0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fa4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9fa8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1f9fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1f9fac: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f9facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f9fb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9fb4: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1f9fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9fb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9fbc: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x1f9fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1f9fc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fc4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9fc8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1f9fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1f9fcc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f9fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f9fd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9fd4: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f9fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9fd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9fdc: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f9fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x1f9fe0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fe4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9fe8: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1f9fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f9fec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f9ff0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f9ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f9ff4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F9FF4u;
    {
        const bool branch_taken_0x1f9ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ff4) {
            ctx->pc = 0x1FA090u;
            goto label_1fa090;
        }
    }
    ctx->pc = 0x1F9FFCu;
    // 0x1f9ffc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa000: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa004: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x1fa004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa008: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fa008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa00c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1fa00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa010: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fa010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fa014: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1fa014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1fa018: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fa018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa01c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa020: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x1fa020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x1fa024: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1fa024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1fa028: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fa028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa02c: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1fa02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa030: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fa030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fa034: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x1fa034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x1fa038: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FA038u;
    {
        const bool branch_taken_0x1fa038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa038) {
            ctx->pc = 0x1FA090u;
            goto label_1fa090;
        }
    }
    ctx->pc = 0x1FA040u;
label_1fa040:
    // 0x1fa040: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fa040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa044: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1fa044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa048: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1fa048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1fa04c: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1fa04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1fa050: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fa050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa054: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1fa054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1fa058: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1fa058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa05c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1fa05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa060: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1fa060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1fa064: 0xa065007e  sb          $a1, 0x7E($v1)
    ctx->pc = 0x1fa064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 126), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fa068: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa06c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fa06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa070: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa074: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fa074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fa078: 0xfe0300e0  sd          $v1, 0xE0($s0)
    ctx->pc = 0x1fa078u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
    // 0x1fa07c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1fa07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa080: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x1fa080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1fa084: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa088: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fa088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fa08c: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa08cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
label_1fa090:
    // 0x1fa090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa098: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fa098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa09c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA0A4u;
}
