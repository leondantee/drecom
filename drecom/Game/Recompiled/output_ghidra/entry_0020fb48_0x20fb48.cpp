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

// Function: entry_0020fb48
// Address: 0x20fb48 - 0x20fc2c
void entry_0020fb48_0x20fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fb48_0x20fb48");
#endif

    switch (ctx->pc) {
        case 0x20fbd4u: goto label_20fbd4;
        case 0x20fc28u: goto label_20fc28;
        default: break;
    }

    ctx->pc = 0x20fb48u;

    // 0x20fb48: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20fb48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fb4c: 0x85431278  lh          $v1, 0x1278($t2)
    ctx->pc = 0x20fb4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
    // 0x20fb50: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x20fb50u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20fb54: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x20fb54u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x20fb58: 0x2a8402b6  slti        $a0, $s4, 0x2B6
    ctx->pc = 0x20fb58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)694) ? 1 : 0);
    // 0x20fb5c: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x20FB5Cu;
    {
        const bool branch_taken_0x20fb5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fb5c) {
            ctx->pc = 0x20FC2Cu;
            return;
        }
    }
    ctx->pc = 0x20FB64u;
    // 0x20fb64: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fb68: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x20fb68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20fb6c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x20fb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x20fb70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20fb70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20fb74: 0x286102db  slti        $at, $v1, 0x2DB
    ctx->pc = 0x20fb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)731) ? 1 : 0);
    // 0x20fb78: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x20FB78u;
    {
        const bool branch_taken_0x20fb78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fb78) {
            ctx->pc = 0x20FC2Cu;
            return;
        }
    }
    ctx->pc = 0x20FB80u;
    // 0x20fb80: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fb84: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20fb84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20fb88: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20fb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20fb8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fb8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20fb90: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x20fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20fb94: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x20fb94u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20fb98: 0x0  nop
    ctx->pc = 0x20fb98u;
    // NOP
    // 0x20fb9c: 0x0  nop
    ctx->pc = 0x20fb9cu;
    // NOP
    // 0x20fba0: 0xb810  mfhi        $s7
    ctx->pc = 0x20fba0u;
    SET_GPR_U64(ctx, 23, ctx->hi);
    // 0x20fba4: 0x16e00021  bnez        $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x20FBA4u;
    {
        const bool branch_taken_0x20fba4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fba4) {
            ctx->pc = 0x20FC2Cu;
            return;
        }
    }
    ctx->pc = 0x20FBACu;
    // 0x20fbac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20fbacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fbb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20fbb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fbb4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20fbb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fbb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20fbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fbbc: 0x3c0b80ef  lui         $t3, 0x80EF
    ctx->pc = 0x20fbbcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33007 << 16));
    // 0x20fbc0: 0x3568b0b0  ori         $t0, $t3, 0xB0B0
    ctx->pc = 0x20fbc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)45232);
    // 0x20fbc4: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x20fbc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x20fbc8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x20fbc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20fbcc: 0xc059190  jal         func_164640
    ctx->pc = 0x20FBCCu;
    SET_GPR_U32(ctx, 31, 0x20FBD4u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x20FBCCu, 0x20FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FBD4u;
label_20fbd4:
    // 0x20fbd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20fbd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20fbd8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20fbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20fbdc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20fbdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fbe0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20fbe0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fbe4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20fbe8: 0x2466a400  addiu       $a2, $v1, -0x5C00
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943744));
    // 0x20fbec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20fbecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fbf0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20fbf0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fbf4: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x20fbf4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x20fbf8: 0x2549a410  addiu       $t1, $t2, -0x5BF0
    ctx->pc = 0x20fbf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943760));
    // 0x20fbfc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20fbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20fc00: 0xc42ca430  lwc1        $f12, -0x5BD0($at)
    ctx->pc = 0x20fc00u;
    { uint32_t bits = FAST_READ32(0x38A430u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20fc04: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20fc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20fc08: 0xc42da438  lwc1        $f13, -0x5BC8($at)
    ctx->pc = 0x20fc08u;
    { uint32_t bits = FAST_READ32(0x38A438u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20fc0c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20fc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20fc10: 0xc42ea440  lwc1        $f14, -0x5BC0($at)
    ctx->pc = 0x20fc10u;
    { uint32_t bits = FAST_READ32(0x38A440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20fc14: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20fc18: 0x246aa420  addiu       $t2, $v1, -0x5BE0
    ctx->pc = 0x20fc18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943776));
    // 0x20fc1c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20fc1cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fc20: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x20FC20u;
    SET_GPR_U32(ctx, 31, 0x20FC28u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20FC20u, 0x20FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC28u;
label_20fc28:
    // 0x20fc28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20fc28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20fc2cu;
}
