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

// Function: entry_002cd4ac
// Address: 0x2cd4ac - 0x2cd544
void entry_002cd4ac_0x2cd4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd4ac_0x2cd4ac");
#endif

    switch (ctx->pc) {
        case 0x2cd4b8u: goto label_2cd4b8;
        case 0x2cd4f0u: goto label_2cd4f0;
        case 0x2cd50cu: goto label_2cd50c;
        case 0x2cd53cu: goto label_2cd53c;
        default: break;
    }

    ctx->pc = 0x2cd4acu;

    // 0x2cd4ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd4b0: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CD4B0u;
    SET_GPR_U32(ctx, 31, 0x2CD4B8u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CD4B0u, 0x2CD4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4B8u;
label_2cd4b8:
    // 0x2cd4b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd4bc: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2cd4bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2cd4c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cd4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cd4c4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2cd4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cd4c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd4cc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2cd4ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cd4d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2cd4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2cd4d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cd4d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cd4d8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2cd4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2cd4dc: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CD4DCu;
    {
        const bool branch_taken_0x2cd4dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd4dc) {
            ctx->pc = 0x2CD560u;
            return;
        }
    }
    ctx->pc = 0x2CD4E4u;
    // 0x2cd4e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2cd4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cd4e8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2CD4E8u;
    SET_GPR_U32(ctx, 31, 0x2CD4F0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2CD4E8u, 0x2CD4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4F0u;
label_2cd4f0:
    // 0x2cd4f0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cd4f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cd4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd4f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd4fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd4fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd500: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2cd500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cd504: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2CD504u;
    SET_GPR_U32(ctx, 31, 0x2CD50Cu);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2CD504u, 0x2CD50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD50Cu;
label_2cd50c:
    // 0x2cd50c: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2cd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2cd510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd514: 0x0  nop
    ctx->pc = 0x2cd514u;
    // NOP
    // 0x2cd518: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2cd518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2cd51c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cd51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cd520: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cd520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd524: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x2cd524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd528: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2cd528u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2cd52c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cd52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd530: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2cd530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cd534: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2CD534u;
    SET_GPR_U32(ctx, 31, 0x2CD53Cu);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2CD534u, 0x2CD53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD53Cu;
label_2cd53c:
    // 0x2cd53c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD53Cu;
    {
        const bool branch_taken_0x2cd53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd53c) {
            ctx->pc = 0x2CD560u;
            return;
        }
    }
    ctx->pc = 0x2CD544u;
}
