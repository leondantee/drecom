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

// Function: Em0b_R1_mv15
// Address: 0x1f4b40 - 0x1f4de0
void Em0b_R1_mv15_0x1f4b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv15_0x1f4b40");
#endif

    switch (ctx->pc) {
        case 0x1f4b98u: goto label_1f4b98;
        case 0x1f4c9cu: goto label_1f4c9c;
        case 0x1f4ca8u: goto label_1f4ca8;
        case 0x1f4d50u: goto label_1f4d50;
        case 0x1f4d74u: goto label_1f4d74;
        default: break;
    }

    ctx->pc = 0x1f4b40u;

    // 0x1f4b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4b44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1f4b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f4b48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1f4b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1f4b4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4b50: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f4b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f4b54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f4b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f4b58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4b5c: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x1F4B5Cu;
    {
        const bool branch_taken_0x1f4b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f4b5c) {
            ctx->pc = 0x1F4CDCu;
            goto label_1f4cdc;
        }
    }
    ctx->pc = 0x1F4B64u;
    // 0x1f4b64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4b68: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1F4B68u;
    {
        const bool branch_taken_0x1f4b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f4b68) {
            ctx->pc = 0x1F4C7Cu;
            goto label_1f4c7c;
        }
    }
    ctx->pc = 0x1F4B70u;
    // 0x1f4b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4b74: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F4B74u;
    {
        const bool branch_taken_0x1f4b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f4b74) {
            ctx->pc = 0x1F4C24u;
            goto label_1f4c24;
        }
    }
    ctx->pc = 0x1F4B7Cu;
    // 0x1f4b7c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4B7Cu;
    {
        const bool branch_taken_0x1f4b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b7c) {
            ctx->pc = 0x1F4B8Cu;
            goto label_1f4b8c;
        }
    }
    ctx->pc = 0x1F4B84u;
    // 0x1f4b84: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1F4B84u;
    {
        const bool branch_taken_0x1f4b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b84) {
            ctx->pc = 0x1F4DD0u;
            goto label_1f4dd0;
        }
    }
    ctx->pc = 0x1F4B8Cu;
label_1f4b8c:
    // 0x1f4b8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4b90: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x1F4B90u;
    SET_GPR_U32(ctx, 31, 0x1F4B98u);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x1F4B90u, 0x1F4B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B98u;
label_1f4b98:
    // 0x1f4b98: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f4b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4b9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4ba0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1f4ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4ba4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4ba8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4bac: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1f4bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1f4bb0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f4bb4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f4bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4bb8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f4bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4bbc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f4bc0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4bc4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f4bc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4bcc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4bd0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x1f4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x1f4bd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f4bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4bd8: 0x0  nop
    ctx->pc = 0x1f4bd8u;
    // NOP
    // 0x1f4bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f4bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4be0: 0x0  nop
    ctx->pc = 0x1f4be0u;
    // NOP
    // 0x1f4be4: 0x4500007a  bc1f        . + 4 + (0x7A << 2)
    ctx->pc = 0x1F4BE4u;
    {
        const bool branch_taken_0x1f4be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4be4) {
            ctx->pc = 0x1F4DD0u;
            goto label_1f4dd0;
        }
    }
    ctx->pc = 0x1F4BECu;
    // 0x1f4bec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4bf0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1f4bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f4bf4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1f4bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1f4bf8: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x1F4BF8u;
    {
        const bool branch_taken_0x1f4bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4bf8) {
            ctx->pc = 0x1F4DD0u;
            goto label_1f4dd0;
        }
    }
    ctx->pc = 0x1F4C00u;
    // 0x1f4c00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f4c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4c04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c08: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f4c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4c0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4c14: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f4c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f4c18: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f4c1c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1F4C1Cu;
    {
        const bool branch_taken_0x1f4c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c1c) {
            ctx->pc = 0x1F4DD0u;
            goto label_1f4dd0;
        }
    }
    ctx->pc = 0x1F4C24u;
label_1f4c24:
    // 0x1f4c24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4c28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c2c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f4c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4c30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c34: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4c38: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f4c3c: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f4c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f4c40: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f4c44: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f4c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f4c48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c4c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4c50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c54: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f4c54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f4c58: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f4c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4c5c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f4c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f4c60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4C60u;
    {
        const bool branch_taken_0x1f4c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c60) {
            ctx->pc = 0x1F4C74u;
            goto label_1f4c74;
        }
    }
    ctx->pc = 0x1F4C68u;
    // 0x1f4c68: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4c6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c70: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4c70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1f4c74:
    // 0x1f4c74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c78: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f4c78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_1f4c7c:
    // 0x1f4c7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c80: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x1f4c80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1f4c84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4c88: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x1f4c88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f4c8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1f4c90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4c94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F4C94u;
    SET_GPR_U32(ctx, 31, 0x1F4C9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F4C94u, 0x1F4C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4C9Cu;
label_1f4c9c:
    // 0x1f4c9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4ca0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F4CA0u;
    SET_GPR_U32(ctx, 31, 0x1F4CA8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F4CA0u, 0x1F4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4CA8u;
label_1f4ca8:
    // 0x1f4ca8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4cac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f4cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f4cb0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1F4CB0u;
    {
        const bool branch_taken_0x1f4cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4cb0) {
            ctx->pc = 0x1F4DD0u;
            goto label_1f4dd0;
        }
    }
    ctx->pc = 0x1F4CB8u;
    // 0x1f4cb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4cbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4cc0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f4cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4cc4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4cc8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4ccc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1f4cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1f4cd0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f4cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f4cd4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1F4CD4u;
    {
        const bool branch_taken_0x1f4cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4cd4) {
            ctx->pc = 0x1F4DD0u;
            goto label_1f4dd0;
        }
    }
    ctx->pc = 0x1F4CDCu;
label_1f4cdc:
    // 0x1f4cdc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4ce0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4ce4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f4ce8: 0x2402dfe7  addiu       $v0, $zero, -0x2019
    ctx->pc = 0x1f4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f4cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f4cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f4cf0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f4cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4cf8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4cfc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f4cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1f4d00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4d04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d08: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1f4d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1f4d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4d10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d14: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1f4d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1f4d18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4d1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f4d20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4d28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d2c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f4d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4d30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d34: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f4d34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4d38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d3c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f4d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4d40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f4d48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4D48u;
    SET_GPR_U32(ctx, 31, 0x1F4D50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4D48u, 0x1F4D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D50u;
label_1f4d50:
    // 0x1f4d50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f4d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4d54: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f4d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f4d58: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f4d5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f4d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4d60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f4d60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f4d64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d68: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4d68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4d6c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4D6Cu;
    SET_GPR_U32(ctx, 31, 0x1F4D74u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4D6Cu, 0x1F4D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D74u;
label_1f4d74:
    // 0x1f4d74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f4d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4d78: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f4d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f4d7c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f4d80: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f4d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f4d84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f4d84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f4d88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f4d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f4d90: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f4d90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f4d94: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4d98: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x1f4d98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f4d9c: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x1f4d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x1f4da0: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1f4da0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4da4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4da8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f4da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4dac: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f4dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4db0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4db4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1f4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f4db8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4dbc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f4dc0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4dc4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4dc8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f4dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f4dcc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1f4dd0:
    // 0x1f4dd0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1f4dd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4dd4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f4dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f4dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4DE0u;
}
