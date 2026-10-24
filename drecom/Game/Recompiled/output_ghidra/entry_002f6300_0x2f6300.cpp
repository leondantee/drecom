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

// Function: entry_002f6300
// Address: 0x2f6300 - 0x2f63ac
void entry_002f6300_0x2f6300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6300_0x2f6300");
#endif

    switch (ctx->pc) {
        case 0x2f6370u: goto label_2f6370;
        case 0x2f63a4u: goto label_2f63a4;
        default: break;
    }

    ctx->pc = 0x2f6300u;

    // 0x2f6300: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6304: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2f6304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f6308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f630c: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2F630Cu;
    {
        const bool branch_taken_0x2f630c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f630c) {
            ctx->pc = 0x2F6428u;
            return;
        }
    }
    ctx->pc = 0x2F6314u;
    // 0x2f6314: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6318: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f6318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f631c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2f631cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f6320: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x2F6320u;
    {
        const bool branch_taken_0x2f6320 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6320) {
            ctx->pc = 0x2F6428u;
            return;
        }
    }
    ctx->pc = 0x2F6328u;
    // 0x2f6328: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f632c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f6330: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x2f6330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f6334: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F6334u;
    {
        const bool branch_taken_0x2f6334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6334) {
            ctx->pc = 0x2F6428u;
            return;
        }
    }
    ctx->pc = 0x2F633Cu;
    // 0x2f633c: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2f633cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2f6340: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f6340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6344: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f6344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f6348: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f6348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f634c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6350: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2f6350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f6354: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f6354u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6358: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f6358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f635c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2f635cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6360: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2f6360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6364: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x2f6364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f6368: 0xc0c49f0  jal         func_3127C0
    ctx->pc = 0x2F6368u;
    SET_GPR_U32(ctx, 31, 0x2F6370u);
    ctx->pc = 0x3127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127C0u, 0x2F6368u, 0x2F6370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6370u;
label_2f6370:
    // 0x2f6370: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2f6370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2f6374: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f6374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6378: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f6378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f637c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f637cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f6380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6384: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2f6384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f6388: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f6388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f638c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f638cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6390: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2f6390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6394: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2f6394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6398: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x2f6398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f639c: 0xc0c49f0  jal         func_3127C0
    ctx->pc = 0x2F639Cu;
    SET_GPR_U32(ctx, 31, 0x2F63A4u);
    ctx->pc = 0x3127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127C0u, 0x2F639Cu, 0x2F63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F63A4u;
label_2f63a4:
    // 0x2f63a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F63A4u;
    {
        const bool branch_taken_0x2f63a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f63a4) {
            ctx->pc = 0x2F6428u;
            return;
        }
    }
    ctx->pc = 0x2F63ACu;
}
