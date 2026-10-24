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

// Function: entry_001ff2cc
// Address: 0x1ff2cc - 0x1ff37c
void entry_001ff2cc_0x1ff2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff2cc_0x1ff2cc");
#endif

    switch (ctx->pc) {
        case 0x1ff2ecu: goto label_1ff2ec;
        case 0x1ff318u: goto label_1ff318;
        case 0x1ff34cu: goto label_1ff34c;
        default: break;
    }

    ctx->pc = 0x1ff2ccu;

    // 0x1ff2cc: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x1ff2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1ff2d0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff2d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ff2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff2d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ff2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff2dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ff2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff2e0: 0x24660140  addiu       $a2, $v1, 0x140
    ctx->pc = 0x1ff2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x1ff2e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FF2E4u;
    SET_GPR_U32(ctx, 31, 0x1FF2ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FF2E4u, 0x1FF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF2ECu;
label_1ff2ec:
    // 0x1ff2ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff2ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff2f0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1ff2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ff2f4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff2f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1ff2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff2fc: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1ff2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ff300: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1ff300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff304: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff308: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1ff308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ff30c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ff30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff310: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FF310u;
    SET_GPR_U32(ctx, 31, 0x1FF318u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FF310u, 0x1FF318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF318u;
label_1ff318:
    // 0x1ff318: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff318u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff31c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff320: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff324: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff328: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ff328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff32c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff330: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1ff330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff334: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x1ff334u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ff338: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff33c: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x1ff33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ff340: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ff340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff344: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FF344u;
    SET_GPR_U32(ctx, 31, 0x1FF34Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FF344u, 0x1FF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF34Cu;
label_1ff34c:
    // 0x1ff34c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff34cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff350: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff354: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff358: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff35c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1ff35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ff360: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF360u;
    {
        const bool branch_taken_0x1ff360 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ff360) {
            ctx->pc = 0x1FF37Cu;
            return;
        }
    }
    ctx->pc = 0x1FF368u;
    // 0x1ff368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff36c: 0x0  nop
    ctx->pc = 0x1ff36cu;
    // NOP
    // 0x1ff370: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ff370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ff374: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF374u;
    {
        const bool branch_taken_0x1ff374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff374) {
            ctx->pc = 0x1FF398u;
            return;
        }
    }
    ctx->pc = 0x1FF37Cu;
}
