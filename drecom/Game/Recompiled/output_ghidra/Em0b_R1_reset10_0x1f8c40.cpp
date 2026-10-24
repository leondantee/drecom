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

// Function: Em0b_R1_reset10
// Address: 0x1f8c40 - 0x1f8eb4
void Em0b_R1_reset10_0x1f8c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_reset10_0x1f8c40");
#endif

    switch (ctx->pc) {
        case 0x1f8d04u: goto label_1f8d04;
        case 0x1f8d10u: goto label_1f8d10;
        case 0x1f8db8u: goto label_1f8db8;
        case 0x1f8ddcu: goto label_1f8ddc;
        case 0x1f8e14u: goto label_1f8e14;
        default: break;
    }

    ctx->pc = 0x1f8c40u;

    // 0x1f8c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8c44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1f8c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f8c48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1f8c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1f8c4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8c50: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f8c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f8c54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8c58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8c5c: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1F8C5Cu;
    {
        const bool branch_taken_0x1f8c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f8c5c) {
            ctx->pc = 0x1F8D44u;
            goto label_1f8d44;
        }
    }
    ctx->pc = 0x1F8C64u;
    // 0x1f8c64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8c68: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F8C68u;
    {
        const bool branch_taken_0x1f8c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f8c68) {
            ctx->pc = 0x1F8CE4u;
            goto label_1f8ce4;
        }
    }
    ctx->pc = 0x1F8C70u;
    // 0x1f8c70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8c74: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8C74u;
    {
        const bool branch_taken_0x1f8c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f8c74) {
            ctx->pc = 0x1F8C8Cu;
            goto label_1f8c8c;
        }
    }
    ctx->pc = 0x1F8C7Cu;
    // 0x1f8c7c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8C7Cu;
    {
        const bool branch_taken_0x1f8c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c7c) {
            ctx->pc = 0x1F8C8Cu;
            goto label_1f8c8c;
        }
    }
    ctx->pc = 0x1F8C84u;
    // 0x1f8c84: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1F8C84u;
    {
        const bool branch_taken_0x1f8c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c84) {
            ctx->pc = 0x1F8EA4u;
            goto label_1f8ea4;
        }
    }
    ctx->pc = 0x1F8C8Cu;
label_1f8c8c:
    // 0x1f8c8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8c90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8c94: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f8c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8c98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8c9c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f8c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8ca0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f8ca4: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f8ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f8ca8: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f8cac: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f8cb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8cb4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f8cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8cb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8cbc: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f8cbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f8cc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f8cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f8cc4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f8cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f8cc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8CC8u;
    {
        const bool branch_taken_0x1f8cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8cc8) {
            ctx->pc = 0x1F8CDCu;
            goto label_1f8cdc;
        }
    }
    ctx->pc = 0x1F8CD0u;
    // 0x1f8cd0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f8cd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8cd8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f8cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1f8cdc:
    // 0x1f8cdc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ce0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f8ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_1f8ce4:
    // 0x1f8ce4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ce8: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x1f8ce8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1f8cec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f8cf0: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x1f8cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f8cf4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8cf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1f8cf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f8cfc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F8CFCu;
    SET_GPR_U32(ctx, 31, 0x1F8D04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F8CFCu, 0x1F8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D04u;
label_1f8d04:
    // 0x1f8d04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d08: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F8D08u;
    SET_GPR_U32(ctx, 31, 0x1F8D10u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F8D08u, 0x1F8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D10u;
label_1f8d10:
    // 0x1f8d10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d14: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f8d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f8d18: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1F8D18u;
    {
        const bool branch_taken_0x1f8d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8d18) {
            ctx->pc = 0x1F8EA4u;
            goto label_1f8ea4;
        }
    }
    ctx->pc = 0x1F8D20u;
    // 0x1f8d20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8d24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d28: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f8d28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8d2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d30: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f8d34: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1f8d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1f8d38: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f8d3c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1F8D3Cu;
    {
        const bool branch_taken_0x1f8d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8d3c) {
            ctx->pc = 0x1F8EA4u;
            goto label_1f8ea4;
        }
    }
    ctx->pc = 0x1F8D44u;
label_1f8d44:
    // 0x1f8d44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d48: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f8d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8d4c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f8d50: 0x2402dfc7  addiu       $v0, $zero, -0x2039
    ctx->pc = 0x1f8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959047));
    // 0x1f8d54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f8d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f8d58: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f8d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f8d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8d60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d64: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f8d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1f8d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8d6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d70: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1f8d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1f8d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8d78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d7c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1f8d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1f8d80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d88: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f8d88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8d8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8d90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d94: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f8d94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8d98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d9c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f8d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8da0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8da4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f8da4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8da8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8dac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f8db0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8DB0u;
    SET_GPR_U32(ctx, 31, 0x1F8DB8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8DB0u, 0x1F8DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DB8u;
label_1f8db8:
    // 0x1f8db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f8db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8dbc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f8dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f8dc0: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f8dc4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f8dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8dc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8dc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8dcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8dd0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f8dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8dd4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8DD4u;
    SET_GPR_U32(ctx, 31, 0x1F8DDCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8DD4u, 0x1F8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DDCu;
label_1f8ddc:
    // 0x1f8ddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f8ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8de0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f8de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f8de4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f8de8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f8de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8dec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8decu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8df0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8df4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8df8: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f8df8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8dfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8e00: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x1f8e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1f8e04: 0x3042f8ff  andi        $v0, $v0, 0xF8FF
    ctx->pc = 0x1f8e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63743);
    // 0x1f8e08: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x1f8e08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f8e0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8E0Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8E0Cu, 0x1F8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E14u;
label_1f8e14:
    // 0x1f8e14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f8e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8e18: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1f8e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1f8e1c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1f8e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f8e20: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f8e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f8e24: 0x24639c20  addiu       $v1, $v1, -0x63E0
    ctx->pc = 0x1f8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x1f8e28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f8e2c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1f8e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8e30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8e34: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1f8e34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f8e38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f8e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f8e3c: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f8e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f8e40: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8e48: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8E48u;
    {
        const bool branch_taken_0x1f8e48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8e48) {
            ctx->pc = 0x1F8E60u;
            goto label_1f8e60;
        }
    }
    ctx->pc = 0x1F8E50u;
    // 0x1f8e50: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8e54: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8e54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8e58: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f8e5c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1f8e60:
    // 0x1f8e60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f8e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f8e64: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f8e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f8e68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8e6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8e70: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8E70u;
    {
        const bool branch_taken_0x1f8e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8e70) {
            ctx->pc = 0x1F8EA4u;
            goto label_1f8ea4;
        }
    }
    ctx->pc = 0x1F8E78u;
    // 0x1f8e78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8e7c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f8e7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f8e80: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f8e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f8e84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8e84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8e88: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1f8e88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1f8e8c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1f8e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f8e90: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f8e90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f8e94: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8e98: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8e9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f8ea0: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1f8ea4:
    // 0x1f8ea4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1f8ea4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8ea8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f8ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f8eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8EB4u;
}
