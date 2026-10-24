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

// Function: entry_00246eac
// Address: 0x246eac - 0x246f48
void entry_00246eac_0x246eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246eac_0x246eac");
#endif

    switch (ctx->pc) {
        case 0x246f04u: goto label_246f04;
        case 0x246f28u: goto label_246f28;
        default: break;
    }

    ctx->pc = 0x246eacu;

    // 0x246eac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246eb0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x246eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x246eb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x246eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x246eb8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x246eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x246ebc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ec0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x246ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x246ec4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x246EC4u;
    {
        const bool branch_taken_0x246ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ec4) {
            ctx->pc = 0x246F48u;
            return;
        }
    }
    ctx->pc = 0x246ECCu;
    // 0x246ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246ed0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ed4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x246ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x246ed8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x246ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246edc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ee0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x246ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x246ee4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ee8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x246ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x246eec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ef0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x246ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x246ef4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ef8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x246ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x246efc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x246EFCu;
    SET_GPR_U32(ctx, 31, 0x246F04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246EFCu, 0x246F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F04u;
label_246f04:
    // 0x246f04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x246f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246f08: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x246f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x246f0c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x246f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x246f10: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x246f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x246f14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x246f14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x246f18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f1c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x246f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x246f20: 0xc067694  jal         func_19DA50
    ctx->pc = 0x246F20u;
    SET_GPR_U32(ctx, 31, 0x246F28u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246F20u, 0x246F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F28u;
label_246f28:
    // 0x246f28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246f2c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x246f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x246f30: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x246f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x246f34: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x246f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x246f38: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246f38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x246f3c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246f44: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x246f44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x246f48u;
}
