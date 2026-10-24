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

// Function: entry_00320684
// Address: 0x320684 - 0x320710
void entry_00320684_0x320684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320684_0x320684");
#endif

    switch (ctx->pc) {
        case 0x3206acu: goto label_3206ac;
        case 0x3206e0u: goto label_3206e0;
        default: break;
    }

    ctx->pc = 0x320684u;

    // 0x320684: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x320684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x320688: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32068c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x32068cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320690: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x320690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x320694: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x320694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320698: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32069c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x32069cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3206a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3206a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3206a4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3206A4u;
    SET_GPR_U32(ctx, 31, 0x3206ACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3206A4u, 0x3206ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206ACu;
label_3206ac:
    // 0x3206ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3206acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3206b0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3206b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3206b4: 0x90a30344  lbu         $v1, 0x344($a1)
    ctx->pc = 0x3206b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x3206b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3206b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3206bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3206bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3206c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3206c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3206c4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3206c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3206c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3206c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3206cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3206ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3206d0: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x3206d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3206d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3206d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3206d8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x3206D8u;
    SET_GPR_U32(ctx, 31, 0x3206E0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x3206D8u, 0x3206E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3206E0u;
label_3206e0:
    // 0x3206e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3206e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3206e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3206e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3206e8: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3206e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3206ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3206ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3206f0: 0x901823  subu        $v1, $a0, $s0
    ctx->pc = 0x3206f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3206f4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3206F4u;
    {
        const bool branch_taken_0x3206f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3206f4) {
            ctx->pc = 0x320710u;
            return;
        }
    }
    ctx->pc = 0x3206FCu;
    // 0x3206fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3206fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320700: 0x0  nop
    ctx->pc = 0x320700u;
    // NOP
    // 0x320704: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x320704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x320708: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x320708u;
    {
        const bool branch_taken_0x320708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320708) {
            ctx->pc = 0x32072Cu;
            return;
        }
    }
    ctx->pc = 0x320710u;
}
