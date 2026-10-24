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

// Function: Snd_scene_bgm_load
// Address: 0x19f2d0 - 0x19f3b4
void Snd_scene_bgm_load_0x19f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Snd_scene_bgm_load_0x19f2d0");
#endif

    switch (ctx->pc) {
        case 0x19f330u: goto label_19f330;
        case 0x19f370u: goto label_19f370;
        case 0x19f39cu: goto label_19f39c;
        default: break;
    }

    ctx->pc = 0x19f2d0u;

    // 0x19f2d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19f2d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x19f2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x19f2d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f2dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f2e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f2e4: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x19f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0068u));
    // 0x19f2e8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f2ec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x19f2f0: 0x24637e40  addiu       $v1, $v1, 0x7E40
    ctx->pc = 0x19f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x19f2f4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x19f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f2f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f2fc: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x19f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x19f300: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19f300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f304: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19f304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19f308: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f30c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x19f30cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f310: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f314: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x19f314u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x19f318: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x19f318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x19f31c: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x19F31Cu;
    {
        const bool branch_taken_0x19f31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f31c) {
            ctx->pc = 0x19F39Cu;
            goto label_19f39c;
        }
    }
    ctx->pc = 0x19F324u;
    // 0x19f324: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x19f324u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f328: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19F328u;
    {
        const bool branch_taken_0x19f328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f328) {
            ctx->pc = 0x19F378u;
            goto label_19f378;
        }
    }
    ctx->pc = 0x19F330u;
label_19f330:
    // 0x19f330: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f334: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f338: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19f33c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19f33cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f344: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19F344u;
    {
        const bool branch_taken_0x19f344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f344) {
            ctx->pc = 0x19F370u;
            goto label_19f370;
        }
    }
    ctx->pc = 0x19F34Cu;
    // 0x19f34c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x19f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19f350: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x19f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19f354: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x19f354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19f358: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x19f358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x19f35c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F35Cu;
    {
        const bool branch_taken_0x19f35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f35c) {
            ctx->pc = 0x19F370u;
            goto label_19f370;
        }
    }
    ctx->pc = 0x19F364u;
    // 0x19f364: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19f364u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19f368: 0xc067c50  jal         func_19F140
    ctx->pc = 0x19F368u;
    SET_GPR_U32(ctx, 31, 0x19F370u);
    ctx->pc = 0x19F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F140u, 0x19F368u, 0x19F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F370u;
label_19f370:
    // 0x19f370: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19f370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19f374: 0x0  nop
    ctx->pc = 0x19f374u;
    // NOP
label_19f378:
    // 0x19f378: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x19f378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f37c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19F37Cu;
    {
        const bool branch_taken_0x19f37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f37c) {
            ctx->pc = 0x19F330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f330;
        }
    }
    ctx->pc = 0x19F384u;
    // 0x19f384: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19f384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19f388: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x19f388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x19f38c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19f38cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f390: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x19f390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x19f394: 0xc046314  jal         func_118C50
    ctx->pc = 0x19F394u;
    SET_GPR_U32(ctx, 31, 0x19F39Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x19F39Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19F39Cu) { return; }
    ctx->pc = 0x19F39Cu;
label_19f39c:
    // 0x19f39c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19f39cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f3a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f3a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19f3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19f3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F3B4u;
}
