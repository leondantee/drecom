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

// Function: entry_002459f4
// Address: 0x2459f4 - 0x245aa0
void entry_002459f4_0x2459f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002459f4_0x2459f4");
#endif

    switch (ctx->pc) {
        case 0x245a3cu: goto label_245a3c;
        case 0x245a78u: goto label_245a78;
        case 0x245a80u: goto label_245a80;
        default: break;
    }

    ctx->pc = 0x2459f4u;

    // 0x2459f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2459f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2459f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2459f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2459fc: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2459FCu;
    {
        const bool branch_taken_0x2459fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2459fc) {
            ctx->pc = 0x245AA0u;
            return;
        }
    }
    ctx->pc = 0x245A04u;
    // 0x245a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245a08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a0c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x245a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x245a10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x245a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245a14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a18: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x245a18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x245a1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a20: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x245a20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x245a24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a28: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x245a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x245a2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x245a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x245a34: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245A34u;
    SET_GPR_U32(ctx, 31, 0x245A3Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245A34u, 0x245A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A3Cu;
label_245a3c:
    // 0x245a3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x245a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245a40: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x245a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x245a44: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x245a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x245a48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x245a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x245a4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x245a4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x245a50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a54: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x245a54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x245a58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x245a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x245a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x245a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x245a64: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x245a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x245a68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245a6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x245a70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x245A70u;
    SET_GPR_U32(ctx, 31, 0x245A78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245A70u, 0x245A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A78u;
label_245a78:
    // 0x245a78: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245A78u;
    SET_GPR_U32(ctx, 31, 0x245A80u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245A78u, 0x245A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A80u;
label_245a80:
    // 0x245a80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x245a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245a84: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x245a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x245a88: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x245a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x245a8c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x245a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x245a90: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245a90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x245a94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245a98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245a9c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x245a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x245aa0u;
}
