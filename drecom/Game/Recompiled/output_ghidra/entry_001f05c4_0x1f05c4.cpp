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

// Function: entry_001f05c4
// Address: 0x1f05c4 - 0x1f0660
void entry_001f05c4_0x1f05c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f05c4_0x1f05c4");
#endif

    switch (ctx->pc) {
        case 0x1f0604u: goto label_1f0604;
        case 0x1f0630u: goto label_1f0630;
        default: break;
    }

    ctx->pc = 0x1f05c4u;

    // 0x1f05c4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f05c8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f05c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f05cc: 0x1060016b  beqz        $v1, . + 4 + (0x16B << 2)
    ctx->pc = 0x1F05CCu;
    {
        const bool branch_taken_0x1f05cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05cc) {
            ctx->pc = 0x1F0B7Cu;
            return;
        }
    }
    ctx->pc = 0x1F05D4u;
    // 0x1f05d4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f05d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f05d8: 0x84a4127c  lh          $a0, 0x127C($a1)
    ctx->pc = 0x1f05d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x1f05dc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f05e0: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x1f05e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f05e4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f05e8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1f05e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1f05ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f05ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f05f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f05f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f05f4: 0x10600161  beqz        $v1, . + 4 + (0x161 << 2)
    ctx->pc = 0x1F05F4u;
    {
        const bool branch_taken_0x1f05f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f05f4) {
            ctx->pc = 0x1F0B7Cu;
            return;
        }
    }
    ctx->pc = 0x1F05FCu;
    // 0x1f05fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F05FCu;
    SET_GPR_U32(ctx, 31, 0x1F0604u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F05FCu, 0x1F0604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0604u;
label_1f0604:
    // 0x1f0604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f0604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0608: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f0608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f060c: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x1f060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x1f0610: 0x34461400  ori         $a2, $v0, 0x1400
    ctx->pc = 0x1f0610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x1f0614: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0618: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f061c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f061cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f0620: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f0620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0624: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f0624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f0628: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F0628u;
    SET_GPR_U32(ctx, 31, 0x1F0630u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F0628u, 0x1F0630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0630u;
label_1f0630:
    // 0x1f0630: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f0630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0634: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0638: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f0638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f063c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f063cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0644: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0648: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f064c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f0650: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0654: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x1f0654u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f0658: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x1F0658u;
    {
        const bool branch_taken_0x1f0658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0658) {
            ctx->pc = 0x1F0B7Cu;
            return;
        }
    }
    ctx->pc = 0x1F0660u;
}
