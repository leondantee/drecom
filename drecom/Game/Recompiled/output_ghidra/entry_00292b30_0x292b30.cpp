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

// Function: entry_00292b30
// Address: 0x292b30 - 0x292cd4
void entry_00292b30_0x292b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292b30_0x292b30");
#endif

    switch (ctx->pc) {
        case 0x292b68u: goto label_292b68;
        case 0x292b78u: goto label_292b78;
        case 0x292bbcu: goto label_292bbc;
        case 0x292bd0u: goto label_292bd0;
        case 0x292bdcu: goto label_292bdc;
        case 0x292c08u: goto label_292c08;
        case 0x292c68u: goto label_292c68;
        default: break;
    }

    ctx->pc = 0x292b30u;

    // 0x292b30: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x292b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x292b34: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x292B34u;
    {
        const bool branch_taken_0x292b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292b34) {
            ctx->pc = 0x292AF8u;
            return;
        }
    }
    ctx->pc = 0x292B3Cu;
    // 0x292b3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x292b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x292b40: 0xae220720  sw          $v0, 0x720($s1)
    ctx->pc = 0x292b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1824), GPR_U32(ctx, 2));
    // 0x292b44: 0x24021400  addiu       $v0, $zero, 0x1400
    ctx->pc = 0x292b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x292b48: 0xa6220724  sh          $v0, 0x724($s1)
    ctx->pc = 0x292b48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1828), (uint16_t)GPR_U32(ctx, 2));
    // 0x292b4c: 0x2402008e  addiu       $v0, $zero, 0x8E
    ctx->pc = 0x292b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x292b50: 0xa6220726  sh          $v0, 0x726($s1)
    ctx->pc = 0x292b50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1830), (uint16_t)GPR_U32(ctx, 2));
    // 0x292b54: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x292b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x292b58: 0x26250720  addiu       $a1, $s1, 0x720
    ctx->pc = 0x292b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    // 0x292b5c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x292b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x292b60: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x292B60u;
    SET_GPR_U32(ctx, 31, 0x292B68u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x292B68u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x292B68u) { return; }
    ctx->pc = 0x292B68u;
label_292b68:
    // 0x292b68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x292b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x292b6c: 0xae220320  sw          $v0, 0x320($s1)
    ctx->pc = 0x292b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
    // 0x292b70: 0xc0a5510  jal         func_295440
    ctx->pc = 0x292B70u;
    SET_GPR_U32(ctx, 31, 0x292B78u);
    ctx->pc = 0x295440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295440u, 0x292B70u, 0x292B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B78u;
label_292b78:
    // 0x292b78: 0x8e336868  lw          $s3, 0x6868($s1)
    ctx->pc = 0x292b78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26728)));
    // 0x292b7c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x292b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x292b80: 0x8e236868  lw          $v1, 0x6868($s1)
    ctx->pc = 0x292b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26728)));
    // 0x292b84: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x292b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x292b88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x292b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292b8c: 0xae226858  sw          $v0, 0x6858($s1)
    ctx->pc = 0x292b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26712), GPR_U32(ctx, 2));
    // 0x292b90: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x292b90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x292b94: 0x8e236868  lw          $v1, 0x6868($s1)
    ctx->pc = 0x292b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26728)));
    // 0x292b98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x292b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x292b9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x292b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292ba0: 0xae220328  sw          $v0, 0x328($s1)
    ctx->pc = 0x292ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 2));
    // 0x292ba4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x292ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x292ba8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x292ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x292bac: 0xae220330  sw          $v0, 0x330($s1)
    ctx->pc = 0x292bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 2));
    // 0x292bb0: 0x9624032c  lhu         $a0, 0x32C($s1)
    ctx->pc = 0x292bb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x292bb4: 0xc040044  jal         func_100110
    ctx->pc = 0x292BB4u;
    SET_GPR_U32(ctx, 31, 0x292BBCu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x292BB4u, 0x292BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BBCu;
label_292bbc:
    // 0x292bbc: 0x3c034075  lui         $v1, 0x4075
    ctx->pc = 0x292bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16501 << 16));
    // 0x292bc0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x292bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x292bc4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x292bc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x292bc8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x292BC8u;
    SET_GPR_U32(ctx, 31, 0x292BD0u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x292BC8u, 0x292BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BD0u;
label_292bd0:
    // 0x292bd0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x292bd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x292bd4: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x292BD4u;
    SET_GPR_U32(ctx, 31, 0x292BDCu);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x292BD4u, 0x292BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BDCu;
label_292bdc:
    // 0x292bdc: 0xa6220334  sh          $v0, 0x334($s1)
    ctx->pc = 0x292bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 820), (uint16_t)GPR_U32(ctx, 2));
    // 0x292be0: 0x9622032e  lhu         $v0, 0x32E($s1)
    ctx->pc = 0x292be0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 814)));
    // 0x292be4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x292be8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x292bec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x292bf0: 0xa6220336  sh          $v0, 0x336($s1)
    ctx->pc = 0x292bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 822), (uint16_t)GPR_U32(ctx, 2));
    // 0x292bf4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x292bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x292bf8: 0x26250720  addiu       $a1, $s1, 0x720
    ctx->pc = 0x292bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    // 0x292bfc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x292bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x292c00: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x292C00u;
    SET_GPR_U32(ctx, 31, 0x292C08u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x292C08u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x292C08u) { return; }
    ctx->pc = 0x292C08u;
