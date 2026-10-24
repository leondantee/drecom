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

// Function: entry_0014dc68
// Address: 0x14dc68 - 0x14dd7c
void entry_0014dc68_0x14dc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc68_0x14dc68");
#endif

    switch (ctx->pc) {
        case 0x14dcb8u: goto label_14dcb8;
        case 0x14dcdcu: goto label_14dcdc;
        default: break;
    }

    ctx->pc = 0x14dc68u;

    // 0x14dc68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14dc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14dc6c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14dc70: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x14dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x14dc74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14dc78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14dc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14dc7c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x14dc7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x14dc80: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x14dc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x14dc84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14dc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14dc88: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x14dc88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14dc8c: 0x121438  dsll        $v0, $s2, 16
    ctx->pc = 0x14dc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 16);
    // 0x14dc90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14dc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14dc94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14dc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14dc98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14dc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14dc9c: 0x34440112  ori         $a0, $v0, 0x112
    ctx->pc = 0x14dc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)274);
    // 0x14dca0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14dca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14dca4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14dca4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14dca8: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x14dca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x14dcac: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x14dcacu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14dcb0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x14DCB0u;
    SET_GPR_U32(ctx, 31, 0x14DCB8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x14DCB0u, 0x14DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCB8u;
label_14dcb8:
    // 0x14dcb8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x14dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x14dcbc: 0x3c13469c  lui         $s3, 0x469C
    ctx->pc = 0x14dcbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)18076 << 16));
    // 0x14dcc0: 0x36624000  ori         $v0, $s3, 0x4000
    ctx->pc = 0x14dcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16384);
    // 0x14dcc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14dcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14dcc8: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x14dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    // 0x14dccc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x14dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x14dcd0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14dcd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14dcd4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x14DCD4u;
    SET_GPR_U32(ctx, 31, 0x14DCDCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14DCD4u, 0x14DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCDCu;
label_14dcdc:
    // 0x14dcdc: 0x860213ae  lh          $v0, 0x13AE($s0)
    ctx->pc = 0x14dcdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5038)));
    // 0x14dce0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x14dce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dce4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x14dce4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x14dce8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14dcec: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x14dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x14dcf0: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x14dcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x14dcf4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x14dcf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14dcf8: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x14dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14dcfc: 0x0  nop
    ctx->pc = 0x14dcfcu;
    // NOP
    // 0x14dd00: 0x1810  mfhi        $v1
    ctx->pc = 0x14dd00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14dd04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14dd08: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x14dd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dd0c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x14dd0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x14dd10: 0x860513ac  lh          $a1, 0x13AC($s0)
    ctx->pc = 0x14dd10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
    // 0x14dd14: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x14dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x14dd18: 0xa60213ac  sh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dd18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 2));
    // 0x14dd1c: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dd1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
    // 0x14dd20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dd24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dd24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14dd28: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14DD28u;
    {
        const bool branch_taken_0x14dd28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14dd28) {
            ctx->pc = 0x14DD7Cu;
            return;
        }
    }
    ctx->pc = 0x14DD30u;
    // 0x14dd30: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dd30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
    // 0x14dd34: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x14dd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dd38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14dd38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14dd3c: 0x860213aa  lh          $v0, 0x13AA($s0)
    ctx->pc = 0x14dd3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5034)));
    // 0x14dd40: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x14dd40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dd44: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x14dd44u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x14dd48: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x14dd48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14dd4c: 0x860213ae  lh          $v0, 0x13AE($s0)
    ctx->pc = 0x14dd4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5038)));
    // 0x14dd50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dd54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dd54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14dd58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x14dd58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14dd5c: 0x0  nop
    ctx->pc = 0x14dd5cu;
    // NOP
    // 0x14dd60: 0x0  nop
    ctx->pc = 0x14dd60u;
    // NOP
    // 0x14dd64: 0x1012  mflo        $v0
    ctx->pc = 0x14dd64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14dd68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dd6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dd6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14dd70: 0xa60213a8  sh          $v0, 0x13A8($s0)
    ctx->pc = 0x14dd70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5032), (uint16_t)GPR_U32(ctx, 2));
    // 0x14dd74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14DD74u;
    {
        const bool branch_taken_0x14dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd74) {
            ctx->pc = 0x14DD80u;
            return;
        }
    }
    ctx->pc = 0x14DD7Cu;
}
