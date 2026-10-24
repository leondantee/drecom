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

// Function: entry_00124784
// Address: 0x124784 - 0x124858
void entry_00124784_0x124784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124784_0x124784");
#endif

    switch (ctx->pc) {
        case 0x1247e8u: goto label_1247e8;
        case 0x1247f4u: goto label_1247f4;
        case 0x124804u: goto label_124804;
        case 0x124810u: goto label_124810;
        case 0x124840u: goto label_124840;
        default: break;
    }

    ctx->pc = 0x124784u;

    // 0x124784: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124788: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x124788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12478c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x12478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x124790: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x124790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x124794: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x124794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x124798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12479c: 0x0  nop
    ctx->pc = 0x12479cu;
    // NOP
    // 0x1247a0: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x1247a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x1247a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1247a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1247a8: 0x0  nop
    ctx->pc = 0x1247a8u;
    // NOP
    // 0x1247ac: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1247acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1247b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1247b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1247b4: 0x0  nop
    ctx->pc = 0x1247b4u;
    // NOP
    // 0x1247b8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1247b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1247bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1247bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1247c0: 0x0  nop
    ctx->pc = 0x1247c0u;
    // NOP
    // 0x1247c4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1247c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1247c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1247c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1247cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1247ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1247d0: 0x0  nop
    ctx->pc = 0x1247d0u;
    // NOP
    // 0x1247d4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1247d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1247d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1247d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1247dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1247dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1247e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1247E0u;
    SET_GPR_U32(ctx, 31, 0x1247E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1247E0u, 0x1247E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247E8u;
label_1247e8:
    // 0x1247e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1247e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1247ec: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1247ECu;
    SET_GPR_U32(ctx, 31, 0x1247F4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1247ECu, 0x1247F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247F4u;
label_1247f4:
    // 0x1247f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1247f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1247f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1247f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1247fc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1247FCu;
    SET_GPR_U32(ctx, 31, 0x124804u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1247FCu, 0x124804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124804u;
label_124804:
    // 0x124804: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124808: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x124808u;
    SET_GPR_U32(ctx, 31, 0x124810u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x124808u, 0x124810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124810u;
label_124810:
    // 0x124810: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124814: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124818: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x124818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x12481c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124820: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x124820u;
    {
        const bool branch_taken_0x124820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124820) {
            ctx->pc = 0x124858u;
            return;
        }
    }
    ctx->pc = 0x124828u;
    // 0x124828: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12482c: 0x244412b0  addiu       $a0, $v0, 0x12B0
    ctx->pc = 0x12482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x124830: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x124830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x124834: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x124834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x124838: 0xc040c9e  jal         func_103278
    ctx->pc = 0x124838u;
    SET_GPR_U32(ctx, 31, 0x124840u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x124840u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x124840u) { return; }
    ctx->pc = 0x124840u;
label_124840:
    // 0x124840: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124844: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x124844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x124848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12484c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12484cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x124850: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x124850u;
    {
        const bool branch_taken_0x124850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124850) {
            ctx->pc = 0x124A58u;
            return;
        }
    }
    ctx->pc = 0x124858u;
}
