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

// Function: entry_0030aa14
// Address: 0x30aa14 - 0x30ab18
void entry_0030aa14_0x30aa14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030aa14_0x30aa14");
#endif

    switch (ctx->pc) {
        case 0x30aab0u: goto label_30aab0;
        default: break;
    }

    ctx->pc = 0x30aa14u;

    // 0x30aa14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30aa14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30aa18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30aa1c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x30aa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30aa20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30aa20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30aa24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa28: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30aa34: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30aa38: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x30aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x30aa3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa40: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x30aa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x30aa44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30aa44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30aa48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30aa4c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x30aa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30aa50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30aa50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30aa54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa58: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30aa64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30aa68: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x30aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x30aa6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa70: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x30aa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x30aa74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x30aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30aa78: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x30aa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30aa7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30aa7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30aa80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aa8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30aa90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30aa94: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x30aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x30aa98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aa9c: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x30aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30aaa0: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x30aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30aaa4: 0xc62e0004  lwc1        $f14, 0x4($s1)
    ctx->pc = 0x30aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x30aaa8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x30AAA8u;
    SET_GPR_U32(ctx, 31, 0x30AAB0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x30AAA8u, 0x30AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAB0u;
label_30aab0:
    // 0x30aab0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30aab4: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30aab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30aab8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30aab8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30aabc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30aac0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30aac4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30aac8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30aacc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30aad0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30aad4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30aad8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x30aad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x30aadc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30aae0: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x30aae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x30aae4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30aae4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30aae8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30aaec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30aaf0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30aaf4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30aaf8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30aafc: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30ab00: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ab04: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x30ab04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x30ab08: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x30ab08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x30ab0c: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x30ab0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ab10: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x30AB10u;
    {
        const bool branch_taken_0x30ab10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ab10) {
            ctx->pc = 0x30ABDCu;
            return;
        }
    }
    ctx->pc = 0x30AB18u;
}
