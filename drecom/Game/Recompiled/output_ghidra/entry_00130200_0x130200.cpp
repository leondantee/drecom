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

// Function: entry_00130200
// Address: 0x130200 - 0x1302ac
void entry_00130200_0x130200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130200_0x130200");
#endif

    switch (ctx->pc) {
        case 0x130224u: goto label_130224;
        case 0x130238u: goto label_130238;
        case 0x13027cu: goto label_13027c;
        default: break;
    }

    ctx->pc = 0x130200u;

    // 0x130200: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130204: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x130204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x130208: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13020c: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x13020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x130210: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x130210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x130214: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x130214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x130218: 0x24478d8c  addiu       $a3, $v0, -0x7274
    ctx->pc = 0x130218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937996));
    // 0x13021c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x13021Cu;
    SET_GPR_U32(ctx, 31, 0x130224u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x13021Cu, 0x130224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130224u;
label_130224:
    // 0x130224: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x130224u;
    {
        const bool branch_taken_0x130224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130224) {
            ctx->pc = 0x1302ACu;
            return;
        }
    }
    ctx->pc = 0x13022Cu;
    // 0x13022c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x130230: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x130230u;
    SET_GPR_U32(ctx, 31, 0x130238u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x130230u, 0x130238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130238u;
label_130238:
    // 0x130238: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13023c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13023cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x130240: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x130240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x130244: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x130244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x130248: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x130248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x13024c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13024cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x130250: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x130250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x130254: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x130254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x130258: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x130258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x13025c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130260: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x130260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x130264: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x130264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x130268: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x130268u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13026c: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x13026cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x130270: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x130270u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130274: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x130274u;
    SET_GPR_U32(ctx, 31, 0x13027Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x130274u, 0x13027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13027Cu;
label_13027c:
    // 0x13027c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130280: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x130280u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x130284: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x130284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x130288: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x130288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13028c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13028cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x130290: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130294: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x130294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x130298: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x130298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x13029c: 0x244505b0  addiu       $a1, $v0, 0x5B0
    ctx->pc = 0x13029cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x1302a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1302a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1302a4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1302A4u;
    SET_GPR_U32(ctx, 31, 0x1302ACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1302A4u, 0x1302ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302ACu;
}
