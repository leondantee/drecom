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

// Function: entry_0034f180
// Address: 0x34f180 - 0x34f270
void entry_0034f180_0x34f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f180_0x34f180");
#endif

    switch (ctx->pc) {
        case 0x34f18cu: goto label_34f18c;
        case 0x34f1a0u: goto label_34f1a0;
        case 0x34f1b4u: goto label_34f1b4;
        case 0x34f1f0u: goto label_34f1f0;
        case 0x34f21cu: goto label_34f21c;
        case 0x34f248u: goto label_34f248;
        default: break;
    }

    ctx->pc = 0x34f180u;

    // 0x34f180: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34f180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f184: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34F184u;
    SET_GPR_U32(ctx, 31, 0x34F18Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34F184u, 0x34F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F18Cu;
label_34f18c:
    // 0x34f18c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34f18cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f190: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34f190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f194: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34f194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34f198: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34F198u;
    SET_GPR_U32(ctx, 31, 0x34F1A0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34F198u, 0x34F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1A0u;
label_34f1a0:
    // 0x34f1a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x34f1a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f1a4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f1a8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34f1a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34f1ac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34F1ACu;
    SET_GPR_U32(ctx, 31, 0x34F1B4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34F1ACu, 0x34F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1B4u;
label_34f1b4:
    // 0x34f1b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34f1b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f1b8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f1bc: 0x84671278  lh          $a3, 0x1278($v1)
    ctx->pc = 0x34f1bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x34f1c0: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x34f1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x34f1c4: 0xa4661278  sh          $a2, 0x1278($v1)
    ctx->pc = 0x34f1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 6));
    // 0x34f1c8: 0x14e000e7  bnez        $a3, . + 4 + (0xE7 << 2)
    ctx->pc = 0x34F1C8u;
    {
        const bool branch_taken_0x34f1c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f1c8) {
            ctx->pc = 0x34F568u;
            return;
        }
    }
    ctx->pc = 0x34F1D0u;
    // 0x34f1d0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x34f1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f1d4: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x34f1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x34f1d8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x34f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34f1dc: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x34f1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x34f1e0: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x34F1E0u;
    {
        const bool branch_taken_0x34f1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f1e0) {
            ctx->pc = 0x34F270u;
            return;
        }
    }
    ctx->pc = 0x34F1E8u;
    // 0x34f1e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34F1E8u;
    SET_GPR_U32(ctx, 31, 0x34F1F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34F1E8u, 0x34F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1F0u;
label_34f1f0:
    // 0x34f1f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34f1f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f1f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34f1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34f1f8: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x34f1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x34f1fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f200: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x34f200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x34f204: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x34f204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f208: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f20c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f210: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x34f210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x34f214: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34F214u;
    SET_GPR_U32(ctx, 31, 0x34F21Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34F214u, 0x34F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F21Cu;
label_34f21c:
    // 0x34f21c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34f21cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f220: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34f220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34f224: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x34f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x34f228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34f228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34f22c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x34f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x34f230: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x34f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f234: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x34f234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f238: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x34f238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34f23c: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x34f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x34f240: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34F240u;
    SET_GPR_U32(ctx, 31, 0x34F248u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34F240u, 0x34F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F248u;
label_34f248:
    // 0x34f248: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x34f248u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f24c: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x34f24cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x34f250: 0x3103001f  andi        $v1, $t0, 0x1F
    ctx->pc = 0x34f250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x34f254: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x34f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x34f258: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x34f258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34f25c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34f25cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34f260: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f264: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x34f264u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x34f268: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x34F268u;
    {
        const bool branch_taken_0x34f268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f268) {
            ctx->pc = 0x34F568u;
            return;
        }
    }
    ctx->pc = 0x34F270u;
}