label_292c08:
    // 0x292c08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x292c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x292c0c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x292c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x292c10: 0x8e236868  lw          $v1, 0x6868($s1)
    ctx->pc = 0x292c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26728)));
    // 0x292c14: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x292c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x292c18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x292c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292c1c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x292c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x292c20: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x292c20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x292c24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x292c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x292c28: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x292c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x292c2c: 0x96220024  lhu         $v0, 0x24($s1)
    ctx->pc = 0x292c2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x292c30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x292c34: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x292c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x292c38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x292c3c: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x292c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x292c40: 0x96220026  lhu         $v0, 0x26($s1)
    ctx->pc = 0x292c40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x292c44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x292c48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x292c4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x292c50: 0xa622002e  sh          $v0, 0x2E($s1)
    ctx->pc = 0x292c50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x292c54: 0x26240620  addiu       $a0, $s1, 0x620
    ctx->pc = 0x292c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    // 0x292c58: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x292c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x292c5c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x292c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x292c60: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x292C60u;
    SET_GPR_U32(ctx, 31, 0x292C68u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x292C68u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x292C68u) { return; }
    ctx->pc = 0x292C68u;
label_292c68:
    // 0x292c68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x292c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x292c6c: 0xae230620  sw          $v1, 0x620($s1)
    ctx->pc = 0x292c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1568), GPR_U32(ctx, 3));
    // 0x292c70: 0xa2206609  sb          $zero, 0x6609($s1)
    ctx->pc = 0x292c70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26121), (uint8_t)GPR_U32(ctx, 0));
    // 0x292c74: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x292c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x292c78: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x292c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x292c7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x292c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292c80: 0x0  nop
    ctx->pc = 0x292c80u;
    // NOP
    // 0x292c84: 0xe62065b4  swc1        $f0, 0x65B4($s1)
    ctx->pc = 0x292c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26036), bits); }
    // 0x292c88: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x292c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x292c8c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x292c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x292c90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x292c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292c94: 0x0  nop
    ctx->pc = 0x292c94u;
    // NOP
    // 0x292c98: 0xe62065b8  swc1        $f0, 0x65B8($s1)
    ctx->pc = 0x292c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26040), bits); }
    // 0x292c9c: 0x8e235dc0  lw          $v1, 0x5DC0($s1)
    ctx->pc = 0x292c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24000)));
    // 0x292ca0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x292ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x292ca4: 0xae235dc0  sw          $v1, 0x5DC0($s1)
    ctx->pc = 0x292ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24000), GPR_U32(ctx, 3));
    // 0x292ca8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x292ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292cac: 0xae235dc0  sw          $v1, 0x5DC0($s1)
    ctx->pc = 0x292cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24000), GPR_U32(ctx, 3));
    // 0x292cb0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x292cb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292cb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x292cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292cb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x292cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292cbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x292cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292cc8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x292cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x292ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x292CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292CD4u;
}
