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

// Function: entry_001f2df8
// Address: 0x1f2df8 - 0x1f2f18
void entry_001f2df8_0x1f2df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2df8_0x1f2df8");
#endif

    switch (ctx->pc) {
        case 0x1f2e08u: goto label_1f2e08;
        case 0x1f2e14u: goto label_1f2e14;
        case 0x1f2e64u: goto label_1f2e64;
        case 0x1f2e88u: goto label_1f2e88;
        default: break;
    }

    ctx->pc = 0x1f2df8u;

    // 0x1f2df8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1f2df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2dfc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f2dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2e00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F2E00u;
    SET_GPR_U32(ctx, 31, 0x1F2E08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F2E00u, 0x1F2E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E08u;
label_1f2e08:
    // 0x1f2e08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1f2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e0c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F2E0Cu;
    SET_GPR_U32(ctx, 31, 0x1F2E14u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F2E0Cu, 0x1F2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E14u;
label_1f2e14:
    // 0x1f2e14: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1f2e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e18: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x1f2e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x1f2e1c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f2e20: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x1f2e20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2e24: 0x14800042  bnez        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F2E24u;
    {
        const bool branch_taken_0x1f2e24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2e24) {
            ctx->pc = 0x1F2F30u;
            return;
        }
    }
    ctx->pc = 0x1F2E2Cu;
    // 0x1f2e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2e30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f2e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2e38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2e3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e40: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f2e40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2e44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e48: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f2e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2e4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e50: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f2e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2e54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f2e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f2e5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F2E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F2E64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F2E5Cu, 0x1F2E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E64u;
label_1f2e64:
    // 0x1f2e64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f2e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2e68: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f2e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f2e6c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f2e70: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f2e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f2e74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f2e74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f2e78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2e7c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f2e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2e80: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F2E80u;
    SET_GPR_U32(ctx, 31, 0x1F2E88u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F2E80u, 0x1F2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E88u;
label_1f2e88:
    // 0x1f2e88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f2e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2e8c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f2e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f2e90: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1f2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1f2e94: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f2e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f2e98: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f2e98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f2e9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2ea0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2ea4: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f2ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f2ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2eac: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f2eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2eb0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f2eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f2eb4: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x1f2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1f2eb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2ebc: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f2ec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2ec4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2ec8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2ecc: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f2eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1f2ed0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1f2ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1f2ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2ed8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2edc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2ee0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f2ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f2ee4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2ee8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2eec: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f2ef0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1f2ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1f2ef4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2EF4u;
    {
        const bool branch_taken_0x1f2ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2ef4) {
            ctx->pc = 0x1F2F18u;
            return;
        }
    }
    ctx->pc = 0x1F2EFCu;
    // 0x1f2efc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f00: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2f04: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f2f08: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1f2f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1f2f0c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1f2f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1f2f10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2F10u;
    {
        const bool branch_taken_0x1f2f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2f10) {
            ctx->pc = 0x1F2F30u;
            return;
        }
    }
    ctx->pc = 0x1F2F18u;
}
