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

// Function: entry_00335d7c
// Address: 0x335d7c - 0x335e18
void entry_00335d7c_0x335d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335d7c_0x335d7c");
#endif

    switch (ctx->pc) {
        case 0x335dc4u: goto label_335dc4;
        case 0x335df8u: goto label_335df8;
        default: break;
    }

    ctx->pc = 0x335d7cu;

    // 0x335d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x335d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335d80: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335d84: 0xe4203428  swc1        $f0, 0x3428($at)
    ctx->pc = 0x335d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893428u, _value); } while (0); }
    // 0x335d88: 0x9203683f  lbu         $v1, 0x683F($s0)
    ctx->pc = 0x335d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x335d8c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x335d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x335d90: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x335d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x335d94: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x335d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x335d98: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x335d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x335d9c: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x335d9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x335da0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x335da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x335da4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x335da4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x335da8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x335da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x335dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x335dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335db0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x335db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x335db4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x335db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x335db8: 0x2444663e  addiu       $a0, $v0, 0x663E
    ctx->pc = 0x335db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x335dbc: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x335DBCu;
    SET_GPR_U32(ctx, 31, 0x335DC4u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x335DBCu, 0x335DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335DC4u;
label_335dc4:
    // 0x335dc4: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x335dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x335dc8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x335dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x335dcc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x335dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x335dd0: 0x34420085  ori         $v0, $v0, 0x85
    ctx->pc = 0x335dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)133);
    // 0x335dd4: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x335dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x335dd8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x335dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x335ddc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x335ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335de0: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x335de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x335de4: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x335de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x335de8: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x335de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x335dec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x335decu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335df0: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x335DF0u;
    SET_GPR_U32(ctx, 31, 0x335DF8u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x335DF0u, 0x335DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335DF8u;
label_335df8:
    // 0x335df8: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x335df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x335dfc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x335dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x335e00: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x335e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x335e04: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x335e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x335e08: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x335e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335e0c: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x335e10: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x335E10u;
    {
        const bool branch_taken_0x335e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335e10) {
            ctx->pc = 0x3366D8u;
            return;
        }
    }
    ctx->pc = 0x335E18u;
}
